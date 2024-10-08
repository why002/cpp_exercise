#include <iostream>

using namespace std;
int main()
{
    int m[200][200]={0};
    int a,b;
    cin >> a >> b;
    cin.get();
    for (int i=+5;i<a+5;i++)
    {
        for (int j=5;j<b+5;j++)
        {
            if(cin.get()=='*')
            {
                m[j][i]=-1;
            }
            else
            {
                m[j][i]=0;
            }
        }
        cin.get();
    }
    for (int i=5;i<a+5;i++)
    {
        for (int j=5;j<b+5;j++)
        {
            if (m[j][i]==-1)
            {
                cout << "*";
            }
            else
            {
                cout << -(m[j-1][i-1]+m[j][i-1]+m[j+1][i-1]+m[j-1][i]+m[j+1][i]+m[j-1][i+1]+m[j][i+1]+m[j+1][i+1]);
            }
        }
        cout <<endl;
    }
}