#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j;
    cin >> N;

    string S;
    cin >> S;

    vector <int> V(N);

    for(i=0; i<N; i++)
        V[i] = S[i] - '0';

    for(i=0; i<9*N; i++)
    {
        int sum = 0, cnt = 0;

        for(j=0; j<N; j++)
        {
            sum = sum + V[j];
            //cout << i << " " << j << " " << sum << endl;

            if(sum > i)
                break;

            if(sum == i)
            {
                sum = 0;
                cnt++;
            }
        }

        if(sum == 0 && cnt > 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}
