/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


bool isLeaf(node* n)
{
    return(n->right==NULL&&n->left==NULL);
}

void decode_huff(node * root, string s) 
{
    node *temp;
    temp = root;
    //cout<<s;
    for(int i = 0;i<s.length();i++)
    {
      //  cout<<"\nProcessing "<<s.at(i);
        if(s.at(i)=='1')
            temp=temp->right;
        else if(s.at(i)=='0')
            temp=temp->left;
        
        if(isLeaf(temp))
        {
           // cout<<"Ola\n";
            cout<<temp->data;
            temp = root;
        }
       
    }
}