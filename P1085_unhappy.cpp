#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t[7],n=0,maxn=0,c;
    for (int i=0;i<7;i++)
    {
        int a=0,b=0;
        cin >> a >> b;
        t[i]=a+b;
        if (a+b >8)
        {
            n+=1;
            if (a+b>maxn)
            {
                maxn=a+b;
                c=i+1;
            }
        }
    }
    if(n>0)
    {
        cout <<c;   
    }
    else
    {
        cout <<"0";
    }
}