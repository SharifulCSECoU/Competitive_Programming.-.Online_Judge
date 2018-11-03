#include<bits/stdc++.h>

#define LL long long

using namespace std;

LL JOSEPHUS(LL N , LL K)
{
    if(N == 1)
        return 1;

    return (JOSEPHUS(N - 1 , K) + K - 1) % N + 1;
}

int main()
{
    int T, CASE = 1;

    cin >> T;

    while(T--)
    {
        LL N, K;

        cin >> N >> K;

        cout << "Case " << CASE++ << ": " << JOSEPHUS(N , K) << endl;
    }

    return 0;
}
