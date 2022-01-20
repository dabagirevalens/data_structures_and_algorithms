#include<iostream>
using namespace std;

pair<int*, int> common_elements(int first[],  int last[], int sf, int ss){

    if(sf==0 | ss == 0 | !first | !last){
        return {NULL, 0};
    }

    int minVal = sf > ss ? ss : sf;
    int* auxFirst, *auxLast;

    if(minVal == sf){
        auxFirst = first;
        auxLast = last;
    }else{
        auxFirst = last;
        auxLast = first;
    }

    int* auxArray  = new int[minVal];
    int x = 0;

    int ls, sm;
    if(sf>ss){
        ls = sf;
        sm = ss;
    }else{
        ls = ss;
        sm = sf;
    }

    for(int i = 0; i< sm; i++){
        for(int j = 0; j< ls; j++){
            if(auxFirst[i] == auxLast[j]){
                auxArray[x] = auxFirst[i];
                x++;
            }
        }
    }

    int* finalArray = new int[x];
    for(int y = 0; y< x; y++){
        finalArray[y] = auxArray[y];
    }

    return {finalArray, x};

}

int main(){

    int a[] = {1, 8, 3, 2};
    int b[] = {4, 2, 6, 1};

    int sf = sizeof (a)/ sizeof (a[0]);
    int ss =  sizeof (b)/ sizeof (b[0]);

    pair<int*,int> result = common_elements(a, b, sf,ss);

    int size = result.second;

    cout << "{";
        for(int i=0; i < size; i++){
           if(i == size-1){
               cout << result.first[i];
           }else{
                cout << result.first[i] << ",";
            }
        }
    cout << "}" << endl;

    return 0;
}