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

        if (position == 0) {
            if (head == NULL) {
                head = new Node(data);
            } else {
                Node * n = new Node(data);
                n -> next = head;
                head = n;
            }

            return;
        }

        int s;
        Node * node;
        while (node != NULL) {
            s++;
            node = node -> next;
        }

        if (position > s) {
            cout << "position larger than num of nodes" << endl;
            return;
        } else {

            Node * temp = head;
            for (int i = 1; i <= position - 1; i++) {
                temp = temp -> next;
            }

            Node * n = new Node(data);
            n -> next = temp -> next;
            temp -> next = n;
        }

    }

    bool search(int key) {
        Node * temp = head;
        int i = 1;

        while (temp != NULL) {
            if (head -> data == key) {
                return i;
            }
            temp = temp -> next;
            i++;
        }
        return -1;
    }

    bool searchRec(Node * head, int key) {
        if (head == NULL) {
            return false;
        }

        if (head -> data == key) {
            return true;
        } else {
            return searchRec(head -> next, key);
        }
    }

    int findPos(int pos) {
        if (head == NULL) {
            cout << "invalid operation." << endl;
            return -1;
        }

        int s;
        Node * node;
        while (node != NULL) {
            s++;
            node = node -> next;
        }

        if (pos > s) {
            cout << "position larger than num of nodes" << endl;
            return -1;
        }

        s = 0;
        node = head;
        while (node != NULL) {
            s++;
            if (s == pos) {
                return node -> data;
            }

            node = node -> next;
        }

        return -1;
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
    cout << endl;
    cout << endl;

    cout << "------------------------ print ------------------------ " << endl;
    cout << "Before insert : " << endl;
    printList(myList.headNode());
    cout << endl;
    cout << endl;

    cout << "------------------------ insert ------------------------ " << endl;
    myList.insert(3, 2);
    cout << "After insert : " << endl;

    printList(myList.headNode());
    cout << endl;
    cout << endl;

    cout << "------------------------ search ------------------------ " << endl;
    cout << myList.search(3)<< endl;
    cout << myList.searchRec(myList.headNode(), 10) << endl;
    cout << myList.findPos(0) << endl;
    cout << endl;

    return 0;
}