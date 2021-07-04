#include<iostream>
using namespace std;

void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for(int l=0;l<s.length();l++)
    {
        char ch = s[l];
        string ros = s.substr(0,l)+s.substr(l+1);

        permutation(ros,ans+ch);
    }

}
int main()
{
    permutation("abc","");
}