#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    int T, AX, AY, BX, BY, CX, CY, DX, DY, CASE = 1;

    LL AREA;

    cin >> T;

    while(T--)
    {
        cin >> AX >> AY >> BX >> BY >> CX >> CY;

        DX = CX - (BX - AX);
        DY = CY - (BY - AY);
        AREA = 0.5 * abs((AX * BY + BX * CY + CX * DY + DX * AY) - (BX * AY + CX * BY + DX * CY + AX * DY));

        cout << "Case " << CASE++ << ": " << DX << " " << DY << " " << AREA << endl;
    }

    return 0;
}
