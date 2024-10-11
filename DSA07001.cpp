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

long long a[105][105];
int main()
{
    int x;
    string s;
    vector<int> v;
    while (cin >> s)
    {
        if (s == "push")
        {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "pop")
        {
            if (!v.empty())
            {
                v.pop_back();
            }
        }
        else if (s == "show")
        {
            if (v.empty())
                cout << "empty";
            else
                for (int i : v)
                    cout << i << " ";
            cout << endl;
        }
    }
    cout << endl;
}