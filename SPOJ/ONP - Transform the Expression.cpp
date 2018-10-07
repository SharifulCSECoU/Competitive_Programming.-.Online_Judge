#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int T;

    cin >> T;

    while (T--)
    {
        char str[1000];

        cin >> str;

        stack <char> s;

        int len = strlen (str);

        for(int i = 0; i < len; i++)
        {
            if(isalpha(str[i]))
                cout << str[i];

            else if(str[i] == ')')
            {
                cout << s.top();
                s.pop();
            }

            else if(str[i] != '(')
                s.push(str[i]);
        }

        cout << endl;
    }

    return 0;
}
