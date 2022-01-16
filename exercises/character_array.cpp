#include <iostream>
#include <cstring>
using namespace std;


 char* chars(char * ch, int start, int len){

    if (start < 0 || len <= 0 || (start + len) > strlen(ch)){
        return NULL;
    }        

    char* newArr = new char [(start+len)];

    for(int i=start, j=0; j<len; i++, j++){
        newArr[j] = ch[i];
    }

    return newArr;
}

int main(){

    cout << "enter number of chars" << endl;
    int n;
    cin >> n;
    cin.get();

    char myArr[n];

    for(int i=0; i<n; i++){
        myArr[i] = cin.get();
    }
    
    myArr[n] = '\0';

    cin.get();
    
     int start, len;
     cout << "enter the start pos and len" << endl;
     cin >> start >> len;

     char *result = chars(myArr, start, len);
     
     if(result){

         int m;
         if(start>len){
             m = start - len;
         } else{
             m = len - start;
         }
         cout << "{" ;
         for(int i=0; i < m; i++){
             if(i== m -1) {
                 cout << "'" << result[i] << "'";
             } else
             {
                 cout << "'" << result[i] << "',";
             }
         }
         cout << "}" <<endl ;
     }

     return 0;
 }
