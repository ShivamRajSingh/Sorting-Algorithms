#include <bits/stdc++.h>
using namespace std;

vector<int> input (){
    int n;
    cout << "Enter size of an array : ";
    cin >> n;
    vector <int> arr(n);
    cout << "Enter Elements : ";
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    return arr;
}

void printAfterSorting (vector<int> arr){
    int n = arr.size();
    cout << "After Sorting : ";
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}