#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, i;

    cin >> N;

    while(N--)
    {
        string S;

        cin >> S;

        for(i = 0; i < S.length(); i++)
        {
            int cnt1 = 0, cnt2 = 0;

            cnt1 = S[i] + S[i] % 26;

            if(cnt1 > 122)
                cnt2 = cnt1 - 26;

            else
                cnt2 = cnt1;

            printf("%c", cnt2);
        }

        cout << endl;
    }

    return 0;
}
