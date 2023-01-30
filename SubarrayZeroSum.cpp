#include<iostream>
#include<vector>
using namespace std;

void subArrayExists(int arr[], int n){
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if(sum == 0){
                cout<<"Yes"<<endl;
                break;
            }
        }
    }
}

int main(){
    int arr[] = {4, 2, 0, 1, 6};
    subArrayExists(arr, 5);
    return 0;
}