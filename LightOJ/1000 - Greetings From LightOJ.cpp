#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, i, A, B, Sum;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d %d", &A, &B);

        Sum = A + B;

        printf("Case %d: %d\n",i,Sum);
    }

    return 0;
}
