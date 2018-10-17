#include<bits/stdc++.h>

using namespace std;

int main()
{
    int Test, Graph[100][100], N, R, u, v, Dist, Source, Dest, Case = 1, i, j, k;

    cin >> Test;

    while(Test--)
    {
        cin >> N >> R;

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(i == j)
                    Graph[i][j] = 0;

                else
                    Graph[i][j] = 9999999;
            }
        }

        for(i = 0; i < R; i++)
        {
            cin >> u >> v;

            Graph[u][v] = Graph[v][u] = 1;
        }

        for(k = 0; k < N; k++)
        {
            for(i = 0; i < N; i++)
            {
                for(j = 0; j < N; j++)
                {
                    Dist = Graph[i][k] + Graph[k][j];

                    if(Dist < Graph[i][j])
                        Graph[i][j] = Dist;
                }
            }
        }

        cin >> Source >> Dest;

        int Ans = 0;

        for(i = 0; i < N; i++)
            Ans = max(Ans , Graph[Source][i] + Graph[i][Dest]);

        cout << "Case " << Case++ << ": " << Ans << endl;
    }

    return 0;
}
