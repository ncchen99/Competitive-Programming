#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a, b;
        cin>>a>>b;
        a = (a%2 ? a : a+1);
        b = (b%2 ? b : b+1);
        cout<<"Case "<<i<<": "<<((a+b)*((b-a)/2+1)/2)<<'\n';
    }
}
