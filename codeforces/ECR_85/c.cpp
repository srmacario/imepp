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
const int N = 1e5+5;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <pll> m;
        vector <ll> c;
        ll cost = 0;
        c.pb(0);
        for(int i=0;i<n;i++){
            ll a,b;
            cin >> a >> b;
            m.pb({a,b});
            if(i){
                ll aux = 0;
                ll dif = a - m[i-1].nd;
                aux = max(dif,aux);
                cost += aux;
                //db(cost);
                c.pb(aux);
            }
        }
        ll aux = 0;
        ll dif = m[0].st - m[n-1].nd;
        aux = max(dif,aux);
        cost+=aux;
        //db(cost);
        c[0] = aux;
        ll ans = LINF;
        for(int i=0;i<n;i++){
            dif = m[i].st - c[i];
            //db(dif);
            aux = cost + dif;
            ans = min(ans,aux);
        }
        cout << ans << "\n";
    }
    return 0;
}