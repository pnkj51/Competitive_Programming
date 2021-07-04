#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ans; 

void permute(vector<int> &a , int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return;
    }
    for(int i=0;i<a.size();i++)
    {
        if(i != idx && a[i]==a[idx])
        continue;
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}
void permute_for_duplicates(vector<int> &a , int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return;
    }
    for(int i=0;i<a.size();i++)
    {
        if(i != idx && a[i]==a[idx])
        continue;
        swap(a[i],a[idx]);
        permute_for_duplicates(a,idx+1);
    }
    return;
}
/*
sort(num.begin(),num.end());
do{
    ans.push_back(num);
}
while(next_permutation(num.begin(),num.end()));
*/
int main()
{
    int n; cin>>n;
     vector<int> a(n);
     for (auto &i: a)
        cin>>i;
    //permute(a,0);
    sort(a.begin(),a.end());
    do{
    ans.push_back(a);
    }
    while(next_permutation(a.begin(),a.end()));
    for(auto v: ans)
    {
        for (auto i: v)
        cout<<i<<" ";
        cout<<"\n"; 
    }
}