#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL T, D1, D2, Y1, Y2;

    char M1[10], M2[10], K1, K2;

    cin >> T;

    for(int CASE = 1; CASE <= T; CASE++)
    {
        cin >> M1 >> D1 >> K1 >> Y1;
        cin >> M2 >> D2 >> K2 >> Y2;

        if(strcmp(M1 , "January") != 0 && strcmp(M1 , "February") != 0)
            Y1++;

        if(strcmp(M2 , "January") == 0 || (strcmp(M2 , "February") == 0 && D2 < 29))
            Y2--;

        int Four = (Y2 / 4) - ((Y1 - 1) / 4);

        int Hund = (Y2 / 100) - ((Y1 - 1) / 100);

        int FourHund = (Y2 / 400) - ((Y1 - 1) / 400);

        int Result = Four - Hund + FourHund;

        cout << "Case " << CASE << ": " << Result << endl;
    }

    return 0;
}
