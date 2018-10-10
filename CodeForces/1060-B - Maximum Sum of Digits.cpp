#include<bits/stdc++.h>

#define LL long long

using namespace std;

int Calculation(LL N)
{
    if(N <= 9)
        return N;

    else if(N % 10 == 9)
        return 9 + Calculation(N / 10);

    else
        return N % 10 + 10 + Calculation(N / 10 - 1);
}

int main()
{
    LL N;

    cin >> N;

    cout << Calculation(N) << endl;

    return 0;
}
