#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5};
    vector<int>srr(arr.size());
    int n;
    cout<<"Enter the key: ";
    cin>>n;
    for(int i=0;i<arr.size();i++){
        int index=(i+n)%arr.size();
    srr[index]=arr[i];
    }
    for(int i=0;i<arr.size();i++){
        cout<<srr[i]<<" ";
    }
}