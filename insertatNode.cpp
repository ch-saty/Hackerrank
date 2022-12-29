
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
   if(head==NULL){
       SinglyLinkedListNode* n= new SinglyLinkedListNode(data);
       return n;
   }
   
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* n= new SinglyLinkedListNode(data);
   
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
    return head;
  
        
}
