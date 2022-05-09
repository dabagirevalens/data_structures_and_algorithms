#include <iostream>
using namespace std;

class AdjecencyMatrix {
    private:
        int **matrix;
        int nodes;

    public:
        AdjecencyMatrix(int nodes){
            this->nodes = nodes;
            matrix = new int*[nodes];

            for(int i = 0; i < nodes; i++){
                matrix[i] = new int[nodes];
                for(int j = 0; j < nodes; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        void addEdge(int origin, int destination){
            if(origin < 0 || destination < 0 || origin > nodes || destination > nodes){
                cout << "Invalid node" << endl;
                return;
            }
            matrix[origin][destination] = 1;
            matrix[destination][origin] = 1;
        }

        void deleteEdge(int origin, int destination){
            if(origin < 0 || destination < 0 || origin > nodes || destination > nodes){
                cout << "Invalid node" << endl;
                return;
            }
            matrix[origin][destination] = 0;
            matrix[destination][origin] = 0;
        }

        void display(){
            for(int i = 0; i < nodes; i++){
                for(int j = 0; j < nodes; j++){
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }

};

int main(){

    AdjecencyMatrix am(5);

    am.display();
    
    cout << endl;

    am.addEdge(0, 1);
    am.addEdge(0, 2);
    am.display();

    am.deleteEdge(0, 1);

    cout << endl;
    am.display();

    return 0;
}