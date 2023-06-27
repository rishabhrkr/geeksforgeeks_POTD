class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        set<int> elements;
        
        while(head1 != nullptr){
            elements.insert(head1 -> data);
            head1 = head1 -> next;
        }
        while(head2 != nullptr){
            elements.insert(head2 -> data);
            head2 = head2 -> next;
        }
            
        Node * current = nullptr;
        Node * head;
        
        for(auto i : elements){
            Node * newnode = new Node(i);
            if(current == nullptr){
                head = newnode;
                current = head;
            }
            else{
                current -> next = newnode;
                current = newnode;
            }
        }
        
        return head;
    }
};
