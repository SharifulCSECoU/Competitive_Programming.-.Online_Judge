#include<bits/stdc++.h>

const double EPS = 1e-9;

using namespace std;

int main()
{
    int T, i;

    cin >> T;

    double R1, R2, R3, a, b, c, S, AREA, A, B, C, RESULT;

    for(i = 1; i <= T; i++)
    {
        cin >> R1 >> R2 >> R3;

        a = R1 + R2;
        b = R2 + R3;
        c = R3 + R1;

        S = 0.5 * (a + b + c);

        AREA = sqrt(S * (S - a) * (S - b) * (S - c));

        A = acos((a * a + c * c - b * b) / (2.0 * a * c));
        B = acos((a * a + b * b - c * c) / (2.0 * a * b));
        C = acos((b * b + c * c - a * a) / (2.0 * b * c));

        RESULT = AREA - A * R1 * R1 * 0.5 - B * R2 * R2 * 0.5 - C * R3 * R3 * 0.5;

        printf("Case %d: %.8lf\n", i, RESULT + EPS);
    }

    return 0;
}
