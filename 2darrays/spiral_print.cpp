
#include <iostream>
using namespace std;

// Problem : Print 2d array in Spiral Order

void print(int arr[][10], int n, int m) {
	
    // 4 variables
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    // Outer Loop(Traverse array boundary)

    while(startCol <= endCol && startRow <=endRow){

        // start Row
        for(int col=startCol; col<=endCol; col++){
            cout << arr[startRow][col] << " ";
        }

        // end col
        for(int row = startRow + 1; row <=endRow; row++){
            cout << arr[row][endCol] << " ";
        }

        // end row
        for(int col = endCol-1; col >=startCol; col--){
            if(startRow==endRow){
                break;
            }
            cout << arr[endRow][col] << " ";
        }

        // start col
        for(int row = endRow - 1; row >=startRow + 1; row--){
            // Avoid duplicate printing of elements.
            if(startCol==endCol){
                break;
            }
            cout << arr[row][startCol] << " ";
        }

        // Update variables to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }

}

int main() {
	
    int arr[][10] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = 4, m=4;

    print(arr, n, m);

	return 0;
}

