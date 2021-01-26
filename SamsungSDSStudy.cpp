#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*int l, c; // 1759 암호 만들기
vector<char> arr;
vector<vector<char>> ret;
void dfs(int idx, int num, int g, int m, vector<char> vec) {
	if (num == l) {
		if (g >= 2 && m >= 1) {
			ret.push_back(vec);
			return;
		}
	}
	if (idx >= c) return;
	dfs(idx + 1, num, g, m, vec);
	vec[num] = arr[idx];
	if (arr[idx] == 'a' || arr[idx] == 'i' || arr[idx] == 'o' || arr[idx] == 'u' || arr[idx] == 'e') {
		m++;
	}
	else g++;
	dfs(idx + 1, num + 1, g, m, vec);
}

int main() {
	int i;
	char a;
	cin >> l >> c;
	for (i = 0; i < c; i++) {
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	dfs(0, 0, 0, 0, vector<char>(l)); // idx, num, 자음, 모음
	for (auto it = ret.rbegin(); it != ret.rend(); it++) {
		for (auto ch : *it) {
			cout << ch;
		}
		cout << "\n";
	}
}*/

/*const int MAX = 20001;
int v, e, visited[MAX], nodeList[MAX], chk=0;
vector<int> adj[MAX];

void dfs(int idx, int side) { //side 1 시작
	if (chk) return; // 이미 이분그래프 아니라고 판정남
	for (auto next : adj[idx]) {
		if (visited[next] == side) { // 이분그래프 아님
			chk = 1;
			return;
		}
		else if (visited[next] == 0) {
			int nextSide = side == 1 ? 2 : 1;
			visited[next] = nextSide;
			dfs(next, nextSide);
		}
	}
}

int main() {
	int i, k, a, b;
	cin >> k;
	while (k--) {
		memset(visited, 0, sizeof(visited));
		memset(nodeList, 0, sizeof(nodeList));
		chk=0;
		cin >> v >> e;
		for (i = 0; i < e; i++) {
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
			nodeList[a] = 1;
			nodeList[b] = 1;
		}

		for (int i = 1; i <= v; i++) {
			if (nodeList[i] == 1 && visited[i] == 0 && !chk) { // 모든 정점에 대해 체크하여 연결그래프가 아닌 경우도 고려
				visited[i] = 1;
				dfs(i, 1);
			}
		}
		if (chk) cout << "NO\n";
		else cout << "YES\n";

		for (i = 1; i <= v; i++) {
			adj[i].clear();
		}
	}
}*/