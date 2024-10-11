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
vector<int> a, b, c;
bool final = false, ok = false;
vector<bool> visited;
vector<vector<int>> res;
void khoitao()
{
    for (int i = 1; i <= k; ++i)
    {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}
void Try(int i)
{
    for (int j = b[i - 1] + 1; j <= n; ++j)
    {
        b[i] = j;
        if (i == k)
            khoitao();
        else
            Try(i + 1);
    }
}
int main()
{
    cin >> n >> k;
    set<int> st;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        st.insert(x);
    }
    a.push_back(-1);
    for (auto i : st) a.push_back(i);
    n = st.size();
    b.resize(n + 1);
    for (int i = 0; i <= n; ++i) {
        b[i] = i;
    }
    Try(1);
}