#include<iostream>
#include<algorithm>
using namespace std;

void display(long long arr[], long long N){
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//Method - 1
void inversionCount(long long arr[], long long N){
    long long count = 0;
    for (long long i = 0; i < N; i++)
    {
        for (long long j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[i])
            {
                count += 1;
            }
        }
    }
    cout<< count;
}

int main(){
    long long arr[] = {2, 4, 1, 3, 5};
    inversionCount(arr, 5);
    return 0;
}