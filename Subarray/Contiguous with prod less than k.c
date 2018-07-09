
/*
Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number K.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the count of required subarrays in new line.

Constraints:
1<=T<=200
1<=N<=105
1<=K<=1015
1<=A[i]<=105

Example:
Input:
2
4 10
1 2 3 4
7 100
1 9 2 8 6 4 3

Output:
7
16
*/


int main() {
	int t,n,a[100005],ct;
	long k,prod;
	int st=0,end=0;
	
	scanf("%d",&t);
	
	while(t--)
	{
	    
	    scanf("%d %ld",&n,&k);
	    for(ct=0;ct<n;ct++)
	        scanf("%d",&a[ct]);
	    ct=0;
	    st = 0;
	    end = 0;
	    prod = 1;
	    for(int i=0;i<n;i++)
	    {
	        
	       prod*= (a[i]);
	       while(prod>=k&&st<=i)
	       {
	           
	           prod/=a[st++];
	           //st++;
	       }
	       
	       ct+= (i-st+1);
	       
	        
	    }
	    
	    printf("%d\n",ct);
	}
	
	
	
	return 0;
}