#include <iostream>
using namespace std;
#define ll long long int
#define lop(i, a, n) for (ll i = a; i < n; i++)
#define pb(a) push_back(a)
#define vl vector<ll>
#include <vector>

void merge(vl &v, int s, int mid, int e)
{
    // [0,1,2,3,4]=> mid = 2, s = 0, e = 4;
    // n1, n2 are length of left and right sub array respectively
    // L = [0,1,2]  => n1 = 3;

    int n1 = mid - s + 1; // length for left sub array

    // R = [3,4] => n2 = 2;
    int n2 = e - mid;

    vl L, R;
    for (int i = 0; i < n1; i++)
    {
        L.pb(v[s + i]);
    }
    for (int i = 0; i < n2; i++)
    {
        R.pb(v[mid + i + 1]);
    }
    // L = [0,1,2] 
    // R = [3,4]
    int i = 0; // for L subArray
    int j = 0; // for R subArray

    int k = s; // for v // original array
    
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            v[k++] = L[i++];// ascending order sorting
        }
        else
        {
            v[k++] = R[j++];
        }
    }
    while (i < n1) // marked = sign here which lead to incorrect output
    {
        v[k++] = L[i++];
    }
    while (j < n2)
    {
        v[k++] = R[j++];
    }
}

void mergeSort(vl &v, int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;
        mergeSort(v, s, mid);
        mergeSort(v, mid + 1, e);
        merge(v, s, mid, e);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<ll> v;
    lop(i, 0, n)
    {
        ll temp = rand() % 100;
        v.pb(temp + i);
    }
    lop(i, 0, n)
    {
        cout << v[i] << " ";
    }
    mergeSort(v, 0, n - 1);
    lop(i, 0, n)
    {
        cout << v[i] << " ";
    }
}