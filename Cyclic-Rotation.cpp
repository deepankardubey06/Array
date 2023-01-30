#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotate(int arr[], int n, int times)
{
    display(arr, n);
    while(times > 0){
        for(int i=n-2; i>=0; i--){
            swap(arr[i],arr[i+1]);
        }
        display(arr, n);
        times--;
    }
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    // int A[] = {9, 8, 7, 6, 4, 2, 1, 3}; 
    rotate(A, 5, 2);
    return 0;
}