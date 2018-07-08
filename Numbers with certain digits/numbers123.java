import java.util.Scanner;

class numbers123
{

     public static void sop(String s)
     {System.out.println(s);}


     public static void merge(int[] a, int st, int end)
     {
         int i,j,k,n;
         
         i=0;j=0;n=st;
         int mid = (st+end)/2;
        int ll = mid - st+1;
        int rl = end - mid ;
        int[] l = new int[ll];
        int[] r = new int[rl];


        for(i=0;i<ll;i++)
        {
            l[i]=a[st+i];
        }
        for(i=0;i<rl;i++)
        {
            r[i]=a[(st+end)/2+1+i];
        }

        i = 0; j = 0;
         while(i<ll&&j<rl)
         {

            if(l[i]>r[j])
            {
                a[n++]=l[i++];
             //   sop("\n"+(n-1)+" "+l[i-1] );
            }
            else
            {
                a[n++]=r[j++];
                
               // sop("\n"+(n-1)+" "+r[j-1] );
            }
         }

         while(i<ll)
         {
              a[n++]=l[i++];
         }

         while(j<rl)
         {
             a[n++]=r[j++];
         }

     }

    public static void mergesort(int[] a, int st, int end)
    {
        if(st<end)
        {
            mergesort(a,st,(st+end)/2);
            mergesort(a,(st+end)/2+1,end);
            merge(a,st,end);
        }
    }


    public static void main(String[] args)
    {
        
        int t;
        int[] array;
        sop("Enter number of terms:");
        Scanner in = new Scanner(System.in);
        t = in.nextInt();

        array = new int[t];
        sop("Enter terms:");

        for(int i = 0 ; i<t;i++)
        {
            array[i] = in.nextInt();
        }



        
        
    }
}