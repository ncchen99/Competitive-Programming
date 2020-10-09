#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  //cout.tie(0);
  ll n, da, db, ma, mb;
  cin>>n>>da>>db>>ma>>mb;
  cout << n/da*(ma/(ll)50) + n/db*(mb/(ll)50) 
  - ((n/ (da*db/__gcd(da, db)))*(ma/(ll)50))
  - ((n/(da*db/__gcd(da, db)))*(mb/(ll)50))
  + ((n/(da*db/__gcd(da, db)))*((ma+mb)/(ll)50))<< '\n';
  //system("pause");
} 
