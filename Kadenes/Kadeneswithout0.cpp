#include <iostream>
using namespace std;

int main()
{
    int i,n,t,run,max;
    int a[1005];
    scanf("%d",&t);
    while(t--)
    {
        run=0;max=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        
        for(i=0;i<n;i++)
        {
            run+=a[i];
            if(run<0) run=0;
            
            if(run>max) max=run;
        }
        if(max==0)
        {
             max = a[0];
            for(i=0;i<n;i++)
                if(a[i]>max)
                    max=a[i];
        }
        printf("%d\n",max);
        
    }
    
	return 0;
}