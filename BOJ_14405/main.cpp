#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto isOk = bool{ true };
	for (auto i = 0; i < s.length(); ++i) {
		if ('p' == s[i]) {
			if (i + 1 < s.length()) {
				if ('i' == s[i + 1]) {
					++i;
				}
				else {
					isOk = false;
					break;
				}
			}
			else {
				isOk = false;
				break;
			}
		}
		else if ('k' == s[i]) {
			if (i + 1 < s.length()) {
				if ('a' == s[i + 1]) {
					++i;
				}
				else {
					isOk = false;
					break;
				}
			}
			else {
				isOk = false;
				break;
			}
		}
		else if ('c' == s[i]) {
			if (i + 2 < s.length()) {
				if ('h' == s[i + 1] && 'u' == s[i + 2]) {
					i += 2;
				}
				else {
					isOk = false;
					break;
				}
			}
			else {
				isOk = false;
				break;
			}
		}
		else {
			isOk = false;
			break;
		}
	}

	cout << (isOk ? "YES" : "NO");

	return 0;
}