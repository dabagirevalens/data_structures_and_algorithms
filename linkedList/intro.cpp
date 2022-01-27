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
        };

        Node* headNode(){
            return head;
        }

};

void printList(Node* n){
    while(n !=NULL){
        cout << n -> data << endl;
        n = n ->next;
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
        
        printList(myList.headNode());

        return 0;
}