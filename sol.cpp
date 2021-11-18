#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		cout << (a == 7 || b == 7 || c == 7 ? "YES" : "NO") << '\n';
	}
	return 0;
}
