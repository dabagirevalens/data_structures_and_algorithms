#include<iostream>
using namespace std;

template<typename T>
class Vector{

    // Data members
    T *arr;
    int current_size;
    int max_size;

    // Constructor, Desctructor, Methods
    public:
    
        Vector(int ms = 1){
            current_size = 0;
            max_size = ms;
            arr = new T[max_size];
        }

        void push_back(const T d){

            // Two cases

            if(current_size == max_size){
                // create new array and delete the old one, double the capacity

                T* oldArr = arr;
                max_size *=2 ;
                arr = new T[max_size];

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

        T front() const{
            return arr[0];
        }

        T back() const{
            return arr[current_size-1];
        }

        T at(int i) const{
            return arr[i];
        }

        T operator[](const int i) const{
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