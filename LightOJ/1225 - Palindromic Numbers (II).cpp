#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, A, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N;

        int Temp = N, Sum = 0;

        while(N > 0)
        {
            A = N % 10;
            N = N / 10;
            Sum = Sum * 10 + A;
        }

        if(Sum == Temp)
            printf("Case %d: Yes\n", Case++);

        else
            printf("Case %d: No\n", Case++);
    }

    return 0;
}
