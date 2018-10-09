#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL T, A, B, i;

    cin >> T;

    while(T--)
    {
        cin >> A >> B;

        if(A == B + 1)
        {
            A = 2 * A - 1;

            int check = 0;

            for(i = 2; i * i <= A; i++)
                if(A % i == 0)
                    check = 1;

            if(check == 0)
                cout << "YES" << endl;

            else
                cout << "NO" << endl;
        }

        else
            cout << "NO" << endl;
    }

    return 0;
}
