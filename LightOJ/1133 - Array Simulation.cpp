/*
  	--------------------------------------------------
  	|!		MD. SHARIFUL ISLAM		!|
  	|!	  Computer Science & Engineering  	!|
  	|!		Comilla University		!|
  	|!		    Bangladesh   		!|
  	--------------------------------------------------
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, Case = 1;

    cin >> T;

    while(T--)
    {
        int N, M;

        cin >> N >> M;

        int Arr[N], D, Temp, X, Y, r, i, j;

        for(i = 0; i < N; i++)
            cin >> Arr[i];

        for(j = 0; j < M; j++)
        {
            char Operation[2];

            cin >> Operation;

            if(Operation[0] == 'S')
            {
                cin >> D;

                for(i = 0; i < N; i++)
                    Arr[i] = Arr[i] + D;
            }

            else if(Operation[0] == 'M')
            {
                cin >> D;

                for(i = 0; i < N; i++)
                    Arr[i] = Arr[i] * D;
            }

            else if(Operation[0] == 'D')
            {
                cin >> D;

                for(i = 0; i < N; i++)
                    Arr[i] = Arr[i] / D;
            }

            else if(Operation[0] == 'R')
            {
                for(i = 0, r = N - 1; i < N / 2; i++, r--)
                {
                    Temp = Arr[i];
                    Arr[i] = Arr[r];
                    Arr[r] = Temp;
                }
            }

            else if(Operation[0] == 'P')
            {
                cin >> X >> Y;

                Temp = Arr[X];
                Arr[X] = Arr[Y];
                Arr[Y] = Temp;
            }
        }

        cout << "Case " << Case++ << ":" << endl;

        for(i = 0; i < N - 1; i++)
            cout << Arr[i] << " ";

        cout << Arr[i] << endl;
    }

    return 0;
}
