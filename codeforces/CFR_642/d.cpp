#include <bits/stdc++.h>

using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x,v) memset((x), (v), sizeof(x))
#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<int, pii> piii;
typedef pair<ll,ll> pll;
typedef pair<ll, pll> plll;
typedef vector<int> vi;
typedef vector <vi> vii;

const ld EPS = 1e-9, PI = acos(-1.);
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f, MOD = 1e9+7;
const int N = 2e5+5;

int n;

struct cmp{
    bool operator() (const pii &a, const pii &b) const{
        int lena = a.nd - a.st + 1;
        int lenb = b.nd - b.st + 1;
        if(lena == lenb) return a.st < b.st;
        return lena > lenb;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        set<pii, cmp> segs;
        cin >> n;
        vi v(n+5);
        segs.insert({0,n-1});
        for(int i=1;i<=n;i++){
            pii x = *segs.begin();
            int mid = (x.nd + x.st)/2;
            segs.erase(segs.begin());
            v[mid] = i;
            if(mid > x.st) segs.insert({x.st,mid-1});
            if(mid < x.nd) segs.insert({mid+1,x.nd});
        }
    
        for(int i=0;i<n;i++) cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}