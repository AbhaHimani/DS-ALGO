#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        int ans = 0;
        cin >> N;
        if (N > 6)
        {
            ans = ans + 1;
            N = N - 6;
            ans += N / 7;
            cout << ans << endl;
        }
        else if (N == 6)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}