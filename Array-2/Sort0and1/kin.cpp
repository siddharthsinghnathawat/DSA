#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>arr{1,0,0,1,1,1,1};
//sort(arr.begin(),arr.end());
int s=0;
int e=arr.size()-1;
while(s<e){
if(arr[s]==0){
    s++;
}
else if(arr[e]==1){
    e--;
}
else{
    swap(arr[s],arr[e]);
}
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
}