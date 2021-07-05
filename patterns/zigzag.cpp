#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=r;j++)
        {
            if((i+j)%4==0||i==2&&j%4==0)
            cout<<"* ";
            else
            cout<<"  ";
        }
        
        cout<<endl;
    }
}