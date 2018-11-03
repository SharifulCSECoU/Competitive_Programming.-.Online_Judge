#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, N, CASE = 1;

    string NAME;

    cin >> T;

    while(T--)
    {
        cin >> N >> NAME;

        if(NAME == "Alice")
        {
            if(N % 3 == 1)
                cout << "Case " << CASE++ << ": Bob" << endl;

            else
                cout << "Case " << CASE++ << ": Alice" << endl;
        }

        else
        {
            if(N % 3 == 0)
                cout << "Case " << CASE++ << ": Alice" << endl;

            else
                cout << "Case " << CASE++ << ": Bob" << endl;
        }
    }

    return 0;
}
