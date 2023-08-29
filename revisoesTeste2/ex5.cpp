#include <iostream>
#include "smatrix.h"

using namespace std;

void sum(const smatrix& a, const smatrix& b, smatrix& r) {
    r.clear();  // Make sure the result matrix is initially empty
    size_t i = 0, j = 0;  // Indexes for a and b
    while (i < a.size() && j < b.size()) {
        // Compare the positions of the current entries in a and b
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)) {
            // Entry in a comes first, add it to the result
            r.push_back(a[i]);
            ++i;
        } else if (b[j].row < a[i].row || (b[j].row == a[i].row && b[j].col < a[i].col)) {
            // Entry in b comes first, add it to the result
            r.push_back(b[j]);
            ++j;
        } else {
            // Entries have the same position, add their values and add the result to the result matrix
            int sum = a[i].value + b[j].value;
            if (sum != 0) {
                r.push_back({a[i].row, a[i].col, sum});
            }
            ++i;
            ++j;
        }
    }
    // Add any remaining entries from a and b to the result
    while (i < a.size()) {
        r.push_back(a[i]);
        ++i;
    }
    while (j < b.size()) {
        r.push_back(b[j]);
        ++j;
    }
}