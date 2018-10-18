#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, i;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);

        if(N > 10)
            printf("%d %d\n",N-10,N-(N-10));

        else
            printf("0 %d\n",N);
    }

    return 0;
}
