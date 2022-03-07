
#include <iostream>
using namespace std;

int countOccurance(int n, int d){
    int count = 0;
    while(n !=0){
       if(n%10 == d){
            count ++;
       }
        n = n/10;
    }
    return count;
}

int maxDig(int n){
    if(n<0){
        n = n*(-1);}
    int max = 0;
    for(int d=0; d<=9; d++){
        int cnt = countOccurance(n, d);
        if(cnt > countOccurance(n, max)){
            max = d;
        }
    }
    return max;
}

int main() {

    int r = maxDig(-1544445555);
    cout << r << endl;
	
	return 0;
}

