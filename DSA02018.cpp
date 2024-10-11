#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>
#define faster()                           \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL);
using namespace std;
using std::string;

int prime[10005];
void sang()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= sqrt(10000); i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= 10000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

int chuanhoa(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum = sum * 10 + (s[i] - '0');
    }
    return sum;
}

vector<int> v;
vector<vector<int>> a;
vector<int> b(5);
vector<int> c(5);

void Try()
{
    if (v.size() == 4)
    {
        a.push_back(v);
        return;
    }
    for (int j = 0; j < 3; j++)
    {
        v.push_back(j);
        Try();
        v.pop_back();
    }
}
int check()
{
    for (auto v : a)
    {
        int sum = b[0];
        for (int i = 0; i < 4; i++)
        {
            if (v[i] == 0)
                sum += b[i + 1];
            else if (v[i] == 1)
            {
                sum -= b[i + 1];
            }
            else
            {
                sum *= b[i + 1];
            }
        }
        if (sum == 23)
            return 1;
    }
    return 0;
}
bool visited[5];
bool ok = false;
void Try1(int i)
{
    for (int j = 0; j < 5; j++)
    {
        if (!visited[j])
        {
            b[i] = c[j];
            visited[j] = true;
            if (i == 4)
            {
                if (check())
                {
                    ok = true;
                    cout << "YES" << endl;
                    return;
                }
            }
            else
                Try1(i + 1);
            visited[j] = false;
        }
    }
}

int main()
{
    faster() int x;
    cin >> x;
    while (x--)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> c[i];
        }
        ok = false;
        Try();
        Try1(0);
        if (!ok)
        {
            cout << "NO" << endl;
        }
        v.clear();
        a.clear();
        b.clear();
        c.clear();
        memset(visited, false, sizeof(visited));
    }
}