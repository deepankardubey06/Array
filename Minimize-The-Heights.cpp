#include<iostream>
#include<algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k){
    sort(arr, arr + n);
    
    for(int i=0; i<n/2; i++){
        arr[i] += k;
    }
    for(int i=n/2; i<n; i++){
        arr[i] -= k;
    }
    int mini = *min_element(arr, arr + n);
    int maxi = *max_element(arr, arr + n);
    return maxi - mini;
}

int main(){
    int arr[] = {3, 9, 12, 16, 20};
    cout<< getMinDiff(arr, 5, 3);
    return 0;
}