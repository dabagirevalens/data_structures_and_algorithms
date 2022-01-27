
class List;

template<typename T>
class Node{
    T data;
    Node* next;

    public :
        Node(T d):data(d), next(NULL){} 

        T getData(){
            return data;
        }

        friend class List;
};


class List{
    Node* head;
    Node* tail;


    public:
        List():head(NULL), tail(NULL){}

        Node* begin(){
            return head;
        }

        void push_front(T data){
            if(head == NULL){
                Node* n = new Node(data);
                head = tail =  n;
            }else{
                Node* n = new Node(data);
                n-> next = head;
                head = n;
            }
        }

        void push_back(T data){
            if(head == NULL){
                Node* n = new Node(data);
                head = tail =  n;
            }else{
                Node* n = new Node(data);
                tail-> next = n;
                tail = n;
            }
        }

}