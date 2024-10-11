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
        int n;
        cin >> n;
        queue<string> q;
        string s = "";
        q.push("1");
        while (!q.empty() && n > 0)
        {
            n--;
            s = q.front();
            q.pop();
            cout << s << ' ';
            q.push(s + "0");
            q.push(s + "1");
        }
        cout << endl;
    }
}