//Tree taversal using array representation
//Assuming binary tree given in the form root lc rc llc lrc rlc rrc.....
#include<stdio.h>
#include<stdlib.h>
int iterator = 1;
int inp[] = {25,15,50,10,22,35,70,4,12,18,24,31,44,66,90},len = 15;


struct node
{
    struct node *lc;
    struct node *rc;
    int val;
}*head,*tail,*root;





struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->val = data;
    node->lc = NULL;
    node->rc = NULL;

    return node;
};

void inorder(int inp[],int len)
{
    //The parent of a node is
     

}

void addToQueue(struct node* val)
{
    if(tail==NULL)
        tail = val;
    else
        tail->rc = val;
   // val->rc = NULL;
    tail = val;
    //tail->rc = NULL;
}



struct node* pop()
{
    struct node* ret = head;
    
    if(head == NULL)
    {
         tail = NULL;
         return NULL;
    }
    head = head->rc;
       
    //ret->rc = NULL;
    return ret;
}

void addChildren(struct node* roots)
{
     if(iterator<len)
        {
         struct node* lc = newNode(inp[iterator]);

         roots->lc = lc;
        
         printf("\nLeft %d Iterator %d Parent val %d", lc->val,iterator,roots->val);
         iterator++;
         addToQueue(lc);
        }
        
        if(iterator<len)
        {
         struct node* rc = newNode(inp[iterator]);
         roots->rc = rc;
       
         printf("\nRight %d Iterator %d Parent val %d", rc->val,iterator,roots->val);
         
         iterator++;
         addToQueue(rc);
         
        }

       // popDel();

}




void dispTree()
{
    int a;
   // printf("Hello");
        printf("\n%d", root->val);
       printf("\n%d", root->lc->lc->val);
        printf(" \n%d", root->rc->val);
        //printf("\n%d", root->lc->lc->val);
        //printf(" %d", root->lc->rc->val);
        scanf("%d",&a);

    
}

int main()
{
    root = newNode(inp[0]);
    head = root;
    tail = root;
    //root->val = 25;
    
    addToQueue(root);


    while(iterator<len)
    {
        addChildren(pop());

    }

dispTree();
    
    
    inorder(inp,len);

   return 0;
}