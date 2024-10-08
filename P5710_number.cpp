#include <iostream>

using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0 && n > 4 && n <= 12)
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
    if ((n % 2 == 0) || (n > 4 && n <= 12))
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
    if ((n % 2 == 0) ^ (n > 4 && n <= 12))
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
    if (!(n % 2 == 0 || (n > 4 && n <= 12)))
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
    }
}