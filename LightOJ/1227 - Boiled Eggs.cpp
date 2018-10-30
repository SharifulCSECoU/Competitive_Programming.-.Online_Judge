#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, P, Q, i, CASE = 1;

    cin >> T;

    while(T--)
    {
        cin >> N >> P >> Q;

        int SUM = 0, CNT = 0, A[N];

        for(i = 0; i < N; i++)
            cin >> A[i];

        for(i = 0; i < N; i++)
        {
            SUM = SUM + A[i];

            if(SUM <= Q && CNT < P)
                CNT++;
        }

        cout << "Case " << CASE++ << ": " << CNT << endl;
    }

    return 0;
}
