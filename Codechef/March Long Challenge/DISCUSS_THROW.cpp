// Q. 1
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int m = 0; m < T; m++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        if (i > j && i > k)
        {
            cout << i << endl;
        }
        else if (j > k)
        {
            cout << j << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
    // your code goes here
    return 0;
}
