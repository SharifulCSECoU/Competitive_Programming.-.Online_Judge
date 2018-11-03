#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, A[51], i, j, P, CASE = 1;

    cin >> T;

    while(T--)
    {
        cin >> N;

        for(i = 0; i < N; i++)
            cin >> A[i];

        sort(A , A + N);

        int RES = 0;

        for(i = 0; i < N; i++)
        {
            for(j = i; j < N && A[j] == A[i]; j++);
                P = j - i;

            RES = RES + ((P + A[i]) / (A[i] + 1)) * (A[i] + 1);

          //cout << j << " " << i << " " << P << " " << RES << " ";

            i = j - 1;

          //cout << "i " << i << endl;
        }

        cout << "Case " << CASE++ << ": " << RES << endl;
    }

    return 0;
}
