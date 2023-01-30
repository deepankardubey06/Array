#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> &v){
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}

// Approach - 1
void commonEle(vector<vector<int>> &v){
    vector<int> ans;

    for(int i=0; i<v[0].size(); i++){
        bool val = true;
        for(int j=1; j<v.size(); j++){
            if(find(v[j].begin(), v[j].end(), v[0][i]) == v[j].end()){
                val = false;
                break;
            }
        }
        if(val == true){
            if (find(ans.begin(), ans.end(), v[0][i]) == ans.end())
                ans.push_back(v[0][i]);
        }
    }
    display(ans);
}

int main(){
    vector<vector<int>> v = {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9},
    };
    commonEle(v);
    return 0;
}