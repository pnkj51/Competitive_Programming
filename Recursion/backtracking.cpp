#include<iostream>
using namespace std;

bool isSafe(int** a,int x,int y,int n)
{
    if(x<n&&y<n&&a[x][y]==1)
    return true;
    return false;
}

bool ratInMaze(int** a,int x,int y,int n,int** sol)
{
    if(x==n-1&& y ==n-1)
    {
        sol[x][y]=1;
        return true;
    }

    if(isSafe(a,x,y,n))
    {
        sol[x][y]=1;
        if(ratInMaze(a,x+1,y,n,sol))
        {
            return true;
        }
        if(ratInMaze(a,x,y+1,n,sol))
        {
            return true;
        }
        sol[x][y]=0; //backtracking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int l=0;l<n;l++)
    {
        arr[l] = new int [n];
    }
    for(int l=0;l<n;l++)
    {
        for(int k=0;k<n;k++)
        {
            cin>>arr[l][k];
        }
    }

    int** solArr = new int*[n];
    for(int l=0;l<n;l++)
    {
        solArr[l]= new int[n];
        for (int  i = 0; i < n; i++)
        {
            solArr[l][i]=0;
        }
        
    }

    if(ratInMaze(arr,0,0,n,solArr))
    {
        for(int l=0;l<n;l++)
        {
            for(int k=0;k<n;k++)
            {
                cout<<solArr[l][k]<<" ";
            }
            cout<<"\n";
        }

    }



}