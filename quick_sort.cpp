#include "codeblock.h"

int partition (vector<int>&arr, int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 

void quickSort( vector <int> &arr, int lowerBound , int upperBound){
    int loc;
    if(lowerBound < upperBound){
        loc = partition(arr, lowerBound, upperBound);
        quickSort(arr, lowerBound, loc-1);
        quickSort(arr, loc+1, upperBound);
    }
}

int main()
{
    vector <int> arr = input();
    quickSort(arr,0,arr.size()-1);
    printAfterSorting(arr);
    cout << "\n";
}

// Time Complexity : Best Case : O(nlogn)
                    // Worst Case : O(n^2)
// Space complexity : O(1)