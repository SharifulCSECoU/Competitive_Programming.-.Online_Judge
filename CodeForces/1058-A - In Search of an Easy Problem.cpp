#include<bits/stdc++.h>

using namespace std;

int main()
{
	int N, VALUE, i, TRUE = 0;

	cin >> N;

	for(i=0; i<N; i++)
    {
        cin >> VALUE;

        if(VALUE == 1)
            TRUE = 1;
    }

    if(TRUE == 1)
        cout << "HARD" << endl;

    else
        cout << "EASY" << endl;

    return 0;
}
