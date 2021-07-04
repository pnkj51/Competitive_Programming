#include<iostream>
using namespace std;

bool isSafe(int** arr ,int x,int y ,int n)
{
    for(int l=0;l<x;l++)
    {
        if(arr[l][y]==1)
        {
            return false;
        }
    }
    int r=x;int c=y;
    while(r>=0&&c>=0)
    {
        if(arr[r][c]==1)
        {
            return false;
        }
        r--;
        c--;
    }
    r=x;
    c=y;
    while(r>=0&&c<n)
    {
        if(arr[r][c]==1)
        {
            return false;
        }
        r--;
        c++;
    }
    return true;

}

bool nQueen(int** arr,int x,int n)
{
    if(x>=n)
    {
        return true;
    }
    for(int l=0;l<n;l++)
    {
        if(isSafe(arr,x,l,n))
        {
            arr[x][l]=1;

            if(nQueen(arr,x+1,n))
            {
                return true;
            }

            arr[x][l]==0; //backtracking
        }
    }
    return false;
}


int main()
{
    int n;cin>>n;

    int** arr = new int*[n];
    for(int l=0;l<n;l++)
    {
        arr[l] = new int[n];
        for(int j=0;j<n;j++)
        {
            arr[l][j]=0;
        }
    }

    if(nQueen(arr,0,n))
    {
         for(int l=0;l<n;l++)
        {
            for(int k=0;k<n;k++)
            {
                cout<<arr[l][k]<<" ";
            }
            cout<<"\n";
        }
    }

}