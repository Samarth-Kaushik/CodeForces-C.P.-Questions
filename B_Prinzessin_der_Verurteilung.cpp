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
        string ans = "";
        string temp = "";
        for(char c = 'a'; c <= 'z'; c++){
            if(s.find(c) == string::npos){
                ans = c;
                break;
            }
        }
        for(char c = 'a'; c <= 'z'; c++){
            for(char c1 = 'a'; c1 <= 'z'; c1++){
                temp = "";
                temp.push_back(c);
                temp.push_back(c1);
                if(ans == "" && s.find(temp) == string::npos){
                    ans = temp;
                    break;
                }
            }
        }
        for(char c = 'a'; c <= 'z'; c++){
            for(char c1 = 'a'; c1 <= 'z'; c1++){
                for(char c2 = 'a'; c2 <= 'z'; c2++){
                temp = "";
                temp.push_back(c);
                temp.push_back(c1);
                temp.push_back(c2);
                if(ans == "" && s.find(temp) == string::npos){
                    ans = temp;
                    break;
                }
            }
            }
        }
        cout << ans << endl;
    }

    return 0;
}