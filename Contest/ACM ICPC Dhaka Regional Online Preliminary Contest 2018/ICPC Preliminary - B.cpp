#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, k, r, c, ans1, ans2;

    cin >> t;

    for(i = 1; i <= t; i++)
    {
        cin >> r >> c;

        int cnt = 0;

        for(j = 1; j <= 8; j++)
        {
            ans1 = abs(r - j);

            for(k = 1; k <= 8; k++)
            {
                ans2 = abs(c - k);

                if( pow(ans1,2) + pow(ans2,2) == 5 )
                    cnt++;
            }
        }

        printf("Case %d: %d\n", i, cnt);
    }

    return 0;
}
