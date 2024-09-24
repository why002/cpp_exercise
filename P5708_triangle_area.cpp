#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    long double a,b,c;
    cin >> a>>b>>c;
    long double p=(a+b+c)*0.5;
    cout << fixed<<setprecision(1)<<sqrt(p*(p-a)*(p-b)*(p-c));
}