/*
Submissions: 11461   Accuracy: 14.54%   Difficulty: Easy
          
Given an array of numbers, the task is to print only those numbers which have only 1, 2 and 3 as their digits.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an integer N and the second line contains N space separated array elements.

Output:
For each test case, In new line print the required elements in increasing order. if there is no such element present in the array print "-1".

Constraints:
1<=T<=100
1<=N<=106
1<=A[i]<=106

Example:
Input:
2
3
4 6 7
4
1 2 3 4

Output:

-1
1 2 3

*/


#include <stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int contains(int a)
{
    int st = 1,t;
    if(a==0) st=0;
    while(a)
    {
        t = a%10;
        if(t < 4 && t!=0)
        {
            a/=10;
        }
        else
        {
            st = 0; break;
        }
    }

    return(st);
}
void display(int arr[],int n)
{
    int i,ct=1;
   
    for(i=0;i<n;i++)
    {
        if(contains(arr[i]))
        {
             printf("%d ",arr[i]);
             ct =0;
             
        }
    }
    if(ct)
    printf("-1\n");
    else
     printf("\n");
        
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
       // printf("\nSlot for %d at %d", a[i],pos);
        //display(a,n);
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
    
    int na[1000006],i,n,t,n2,j;
    
    scanf("%d",&t);
    while(t--)
    {       
            n2=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&j);
                if(contains(j))
                    na[n2++]=j;
            }
                
            //selection(na,n2);
            sort(na,na + n2);
            if(n2==0)
                printf("-1\n");
            else
                display(na,n2);
            
             /*for(i=0;i<n;i++)
                printf("\n%d contains : %d", arr[i],contains(arr[i]));*/
                
    }    
    return 0;
}