
#include <iostream>
using namespace std;


// it is a must to provide number of columns to 2-d array
void print(int arr[][100], int n, int m) {
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<< arr[i][j] << " ";
		}
		cout<<endl;
	}
}

int main() {
	int arr[100][100];

	cout << "Enter number of rows and columns : "<<endl;
	int n, m;
	cin >> n>> m;
	
	// take inputs
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>> arr[i][j];
		}
	}

	print(arr, n, m);

	return 0;
}

