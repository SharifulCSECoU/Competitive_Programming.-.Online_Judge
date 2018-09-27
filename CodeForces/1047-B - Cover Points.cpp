#include<bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
	LL N, X, Y, ANS = 0, i;

	cin >> N;

	for(i=0; i<N; i++)
    {
        cin >> X >> Y;

		ANS = max(ANS , X+Y);
	}

	cout << ANS << endl;

	return 0;
}
