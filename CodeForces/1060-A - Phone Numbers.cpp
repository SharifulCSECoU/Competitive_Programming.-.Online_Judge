#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cnt = 0, i;

    cin >> n;

    string s;

    cin >> s;

    for (i = 0; i < s.length(); i++)
        if (s[i] == '8')
            cnt++;

    cout << min (cnt , n / 11) << endl;

    return 0;
}
