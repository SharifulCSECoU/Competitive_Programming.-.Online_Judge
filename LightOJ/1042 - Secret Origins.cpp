#include<bits/stdc++.h>

#define LL long long

using namespace std;

int Cnt(LL N)
{
    int Temp = 0;

    for(LL i = 1; i <= N; i = 2 * i)
    {
        if((N & i) != 0)
            Temp++;
    }

    return Temp;
}

int main()
{
    int T, Diff, Case = 1;

    scanf("%d", &T);

    while(T--)
    {
        LL N, Ans;

        scanf("%lld", &N);

        for(LL i = 1; i <= N; i = 2 * i)
        {
            if((N & i) != 0)
            {
                Ans = N + i;
                break;
            }
        }

        Diff = Cnt(N) - Cnt(Ans);

        for(int i = 0; i < Diff; i++)
            Ans = Ans + (1 << i);

        printf("Case %d: %lld\n", Case++, Ans);
    }

    return 0;
}
