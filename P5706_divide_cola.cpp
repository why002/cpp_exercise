#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double a;
    int b;
    cin >> a>> b;
   cout <<fixed<<setprecision(3) << a/b << endl<<b*2;
}