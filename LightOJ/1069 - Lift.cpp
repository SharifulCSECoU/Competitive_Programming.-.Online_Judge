#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, M, L, D, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> M >> L;

        int Ans = 0;

        D = abs(L - M);

        Ans = 4 * (D + M) + 19;

        cout << "Case " << Case++ << ": " << Ans << endl;
    }

    return 0;
}
