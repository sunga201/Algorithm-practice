#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
using namespace std;

/* 1주차 */

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

/* 3주차 */
/*const int MAX = 20001; //1707 이분 그래프
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

/*vector<char> vec(9); //1525 퍼즐
map<vector<char>, bool> isVisited;
queue<pair<vector<char>, int>> que;
int nxt[4] = { -1, 1, -3, 3 };

int main() {
	int i, j;
	for (i = 0; i < 9; i++) {
		cin >> vec[i];
	}

	int inv = 0;
	for (i = 0; i < 9; i++) {
		if (vec[i] == '0') continue;
		for (j = i+1; j < 9; j++) {
			if (vec[j] != 0 && vec[i] < vec[j]) inv++;
		}
	}
	if (inv % 2) cout << -1; // 이 퍼즐은 풀 수 없음.
	else {
		isVisited[vec] = true;
		que.emplace(vec, 0);
		while (!que.empty()) {
			vector<char> now = que.front().first;
			int mv = que.front().second;
			que.pop();
			for (i = 0; i < 8; i++) {
				if (now[i] != i + 1 + '0') break;
			}
			if (i == 8) {
				cout << mv;
				return 0;
			}
			for (i = 0; i < 9; i++){
				if (now[i] == '0') {
					for (j = 0; j < 4; j++) {
						int next = i + nxt[j];
						if ((i%3==2 && next%3==0) || (i%3==0 && next%3==2) || next < 0 || next > 8) continue;
						swap(now[i], now[next]);
						if (!isVisited[now]) {
							isVisited[now] = true;
							que.emplace(now, mv+1);
						}
						swap(now[i], now[next]);
					}
				}
			}
		}
	}
}*/

/* 4주차 */

/*typedef struct pnt { // 10711 모래성
	int x;
	int y;
}Pnt;

queue<Pnt> que, nQue;
char board[1000][1000];
int numChk[1000][1000];
int nxt[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1} };
int main() {
	int i, j, k, h, w;
	cin >> h >> w;
	for (i = 0; i < h; i++) {
		cin >> board[i];
	}

	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			if (board[i][j] == '.') continue;
			for (k = 0; k < 8; k++) {
				int nx = i + nxt[k][0], ny = j + nxt[k][1];
				if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
				if (board[nx][ny] == '.') {
					numChk[i][j]++;
				}
			}
			if (numChk[i][j] >= board[i][j] - '0') {
				numChk[i][j] = -1;
				que.push({ i, j });
			}
		}
	}

	int ret = 0;
	while (true) {
		while (!que.empty()) {
			int x = que.front().x, y = que.front().y;
			que.pop();
			for (i = 0; i < 8; i++) {
				int nx = x + nxt[i][0], ny = y + nxt[i][1];
				if (board[nx][ny] != '.' && numChk[nx][ny] != -1) {
					numChk[nx][ny]++;
					if (numChk[nx][ny] >= board[nx][ny] - '0') { // 새롭게 부서질 모래성
						numChk[nx][ny] = -1;
						nQue.push({ nx, ny });
					}
				}
			}
		}
		ret++;
		if (nQue.empty()) break;
		swap(que, nQue);
	}
	cout << ret;
}*/

/* 13주차 */

/*typedef struct fire { // 20056 마법사 상어와 파이어볼
	int x;
	int y;
	int weight;
	int speed;
	int dist;
}Fire;

int nxt[8][2] = { {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1} };
vector<Fire> board[50][50];
queue<Fire> pnt;
int main() {
	int i, j, l, n, m, k, r, c, w, d, s;
	cin >> n >> m >> k;
	for (i = 0; i < m; i++) {
		cin >> r >> c >> w >> s >> d;
		pnt.push({ r-1, c-1, w, s, d });
	}

	for (i = 0; i < k; i++) {
		while (!pnt.empty()) {
			int x = pnt.front().x,
				y = pnt.front().y,
				weight = pnt.front().weight,
				dist = pnt.front().dist,
				speed = pnt.front().speed;
			pnt.pop();
			int nx = (x + speed * nxt[dist][0])%n,
				ny = (y + speed * nxt[dist][1])%n;

			if (nx < 0) nx += n;
			if (ny < 0) ny += n;
			board[nx][ny].push_back({ nx, ny, weight, speed, dist});
		}

		for (j = 0; j < n; j++) {
			for (l = 0; l < n; l++) {
				if (board[j][l].size() == 0) continue;
				else{
					int weight = board[j][l].front().weight,
						dist = board[j][l].front().dist,
						speed = board[j][l].front().speed;
					if(board[j][l].size()==1) pnt.push(board[j][l][0]);
					else {
						int sumWeight=0, sumSpeed=0, evenNum=0, size = board[j][l].size();
						for (auto it : board[j][l]) {
							sumWeight += it.weight;
							sumSpeed += it.speed;
							if (it.dist % 2 == 0) evenNum++;
						}

						sumWeight /= 5, sumSpeed /= size;
						if (sumWeight != 0) {
							if (evenNum == 0 || evenNum == size) { // 방향 모두 홀수거나, 모두 짝수
								for (int p = 0; p < 8; p += 2) {
									pnt.push({ j, l, sumWeight, sumSpeed, p });
								}
							}
							else {
								for (int p = 1; p < 8; p += 2) {
									pnt.push({ j, l, sumWeight, sumSpeed, p });
								}
							}
						}
					}
				}
				board[j][l].clear();
			}
		}
	}

	int ret = 0;
	while (!pnt.empty()) {
		ret += pnt.front().weight;
		pnt.pop();
	}
	cout << ret;
}*/

/* // 20057 마법사 상어와 토네이도
int board[499][499], dist[4][2] = { {0, -1}, {1, 0}, {0, 1}, {-1, 0} }; // dist : 왼 - 아 - 오 - 위

int sand[4][10][2] = { { {-1, 1}, {1, 1}, {-1, 0}, {1, 0}, {-2, 0}, {2, 0}, {-1, -1}, {1, -1}, {0, -2}, {0, -1}},
					  { {-1, -1}, {-1, 1}, {0, -1}, {0, 1}, {0, -2}, {0, 2}, {1, -1}, {1, 1}, {2, 0}, {1, 0}},
					  { {-1, -1}, {1, -1}, {-1, 0}, {1, 0}, {-2, 0}, {2, 0}, {-1, 1}, {1, 1}, {0, 2}, {0, 1}},
					  { {1, -1}, {1, 1}, {0, -1}, {0, 1}, {0, -2}, {0, 2}, {-1, -1}, {-1, 1}, {-2, 0}, {-1, 0}} };

int n;
double percent[9] = { 0.01, 0.01, 0.07, 0.07, 0.02, 0.02, 0.1, 0.1, 0.05 };
int moveSand(int idx, int x, int y) {
	int i, ret = 0, init = board[x][y], tmp=0;
	for (i = 0; i < 9; i++) {
		int nxtX = x + sand[idx][i][0], nxtY = y + sand[idx][i][1],
			s = init * percent[i];
		tmp += s;
		if (nxtX < 0 || nxtX >= n || nxtY < 0 || nxtY >= n) {
			ret += s;
		}
		else {
			board[nxtX][nxtY] += s;
		}
	}
	
	int ax = x + sand[idx][9][0], ay = y + sand[idx][9][1];
	if (ax < 0 || ax >= n || ay < 0 || ay >= n) {
		ret += init - tmp;
	}
	else board[ax][ay] += init - tmp;
	board[x][y] = 0;
	return ret;
}

void print(int r, int c) {
	cout << "r : " << r << ", c : " << c << endl;
	for (int p = 0; p < n; p++) {
		for (int q = 0; q < n; q++) {
			cout << board[p][q] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	int i, j, r, c, move=1, idx=0;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	int ret = 0;
	r = c = n / 2;
	while (true) {
		for (i = 0; i < move; i++) {
			r += dist[idx][0], c += dist[idx][1];
			ret += moveSand(idx, r, c);
		}
		idx++;
		for (i = 0; i < move; i++) {
			r += dist[idx][0], c += dist[idx][1];
			if (c == -1) break;
			ret += moveSand(idx, r, c);
		}
		if (c == -1) break;
		idx++;
		move++;
		if (idx == 4) idx = 0;
	}
	cout << ret;
}*/

/*int n, q, board[64][64], chk[64][64]; // 20058 마법사 상어와 파이어스톰

void rotate(int sx, int sy, int len) {
	if (len == 2) {
		int tmp = board[sx][sy];
		board[sx][sy] = board[sx + 1][sy];
		board[sx + 1][sy] = board[sx + 1][sy + 1];
		board[sx + 1][sy + 1] = board[sx][sy + 1];
		board[sx][sy + 1] = tmp;
		return;
	}

	int i, j;
	vector<int> tmp;
	for (i = sy; i < sy + len; i++) {
		tmp.push_back(board[sx][i]);
	}

	for (i = sy + len - 1, j=sx; i >=sy ; i--, j++) {
		board[sx][i] = board[j][sy];
	}

	for (i = sx, j = sy; i < sx + len; i++, j++) {
		board[i][sy] = board[sx + len - 1][j];
	}

	for (i = sy, j = sx + len - 1; i < sy + len; i++, j--) {
		board[sx + len - 1][i] = board[j][sy + len - 1];
	}

	for (i = 0; i < tmp.size(); i++) {
		board[i + sx][sy + len - 1] = tmp[i];
	}

	rotate(sx + 1, sy + 1, len - 2);
}

void rotateAll(int spell) {
	if (spell == 0) return;
	int i, j, len = 1 << spell;
	for (i = 0; i < n; i+=len) {
		for (j = 0; j < n; j+=len) {
			rotate(i, j, len);
		}
	}
}

int nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
pair<int, int> dfs(int x, int y) {
	chk[x][y] = 1;
	pair<int, int> ret = { board[x][y], 1 };
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n || chk[nx][ny] || board[nx][ny] == 0) continue;
		pair<int, int> tmp = dfs(nx, ny);
		ret.first += tmp.first;
		ret.second += tmp.second;
	}
	return ret;
}

void melt() {
	int i, j, k;
	vector<pair<int, int>> vec;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (board[i][j] == 0) continue;
			int num = 0;
			for (k = 0; k < 4; k++) {
				int nx = i + nxt[k][0], ny = j + nxt[k][1];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n || board[nx][ny]==0) continue;
				num++;
			}
			if (num < 3) vec.emplace_back(i, j);
		}
	}

	for (auto it : vec) {
		board[it.first][it.second]--;
	}
}
int main() {
	int i, j, spell;
	cin >> n >> q;
	n=1<<n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	for (i = 0; i < q; i++) {
		cin >> spell;
		rotateAll(spell);
		melt();
	}

	int sum = 0, num = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (board[i][j] != 0 && !chk[i][j]) {
				pair<int, int> tmp = dfs(i, j);
				sum += tmp.first;
				num = max(num, tmp.second);
			}
		}
	}

	cout << sum << "\n" << num << "\n";
}*/

/* 16주차 */
/*int main() { // 1449 수리공 항승
	int i, n, l, num;
	vector<int> hole;
	cin >> n >> l;
	for (i = 0; i < n; i++) {
		cin >> num;
		hole.push_back(num);
	}
	sort(hole.begin(), hole.end());
	int ret = 0, idx = 0, cur=-1;
	while (idx < hole.size()) {
		if (cur == -1 || cur + l - 1<hole[idx]) {
			ret++;
			cur = hole[idx];
		}
		idx++;
	}
	cout << ret;
}*/

/* 17주차 */
/*int main() { // 등수 구하기 (푸는중)
	int i, n, score, p, t;
	vector<int> vec;
	cin >> n >> score >> p;

	for (i = 0; i < n; i++) {
		cin >> t;
		vec.push_back(t);
	}

	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	vec.resize(min(p, (int)vec.size()));
	for (i = 0; i < vec.size(); i++) {
		if (vec[i] <= score) {
			if ((i!=p-1 && vec[i+1]==vec[i]) || (vec[i] == score && i == p - 1)) continue;
			cout << i + 1;
			return 0;
		}
	}

	if (i >= p) cout << -1;
	else cout << i + 1;
}*/