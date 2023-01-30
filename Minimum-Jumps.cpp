#include<iostream>
using namespace std;

int ans;

void allWays(int arr[], int start, int end, int jumps){
    if(start >= end){
        ans = min(ans, jumps);
        // cout<<jumps<<" ";
        return;
    }
    for(int i=1; i<=arr[start]; i++){
        allWays(arr, start + i, end, jumps + 1);
    }
}

int main(){
    ans = INT_MAX;
    int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    allWays(arr, 0, 9, 0);
    cout<<ans;
    return 0;
}