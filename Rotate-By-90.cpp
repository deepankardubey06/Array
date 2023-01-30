#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>> &v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

// Method-1 With Extra Space
// void rotateByNinety(vector<vector<int>> &v)
// {
//     vector<vector<int>> rotatedVec(v.size(), vector<int>(v.size(), 0));
//     // display(rotatedVec);
//     int Right = v.size() - 1;
//     int Top = 0;
//     int Down = v.size() - 1;

//     for(int i=0; i<v.size(); i++){
//         for(int j = v[i].size() - 1; j >= 0; j--){
//             rotatedVec[Down][Right] = v[i][j];
//             Down--;        
//         }
//         Right--;
//         Down = v.size() - 1;
//     }
//     display(rotatedVec);
// }

//Method-2 With No Extra Space
void rotateByNinety(vector<vector<int>> &v)
{
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<=i; j++){
            swap(v[i][j], v[j][i]);
        }
    }
    // display(v);
    int Left = 0;
    int Right = v.size() - 1;
    while(Left < Right){
        for(int i=0; i<v.size(); i++){
            swap(v[i][Left], v[i][Right]);
        }
        Left++;
        Right--;
    }

    display(v);
}

int main(){
    vector<vector<int>> v = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    // Test-Case-1
    // v = {
    //     {1, 2},
    //     {3, 4}
    // };
    // Test-Case-2
    // v = {{1, 2, 3, 4},
    //      {5, 6, 7, 8},
    //      {9, 10, 11, 12},
    //      {13, 14, 15, 16}};

    rotateByNinety(v);
    return 0;
}