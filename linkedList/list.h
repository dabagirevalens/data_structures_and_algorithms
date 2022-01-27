
template<typename T>

class Node{
    T data;
    Node* next;

    public :
        Node(T d):data(d), next(NULL){} 
}


class List{
    Node* head;
    Node* tail;


    public:
        List():head(NULL), tail(NULL){}

        void push_front(T data){
            if(head == NULL){
                Node* n = new Node(data);
                head = tail =  n;
                return;
            }else{
                Node* n = new Node(data);
                n-> next = head;
                head = n;
            }
        }

}