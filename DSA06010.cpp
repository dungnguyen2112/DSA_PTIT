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

int k;
bool cmp(int a, int b)
{
    return abs(k - a) < abs(k - b);
}

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        vector<string> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        set<char> st;
        for (auto i : v)
        {
            for (auto j : i)
            {
                st.insert(j);
            }
        }
        for(auto i : st){
            cout << i << ' ';
        }
        cout << endl;
    }
}