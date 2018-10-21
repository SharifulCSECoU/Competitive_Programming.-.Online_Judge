/*
  	--------------------------------------------------
  	|!		MD. SHARIFUL ISLAM		!|
  	|!	  Computer Science & Engineering  	!|
  	|!		Comilla University		!|
  	|!		    Bangladesh   		!|
  	--------------------------------------------------
*/

#include<bits/stdc++.h>

using namespace std;

int DivisibleCount(int N)
{
    if(N == 0)
         return 0;

    return N - 1 - ((N - 1) / 3);
}

int main()
{
    int T, Case = 1, A, B;

    cin >> T;

    while(T--)
    {
        cin >> A >> B;

        printf("Case %d: %d\n", Case++ , DivisibleCount(B) - DivisibleCount(A - 1));
    }

    return 0;
}
