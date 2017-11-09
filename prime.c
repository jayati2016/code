#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,f;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0){
            f=1;
            break;}
        else
        {
        f=0;
        }
        }
        if (f==0)
            printf("yes");
        else{
            printf("no");
        }

}
