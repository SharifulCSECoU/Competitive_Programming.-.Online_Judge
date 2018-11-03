#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    int T, CASE = 1;

    cin >> T;

    while(T--)
    {
        LL N, DIGIT, TEMP;

        int CNT = 1;

        cin >> N >> DIGIT;

        TEMP = DIGIT;

        while(DIGIT % N != 0)
        {
            DIGIT = TEMP + (DIGIT % N) * 10;

            CNT++;
        }

        cout << "Case " << CASE++ << ": " << CNT << endl;
    }

    return 0;
}
