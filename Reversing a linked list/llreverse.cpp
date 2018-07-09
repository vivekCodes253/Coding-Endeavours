Node* reverse(Node *head)
{
    Node *temp,*tempold; int ct = 0;
    temp=head->next;
  while(temp!=NULL)
  {
   tempold = head;
   head=temp;
   temp=head->next;
   head->next = tempold;
   if(ct++==0)
    tempold->next = NULL;
  }
  
  return head;
}