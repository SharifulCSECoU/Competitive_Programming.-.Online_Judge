#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL T, N, M, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N >> M;

        cout << "Case " << Case++ << ": " << (N * M) / 2 << endl;
    }

    return 0;
}
