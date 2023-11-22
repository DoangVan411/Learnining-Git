#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int d = 0;

class SinhVien{
public:
    string maSV, tenSV, lop, dob;
    float gpa;
    friend istream& operator >> (istream &in, SinhVien &a)
    {
        ++d;
        a.maSV = "B20DCCN0";
        if(d < 10) a.maSV += "0" +to_string(d);
        else a.maSV += to_string(d);
        scanf("\n");
        getline(in, a.tenSV);
        in >> a.lop;
        in >> a.dob;
        in >> a.gpa;
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a)
    {

        cout << a.maSV << " ";
        stringstream ss(a.tenSV);
        string tmp = "";
        while(ss >> tmp)
        {
            for(int i = 0; i < tmp.size(); ++i)
            {
                tmp[i] = tolower(tmp[i]);
            }
            tmp[0] = toupper(tmp[0]);
            cout << tmp << " ";
        }
        if(a.dob[1] == '/') a.dob.insert(0, 1, '0');
        if(a.dob[4] == '/') a.dob.insert(3, 1, '0');
        cout << a.lop << " " << a.dob << " ";
        cout << fixed << setprecision(2) << a .gpa << "\n";
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n)
{
    sort(a, a+n, cmp);
}

int main(){
    //freopen("tc.in", "r", stdin);
    //freopen("tc.out", "w", stdout);
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
