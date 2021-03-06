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
const int N = 1e5+5, M = 55;

int n, I[M], O[M], grid[M][M];

int main(){
    int t;
    cin >> t;
    for(int k=1;k<=t;k++){
        cin >> n;
        for(int i=1;i<=n;i++) I[i] = O[i] = 1;
        memset(grid,0,sizeof(grid));
        for(int i=1;i<=n;i++){
            char x;
            cin >> x;
            I[i] = (x == 'Y' ? 1 : 0);
        }
        for(int i=1;i<=n;i++){
            char x;
            cin >> x;
            O[i] = (x == 'Y' ? 1 : 0);
        }
        for(int i=1;i<=n;i++){
            grid[i][i] = 1;
            //if(!O[i]) continue;
            for(int j=i+1;j<=n;j++){
                if(!I[j] or !O[j-1]) break;
                grid[i][j] = 1;
            }
            for(int j=i-1;j>=1;j--){
                if(!I[j] or !O[j+1]) break;
                grid[i][j] = 1;
            }
        }
        cout << "Case #" << k << ":\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            cout << (grid[i][j] ? "Y" : "N");
            }
            cout << "\n";
        }
    }
    return 0;
}