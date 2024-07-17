// read me ！！！！
//这题应该是python语言的题目，极其不符合c++的输入习惯
//c++硬上py的题目导致代码丑到爆QAQ



#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

const int N = 2e5 + 10;
int n;
string ans, tmp;
string s1, s2, s4;
map<char, string> m;

void solve() {

	getline(cin, s1);
	getline(cin, s2);
	getline(cin, ans);
	getline(cin, s4);
	cin >> n;

	for (int i = 0 ; i < s4.size() ; i ++) {
		if (s4[i] == '(') {
			int j = i + 1;
			char a = s4[j];
			j ++;
			while (j < s4.size() && (s4[j] == ' ' || s4[j] == '>' || (j + 1 < s4.size() && s4[j] == '-' && s4[j + 1] == '>' )))
				j ++;
			string b = "";
			while (j < s4.size() && s4[j] != ')' ) {
				b += s4[j];
				j ++;
			}
			m[a] = b;
			i = j;
		}
	}

	for (int i = 0 ; i < n ; i ++) {
		tmp = "";
		for (int j = 0 ; j < ans.size() ; j ++) {
			char t = ans[j];
			if (!m.count(t)) {
				tmp += t;
			} else {
				tmp += m[t];
			}
		}
		ans = tmp;
	}
	cout << ans << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}