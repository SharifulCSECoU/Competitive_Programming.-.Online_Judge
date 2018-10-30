#include<bits/stdc++.h>

using namespace std;

int DtoB(int N)
{
    int M = 1, R = 0;

    while(N > 0)
    {
        R = R + (N % 2) * M;

        M = M * 10;

        N = N / 2;
    }

    return R;
}

int main()
{
    int T, A, B, C, D, P, Q, R, S, Case = 1;

    cin >> T;

    while(T--)
    {
        scanf("%d.%d.%d.%d", &A, &B, &C, &D);

        scanf("%d.%d.%d.%d", &P, &Q, &R, &S);

        if(DtoB(A) == P && DtoB(B) == Q && DtoB(C) == R && DtoB(D) == S)
            cout << "Case " << Case++ << ": " << "Yes" << endl;

        else
            cout << "Case " << Case++ << ": " << "No" << endl;
    }

    return 0;
}
