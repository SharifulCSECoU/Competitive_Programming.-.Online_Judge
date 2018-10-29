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

LL LCM(LL B)
{
    LL cnt = 0;

    for(LL i = 1; i <= sqrt(B); i++)
    {
        if(B % i == 0)
            cnt++;
    }

    if(sqrt(B) * sqrt(B) == B)
        cout << 2 * cnt - 1 << endl;

    else
        cout << 2 * cnt << endl;
}

int main()
{
    LL B;

    cin >> B;

    LCM(B);

    return 0;
}
