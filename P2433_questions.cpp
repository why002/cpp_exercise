#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    switch(t)
    {
        case 1:
        cout << "I love Luogu!";
        break;
        case 2:
        cout <<"6 4";
        break;
        case 3:
        cout <<"3\n12\n2";
        break;
        case 4:
        cout <<fixed<<setprecision(3)<<500.0/3;
        break;
        case 5:
        cout <<480/32;
        break;
        case 6:
        cout << sqrt(6.0*6.0+9.0*9.0);
        break;
        case 7:
        cout <<"110\n90\n0";
        break;
        case 8:
        cout << 2*3.141593*5<<endl<<3.141593*5*5<<endl<<4.0/3*3.141593*5*5*5;
        break;
        case 9:
        cout << (((1+1)*2+1)*2+1)*2;
        break;
        case 10:
        cout <<"9";
        break;
        case 11:
        cout << 100.0/3;
        break;
        case 12:
        cout << "13\nR";
        break;
        case 13:
        cout <<fixed<<setprecision(0)<< pow(4.0/3*3.141593*4*4*4+4.0/3*3.141593*10*10*10,1.0/3);
        break;
        case 14:
        cout << 50;

    }
}