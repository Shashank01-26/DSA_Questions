#include <iostream>
#include <vector>

using namespace std;

void reversedArray(vector<int>& arr, int start, int end){
    if(start >= end)
        return;

    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reversedArray(arr, start+1, end-1);
}

    void printArray(vector<int>& arr, int size){
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
    }

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    cout<<"\nReversed array->\n";
    reversedArray(arr, 0, n - 1);
    printArray(arr,n);

    return 0;
}