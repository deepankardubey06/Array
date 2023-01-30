#include<iostream>
using namespace std;

int watchCinema(int arr[], int n, int k){
    int count = 0;
    for(int i=0; i<n; i++){
        bool canWatch = true;
        int people = 0;
        int j = i + 1;
        while(j < n){
            if(arr[j] >= arr[i] && j <= (i + k)){
                canWatch = false;
                break;
            }
            j++;
        }
        if(canWatch == true){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {9, 7, 7, 7, 4};
    cout<< watchCinema(arr, 5, 3);
    return 0;
}