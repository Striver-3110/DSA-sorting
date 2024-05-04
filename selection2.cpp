#include <iostream>
using namespace std;
#define ll long long int
#define lop(i, a, n) for (ll i = a; i < n; i++)
#define pb(a) push_back(a)
#include <vector>
int main()
{
    int n;
    n = 10;
    vector<int> v;
    lop(i, 0, n)
    {
        ll temp = rand() % 100;
        v.pb(temp);
    }
    lop(i, 0, n)
    {
        cout << v[i] << " " << endl;
    }

    for (int i = 0; i < n - 2; i++)
    {
        int min = i; // int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[min] > v[j]) // if(v[max] < v[j])
            {
                min = j; // max = j;
            }
        }
        swap(v[min], v[i]); // swap(v[max],v[i])
    }
    lop(i, 0, n)
    {
        cout << v[i] << " ";
    }
}