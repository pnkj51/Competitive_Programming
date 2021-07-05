#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++)
        {
            cout<<"  ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<"* ";
        }
        for(int j=1;j<=i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=r;i>=1;i--){
        for(int j=1;j<=r-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=i-1;j++)
        {
            cout<<"* sd";
        }
        cout<<endl;
    }
}