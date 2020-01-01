void sortList(Node** head)
{
    if(*head)
    {
        Node *prev = *head, *curr = (*head)->next;
        
        while(curr){
            
            if(curr->data < prev->data){
                
                prev->next = curr->next;
                curr->next = (*head);
                (*head) = curr;
                curr = prev;
            }
            else
                prev = curr;
            curr = curr->next;
        }
    
    }
}