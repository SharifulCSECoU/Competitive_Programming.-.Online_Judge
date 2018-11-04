#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL T, N, C, ANS1, ANS2, MAX1, MAX2, CASE = 1;

    cin >> T;

    while(T--)
    {
        cin >> N >> C;

        if(N == 0 || C == 0)
            cout << "Case " << CASE++ << ": " << 0 << endl;

        else
        {
            ANS1 = C / (2 * N);                //(B / 2A)
            ANS2 = C / (2 * N) + 1;

            MAX1 = C * ANS1 - N * ANS1 * ANS1; //(BX - AX^2)
            MAX2 = C * ANS2 - N * ANS2 * ANS2;

            if(MAX1 >= MAX2)
                cout << "Case " << CASE++ << ": " << ANS1 << endl;

            else
                cout << "Case " << CASE++ << ": " << ANS2 << endl;
        }
    }

	return 0;
}
