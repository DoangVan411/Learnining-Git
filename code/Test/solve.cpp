#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll m, n, t, x;
    int k;
    cin >> m >> n >> t >> x >> k;
    ll time=0, cnt=0;
    int d=1;
    while(k--)
    {
        int sau=d;
        int trc=d+n-1;
        int a;
        cin >> a;
        if(a>trc)
        {
            ll tmp=a-trc;
            if(tmp*x<=t)
            {
                ++cnt;
                time+=tmp*x;
                d+=tmp;
            }
        }
        else if(a<sau)
        {
            ll tmp=d-a;
            if(tmp*x<=t)
            {
                ++cnt;
                time+=tmp*x;
                d=a;
            }
        }
        else ++cnt;
    }
    cout << cnt << " " << time;
}
