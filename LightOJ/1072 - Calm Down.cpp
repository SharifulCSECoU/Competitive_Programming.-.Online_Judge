#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Test, N, Case = 1;

    cin >> Test;

    while(Test--)
    {
        double R, r, Angle;

        cin >> R >> N;

        Angle = sin(acos(-1)/N);

        r = (Angle*R)/(1+Angle);

        printf("Case %d: %.10f\n", Case++, r);
    }

    return 0;
}
