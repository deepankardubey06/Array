#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> v){
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void display2(vector<vector<int>> &v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

void sortedMatrix(int N, vector<vector<int>> &Mat){
    vector<int> v;
    int index = 0;

    for(int i=0; i < Mat.size(); i++){
        for(int j=0; j < Mat[i].size(); j++){
            int ele = Mat[i][j];
            v.push_back(ele);
        }
    }
    sort(v.begin(), v.end());
    // display(v);
    vector<vector<int>> finalans;
    int i = 0;
    while (i <= v.size() - 1)
    {
        int c = 1;
        vector<int> tem;
        while( c <= N){
            tem.push_back(v[i]);
            i++;
            c++;
        }
        finalans.push_back(tem);
    }
    display2(finalans);
}

int main(){
    vector<vector<int>> Mat = {
        { 10, 20, 30, 40},
        { 15, 25, 35, 45},
        { 27, 29, 37, 48},
        { 32, 33, 39, 50}
    };
    // display(Mat[0]);
    sortedMatrix(4, Mat);
    return 0;
}