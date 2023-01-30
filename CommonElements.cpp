#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> v){
    for(int i: v){
        cout<<i<<" ";
    }
}

void commonElements(int A[], int B[], int C[], int n1, int n2, int n3){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    int i=0, j=0;
    while(i < n1 && j < n2){
        if(B[j] > A[i]){
            i++;
        }
        else if(A[i] > B[j]){
            j++;
        }
        else{
            
            v1.push_back(A[i]);
            i++;
            j++;
        }
    }
    i = 0, j = 0;
    while (i < n2 && j < n3)
    {
        if (B[i] > C[j])
        {
            j++;
        }
        else if (C[j] > B[i])
        {
            i++;
        }
        else
        {
            
            v2.push_back(C[j]);
            i++;
            j++;
        }
    }
    i = 0, j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            i++;
        }
        else if (v2[j] < v1[i])
        {
            j++;
        }
        else
        {
            if(find(v3.begin(), v3.end(), v1[i]) == v3.end()){
                v3.push_back(v1[i]);
            }
            i++;
            j++;
        }
    }
    display(v3);
}

int main(){
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    commonElements(A, B, C, 6, 5, 8);
    return 0;
}