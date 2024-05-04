#include <iostream>
using namespace std;
#define ll long long int
#define lop(i, a, n) for (ll i = a; i < n; i++)
#define pb(a) push_back(a)
#include <vector>

int partition(ll v[], int s, int e)
{
    ll pivot = v[s];
    int i = s;
    int j = e;
    while (i < j)
    {
        while (v[i] <= pivot) // <= sign here will lead to infinite loop here
            i++;
        while (v[j] > pivot)
            j--;
        if (i < j)
        {
            swap(v[i], v[j]);
        }
    }
    swap(v[j], v[s]);
    return j;
}

void quickSort(ll v[], int s, int e)
{
    if (s < e)
    {
        int mid = partition(v, s, e);
        quickSort(v, s, mid - 1);
        quickSort(v, mid + 1, e);
    }
}

int main()
{
    int n;
    cin >> n;
    // vector<ll> v;
    ll v[n];
    lop(i, 0, n)
    {
        v[i] = rand() % 100;
    }
    quickSort(v, 0, n - 1);

    lop(i, 0, n)
    {
        cout << v[i] << " ";
    }
}