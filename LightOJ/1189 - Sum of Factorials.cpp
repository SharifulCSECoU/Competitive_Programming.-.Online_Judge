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

LL Fact[25], Ans[25];

LL Factorial(int N)
{
    LL Result = 1;

    for(int i = 1; i <= N; i++)
        Result = Result * i;

    return Result;
}

int main()
{
    int T, i, j;

    LL N;

    cin >> T;

    for(i = 0; i < 20; i++)
        Fact[i] = Factorial(i);

    for(i = 1; i <= T; i++)
    {
        int CountNumber = 0;

        cin >> N;

        for(j = 19; j >= 0; j--)
        {
            if(Fact[j] <= N)
            {
                N = N - Fact[j];
                Ans[CountNumber] = j;
                CountNumber++;
            }
        }

        cout << "Case " << i << ": ";

        if(N != 0)
            cout << "impossible" << endl;

        else
        {
            cout << Ans[CountNumber - 1];

            for(j = CountNumber - 2; j >= 0; j--)
                cout << "!+" << Ans[j];

            cout << "!" << endl;
        }
    }

    return 0;
}
