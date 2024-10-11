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
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int k;
        cin >> k;
        getchar();
        string s;
        cin >> s;
        map<int, int> mp;
        priority_queue<int> q;
        for (char i : s)
        {
            mp[i]++;
        }
        for (auto i : mp)
        {
            q.push(i.second);
        }
        while (k--)
        {
            if (q.empty())
                break;
            int x = q.top();
            q.pop();
            x--;
            q.push(x);
        }
        long long sum = 0;
        while (q.size())
        {
            long long x = q.top();
            q.pop();
            sum += (x * x);
        }
        cout << sum << endl;
    }
}