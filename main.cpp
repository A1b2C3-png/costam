#include <iostream>
#include "geometry.h"

using namespace std;

int main()
{
    point A = {1, 2};
    point B = {3, 4};
    cout << distance(A, B) << endl;
    point P[5] = {{1, 2}, {3, 4}, {5, 4}, {7, -1}, {3, -2}};

    // pole wielokąta P5 = 23
    return 0;
}
