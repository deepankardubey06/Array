#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Approach - 1
int findMedian(int arr1[], int arr2[], int n, int m){
    int arr3[n + m];
    int ptr1 = 0, ptr2 = 0, ptr3 = 0;
    while(ptr1 < n && ptr2 < m){
        if(arr2[ptr2] < arr1[ptr1]){
            arr3[ptr3++] = arr2[ptr2++];
        }
        else{
            arr3[ptr3++] = arr1[ptr1++];
        }
    }
    while(ptr1 < n){
        arr3[ptr3++] = arr1[ptr1++];
    } 
    while(ptr2 < m){
        arr3[ptr3++] = arr2[ptr2++];
    }
    display(arr3, n + m);
    if(((n + m) % 2) == 1){
        return arr3[(n + m) / 2];
    }
    int index = (n + m) / 2;
    int fnum = arr3[index];
    int snum = arr3[index - 1];
    return (fnum + snum) / 2;
}

int main(){
    int ar1[] = {2, 3, 5, 8};
    int ar2[] = {10, 12, 14, 16, 18, 20};
    cout<<findMedian(ar1, ar2, 4, 6);
    return 0;
}