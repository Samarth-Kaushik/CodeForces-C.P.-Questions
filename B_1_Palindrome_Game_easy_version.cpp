#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        string temp = s;
        int zeroCnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zeroCnt++;
        }
        if(!(zeroCnt & 1) || zeroCnt == 1) cout << "BOB" << endl;
        else cout << "ALICE" << endl;
    }

    return 0;
}