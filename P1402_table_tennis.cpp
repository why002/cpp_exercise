#include <string>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    string str1;
    getline(cin,str1,'E');
    int a[8000][2],b[8000][2];
    int h1=0,h2=0;
    for (int i=0;i<str1.length();i++)
    {
        if(str1[i]=='W')
        {
            a[h1][0]++;
            b[h2][0]++;
        }
        else if(str1[i]=='L')
        {
            a[h1][1]++;
            b[h2][1]++;
        }
        else
        {
            continue;
        }
        if ((a[h1][0]>=11||a[h1][1]>=11)&&abs(a[h1][0]-a[h1][1])>=2)
        {
            h1++;
        }
        if ((b[h2][0]>=21||b[h2][1]>=21)&&abs(b[h2][0]-b[h2][1])>=2)
        {
            h2++;
        }
    }
    for (int i=0;i<=h1;i++)
    {
        if (a[i][0]==0&&a[i][1]==0)
        break;
        cout << a[i][0]<<":"<<a[i][1]<<endl;
    }
    cout << endl;
    for (int i=0;i <=h2;i++)
    {
        if (b[i][0]==0&&b[i][1]==0)
        break;
        cout << b[i][0]<< ":" << b[i][1]<<endl;
    }

}