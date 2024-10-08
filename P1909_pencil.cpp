#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n,a[3][2];
    cin >> n;
    for( int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin >> a[i][j];
        }
    }
    long long b[3];
    for (int i=0;i<3;i++)
    {
        b[i]=ceil(double(n)/a[i][0])*a[i][1];
    }
    cout << min({b[0],b[1],b[2]});
}