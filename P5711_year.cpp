#include <iostream>

using namespace std;
int main()
{
    long long y;
    cin >> y;
    if (y%4==0)
    {
        if(y%100==0)
        {
            if (y%400==0)
            {
                cout <<"1";
            }
            else
            {
                cout << "0";
            }
        }
        else
        {
            cout << "1";
        }
    }
    else
    {
        cout << "0";
    }
}