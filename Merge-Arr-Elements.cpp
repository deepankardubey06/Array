// Without Extra Space
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Method - 1
// void merge(int arr1[], int arr2[], int n, int m){
//     // {0, 1, 2, 3}
//     // {7, 5, 6, 8, 9}
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             if(arr1[j] > arr2[i]){
//                 swap(arr1[j], arr2[i]);
//             }
//         }
//     }
//     sort(arr2, arr2 + m);
//     display(arr1, n);
//     display(arr2, m);
// }

// Method-2
// void merge(int arr1[], int arr2[], int n, int m){
//     for(int i=0; i<n; i++){
//         if(arr1[i] > arr2[0]){
//             swap(arr1[i], arr2[0]);
//         }
//         sort(arr2, arr2 + m);
//     }
//     display(arr1, n);
//     display(arr2, m);
// }

void merge(int arr1[], int arr2[], int n, int m){
    int gap = ceil((float)(n + m) / (float)2);
    while(gap > 0){
        int start = 0;
        int end = gap; 
        while(end < m){
            
        }
    }
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    // merge(arr1, arr2, 4, 5);
    int f = ceil( (float)(5+3) / (float)2);
    cout<<f;
    return 0;
}