#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << (!(n%2) ? "white\n1 2\n" : "black\n");
    return 0;
}