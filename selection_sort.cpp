#include "codeblock.h"
void selectionSort (vector <int> &arr){
    int n = arr.size();
    int min = 0;
    for(int i = 0; i < n-1; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i],arr[min]);
        }
    }
    // Time Complexity : O(n^2)
    // Space Complexity : O(1)
}
int main()
{
    vector <int> arr = input();
    selectionSort(arr);
    printAfterSorting(arr);
}