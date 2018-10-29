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

LL A[100005], X[100005], Y[100005];

int main()
{
    LL T, N, M, i, X1, Y1, P;

    cin >> T;

    while(T--)
    {
        cin >> N;

        for(i = 0; i < N; i++)
            cin >> X[i] >> Y[i];

        cin >> X1 >> Y1;

        for(i = 0; i < N; i++)
            A[i]=((X1 - X[i]) * (X1 - X[i]))  +  ((Y1 - Y[i]) * (Y1 - Y[i]));

        for(i = 0; i < N; i++)
        {
            if(A[i] == 5)
            {
                P = 1;

                break;
            }

            else
                P = 0;
        }

        if(P == 1)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
