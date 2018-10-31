#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, i, CASE = 1;

    cin >> T;

    getchar();

    string A, B;

    while(T--)
    {
        getline(cin , A);
        getline(cin , B);

        int ANS1 = 0, ANS2 = 0;

        for(i = 0; A[i]; i++)
        {
            A[i] = tolower(A[i]);

            if(A[i] != ' ')
                ANS1 = ANS1 + A[i];
        }

        for(i = 0; B[i]; i++)
        {
            B[i] = tolower(B[i]);

            if(B[i] != ' ')
                ANS2 = ANS2 + B[i];
        }

        if(ANS1 == ANS2)
            cout << "Case " << CASE++ << ": Yes" << endl;

        else
            cout << "Case " << CASE++ << ": No" << endl;
    }

    return 0;
}
