#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL T, N, Q;

    cin >> T;

    while(T--)
    {
        cin >> N >> Q;

        LL i, j, arr[N+1], S, X, Y;

        for(i=0; i<N; i++)
            cin >> arr[i];

        for(j=0; j<Q; j++)
        {
            cin >> S >> X >> Y;

            if(S == 1)
            {
                for(i=0; i<N; i++)
                    if(arr[i] <= X)
                        arr[i] = arr[i]-Y;
            }

            else if(S == 2)
            {
                for(i=0; i<N; i++)
                    if(arr[i] >= X)
                        arr[i] = arr[i]+Y;
            }
        }

        for(i=0; i<N; i++)
            cout << arr[i] << " ";

        cout << endl;
    }

    return 0;
}
