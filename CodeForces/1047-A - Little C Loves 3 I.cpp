#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL N;

    cin >> N;

    if(N%3 == 0)
        cout << "1 1 " << N-2 << endl;

    else
        cout << "1 2 " << N-3 << endl;

    return 0;
}
