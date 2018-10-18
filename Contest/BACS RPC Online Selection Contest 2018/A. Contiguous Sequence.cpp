#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    int Test, N, i, j, True;

    cin >> Test;

    for(j=1; j<= Test; j++)
    {
        True = 0;

        cin >> N;

        LL arr[N+1];

        for(i=0; i<N; i++)
            cin >> arr[i];

        for(i=0; i<N; i++)
        {
            if(arr[i+1]-arr[i] == 1)
                True = 1;
        }

        if(True == 1)
            cout << "Case " << j << ": Yes" << endl;
        else
            cout << "Case " << j << ": No" << endl;
    }

    return 0;
}
