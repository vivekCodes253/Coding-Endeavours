/*
Submissions: 1054   Accuracy: 35.1%   Difficulty: Basic
     
Given an array containing n numbers. The problem is to find the length of the longest contiguous subarray such that every element in the subarray is strictly greater than its previous element in the same subarray. Time Complexity should be O(n).

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case consists of an integer n. The next line contains n spaced integers.

Output:
Print the required output.

Constraints: 
1<=T<=100
1<=n<=100
1<=a[i]<=104

Example:
Input:
2
9
5 6 3 5 7 8 9 1 2
10
12 13 1 5 4 7 8 10 10 11

Output:
5
4
*/


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
        
        cout<<end_of_longest-start_of_longest+1<<"\n";

            
          
        
    }


	return 0;
}