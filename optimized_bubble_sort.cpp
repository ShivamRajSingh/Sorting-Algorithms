#include "codeblock.h"

void bubbleSort (vector <int> &arr){
    int n = arr.size();
    bool flag = false;
    for(int i =0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
    }
}


int main(){
    vector <int> arr = input();
    printBeforeSorting(arr);
    bubbleSort(arr);
    printAfterSorting(arr);
}