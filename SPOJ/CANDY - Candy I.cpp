#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int N;

        cin >> N;

        if(N == -1)
            break;

        else
        {
            int i, Arr[N], SUM = 0, TEMP, ANS = 0;

            for(i = 0; i < N; i++)
            {
                cin >> Arr[i];

                SUM += Arr[i];
            }

            TEMP = SUM / N;

            if(N * TEMP == SUM)
            {
                for(i = 0; i < N; i++)
                {
                    if(TEMP > Arr[i])
                        ANS = ANS + TEMP - Arr[i];
                }

                cout << ANS << endl;
            }

            else
                cout << -1 << endl;
        }
    }

    return 0;
}
