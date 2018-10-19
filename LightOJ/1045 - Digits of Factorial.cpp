#include<bits/stdc++.h>

using namespace std;

int T, Base, i;

long long int N;

double F[1000001];

int main()
{
    scanf("%d", &T);

    for(i = 1; i <= 1000000; i++)
        F[i] = log(i) + F[i-1];

    for(i = 1; i <= T; i++)
    {
        scanf("%lld %d", &N, &Base);

      //printf("Case %d: %ld\n", i, (long)(F[N]/(F[Base]-F[Base-1]))+1);
        printf("Case %d: %ld\n", i, (long)(F[N]/log(Base))+1);
    }

    return 0;
}
