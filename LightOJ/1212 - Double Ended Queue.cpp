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
    int T, N, M, X, Case = 1;

    cin >> T;

    while(T--)
    {
        cin >> N >> M;

        deque <int> Q;

        string S;

        cout << "Case " << Case++ << ":" << endl;

        while(M--)
        {
            cin >> S;

            if(S == "pushLeft")
            {
                cin >> X;

                if(Q.size() != N)
                {
                    Q.push_front(X);

                    cout << "Pushed in left: " << X << endl;
                }

                else
                    cout << "The queue is full" << endl;
            }

            else if(S == "pushRight")
            {
                cin >> X;

                if(Q.size() != N)
                {
                    Q.push_back(X);

                    cout << "Pushed in right: " << X << endl;
                }

                else
                    cout << "The queue is full" << endl;
            }

            else if(S == "popLeft")
            {
                if(Q.empty())
                    cout << "The queue is empty" << endl;

                else
                {
                    cout << "Popped from left: " << Q.front() << endl;

                    Q.pop_front();
                }
            }

            else if(S == "popRight")
            {
                if(Q.empty())
                    cout << "The queue is empty" << endl;

                else
                {
                    cout << "Popped from right: " << Q.back() << endl;

                    Q.pop_back();
                }
            }
        }
    }

    return 0;
}
