#include<iostream>
using namespace std;
int main()
{
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sat[3][3]={{9,9,9},{5,6,7},{3,2,1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat[i][j]=mat[i][j]*sat[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}