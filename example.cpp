#include <cstdio>
using  namespace std;
int main()
{
	short a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n%d*%d=%d\n%d/%d=%d\n%d%%%d=%d",a,b,a+b,a,b,a*b,a,b,a/b,a,b,a%b);
    return 0;
}