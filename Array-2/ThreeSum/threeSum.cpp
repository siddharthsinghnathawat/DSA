#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{-3,-2,-1,0,1,2,3};
int sum=3;
for(int i=0;i<arr.size()-2;i++){
    for(int j=i+1;j<arr.size()-1;j++){
        for(int k=j+1;k<arr.size();k++){
            if(arr[i]+arr[j]+arr[k]==sum){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            }
            
        }
    }
    cout<<endl;
}
}