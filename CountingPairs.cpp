#include<iostream>
using namespace std;

int getPairsCount(int arr[], int n, int k){
    // 1   1   5   7 
    //low     high
    int count = 0;
    int low = 0;
    int high = n-1;
    while(low < high){
        if((arr[low] + arr[high]) == k){
            cout<<arr[low] <<" "<<arr[high]<<endl;
            count += 1;
            low += 1;
        }
        else if(arr[low] + arr[high] > k){
            high -= 1;
        }
        else {
            low += 1;
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 5, 7, 1};
    cout<< getPairsCount(arr, 4, 6);
    return 0;
}