

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i,n,t,start_of_longest,end_of_longest,st,end;  //both inclusive
    int a[105];
    scanf("%d",&t);
    while(t--)
    {
        start_of_longest=0;     //absolute final
        end_of_longest=0;       //absolute final output
        
        st=0;                   //temporary st,end
        end=0;            
        
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);      //Accept the value
            if(i!=0)                //excepting the first term
            {
                if(a[i]>a[i-1])     //checking if increasing
                {
                    
                    end = i;
                    if(end-st>end_of_longest-start_of_longest)      //If current length is greater than the absolute
                    {
                        end_of_longest = end;
                        start_of_longest = st;
                    }
                }        
                else
                {
                    st=i;
                    end=i;                  //resetting for the new sequence
                }
                    
            }
            
        }
        cout<<"\n";
        for(i=start_of_longest;i<=end_of_longest;i++)
        {
            cout<<a[i]<<" ";
        }
            
          
        
    }


	return 0;
}