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

char A[205];

int main()
{
    int T, i, Case = 1;

    cin >> T;

    while(T--)
    {
        LL B, Sum = 0;

        cin >> A >> B;

        if(B < 0)
            B = -B;

        for(i = 0; i < strlen(A); i++)
        {
            if(A[i] == '-')
                continue;

            Sum = Sum + (A[i] - '0');

            if(Sum >= B)
                Sum = Sum % B;

            if(i != strlen(A) - 1 && Sum < B)
                Sum = Sum * 10;

            else if(i == strlen(A) - 1 && Sum > B)
                Sum = Sum % B;
        }

        if(Sum == 0)
            cout << "Case " << Case++ << ": " << "divisible" << endl;

        else
            cout << "Case " << Case++ << ": " << "not divisible" << endl;
    }

    return 0;
}
