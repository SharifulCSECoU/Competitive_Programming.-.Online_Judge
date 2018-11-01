#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, CASE = 1;

    cin >> T;

    while(T--)
    {
        cin >> N;

        int BEG = 2, CNT = 0, A, i;

        for(i = 0; i < N; i++)
        {
            cin >> A;

            CNT = CNT + (A - BEG) / 5.0;

            if((A - BEG) % 5 > 0)
                CNT++;

            BEG = A;
        }

        cout << "Case " << CASE++ << ": " << CNT << endl;
    }

    return 0;
}
