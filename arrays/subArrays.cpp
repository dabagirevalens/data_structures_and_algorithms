#include <iostream>
using namespace std;

// Problem: Print all sub arrays for the given array
// => time complexity of O(N^3)
void printAllSubArrays( int * arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++)
                cout<< arr[k] <<",";
            cout << endl;
        }
    }
}

// Find the largest sum of sub array in the given array
// Brute Force => time complexity of O(N^3)
int largestSubArraySum( int * arr, int n){
    
    int largest_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            int subArraySum = 0;

            for(int k=i; k<=j; k++){
                subArraySum += arr[k];
            }

            //check if the subarray sum > largest_sum
            largest_sum = max(largest_sum, subArraySum);
        }
    }

    return largest_sum;
}

// Prefix sum => time complexity of O(N^2)
int usingPrefixSum( int * arr, int n){
    
    // prefix sums
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            int subArraySum = i>0 ? prefix[j] - prefix[i-1]: prefix[j];

            //check if the subarray sum > largest_sum
            largest_sum = max(largest_sum, subArraySum);
        }
    }

    return largest_sum;
}

int main () {

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // printAllSubArrays(arr, n);

    int largestSum = largestSubArraySum(arr, n);
    cout << "The largest sum of sub array is : " << largestSum << endl;

    return 0;
}