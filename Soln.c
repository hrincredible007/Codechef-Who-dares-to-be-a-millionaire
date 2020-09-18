#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0,i,mark;
        scanf("%d",&n);
        char a[n+1],b[n+1];
        long long int w[n+1],c=0;
        scanf("%s",&a);
        scanf("%s",&b);
        for(i=0; i<n+1; i++)
            scanf("%lld",&w[i]);
        for(i=0; i<n; i++)
        {
            if(a[i]==b[i])
                count++;
        }
        for(i=0; i<count+1; i++)
        {
            if(w[i]>c)
            {
                c=w[i];
            }
        }
        if(count==n)
            printf("%lld\n",w[n]);
        else
            printf("%lld\n",c);
    }
    return 0;
}
