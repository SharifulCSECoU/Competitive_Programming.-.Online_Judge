#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, CASE = 1;

    cin >> T;

    while(T--)
    {
        double OX, OY, AX, AY, BX, BY, A, C, ANGLE;

        cin >> OX >> OY >> AX >> AY >> BX >> BY;

        A = sqrt(((AX - OX) * (AX - OX)) + ((AY - OY) * (AY - OY)));

        C = sqrt(((AX - BX) * (AX - BX)) + ((AY - BY) * (AY - BY)));

        ANGLE = acos((2 * A * A - C * C) / (2 * A * A));

        //cout << "Case " << CASE++ << ": " << A * ANGLE << endl;

        printf("Case %d: %lf\n", CASE++, A * ANGLE);
    }

    return 0;
}
