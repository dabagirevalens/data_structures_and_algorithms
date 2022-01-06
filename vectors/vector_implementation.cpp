#include<iostream>
using namespace std;

class Vector{

    // Data members
    int *arr;
    int current_size;
    int max_size;

    // Constructor, Desctructor, Methods
    public:
        Vector(){
            current_size = 0;
            max_size = 1;
            arr = new int[max_size];
        }

        void push_back(int d){

            // Two cases

            if(current_size == max_size){

            } 
        }#include<iostream>
using namespace std;

class Vector{

    // Data members
    int *arr;
    int current_size;
    int max_size;

    // Constructor, Desctructor, Methods
    public:
        Vector(int max = 1){
            current_size = 0;
            max_size = max;
            arr = new int[max_size];
        }

        void push_back(const int d){

            // Two cases

            if(current_size == max_size){
                // create new array and delete the old one, double the capacity

                int* oldArr = arr;
                max_size *=2 ;
                arr = new int[max_size];

                // copy elements from old array
                for(int i=0; i< current_size; i++){
                    arr[i] = oldArr[i];
                }

                // delete the old array
                delete [] oldArr;
            }
            arr[current_size] = d;
            current_size++;
        }

        void pop_back(){
            if(current_size>=0)
                current_size--;
        }

        bool isEmpty(){
            return current_size == 0;
        }

        // Front, Back, At(), []

        int front() const{
            return arr[0];
        }

        int back() const{
            return arr[current_size-1];
        }

        int at(int i) const{
            return arr[i];
        }

        int operator[](const int i) const{
            return arr[i];
        }

        int size() const{
            return current_size;
        }
        
        int capacity(){
            return max_size;
        }

        void print(){
            for(int i=0; i<current_size; i++)
                cout << arr[i] << " ";
            cout << endl;
        }


};

int main(){

    Vector v(5);

    // check if the vector is empty
    cout << "is the vector empty : " << v.isEmpty() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    v.pop_back();

    cout << v.size() << endl; //5
    cout << v.capacity() << endl; //8
    cout << v.at(2) << endl; // 3
    cout << v.front() << endl; // 3
    cout << v.back() << endl; // 5

    // print all elements
    v.print();

    // or

    cout << "using at() fun." << endl;
    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    
    cout << "using operator[]() fun." << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;


    return 0;
}

}

int main(){

    Vector v;

    return 0;
}