/*
  	--------------------------------------------------
  	|!		MD. SHARIFUL ISLAM		!|
  	|!	  Computer Science & Engineering  	!|
  	|!		Comilla University		!|
  	|!		    Bangladesh   		!|
  	--------------------------------------------------
*/

#include<bits/stdc++.h>

#define LL long long

using namespace std;

LL A[700005], B[700005], C[700005];

int main()
{
    LL T, N, M, i, j;

    cin >> T;

    while(T--)
    {
        LL mx = 0, cnt = 0;

        cin >> N >> M;

        for(i = 0; i < N; i++)
            cin >> A[i];

        for(i = 0; i < N; i++)
            cin >> B[i];

        for(i = N - 1; i >= 0; i--)
        {
            if(A[i] > mx)
            {
                mx = A[i];

                C[i] = B[i];
            }

            else
                C[i] = 0;
        }

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < i; j++)
            {
                if(C[i] == C[j])
                    break;
            }

            if(i == j && C[i] != 0 && C[j] != 0)
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
