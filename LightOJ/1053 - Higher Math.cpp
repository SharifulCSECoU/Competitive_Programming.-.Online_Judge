#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, Arr[4], i, Case = 1;

    cin >> T;

    while(T--)
    {
        for(i = 0; i < 3; i++)
            cin >> Arr[i];

        sort(Arr , Arr+3);

        if(Arr[0]*Arr[0] + Arr[1]*Arr[1] == Arr[2]*Arr[2])
            cout << "Case " << Case++ << ": " << "yes" << endl;

        else
            cout << "Case " << Case++ << ": " << "no" << endl;
    }

    return 0;
}
