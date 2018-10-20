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

int numDiv[1001], Pos[1001];

bool Function(int x, int y)
{
	if(numDiv[x] == numDiv[y])
        return x > y;

	return numDiv[x] < numDiv[y];
}

int main()
{
	int T, N, i, j;

	cin >> T;

	for(i = 1; i < 1001; i++)
    {
		int x = 0;

		for(j = 1; j < i; j++)
			if(i % j == 0)
                x++;

		numDiv[i] = x;
	}

	for(i = 0; i < 1000; i++)
        Pos[i] = i + 1;

	sort(Pos, Pos + 1000, Function);

	for(i = 1; i <= T; i++)
    {
        cin >> N;

		cout << "Case " << i << ": " << Pos[N-1] << endl;
	}

	return 0;
}
