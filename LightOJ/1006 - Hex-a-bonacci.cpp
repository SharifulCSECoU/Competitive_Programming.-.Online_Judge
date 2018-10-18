#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int Cases, i, N, CaseNo = 1, fn[100000];

    scanf("%lld", &Cases);

    while(Cases--)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &fn[0], &fn[1], &fn[2], &fn[3], &fn[4], &fn[5], &N);

        for(i = 6; i <= N; i++)
            fn[i] = (fn[i-1] + fn[i-2] + fn[i-3] + fn[i-4] + fn[i-5] + fn[i-6]) % 10000007;

        printf("Case %lld: %d\n",CaseNo++, fn[N]%10000007);
    }
    return 0;
}
