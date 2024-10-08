#include <iostream>

using namespace std;
int main()
{
    long double m,h;
    cin>> m>>h;
    long double bmi=m/h/h;
    if (bmi<18.5)
    {
        cout << "Underweight";
    }
    else if (bmi>=24)
    {
        cout << bmi << endl << "Overweight";
    }
    else
    {
        cout << "Normal";
    }
}