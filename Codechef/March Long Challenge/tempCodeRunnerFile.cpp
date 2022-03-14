#include <iostream>
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

            for (int i = 3; i <= n; i++)
            {
                if (i % 2 == 0)
                    count++;
            }
        }
        else
        {
            cout << 1 << endl;
                }
        cout << n - count + 1 << endl;
    }

    return 0;
}