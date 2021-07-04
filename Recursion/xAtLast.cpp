#include<iostream>
using namespace std;

string xAtLast(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = xAtLast(s.substr(1));
    if(ch=='x')
    {
        return xAtLast(s.substr(1))+'x';
        //return ans+ch;
    }
    // return ch+ans;
    return ch+xAtLast(s.substr(1));

}
int main()
{
    cout<<xAtLast("ksdxxkdxjsxwf");
}