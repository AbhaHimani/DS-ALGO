#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int X, Y;
        cin >> X >> Y;
        int r = floor(X / Y);
        int ans = floor(r / 2);
        cout << ans << endl;
    }
    return 0;
}
