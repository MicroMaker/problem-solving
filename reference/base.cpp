#include <bits/stdc++.h>
using namespace std;

const double pi = acos(-1.0);
const double eps = 1e-11;

#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(),v.end()
#define sz(v) (int(v.size()))
#define clr(v, x) fill(all(v), x)


#define foreach(itr, v) for(__typeof((v).begin()) itr=(v).begin();itr!=(v).end();itr++)
#define print(v) foreach(it, v)cout << *it << " ";cout<<endl;
#define pii pair<int, int>
#define mp make_pair
#define fi first
#define se second
#define pb push_back

template<typename T> bool checkmin(T &a,const T &b) { if (b<a) {a=b;return true;}return false; }
template<typename T> bool checkmax(T &a,const T &b) { if (b>a) {a=b;return true;}return false; }
