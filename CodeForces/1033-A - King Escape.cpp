#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, AX, AY, BX, BY, CX, CY;

    cin >> N >> AX >> AY >> BX >> BY >> CX >> CY;

    BX = BX - AX;
    BY = BY - AY;

    CX = CX - AX;
    CY = CY - AY;

    if(BX * CX > 0 && BY * CY > 0)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
