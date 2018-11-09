#include<bits/stdc++.h>

#define ULL unsigned long long

using namespace std;

ULL PHI[5000001];

int main()
{
    ULL T, A, B, i, j, CASE = 1;

    for(i = 2; i < 5000001; i++)
        PHI[i] = i;

    for(i = 2; i < 5000001; i++)
    {
        if(PHI[i] == i)
        {
            for(j = i; j < 5000001; j = j + i)
                PHI[j] = PHI[j] - (PHI[j] / i);
        }
    }

    for(i = 3; i < 5000001; i++)
    {
        PHI[i] = PHI[i] * PHI[i];

        PHI[i] = PHI[i] + PHI[i-1];
    }

    scanf("%llu", &T);

    while(T--)
    {
        scanf("%llu %llu", &A, &B);

        printf("Case %llu: %llu\n", CASE++, PHI[B] - PHI[A-1]);
    }

    return 0;
}
