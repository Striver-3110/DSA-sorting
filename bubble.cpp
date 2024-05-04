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
    vector<int> v;
    lop(i, 0, n)
    {
        ll temp;
        cin >> temp;
        v.pb(temp);
    }
    lop(i, 0, n - 1)
    {
        lop(j, 0, n - 1-  i)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
    lop(i, 0, n)
    {
        cout << v[i] << " ";
    }
}