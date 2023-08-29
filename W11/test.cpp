#include <iostream> 
#include <sstream>
#include <vector>
#include <list>
#include <string>

using namespace std;

void show_vector(const vector<vector<int>>& v) {
  cout << "{";
  for (const auto& line : v) {
    cout << "{ ";
    for (const auto& elem : line)
      cout << elem << ' ';
    cout << "}";
  }
  cout << "}";
}


int max_replace(vector<vector<int>> &v, int n, int a, int b) {
    int res = v[a][b];

    for (size_t i = max(0, int(a - n/2)); i < min(v.size(), size_t(a + n/2 + 1)); i++) {
        for (size_t j = max(0, int(b - n/2)); j < min(v[i].size(), size_t(b + n/2 + 1)); j++) {
            if (res < v[i][j]) {
                res = v[i][j];
            }
        }
    }

    return res;
}

bool max_filter(vector<vector<int>> &v, int n) {
    if (n%2 == 0 or v.size() < size_t(n) or v[0].size() < size_t(n)) {
        return false;
    }

    else {
        vector<vector<int>> temp = v;
        

        for (size_t i = 0; i < v.size(); i++) {
            for (size_t j = 0; j < v[i].size(); j++) {
                v[i][j] = max_replace(temp, n, i, j);
            }
        }

        return true;
    }
}

int main() {
    
    vector<string> a {"c", "b"}; 
    vector <int> b;

    for (int i = a.size() - 1; i >=0; i--) {
        b.push_back(a[i].length());
    }

    for (int v: b) {
        cout << v;
    }
    return 0;
