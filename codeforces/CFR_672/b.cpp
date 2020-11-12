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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int> ());
        vector<ll> bits(32);
        bits = {0};
        for(int j=0;j<n;j++){
            for(int i=31;i>=0;i--){
                if(a[j] & (1ll<<i)){
                    bits[i]++;
                    break;
                }
            }
        }
        ll ans = 0;
        for(int i=0;i<32;i++){
            ans += (bits[i]*(bits[i]-1))/2;
        }
        cout << ans << "\n";
    }
    return 0;
}