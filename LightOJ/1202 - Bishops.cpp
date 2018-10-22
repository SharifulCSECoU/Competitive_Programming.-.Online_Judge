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

int main()
{
    int T, R1, C1, R2, C2, R, C, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> R1 >> C1 >> R2 >> C2;

        R = abs(R1 - R2);
        C = abs(C1 - C2);

        cout << "Case " << Case++ << ": ";

        if(R == C)
            cout << 1 << endl;

        else
        {
            if(R % 2 == C % 2)
                cout << 2 << endl;

            else
                cout << "impossible" << endl;
        }
    }

    return 0;
}
