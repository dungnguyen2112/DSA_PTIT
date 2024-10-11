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

int calculate(int x, int y, char o)
{
    switch (o)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

void solve()
{
    string s;
    getline(cin, s);
    stack<string> st;
    string tmp;
    stringstream ss(s);
    while (ss >> tmp)
    {
        st.push(tmp);
    }
    while (!st.empty())
    {
        string s1 = st.top();
        st.pop();
        cout << s1 << ' ';
    }
    cout << endl;
}
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    while (x--)
    {
        solve();
    }
}