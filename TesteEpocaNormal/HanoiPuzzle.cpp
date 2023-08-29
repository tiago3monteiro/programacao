#include "HanoiPuzzle.h"

int Tower::top() const
{   
    if (disks_.empty())
        return 0;
    return *(disks_.rbegin());
}

void Tower::add(int disk)
{
    if(!this->top()) disks_.push_back(disk);
    else if (disk < this->top() ) disks_.push_back(disk);
}

 void Tower::remove()
{
    if(!disks_.empty()) disks_.pop_back();
}

ostream& operator<<(ostream& os, const Tower& t)
{
    os << "[ ";
    for (auto disco: t.get_disks())
    {
        os << disco << ' ';

    }
    os << ']';
    return os;
} 
void HanoiPuzzle::move(const vector<disk_move>& dmoves)
{
    for(auto moves: dmoves)
    {
        

        if (!towers_[moves.second].top())
        {
            towers_[moves.second].add(towers_[moves.first].top());
            if (!towers_[moves.second].top()) towers_[moves.second].remove();
            towers_[moves.first].remove();
    
        }
        
        else if(towers_[moves.second].top() > towers_[moves.first].top())
        {
            towers_[moves.second].add(towers_[moves.first].top());
            if (!towers_[moves.second].top()) towers_[moves.second].remove();
            towers_[moves.first].remove();
        }
    }


}


int main()
{ HanoiPuzzle h(10);
  h.move({ {2,0}, {2,1}, {0, 2}, {0, 0}, {0, 1}, {2, 1}, {0, 2}, {1, 0}, {1, 2}, {0, 2}, {1,2}, {2, 0} });
  cout << h << endl; }