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

string check(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            if (st.top() != 0 && s[st.top() - 1] == '-')
            {
                for (int j = st.top(); j < i; j++)
                {
                    if (s[j] == '+')
                    {
                        s[j] = '-';
                    }
                    else if (s[j] == '-')
                    {
                        s[j] = '+';
                    }
                }
            }
            st.pop();
        }
    }
    string tmp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '(' && s[i] != ')')
        {
            tmp += s[i];
        }
    }
    return tmp;
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (check(s1) == check(s2))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
