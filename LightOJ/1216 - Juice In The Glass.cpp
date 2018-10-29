/*
  	--------------------------------------------------
  	|!		MD. SHARIFUL ISLAM		!|
  	|!	  Computer Science & Engineering  	!|
  	|!		Comilla University		!|
  	|!		    Bangladesh   		!|
  	--------------------------------------------------
*/

#include<bits/stdc++.h>

#define PI 3.1415926535897932384626433832795

using namespace std;

int main()
{
    int T, Case = 1;

    double R1, R2, H, P, R, V;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lf %lf %lf %lf", &R1, &R2, &H, &P);

        R = R2 + double(P * (R1 - R2)) / H;

        V = double(PI / 3.0) * P * (R * R + R * R2 + R2 * R2);

        //cout << "Case " << Case++ << ": " << V << endl;

        printf("Case %d: %.9lf\n", Case++, V);
    }

    return 0;
}
