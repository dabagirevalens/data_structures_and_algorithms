
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calcTotalMarks(vector<int> marks){
    int sum = 0;

    for(int i=0; i<marks.size(); i++){
        sum += marks[i];
    }

    return sum;
}

bool compare (pair<string, vector<int>> s1, pair<string, vector<int>> s2){

    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;

    return calcTotalMarks(m1) > calcTotalMarks(m2);
}

int main() {
	
    vector<pair<string, vector<int>>> students_marks ={
        {"valens", {10,7,9}},
        {"ivan", {8,10,9}},
        {"dos", {8,10,10}},
        {"wolf", {10,10,10}}
    };

    sort(students_marks.begin(), students_marks.end(), compare);

    int pos = 1;

    for(auto s: students_marks){
        cout << pos <<". " << s.first << " : " << calcTotalMarks(s.second) << endl;
        pos++;
    }

	return 0;
}

