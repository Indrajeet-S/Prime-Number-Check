#include<bits/stdc++.h>
using namespace std;
#define int long long

// Prime number is a number which has only two factors 
// 1 and the number itself 

int32_t main() {

    int n; cin>>n;
    int f = 1;

    // O(n) time algorithm 
    for(int i=2; i<n; i++){
        if(n%i == 0){
            f = 0;
            break;
        }
    }

    if(f) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;

    return 0;
}