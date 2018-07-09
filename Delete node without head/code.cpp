void deleteNode(Node *node)
{

   
  while(1)
    {
        node->data = node->next->data;
        if(node->next->next == NULL)
        {   
            node->next = NULL;
            break;
        }
        else
            node=node->next;
        
    }
}