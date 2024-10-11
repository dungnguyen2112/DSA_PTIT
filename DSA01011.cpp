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
bool final = false, ok;
void sinh()
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
    {
        i--;
    }
    if (i == -1)
    {
        cout << n << " BIGGEST" << endl;
        return;
    }
    for (int j = s.size() - 1; j > i; --j)
    {
        if (s[j] > s[i])
        {
            swap(s[i], s[j]);
            sort(s.begin() + i + 1, s.end());
            break;
        }
    }
    cout << n << ' ' << s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        ok = false;
        sinh();
    }
}
