#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL n, m, i, j;

    while(scanf("%lld %lld", &n, &m) == 2)
    {
        printf("%lld %lld ", n, m);

        if(n > m)
            swap(n , m);

        LL mx = 1;

        for(i = n; i <= m; i++)
        {
            LL cnt = 1;

            j = i;

            while(j != 1)
            {
                if(j % 2 == 0)
                    j = j / 2;

                else
                    j = (3 * j) + 1;

                cnt++;
            }

            if(cnt >= mx)
                mx = cnt;
        }

        printf("%lld\n", mx);
    }

    return 0;
}
