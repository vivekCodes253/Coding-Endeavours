void addFraction(int num1, int den1, int num2,int den2)
{
    int a = num1*den2;
    int b = num2*den1;
    int val = a+b;
    int dval = den1*den2;
    
    if(a%b==0)
        printf("%d/1\n",a/b);
    else
    {
        a = min(val,dval);                           //now minval
        for(int i = 2 ; i<=a;i++)
        {
            if(val%i==0 && dval%i==0)
            {
                val/=i;
                dval/=i;
                i=1;
            }
        }
        printf("%d/%d\n",val,dval);
    }
}