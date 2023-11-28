#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

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
using vs = vector<string>;

string s;
auto cup = vi{ 1,0,0 };

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> s;

	for (const auto& x : s) {
		if ('A' == x) {
			swap(cup[0], cup[1]);
		}
		else if ('B' == x) {
			swap(cup[2], cup[1]);
		}
		else {
			swap(cup[0], cup[2]);
		}
	}

	for (auto i = 0; i < 3; ++i) {
		if (1 == cup[i]) {
			cout << i + 1;
		}
	}

	return 0;
}