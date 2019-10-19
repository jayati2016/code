#include <stdio.h>
#include <stdlib.h>
//hhh
int main()
{
int num,n,r,s=0;
scanf("%d",&n);
num=n;
while(n!=0){
    r=n%10;
    s=s*10+r;
    n=n/10;
}

printf("%d\n",s);
if(num==s)
    printf("equal");
else{
    printf("not equal");
}
}


