#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, K, i, Limit, Ans = 0;

    cin >> N >> K;

    int Arr[N+1];

    for(i=1; i<=N; i++)
        cin >> Arr[i];

    Limit = Arr[K];

    for(i=1; i<=N; i++)
    {
        if(Arr[i] >= Arr[K] && Arr[i] > 0)
            Ans++;
    }

    cout << Ans << endl;

    return 0;
}
