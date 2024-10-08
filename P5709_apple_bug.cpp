#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long m,t,s;
    cin >> m >> t>>s;
    if (t==0)
    {
        cout << "0";
    }
    else
    {
        cout << max(m-ceil(double(s)/t),0.0);
    }
}