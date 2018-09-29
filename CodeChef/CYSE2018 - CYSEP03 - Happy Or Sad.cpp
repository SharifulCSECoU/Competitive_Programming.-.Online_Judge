#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, Q, X, Y, i, j;

    cin >> N >> M >> Q;

    int Arr[N+1];

    for(i = 0; i < N; i++)
        cin >> Arr[i];

    for(i = 0; i < Q; i++)
    {
        cin >> X >> Y;

        int Result = 0;

        for(j = X-1; j <= Y-1; j++)
        {
            if(M <= Arr[j])
                Result++;
        }

        if(M <= 60 || Result > 0)
            cout << "Sad" << endl;

        else
            cout << "Happy" << endl;
    }

    return 0;
}
