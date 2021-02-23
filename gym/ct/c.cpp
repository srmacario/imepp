#include <bits/stdc++.h>

using namespace std;

#define st first
#define nd second
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
const int N = 1e5+5;

int n,k,sz;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<string> s;
    for(int i=0;i<n;i++){
        string x;
        cin >> x;
        s.pb(x);
        sz += x.size();
    }
    cin >> k;
    int shift = (k/sz)%n;
    int pos = (k-1)%(sz);
    string fim;
    for(int i=shift;i<shift+n;i++){
        fim += s[i%n];
    }
    cout << fim[pos] << "\n";
    return 0;
}