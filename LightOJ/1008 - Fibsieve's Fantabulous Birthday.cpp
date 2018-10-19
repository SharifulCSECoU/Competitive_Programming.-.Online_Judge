#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int T, N, H, A, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N;

        H = ceil(sqrt(N));

        A = N - (H-1)*(H-1);

        if(H%2 == 0)
        {
            if(A > H)
                printf("Case %lld: %lld %lld\n", Case++, H, (1 + H*H - N));

            else
                printf("Case %lld: %lld %lld\n", Case++, A, H);
        }

        else
        {
            if(A > H)
                printf("Case %lld: %lld %lld\n", Case++, (1 + H*H - N), H);

            else
                printf("Case %lld: %lld %lld\n", Case++, H, A);
        }
    }

    return 0;
}

