/*
Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

Example :

A : [3 5 4 2]

Output : 2 
for the pair (3, 4)

 

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.


Output:

Print the maximum difference of the indexes i and j in a separtate line.


Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 1000
0 ≤ A[i] ≤ 100


Example:

Input
1
2
1 10
Output
1
*/

#include<stdio.h>
using namespace std;

int main() 
{
    int i,n,t, a[10005],j,runmax,tempmax;
    scanf("%d",&t);
    while(t--)
    {
        runmax = 0;
        scanf("%d",&n);
        
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
       
        for(i=0;i<n;i++)
        {
            if(i+runmax>=n)
                break;
            else
            {
            for(j=i+runmax;j<n;j++)
            {
                //printf("\n ai %d aj %d",a[i],a[j]);
                if(a[i]<=a[j])
                {
                    tempmax = j-i;// printf("\n Runmax here is %d ",runmax);
                }
            }
            runmax = tempmax;
                
            }
        }
        
        printf("%d\n",runmax);
    }
	return 0;
}