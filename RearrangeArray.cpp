#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[], int n){
    for(int i=0; i<n; i++){
        if((i % 2) == 0){
            if(arr[i] < 0){
                int j = n - 1;
                while(arr[j] < 0 && j > i){
                    j--;
                }
                swap(arr[i], arr[j]);
            }
        }
        if((i % 2) == 1){
            if(arr[i] > 0){
                int j = n - 1;
                while(arr[j] > 0 && j > i){
                    j--;
                }
                swap(arr[i], arr[j]);
            }
        }
    }
    display(arr, n);
}

int main(){
    int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    rearrange(arr, 10);
    // {1, 2, 3, -4, -1, 4}
    // {-1, 2, 3, -4, 1, 4}
    // {-1, -4, 3, 2, 1, 4}
    return 0;
}