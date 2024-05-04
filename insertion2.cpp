#include <iostream>
using namespace std;
#define ll long long int
#define lop(i, a, n) for (ll i = a; i < n; i++)
#define pb(a) push_back(a)
#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<ll> v;
    lop(i, 0, n)
    {
        ll temp = rand() % 100;
        v.pb(temp);
    }
    for (int i = 1; i < n; i++)
    {
        ll temp = v[i];
        int k = i - 1;
        while (k >= 0 && v[k] >= temp)
        {
            v[k + 1] = v[k];
            k--;
        }
        v[k + 1] = temp;
    }

    lop(i, 0, n)
    {
        cout << v[i] << " ";
    }
}