#include<iostream>
using namespace std;

void sub(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string ros = s.substr(1);

    sub(ros,ans);
    sub(ros,ans+ch);
}

void subAscii(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subAscii(ros,ans);
    subAscii(ros,ans+ch);
    subAscii(ros,ans+to_string(code));
}

int main()
{
    sub("abc","");
    cout<<endl;
    subAscii("ab","");
}