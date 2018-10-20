#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    int T, Case = 1;

    LL N, M, W;

    cin >> T;

    while(T--)
    {
        cin >> W;

        if(W % 2 == 1)
            cout << "Case " << Case++ << ": Impossible" << endl;

        else
        {
            N = 1; M = W;

            while(M % 2 == 0)
            {
                N = 2 * N;
                M = M / 2;
            }

            cout << "Case " << Case++ << ": " << M << " " << N << endl;
        }
    }

    return 0;
}
