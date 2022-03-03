#include <iostream>
using namespace std;

struct Node{
    Node* prev;
    int data;
    Node* next;

    public:
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};


struct Doubly{
    public:
        Node* head = NULL;

        Doubly(){
            this->head = NULL;
        }

        void insertAtBeginning(int data){
            Node* n = new Node(data);

            if(head==NULL){
                head = n;
            }else{
                n->next = head;
                n->prev = NULL;
                head->prev = n;
                head = n;
            }
        }

        void insertAtEnd(int data){
            Node* n = new Node(data);

            if(head==NULL){
                head = n;
            }else{
                Node* last = head;
                while (last->next !=NULL){
                    last = last->next;
                }
                last ->next = n;
                n -> prev = last;
            }
        }

        void insertAfter(Node* prevNode, int data){

            if(prevNode==NULL){
                cout << "Previous node can not be null" <<endl;
            }else{
                Node *n = new Node(data);
                n->next = prevNode->next;
                prevNode->next = n;
                n->prev = prevNode;

                if (n->next != NULL){
                    n->next->prev = n;
                }
            }
        }

        void deleteNode(Node* del_node ){
            if (head == NULL || del_node == NULL){
                return;
            }
            if(head == del_node){
                head = del_node->next;
            }
            if(del_node->next !=NULL){
                del_node->next->prev = del_node->prev;
            }
            if(del_node->prev !=NULL){
                del_node->prev->next = del_node->next;
            }
            free(del_node);
        }

        void display() {
            if(head == NULL){
                cout << "Your list is empty" << endl;
            }else{
                Node* c = head;
                while(c!=NULL){
                    cout << c->data << " ";
                    c = c->next;
                }
                cout << endl;
            }
        }

        void displayFromEnd () {
            if(head == NULL){
                cout << "Your list is empty" << endl;
            }else{
                Node* tail = head;
                while(tail->next !=NULL){
                    tail = tail->next;
                }

                while(tail !=NULL){
                    cout << tail->data<< " ";
                    tail = tail -> prev;
                }
            }
        }
        Node * findNode(int pos){
            Node* current = head;
            int size = 1;
            while (current->next !=NULL){
                current = current->next;
                size++;
            }

            if(pos>size){
                cout << "No node present at that position" <<endl;
            }
            Node* last = head;

            while (pos>1){
                last = last->next;
                pos--;
            }
            return last;
        }

};


int main(){

    Doubly d;
    d.insertAtBeginning(1);
    d.insertAtBeginning(2);
    d.deleteNode(d.findNode(2));
    d.insertAtEnd(3);
    d.insertAfter(d.findNode(2), 4);

    d.display();
    d.displayFromEnd();
}
