#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, m;

    cin >> n >> d >> m;

    while(m--)
    {
        int x, y;

        cin >> x >> y;

        if(x+y >= d && x+y <= 2*n-d && abs(x-y) <= d)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
