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

string Browser[101];

int main()
{
    int T, Case = 1;

    string Keyword, URL;

    cin >> T;

    while(T--)
    {
        int Last = 0, Index = 0;

        Browser[Last] = "http://www.lightoj.com/";

        cout << "Case " << Case++ << ":" << endl;

        while(cin >> Keyword)
        {
            if(Keyword == "QUIT")
                break;

            else if(Keyword == "VISIT")
            {
                cin >> URL;

                cout << URL << endl;

                Browser[++Index] = URL;
                Last = Index;
            }

            else if(Keyword == "FORWARD")
            {
                if(Index + 1 > Last)
                    cout << "Ignored" << endl;

                else
                    cout << Browser[++Index] << endl;
            }

            else if(Keyword == "BACK")
            {
                if(Index - 1 < 0)
                    cout << "Ignored" << endl;

                else
                    cout << Browser[--Index] << endl;
            }
        }
    }

    return 0;
}
