#include <stdio.h>
 
void display(int arr[],int n)
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
} 
 
void selection(int a[],int n)
{
    int pos,temp,i,j;
    for(i=1;i<n;i++)
    {
        pos = i;
        while((a[i]<a[pos-1])&&pos>0)
        {
            pos--;
        }
        
        printf("\nSlot for %d at %d", a[i],pos);
        display(a,n);
        if(i!=pos)
        {
            temp = a[i];
            for(j=i;j>pos;j--)
                a[j]=a[j-1];
        
        
        a[pos]=temp;
        
        }
        
        
    }
    
    
}

 

 
int main()
{
    
    int arr[1000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    selection(arr,n);
    
    display(arr,n);
    
    
       return 0;
}