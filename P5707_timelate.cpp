#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,b;
    cin >> a>>b;
    long long minute=ceil(a/(long double)b);
    minute+=10;
    long long hour =minute/60+1;
    minute%=60;
    minute=60-minute;
    hour=8-hour;
    if (hour <0)
    {
        hour+=24;
    }
    if (hour<10)
    {
        cout <<"0"<<hour;
    }
    else
    {
        cout <<hour;
    }
    cout <<":";
    if (minute <10)
    {
        cout << "0"<<minute; 
    }
    else 
    {
        cout <<minute;
    }
}