/*


*/



#include <bits/stdc++.h>

using namespace std;
int VAL = 10000000007;
// Complete the stepPerms function below.
int TABLE[40];
int stepPerms(int n) 
{
    if(TABLE[n]!=0)
        return TABLE[n];
    
    if(n==0||n==1)
        return 1;
    if(n==2)
        return 2;
    
    TABLE[n] =((stepPerms(n-3)%VAL)+(stepPerms(n-2)%VAL)+(stepPerms(n-1)%VAL)%VAL);
    return (TABLE[n]);
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);
    
        fout << res << "\n";
    }

    fout.close();

    return 0;
}
