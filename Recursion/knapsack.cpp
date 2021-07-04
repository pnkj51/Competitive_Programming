#include<iostream>
using namespace std;

int knapsack(int val[],int wt[],int n,int W)
{
    int n1,n2;

    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(val,wt,n-1,W);
    }
    n1= knapsack(val,wt,n-1,W-wt[n-1])+val[n-1];
    n2= knapsack(val,wt,n-1,W);
    return  max(n1,n2);
}

int main()
{
    int wt[] = {10,20,30};
    int val[]= {100,50,150};
    int W=50;
    cout<<knapsack(val,wt,3,W);
}