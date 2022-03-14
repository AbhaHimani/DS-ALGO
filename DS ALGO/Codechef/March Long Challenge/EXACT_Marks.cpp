#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, X;
        cin >> N;
        cin >> X;
        int rem = X % 3;
        int count = X / 3;
        int rem2 = 3 - rem;
        int total = count + rem2 + 1;

        if (X % 3 == 0)
        {

            if (X != 0)
            {
                if ((N - count) > 0)
                {
                    cout << "YES" << endl;

                    cout << count << " " << 0 << " " << N - count << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }

            if (X == 0)
            {
                if (N > 4)
                {
                    cout << "YES" << endl;
                    cout << 1 << " " << 3 << " " << N - 4 << endl;
                }

                else
                {
                    cout << "NO" << endl;
                }
            }
        }

        else
        {
            if (total == N)
            {
                if ((N - (count + 1) - rem2) > 0)
                {
                    cout << "YES" << endl;
                    cout << count + 1 << " " << rem2 << " " << N - (count + 1) - rem2 << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}