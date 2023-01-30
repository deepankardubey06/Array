#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findMinDiff(vector<long long> a, long long n, long long m)
{
    long long low = 0;
    long long high = low + (m-1);
    long long mini = INT_MAX;
    sort(a.begin(), a.end());
    while(high < n){
        mini = min(mini, a[high] - a[low]);
        // cout << a[high] - a[low] << endl;
        low++;
        high = low + (m - 1);
    }
    cout<<mini;
}

int main(){
    vector<long long> a = { 3, 4, 1, 9, 56, 7, 9, 12}; 
    findMinDiff(a, 8, 5);
    return 0;
}