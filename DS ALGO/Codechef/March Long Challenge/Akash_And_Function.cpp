#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int count = 2;
        if (n > 2)
        {
            count = floor(n / 2);
            cout << n - count << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}