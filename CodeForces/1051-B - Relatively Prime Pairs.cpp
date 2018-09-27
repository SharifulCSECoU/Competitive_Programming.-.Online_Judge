#include<bits/stdc++.h>

using namespace std;

#define LL long long

int main()
{
    LL a, b, i;

    cin >> a >> b;

    cout << "YES" << endl;

    for(i = a; i <= b; i += 2)
        cout << i << " " << i+1 << endl;

    return 0;
}
