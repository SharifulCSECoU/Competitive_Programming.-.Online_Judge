#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, CASE = 1;

    double V1, V2, V3, A1, A2, T1, T2, TIME, D1, D2;

    cin >> T;

    while(T--)
    {
        cin >> V1 >> V2 >> V3 >> A1 >> A2;

        T1 = V1 / A1; //V = U + AT
        T2 = V2 / A2; //V = U + AT

        if(T1 > T2)
            TIME = T1;

        else
            TIME = T2;

        D1 = (V1 * V1) / (2 * A1) + (V2 * V2) / (2 * A2); //V^2 = U^2 + 2AS
        D2 = TIME * V3;

        printf("Case %d: %.8lf %.8lf\n", CASE++, D1, D2);
    }

    return 0;
}
