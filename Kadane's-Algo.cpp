#include<iostream>
using namespace std;

//Brute Force -- O(n^2) 
// long long returnSum(int arr[], int lb, int ub){
//     int sum = 0;
//     for(int i=lb; i<=ub; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

// void maxSubarraySum(int arr[], int n){
//     long long maxi = INT_MIN;
//     for(long long i=0; i<n; i++){
//         for(long long j=n-1; j>=i; j--){
//             maxi = max(returnSum(arr, i, j), maxi);
//         }
//     }
//     cout<<maxi;
// }

// Kadane's Algo Implementation Way-1
// void maxSubarraySum(int arr[], int n){
//     long long maxSum = 0;
//     long long currSum = 0;
//     for(long long i=0; i<n; i++){
//         currSum = currSum + arr[i];
//         if(currSum > maxSum){
//             maxSum = currSum;
//         }
//         if(currSum < 0){
//             currSum = 0;
//         }
//     }
//     cout<<maxSum;
// }

// Kadane's Algo Implementation Way-2
// long long maxSubarraySum(int arr[], int n){
//     long long currSum = arr[0];
//     long long maxSum = arr[0];
//     for(long long i=1; i<n; i++){
//         currSum = max((long long)arr[i], currSum + arr[i]);
//         maxSum = max(currSum, maxSum);
//     }
//     return maxSum;
// }
long long maxSubarraySum(int arr[], int n)
{
    long long currSum = arr[0];
    long long maxSum = arr[0];
    for (long long i = 1; i < n; i++)
    {
        currSum = max((long long)arr[i], currSum + arr[i]);
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main(){
    // int arr[] = {-1, -2, -3, -4};
    int Arr[] = {6, -3, -10, 0, 2};
    cout<< maxSubarraySum(Arr, 5);
    return 0;
}