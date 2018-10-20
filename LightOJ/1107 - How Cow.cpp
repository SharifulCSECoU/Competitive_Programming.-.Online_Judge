#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, X1, Y1, X2, Y2, M, X, Y, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> X1 >> Y1 >> X2 >> Y2 >> M;

        cout << "Case " << Case++ << ":" << endl;

        while(M--)
        {
            cin >> X >> Y;

            if(X1 < X && X < X2 && Y1 < Y && Y < Y2)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
    }

    return 0;
}
