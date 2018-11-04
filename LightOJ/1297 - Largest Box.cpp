#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, CASE = 1;

    double L, W, X, RES;

    cin >> T;

    while(T--)
    {
        cin >> L >> W;

        X = (L + W - sqrt(L * L + W * W - L * W)) / 6;

        RES = (L - 2 * X) * (W - 2 * X) * X;

        printf("Case %d: %.10lf\n", CASE++, RES);
    }

    return 0;
}
