
#include <stdio.h>
#include<stblib.h>
#include<math.h>
void main()
{
    int t=1,c=0,d=0;
    scanf("%d",&t);
    if(t<=10)
    {
        while(c<t)
    {
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    } 
    small=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    if(small==k)
    {
        printf("%d",d);
    }
    }
    }
    else
    {
        while(small<k)
        {
            small++;
            d++;
        }
        printf("%d",d);
        small=0;
        d=0;
        c++;
    }
}
