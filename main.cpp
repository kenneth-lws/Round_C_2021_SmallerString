#include <iostream>
#include <string>
#include <stdlib.h>
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MxN = 1e3;
int t, k, n;
int A[501][501];
int B[501][501];
int p[MxN];

int M = 1e9+7;
ll answer;

int solve(){
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    
    for (int i = 0; i < (n+1)/2; i++){
        ans = (ans*k + s[i] - 'a')%M;
    }
    bool check = false;
    for(int i = 0; i < n/2; i++){
        if(s[n/2-1-i] == s[(n+1)/2+i]){
            continue;
        }
        if(s[n/2-1-i] < s[(n+1)/2+i]){
            check = true;
            break;
        }
        break;
    }
    
    if(check){
        ans =(ans+1)%M;
    }
    
    
    return ans;
}

int main(){
    cin >> t ;
    for (int i = 0; i < t; i++){
        answer = solve();
        cout << "Case #" << i+1 <<": " << answer <<endl;
    }
    return 0;    
}
