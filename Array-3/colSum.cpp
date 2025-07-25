#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum;
    vector<vector<int>>matrix{{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<matrix.size();i++){
        sum=0;
        for(int j=0;j<matrix[i].size();j++){
sum=sum+matrix[j][i];
        }
        cout<<"Column wise sum: "<<sum<<endl;
    }
}