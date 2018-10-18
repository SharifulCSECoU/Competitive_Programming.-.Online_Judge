#include<bits/stdc++.h>

#define LL long long

using namespace std;

LL Function(LL N)
{
    if(N == 0)
        return 0;

    LL X, Y, P, Z = 0;

    X = (LL) sqrt(N);

    P = max(Z , X-2);

    while(1)
    {
        if(P*P <= N)
            X = P++;

        else
            break;
    }

    Y = (LL) sqrt(N / 2.0);

    P = max(Z , Y-2);

    while(1)
    {
        if(2*P*P <= N)
            Y = P++;

        else
            break;
    }

    return X + Y;
}

int main()
{
    int Test, Case = 1;

    cin >> Test;

    while(Test--)
    {
        LL L, R;

        cin >> L >> R;

        LL Ans = Function(R) - Function(L-1);

        printf("Case %d: %lld\n", Case++, Ans);
    }

    return 0;
}
