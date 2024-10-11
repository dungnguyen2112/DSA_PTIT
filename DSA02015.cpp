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
int max_len;
map<string, bool> mp;

bool isValid(string s)
{
    if (s.length() < 2)
        return false;
    stack<int> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
            st.push(1);
        else if (s[i] == ')')
        {
            if (st.empty())
                return false;
            st.pop();
        }
    }
    return st.empty();
}

void Try(string s, int ind)
{
    if (s.length() < max_len)
        return;
    if (isValid(s))
    {
        if (s.length() > max_len)
        {
            max_len = s.length();
            mp.clear();
        }
        mp[s] = true;
        return;
    }
    for (int i = ind; i < s.length(); ++i)
    {
        if (s[i] == '(' || s[i] == ')')
        {
            string tmp = s;
            tmp.erase(i, 1);
            Try(tmp, i);
        }
    }
}

void testCase()
{
    string s;
    cin >> s;
    max_len = 0;
    mp.clear();
    Try(s, 0);
    if (mp.empty())
        cout << -1;
    else
    {
        for (auto i : mp)
        {
            cout << i.first << " ";
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}