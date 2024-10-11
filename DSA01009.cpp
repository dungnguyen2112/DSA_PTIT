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
int n, k;
string s;
bool final = false, ok = false;
vector<string> res;
void khoitao()
{
    string s1(k, 'A');
    int p = s.find(s1, 0);
    if (p != string::npos)
    {
        string s2 = s.substr(p + 1);
        if (s2.find(s1) == -1)
            res.push_back(s);
    }
}
void Try(int i)
{
    for (char j = 0; j <= 1; ++j)
    {
        if (j == 0)
            s[i] = 'A';
        else
            s[i] = 'B';
        if (i == n - 1)
            khoitao();
        else
            Try(i + 1);
    }
}

int main()
{
    cin >> n >> k;
    s.resize(n);
    Try(0);
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for (string i : res)
    {
        cout << i << endl;
    }
}
