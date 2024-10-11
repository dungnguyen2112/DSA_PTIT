#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

int check(char c)
{
    if (c == '^')
        return 4;
    else if (c == '*' || c == '/')
        return 3;
    else if (c == '+' || c == '-')
        return 2;
    return 1;
}

int main()
{
    int x;
    cin >> x;
    while(x--){
        string s;
    cin >> s;
    stack<char> st;
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            while (!st.empty() && check(st.top()) >= check(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
            res += s[i];
    }
    while (!st.empty())
    {
        if (st.top() != '(')
            res += st.top();
        st.pop();
    }
    cout << res << endl;
    }
    
}