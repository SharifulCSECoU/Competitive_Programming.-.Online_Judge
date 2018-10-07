#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int N;

        cin >> N;

        if(N == 0)
            break;

        else
            cout << (N * (N + 1) * (2 * N + 1)) / 6 << endl;
        //1^2 + 2^2 + 3^2 + 4^2 + ..... + N^2
    }

    return 0;
}
