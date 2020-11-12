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
const int N = 1e6+10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector <ll> s(n+5), ans(n+5);
        for(int i=0;i<n+5;i++) s[i] = ans[i] = 0;
        for(int i=1;i<=n;i++){
            cin >> s[i];
        }
        ans[1] = 1;
        for (ll i = 2; i <= n; i++){
            ans[i]++;
            if(ans[i] == 1){
                if(s[i] > s[1]) ans[i]++;
            }
            for (ll j = 2*i; j <= n; j += i){
                if(s[j] > s[i]){
                    ans[j] = max(ans[j],ans[i]);
                }
            }
        }
        ll resp = 0;
        for (ll i = 1; i <= n; i++){
            resp = max(resp,ans[i]);
        }
        cout << resp << "\n";
        
    }
    return 0;
}