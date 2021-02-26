#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define ar array

#define ff first 
#define ss second 
#define mp make_pair

#define vt vector
#define pb push_back

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)

#define en '\n'
#define sp ' '
#define smin(a, b) a = min(a, b)
#define smax(a, b) a = max(a, b)
#define ssort(a, b); int _temp = max(a, b); b = min(a, b); a = _temp;
#define bit_count(a) __builtin_popcount(a)

#define rep(i,n) for(auto i=0; i<(n); i++) 
#define EACH(x, a) for (auto& x: a)

#define all(x) (x).begin(), (x).end() 
#define sz(x) (int)(x).size()

using namespace std;

typedef  map<string,int>         msi; 
typedef  map<int,int>	         mii; 
typedef  map<ll, ll>             mll; 
typedef  map<char,int>           mci; 
typedef  map<int,string>	     mis; 
typedef  pair<int,int> 	         pii;
typedef  pair<ll, ll> 	         pll;  
typedef  pair<string, int>       psi; 
typedef  pair<string, string>    pss; 
typedef  vector<int> 	         vi;  
typedef  vector<string> 	     vs; 
typedef  vector<char>	         vc; 
typedef  vector<bool>            vb; 
typedef  vector< pii >           vii;
typedef  vector< ll >            vll;
typedef  vector<pii>             vpii;
typedef  vector<pll>             vpll;
typedef  vector<vi>              vvi;
typedef  vector<vll>             vvll;


template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
	cin >> x;
}
void read(double& d) {
	string t;
	read(t);
	d=stod(t);
}
void read(long double& d) {
	string t;
	read(t);
	d=stold(t);
}

template<class A> void read(vt<A>& x) {
	EACH(a, x)
		read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
	EACH(a, x)
		read(a);
}
 
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}

string to_string(char c) {
	return string(1, c);
}
string to_string(bool b) {
	return b?"true":"false";
}
string to_string(const char* s) {
	return string(s);
}
string to_string(string s) {
	return s;
}
string to_string(vt<bool> v) {
	string res;
	FOR(sz(v))
		res+=char('0'+v[i]);
	return res;
}
 
template<size_t S> string to_string(bitset<S> b) {
	string res;
	FOR(S)
		res+=char('0'+b[i]);
	return res;
}
template<class T> string to_string(T v) {
    bool f=1;
    string res;
    EACH(x, v) {
		if(!f)
			res+=' ';
		f=0;
		res+=to_string(x);
	}
    return res;
}

template<class A> void write(A x) {
	cout << to_string(x);
}
template<class H, class... T> void write(const H& h, const T&... t) { 
	write(h);
	write(t...);
}
void print() {
	write("\n");
}
template<class H, class... T> void print(const H& h, const T&... t) { 
	write(h);
	if(sizeof...(t))
		write(' ');
	print(t...);
}

const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};

const ll LINF = 1e15;
const int mxN = 2e5+10, INF = 1e9, MOD = 1e9+7, mod = 998244353;

void solve(){
    ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
