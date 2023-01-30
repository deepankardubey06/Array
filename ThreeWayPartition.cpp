#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &array)
{
    for(int i: array){
        cout<<i<<" ";
    }
    cout<<endl;
}

void threeWayPartition(vector<int> &array, int a, int b)
{
    int begin = 0;
    int end = array.size() - 1;
    while(begin < end){
        if(array[begin] < a){
            begin++;
        }
        else if(array[begin] > b){
            swap(array[begin], array[end]);
            end--;
        }
    }
}

int main(){
    vector<int> v = {6, 9, 11, 3, 8, 5, 19, 21};
    threeWayPartition(v, 7, 12);
    display(v);
    return 0;
}