#include<bits/stdc++.h>

#define LL long long

using namespace std;

LL A[100010];

int main()
{
    int T, N, Q, i, QUERY, X, V, CASE = 1;

    cin >> T;

    while(T--)
    {
        cin >> N >> Q;

        LL SUM = 0, ANS = 0;

        for(i = 0; i < N; i++)
        {
            cin >> A[i];

            SUM = SUM + A[i];
        }

        SUM = SUM -  A[0];

        for(i = 0; i < N - 1; i++)
        {
            ANS = ANS + A[i] * (N - i - 1) - SUM;

            SUM = SUM - A[i+1];
        }

        cout << "Case " << CASE++ << ":" << endl;

        while(Q--)
        {
            cin >> QUERY;

            if(QUERY == 1)
                cout << ANS << endl;

            else
            {
                cin >> X >> V;

                ANS = ANS - ((V - A[X]) * X + (A[X] - V) * (N - X - 1));

                A[X] = V;
            }
        }
    }

    return 0;
}
