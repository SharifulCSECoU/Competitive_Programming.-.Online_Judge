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
    int T, N, X1, Y1, Z1, X2, Y2, Z2, i, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N;

        int AX = 0, AY = 0, AZ = 0, BX = 1000001, BY = 1000001, BZ = 1000001, X, Y, Z;

        for(i = 0; i < N; i++)
        {
            cin >> X1 >> Y1 >> Z1 >> X2 >> Y2 >> Z2;

            AX = max(AX , X1);
            AY = max(AY , Y1);
            AZ = max(AZ , Z1);

            BX = min(BX , X2);
            BY = min(BY , Y2);
            BZ = min(BZ , Z2);
        }

        X = BX - AX;
        Y = BY - AY;
        Z = BZ - AZ;

        cout << "Case " << Case++ << ": ";

        if(X < 0 || Y < 0 || Z < 0)
            cout << 0 << endl;

        else
            cout << X * Y * Z << endl;
    }

    return 0;
}
