#include<iostream>
#include<vector>
using namespace std;

void arrangeEle(vector<int> &num){
    int start = 0;
    int end = num.size() - 1;
    while(start < end){
        if(num[start] < 0){
            start++;
        }
        else if (num[end] > 0){
            end--;
        }
        else{
            int temp = num[start];
            num[start] = num[end];
            num[end] = temp;
        }
    }

}

void display(vector<int> &num){
    for(int i: num){
        cout<<i<<" ";
    }
    cout<<endl;
}

    int main()
{
    vector<int> nums = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    nums = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
    arrangeEle(nums);
    display(nums);
    return 0;
}