#include<bits/stdc++.h>

using namespace std;

int main()
{
	int test;

	cin >> test;

	while (test--)
	{
		int a = -1, b = -1, c = -1, i;

		string s;

		cin >> s;

		for (i = 0; i < s.length(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				a = i;
				break;
			}
		}

		for (i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				b = i;
				break;
			}
		}

		for (i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				c = i;
				break;
			}
		}

		if (a == -1)
		{
			for (i = 0; i < s.length(); i++)
			{
				if (i != b && i != c)
				{
					s[i] = '1';
					a = i;
					break;
				}
			}
		}

		if (b == -1)
		{
			for (i = 0; i < s.length(); i++)
			{
				if (i != c && i != a)
				{
					s[i] = 'a';
					b = i;
					break;
				}
			}
		}

		if (c == -1)
		{
			for (i = 0; i < s.length(); i++)
			{
				if (i != a && i != b)
				{
					s[i] = 'A';
					c = i;
					break;
				}
			}
		}

		cout << s << endl;
	}

	return 0;
}
