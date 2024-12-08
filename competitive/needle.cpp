#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#define ll long long int
#define ss string

#define ll_in(x) scanf("%lld", &x)
#define ii_in(x) scanf("%d", &x)
#define ll_in2(x, y) scanf("%lld%lld", &x, &y)
#define ii_in2(x, y) scanf("%d%d", &x, &y)
#define ll_in3(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)

#define loop(n) for(int i=0;i<n;i++)
#define loop1(n) for(ll i=1;i<=n;i++)
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes printf("Yes\n");
#define no printf("No\n");
using namespace std;
string max_freq(string &str){
    vector<int>freq(26,0);
    
    
    for(char c: str){
        freq[c -'a']++;
    }
    char high='';
    int check=-1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            check= freq[i];
            high= 'a' + i; 
        }
    }
    return high;
    
}
void solve(){
                int a,b,c,d;cin>>a>>b>>c>>d;

                if((a>c&&b<d) || (a<c && b>d))
                yes
                else no
  }
int main() {
    ios;

   ll t;ll_in(t);

    while (t--) {
                      
         solve();     
    }

    return 0;
}
