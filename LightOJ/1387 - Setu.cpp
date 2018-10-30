#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, CASE = 1;

    string S;

    cin >> T;

    while(T--)
    {
        int N, K, TK = 0;

        cin >> N;

        cout << "Case " << CASE++ << ":" << endl;

        while(N--)
        {
            cin >> S;

            if(S == "donate")
            {
                cin >> K;

                TK = TK + K;
            }

            else if(S == "report")
                cout << TK << endl;
        }
    }

    return 0;
}
