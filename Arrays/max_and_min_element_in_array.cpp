#include <iostream>
#include <vector>
using namespace std;
 int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i] > max_val)
            max_val = arr[i];

        if(arr[i] < min_val)
            min_val = arr[i];    
    }
    cout<<"Max value: "<<max_val<<"\n"<<"Min value: "<<min_val;

    return 0;
 }