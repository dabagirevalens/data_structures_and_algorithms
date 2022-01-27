#include <iostream>

using namespace std;

class Node {
    public:
        int data;
    Node * next;
    public:
        Node() {
            this -> next = NULL;
        }
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};
class linkedList {
    public:
        Node * head;
    public:
        linkedList() {
            head = NULL;
        }
    void addNewNode(int data) {
        Node * newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node * temp = head;
        while (temp -> next != NULL) {
            temp = temp -> next;
        }

        temp -> next = newNode;
    }

    void insert(int position, int data) {

       if(position == 0){
               if(head == NULL){
                       head = new Node(data);
               }else{
                       Node* n = new Node(data);
                       n->next = head;
                       head = n;
               }

               return;
       }

       Node* temp = head;
       for(int i =1; i<=position-1; i++){
               temp = temp -> next;
       }

       Node* n = new Node(data);
       n->next = temp ->next;
       temp ->next = n;

    }

    Node * headNode() {
        return head;
    }

};

void printList(Node * n) {
    while (n != NULL) {
        cout << n -> data << " ";
        n = n -> next;
    }
}

int main() {

    linkedList myList;
    int n;
    cout << "How many nodes you want?" << endl;
    cin >> n;

    while (n--) {
        myList.addNewNode(n);
    }

    cout << "Before insert : " << endl;
    printList(myList.headNode());
    cout << endl;

    myList.insert(3, 2);
    cout << "After insert : " << endl;

    printList(myList.headNode());

    return 0;
}