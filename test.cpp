#include<iostream>
using namespace std;

int main() {

    string s;
    string f;

   bool x;
   
   int t;
   cin >> t;
   
   pair<string, string> testCases[t];

   for(int i=0; i<t; i++){
	   cin >> testCases[i].first;
       cin >> testCases[i].second;
   }

   for(int i=0; i<t; i++){
      int min = 0;
       s = testCases[i].first;
       f = testCases[i].second;
    do {
      for (int i = 0; i < s.size(); i++) {
         for (int j = 0; j < f.size(); j++) {
            x = s[i] == f[j];
            if (x) {
               j = f.size();
            }
         }
         if (!x) {
            s[i] = s[i] - 1;
			min ++;
         }
      }
   } while (!x);
   cout << "Case #"<<i << ": " << min << endl;
   }

   return 0;
}