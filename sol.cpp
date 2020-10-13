#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	int z=0, mx1=0;
	for(char c : s) {
		if(c=='0')
			z++;
		else
			z=0;
		mx1=max(mx1, z);
	}
	int o=0, mx2=0;
	for(char c : s) {
		if(c=='1')
			o++;
		else
			o=0;
		mx2=max(mx2, o);
	}
	cout << (mx1>=7||mx2>=7?"YES":"NO") << "\n";
}
