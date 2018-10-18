#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, i, j, Value;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);

        int Sum = 0;

        for(j = 1; j <= N; j++)
        {
            scanf("%d", &Value);

            if(Value > 0)
                Sum = Sum + Value;
        }

        printf("Case %d: %d\n", i, Sum);
    }

    return 0;
}
