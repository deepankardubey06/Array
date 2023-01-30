#include<iostream>
#include<vector>
using namespace std;

void swapper(vector<int> &arr, int start, int end){
    if(end = start + 1){
        return;
    }
    swap(arr[end],arr[end-1]);
    swapper(arr, start, end - 1);
}

void display(vector<int> &arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    int i = 0;
    while(i < arr.size())
    {
        if (arr[i] == 0 && arr.size() > 1)
        {
            swapper(arr, i, arr.size() - 1);
            arr[i + 1] = 0;
            i += 2;
        }
        else{
            i++;
        }
    }
    display(arr);
    return 0;
}