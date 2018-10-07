#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    cin >> N;

    while(N--)
    {
        int x, y;

        cin >> x >> y;

        if(x%2 == 1 && y%2 == 1 && (x == y || y == x-2))
            cout << x + y - 1 << endl;

        else if(x%2 == 0 && y%2 == 0 && (x == y || y == x-2))
            cout << x + y << endl;

        else
            cout << "No Number" << endl;
    }

    return 0;
}
