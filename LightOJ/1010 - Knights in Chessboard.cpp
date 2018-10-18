#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, M, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N >> M;

        if(N == 1 || M == 1)
            cout << "Case " << Case++ << ": " << N*M << endl;

        else if(N == 2 || M == 2)
        {
            int Ans = ((N*M)/8)*4;

            if((N*M)%8 == 0)
                cout << "Case " << Case++ << ": " << Ans << endl;

            else if((N*M)%8 == 2)
                cout << "Case " << Case++ << ": " << Ans+2 << endl;

            else if((N*M)%8 == 4 || (N*M)%8 == 6)
                cout << "Case " << Case++ << ": " << Ans+4 << endl;
        }

        else
            cout << "Case " << Case++ << ": " << ((N*M)+1)/2 << endl;
    }

    return 0;
}
