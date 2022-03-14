#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string S, T, M = "";
        cin >> S >> T;
        for (int i = 0; i < 5; i++)
        {
            if (S[i] == T[i])
            {
                M = M + 'G';
            }

            else
            {
                M = M + 'B';
            }
        }
        cout << M << endl;
    }
    // your code goes here
    return 0;
}
