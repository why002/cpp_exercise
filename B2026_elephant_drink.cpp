#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    long double h,r;
    cin >> h>>r;
    long double v=3.14*r*r*h;
    cout << ceil(20*1000.0/v);
}