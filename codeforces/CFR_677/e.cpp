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

ll fat[25];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fat[0] = 1;
    for(int i=1;i<=20;i++) fat[i] = fat[i-1]*i;
    ll n;
    cin >> n;
    ll ans = ((fat[n]/2)/ (fat[n/2]) / fat[n/2]) * (fat[n/2-1]) * fat[n/2 - 1];
    cout << ans << "\n";
    return 0;
}