#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    while(N--)
    {
        int A, B, C = 0, D = 0, ANS, RANS = 0, Remainder;

        cin >> A >> B;

        while(A != 0)
        {
            Remainder = A % 10;
            C = C * 10 + Remainder;
            A /= 10;
        }

        while(B != 0)
        {
            Remainder = B % 10;
            D = D * 10 + Remainder;
            B /= 10;
        }

        ANS = C + D;

        while(ANS != 0)
        {
            Remainder = ANS % 10;
            RANS = RANS * 10 + Remainder;
            ANS /= 10;
        }

        cout << RANS << endl;
    }

    return 0;
}
