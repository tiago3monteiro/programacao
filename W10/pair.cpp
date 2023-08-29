#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T1, typename T2>
class Pair
{
private:
    T1 first_;
    T2 second_;

public:
    Pair(T1 first, T2 second)
    {
        first_ = first;
        second_ = second;
    }
    T1 get_first() const { return first_; }
    T2 get_second() const { return second_; }
    void show() const { cout << "{" << first_ << "," << second_ << "}"; }
};

template <typename T1, typename T2>
bool compare_first(Pair<T1, T2> el1, Pair<T1, T2> el2)
{
    return el1.get_first() < el2.get_first();
}

template <typename T1, typename T2>
void sort_by_first(vector<Pair<T1, T2>> &v)
{
    sort(v.begin(), v.end(), compare_first<T1, T2>);
}

template <typename T1, typename T2>
bool compare_second(Pair<T1, T2> el1, Pair<T1, T2> el2)
{
    return el1.get_second() < el2.get_second();
}

template <typename T1, typename T2>
void sort_by_second(vector<Pair<T1, T2>> &v)
{
    sort(v.begin(), v.end(), compare_second<T1, T2>);
}

template <typename T1, typename T2>
void show(vector<Pair<T1, T2>> v)
{
    cout << "{";
    for (size_t i = 0; i < v.size(); i++)
    {
        v[i].show();
    }
    cout << "}";
}

