#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, A, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N;

        int Sum = 0;

        while(N > 0)
        {
            A = N % 2;
            N = N / 2;
            Sum = Sum + A;
        }

        if(Sum % 2 == 0)
            printf("Case %d: even\n", Case++);

        else
            printf("Case %d: odd\n", Case++);
    }

    return 0;
}
