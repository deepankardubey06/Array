#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &nums){
    for(int i: nums){
        cout<<i<<" ";
    }
    cout<<endl;
}

void nextPermutation(vector<int> &nums)
{
    for(int i=0; i<nums.size(); i++){
        for(int j=nums.size()-2; j>=0; j--){
            swap(nums[j],nums[j+1]);
        }
        display(nums);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        for (int k = 1; k < nums.size(); k++)
        {
            swap(nums[k], nums[k - 1]);
        }
        display(nums);
    }
}

int main(){
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);
    return 0;
}