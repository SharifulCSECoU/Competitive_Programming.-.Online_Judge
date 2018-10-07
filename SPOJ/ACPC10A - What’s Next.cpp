#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int A1, A2, A3, ANS1, ANS2, ANS3, ANS4;

        cin >> A1 >> A2 >> A3;

        if(A1 == 0 && A2 == 0 && A3 == 0)
            break;

        else
        {
            ANS1 = A2 - A1;
            ANS2 = A3 - A2;

            ANS3 = A2 / A1;
            ANS4 = A3 / A2;

            if(ANS1 == ANS2)
                cout << "AP " << A3 + ANS1 << endl;

            else
                cout << "GP " << A3 * ANS3 << endl;
        }
    }

    return 0;
}
