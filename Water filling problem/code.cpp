#include <bits/stdc++.h>
using namespace std;
int a[105];
int gmax=0,n;

int leftmax(int index)
{
    int tmax=a[index];
    //cout<<"\nTmax ="<<tmax<<" gmax "<<gmax;
    if(tmax==gmax)
        return 0;
      for(;index>=0;index--) 
      {
          //cout<<"\nIndex : "<<index<<" tmax"<<tmax;
          if(a[index]==gmax)
          {
              tmax=gmax;
              break;
          }
          else if(a[index]>tmax)
            tmax=a[index];
      }
      
      
      return tmax;
}


int rightmax(int index)
{
    int tmax = a[index];
   for(;index<n;index++) 
      {
          if(a[index]==gmax)
          {
              tmax=gmax;
            break;
          }
          else if(a[index]>tmax)
          tmax=a[index];
      }
      
      
      return tmax;
}

int main() {
	int i,t;
    scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int water=0;gmax=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]>gmax)
	            gmax=a[i];
	    }
	    
	    for(i=1;i<n-1;i++)
	    {
	        //cout<<"\nLeftMax : "<<leftmax(i)<<" rightmax "<<rightmax(i);
	        int x = (min(leftmax(i),rightmax(i))-a[i]);
	        if(x>0)
	        water+= x;
	    }
	    
	    printf("%d\n",water);
	    
	}
	return 0;
}