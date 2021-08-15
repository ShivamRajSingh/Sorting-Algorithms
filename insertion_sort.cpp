#include "codeblock.h"

void insertionSort (vector <int> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j > -1 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    // Time Complexity : Best Case : O(n) i.e. Array is already in ascending order
                    //   Worst Case : O(n^2) i.e. Array is in descending order

    // Space Complexity : O(1)
}

int main(){
    vector <int> arr = input();
    insertionSort(arr);
    printAfterSorting(arr);
}