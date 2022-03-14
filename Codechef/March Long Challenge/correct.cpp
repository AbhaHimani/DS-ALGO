#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int N, X, a = 0, b = 0, c = 0;
        cin >> N >> X;

        if (X % 3 == 0)
        {
            a = a + (X / 3);
        }
        else if (X % 3 == 1)
        {
            a = a + (X / 3) + 1;
            b = b + 2;
        }
        else if (X % 3 == 2)
        {
            a = a + (X / 3) + 1;
            b = b + 1;
        }

        if (a + b <= N)
        {
            cout << "Yes" << endl;
            cout << a << " " << b << " " << N - a - b << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}