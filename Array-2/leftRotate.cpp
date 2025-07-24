#include<iostream>
#include<vector>
using namespace std;
vector<int>left(vector<int>arr,int key){
    int n=arr.size();
vector<int>result(n);
for(int i=n-1;i>=0;i--){
    int index=(i+key)%n;
    result[index]=arr[i];
}
return result;
}
int main()
{
 vector<int>arr{1,2,3,4,5};
int key;
cout<<"Enter the key: ";
cin>>key;
vector<int>result=left(arr,key);
for(int a:result){
    cout<<a<<" ";
}
cout<<endl;

}
