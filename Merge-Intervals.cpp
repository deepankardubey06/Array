#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

bool cmp(vector<int> v1, vector<int> v2){
    return v2[0] > v1[0];
}

void display(vector<vector<int>> &intervals){
    for(int i=0; i<intervals.size(); i++){
        cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
    }
}

vector<vector<int>> insertToStack(stack<vector<int>> &s){
    vector<vector<int>> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

void merge(vector<vector<int>> &intervals){
    sort(intervals.begin(), intervals.end(), cmp);
    stack<vector<int>> s;
    s.push(intervals[0]);
    for(int i=1; i<intervals.size(); i++){
        vector<int> temp = s.top();
        if(temp[1] >= intervals[i][0] && temp[1] <= intervals[i][1]){
            vector<int> recent;
            recent.push_back(temp[0]);
            recent.push_back(intervals[i][1]);
            s.pop();
            s.push(recent);
        }
        else if (temp[1] >= intervals[i][0] && temp[1] >= intervals[i][1]){
            continue;
        }
        else{
            s.push(intervals[i]);
        }
    }
    vector<vector<int>> fans = insertToStack(s);
    sort(fans.begin(), fans.end(), cmp);
    display(fans);
}

int main(){
    vector<vector<int>> intervals = { { 1, 3 }, { 2, 6 }, { 8, 10 }, { 15, 18 } };
    // intervals = {{1,4},{2,3}};
    merge(intervals);
    // display(intervals);
    return 0;
}