#include <bits/stdc++.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream> 
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

int xk[8] = {-1, -1, 1, 1, 2, 2, -2, -2};
int yk[8] = {2, -2, 2, -2, 1, -1, 1, -1};
struct cmp
{
    bool operator()(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
    {
        return a.second.second > b.second.second;
    }
};

void Try(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    bool visisted[10][10] = {};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, cmp> q;
    q.push({a.first, {a.second.first, a.second.second}});
    visisted[a.first][a.second.first] = true;
    while (!q.empty())
    {
        pair<int, pair<int, int>> p = q.top();
        q.pop();
        if (p.first == b.first && p.second.first == b.second.first)
        {
            std::cout << p.second.second << std::endl;
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int x = p.first + xk[i];
            int y = p.second.first + yk[i];
            if (x >= 0 && x < 8 && y >= 0 && y < 8 && !visisted[x][y])
            {
                q.push({x, {y, p.second.second + 1}});
                visisted[x][y] = true;
            }
        }
    }
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ')')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                string tmp = "";
                while (st.top() != '(')
                {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop();
                if (!st.empty() && st.top() == '-')
                {
                    for (int j = 0; j < tmp.size(); j++)
                    {
                        if (tmp[j] == '+')
                            tmp[j] = '-';
                        else if (tmp[j] == '-')
                            tmp[j] = '+';
                        st.push(tmp[j]);
                    }
                }
                else
                {
                    for (char j : tmp)
                    {
                        st.push(j);
                    }
                }
            }
        }
        string ans = "";
        while (!st.empty())
        {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
}