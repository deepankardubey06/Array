#include<iostream>
#include<algorithm>
using namespace std;

void find3Numbers(int A[], int n, int X){
    int firstNum = A[0];
    int secondNum = 0;
    int thirdNum = 0;
    sort(A + 1, A + n);
    int residueSum = X - firstNum;
    int lowPtr = 1;
    int highPtr = n-1;
    while(lowPtr < highPtr){
        if((A[lowPtr] + A[highPtr]) > residueSum){
            highPtr--;
        }
        else if ((A[lowPtr] + A[highPtr]) < residueSum){
            lowPtr++;
        }
        else if ((A[lowPtr] + A[highPtr]) == residueSum){
            secondNum = A[lowPtr];
            thirdNum = A[highPtr];
            break;
        }
    }
    cout<<firstNum<<" "<<secondNum<<" "<<thirdNum<<endl;
}

int main(){
    int arr[] = { 1, 4, 45, 6, 10, 8 };
    //  1, 4, 45, 6, 10, 8
    //  1, 4, 6, 8, 10, 45
    find3Numbers(arr, 6, 13); 
    return 0;
}