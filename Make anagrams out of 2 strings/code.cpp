#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) 
{

    int i,j,ct=0;
    for(i=0;i<a.length();i++)
    {
        if(a.at(i)!='*');
        for(j=0;j<b.length();j++)
        {
            if(b.at(j)!='*')
                if(a.at(i)==b.at(j))
                {
                    ct++;
                    a.at(i)='*';
                    b.at(j)='*';
                }
        }
        
        
    }
    
    return(b.length()+a.length()-2*ct);
           
            

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
