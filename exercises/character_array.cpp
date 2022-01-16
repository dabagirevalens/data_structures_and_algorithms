#include <iostream>
#include <cstring>
using namespace std;


 char* chars(char * ch, int start, int len){

    if (start < 0 || len <= 0 || (start + len) > strlen(ch))
        return NULL;

    char* newArr = new char [(start+len)];

    for(int i=start, j=0; j<len; i++, j++){
        newArr[j] = ch[i];
    }

    return newArr;
}

int main(){

     char myArr[] = {'a', 'b', 'c', '\0'};

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
