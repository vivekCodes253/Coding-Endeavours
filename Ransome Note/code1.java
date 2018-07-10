import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.util.Arrays;

public class Solution {

    // Complete the checkMagazine function below.
    static void checkMagazine(String[] magazine, String[] note) 
    {
       int i,j,ct=0;
        int ml = magazine.length;
        int nl = note.length;
        
           
        if(nl>ml)
        {
             System.out.println("No");
        }
        else if(nl==ml)
        {
            int st = 1;
            Arrays.sort(magazine);
            Arrays.sort(note);
            for(i=0;i<nl;i++)
                if(!magazine[i].equals(note[i]))
                {
                    System.out.println("No");
                    st=0;
                    break;
                }
            if(st==1)
                System.out.println("Yes");
                
        }
        else
        {
            for(i=0;i<ml;i++)
                for(j=0;j<nl;j++)
                    if(!note[j].equals("--")&&magazine[i].equals(note[j]))
                    {
                        note[j]="--";
                            magazine[i]="--";
                        ct++;
                        if(ct==nl)
                            break;
                        if(ml-i<nl-ct)
                            break;
                    }

            if(ct==note.length)
            {
                System.out.println("Yes");
            }
            else
                System.out.println("No");
        }

        

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String[] mn = scanner.nextLine().split(" ");

        int m = Integer.parseInt(mn[0]);

        int n = Integer.parseInt(mn[1]);

        String[] magazine = new String[m];

        String[] magazineItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < m; i++) {
            String magazineItem = magazineItems[i];
            magazine[i] = magazineItem;
        }

        String[] note = new String[n];

        String[] noteItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            String noteItem = noteItems[i];
            note[i] = noteItem;
        }

        checkMagazine(magazine, note);

        scanner.close();
    }
}
