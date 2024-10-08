#include <iostream>

using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long min1=a*60+b,min2=c*60+d;
    cout<<(min2-min1)/60<<" "<<(min2-min1)%60;
}