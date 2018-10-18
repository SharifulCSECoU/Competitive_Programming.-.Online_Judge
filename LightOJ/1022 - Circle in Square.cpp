#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, i;

    double R;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%lf", &R);

        printf("Case %d: %.2lf\n", i, 4*R*R-2*acos(0.0)*R*R);
    }

    return 0;
}
