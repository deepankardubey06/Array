#include<iostream>
#include<vector>
using namespace std;

long arrayManipulation(int n, vector<vector<int>> queries)
{
    vector<vector<int>> v;
    long maxi = INT_MIN;
    for (int i = 0; i < queries.size(); i++)
    {
        v.push_back(vector<int>(n, 0));
    }
    int count = 0;
    for (int i = 0; i < queries.size(); i++)
    {
        int start = queries[i][0] - 1;
        int end = queries[i][1] - 1;
        int val = queries[i][2];
        for (int j = count; j < 3; j++)
        {
            for (int k = start; k <= end; k++)
            {
                v[j][k] += val;
                if (v[j][k] > maxi)
                {
                    maxi = v[j][k];
                }
            }
        }
        count++;
    }
    return maxi;
}

int main(){
    return 0;
}