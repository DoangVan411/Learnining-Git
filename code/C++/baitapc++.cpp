#include<bits/stdc++.h>
#define ll long long
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

struct sanpham
{
    string id, name;
    int price, grt;
};

bool cmp(sanpham a, sanpham b)
{
    if(a.price != b.price) return a.price > b.price;
    else return a.id < b.id;
}

int main()
{
    freopen("SANPHAM.in", "r", stdin);
    int n;
    cin >> n;
    sanpham a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i].id;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].price >> a[i].grt;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; ++i)
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].price << " " << a[i].grt << "\n";
    }
}
