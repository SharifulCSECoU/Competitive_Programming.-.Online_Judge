#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, L, W, H, mx, mn, i, V, CASE = 1;

    char STR[21], S1[21], S2[21];

    cin >> T;

    while(T--)
    {
        cin >> N;

        cin >> STR >> L >> W >> H;

        mx = mn = L * W * H;

        strcpy(S1 , STR);
        strcpy(S2 , STR);

        for(i = 1; i < N; i++)
        {
            cin >> STR >> L >> W >> H;

            V = L * W * H;

            if(V > mx)
            {
                strcpy(S1 , STR);

                mx = V;
            }

            else if(V < mn)
            {
                strcpy(S2 , STR);

                mn = V;
            }
        }

        if(mx == mn)
            cout << "Case " << CASE++ << ": no thief" << endl;

        else
            cout << "Case " << CASE++ << ": " << S1 << " took chocolate from " << S2 << endl;
    }

    return 0;
}
