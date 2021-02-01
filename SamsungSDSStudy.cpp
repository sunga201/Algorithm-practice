#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

/*int l, c; // 1759 ��ȣ �����
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
	dfs(0, 0, 0, 0, vector<char>(l)); // idx, num, ����, ����
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

void dfs(int idx, int side) { //side 1 ����
	if (chk) return; // �̹� �̺б׷��� �ƴ϶�� ������
	for (auto next : adj[idx]) {
		if (visited[next] == side) { // �̺б׷��� �ƴ�
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
			if (nodeList[i] == 1 && visited[i] == 0 && !chk) { // ��� ������ ���� üũ�Ͽ� ����׷����� �ƴ� ��쵵 ���
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

/* 13���� */

typedef struct fire {
	int weight;
	int speed;
	int dist;
}Fire;

int nxt[8][2] = { {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1} };
stack<pair<int, int>> pnt, tmp;
stack<Fire> board[51][51];
pair<Fire, pair<int, int>> tmpBoard[51][51];
vector<pair<int, int>> dup;
bool chk[51][51]; // �̵��� �ϰ� �� �Ŀ� �ش� ĭ�� ���̾�� �ִ°�?
int main() {
	int i, j, n, m, k, r, c, w, d, s;
	cin >> n >> m >> k;
	for (i = 0; i < m; i++) {
		cin >> r >> c >> w >> s >> d;
		pnt.emplace(r, c);
		board[r][c].push({ w, s, d });
	}

	for (i = 0; i < k; i++) {
		memset(chk, false, sizeof(chk));
		while (!pnt.empty()) {
			int x = pnt.top().first, y = pnt.top().second;
			pnt.pop();
			//1. �̵�
			while (!board[x][y].empty()) {
				int weight = board[x][y].top().weight,
					speed = board[x][y].top().speed,
					dist = board[x][y].top().dist;

				board[x][y].pop();
				// ���� ��ġ
				int nxtX = x + speed * nxt[dist][0], nxtY = y + speed * nxt[dist][1];
				// ȯ�� ���� ǥ��
				while (nxtX <= 0) nxtX += n;
				while (nxtY <= 0) nxtY += n;
				nxtX = (nxtX - 1) % n + 1;
				nxtY = (nxtY - 1) % n + 1;

				if (!chk[nxtX][nxtY]) {
					tmp.emplace(nxtX, nxtY);
					chk[nxtX][nxtY] = true;
				}

				tmpBoard[nxtX][nxtY].first.weight += weight;
				tmpBoard[nxtX][nxtY].first.speed += speed;
				tmpBoard[nxtX][nxtY].first.dist += dist; 
				tmpBoard[nxtX][nxtY].second.first++;
				tmpBoard[nxtX][nxtY].second.second += (dist % 2 ? 0 : 1);// ������ ¦���� 1�� ���Ѵ�.
																		 // ���̾�� �����ؾ� �� �� ���� ������ ���� ���
			}
		}

		//2. ���̾ ����
		// tmp���� �̵��� ���� ���� ��ǥ�� ����ִ�.
		while (!tmp.empty()) {
			int x = tmp.top().first, y = tmp.top().second;
			tmp.pop();
			pnt.emplace(x, y);
			if (tmpBoard[x][y].second.first == 1) { // ���̾ 1��
				board[x][y].push(tmpBoard[x][y].first); // board[x][y] ���ÿ� �ٷ� �ְ� ����.
				continue;
			}

			//2�� �̻�
			int num = tmpBoard[x][y].second.first,
				nWeight = tmpBoard[x][y].first.weight / 5,
				nSpeed = tmpBoard[x][y].first.speed / num,
				nDist = tmpBoard[x][y].second.second;

			if (nWeight == 0) {
				tmpBoard[x][y] = { {0, 0, 0}, {0, 0} };
				continue; //���� 0, �Ҹ�
			}
			if (nDist == 0 || nDist == num) { // nDist�� 0�̸� ��� Ȧ��, num�� ������ ��� ¦��
				for (j = 0; j < 8; j += 2) {
					board[x][y].push({nWeight, nSpeed, j}); // ���� 0, 2, 4, 6
				}
			}
			else {
				for (j = 1; j < 8; j += 2) {
					board[x][y].push({ nWeight, nSpeed, j }); // ���� 1, 3, 5, 7
				}
			}
			tmpBoard[x][y] = { {0, 0, 0}, {0, 0} };
		}
	}

	int ret = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			while (!board[i][j].empty()) {
				ret += board[i][j].top().weight;
				board[i][j].pop();
			}
		}
	}
	cout << ret;
}