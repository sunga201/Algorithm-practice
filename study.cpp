#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#pragma warning(disable:4996)
using namespace std;


/* 2021/01/30 */

/*const int INF = 1e9; // 16197 �� ����

char board[20][20];
int n, m, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

//ax, ay : ù ��° ���� ��ǥ, bx, by : �� ��° ���� ��ǥ, moveNum : �̵� Ƚ��

bool outChk(int x, int y) { // ������ ���� ������ �������� üũ
	if (x < 0 || x > n - 1 || y < 0 || y > m - 1) return true;
	else return false;
}

void print(int mode, int ax, int ay, int bx, int by, int mvNum) { // �׽�Ʈ�� ��� �Լ�
	cout << (mode ? "b " : "a ") << "out, ax : " << ax << ", ay : " << ay << ", bx : " << bx << ", by : " << by << ", mvNum : " << mvNum << endl;
}

int dfs(int ax, int ay, int bx, int by, int moveNum) {
	if (moveNum > 10) {
		return INF;
	}

	// ���� a ������ ������
	if (outChk(ax, ay)){
		if (!outChk(bx, by)) {
			//print(0, ax, ay, bx, by, moveNum);
			return moveNum;
		}
		else return INF; // ���� ���� ������
	}
	else if (outChk(bx, by)) {
		//print(1, ax, ay, bx, by, moveNum);
		return moveNum; // ���� a�� ������ �������� �ʾ����Ƿ� �ٷ� �̵� Ƚ�� ����
	}
	
	int ret = INF;
	for (int i = 0; i < 4; i++) {
		int axNxt = ax + nxt[i][0], ayNxt = ay + nxt[i][1],
			bxNxt = bx + nxt[i][0], byNxt = by + nxt[i][1]; // �������� �̵��� ĭ�� ���Ѵ�.

		// �̵��Ϸ��� ������ ĭ�� ���� ��� ���ڸ��� �״��
		if (board[axNxt][ayNxt] == '#') {
			axNxt = ax, ayNxt = ay;
		}

		// �̵��Ϸ��� ������ ĭ�� ���� ��� ���ڸ��� �״��
		if (board[bxNxt][byNxt] == '#') {
			bxNxt = bx, byNxt = by;
		}

		ret = min(ret, dfs(axNxt, ayNxt, bxNxt, byNxt, moveNum + 1));
	}
	return ret;
}

int main() {
	int i, j, a=-1, b, c, d;
	cin >> n>>m;
	for (i = 0; i < n; i++) {
		cin >> board[i];
		for (j = 0; j < m; j++) {
			if (board[i][j] == 'o') { // ������ ó�� ��ġ ����
				if (a == -1) a = i, b = j;
				else c = i, d = j;
			}
		}
	}

	int ret = dfs(a, b, c, d, 0);
	cout << (ret == INF ? -1 : ret); // ���� ���� INF�� ��� 10�� �̳��� ���� �ϳ��� ����߸��� ����� ������ �ǹ��Ѵ�.
}*/

/*vector<int> pos; // 8983 ��ɲ�
vector<pair<int, int>> animal; 
int main() {
	int i, m, n, range, x, y;
	cin >> m >> n >> range;
	for (i = 0; i < m; i++) {
		cin >> x;
		pos.push_back(x); // ��� ��ġ ����
	}

	sort(pos.begin(), pos.end()); //��� ����
	for (i = 0; i < n; i++) {
		cin >> x >> y;
		animal.emplace_back(x, y); // �� ������ ��ǥ ����
	}

	sort(animal.begin(), animal.end()); // ���� ����(x ��������, y ��������)

	int ret = 0;
	for (i = 0; i < n; i++) {
		int x=animal[i].first, y=animal[i].second, l = 0, r = m, mid;
		while (l < r) { // �̺� Ž��
			mid = l + r >> 1;
			int dist = abs(pos[mid] - x) + y; // �������� ��� pos[mid]������ �Ÿ�
			if (dist <= range) { // �����Ÿ� ��
				ret++; // �� ������ ���� �� ����.
				break;
			}
			else { //�����Ÿ� ��
				if (pos[mid]< x) { // ������ ��� pos[mid]���� �����ʿ� ����.
					l = mid + 1;
				}
				else r = mid;// ������ ��뺸�� pos[mid]���� ���ʿ� ����.
			}
		}
	}
	cout << ret;
}*/

/*int n, m, mark=1, board[50][50], chk[50][50], nxt[4][2] = { {0, -1}, {-1, 0}, {0, 1}, {1, 0} }, sizeArr[2501]; //2234 ����
    
	// -----------------------------------------------------------------
	// n, m : ����, ���� ũ��
	// mark : ���� ������ ���� ���� ����
	// board : ���� ���� ���� ����
	// chk : �� ĭ�� ��� �濡 �����ִ��� ����Ѵ�.
	// nxt : ���� ĭ�� Ȯ���ϱ� ���� ���, ���ʴ�� ��, ��, ��, ��
	// sizeArr : �� ���� ũ�⸦ �����ϱ� ���� ���
	// -----------------------------------------------------------------

int dfs(int x, int y) {
	chk[x][y] = mark;
	int ret = 1; // ���� �� ĭ���� �����Ѵ�.
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if ((board[x][y] & (1<<i)) || chk[nx][ny]) continue; // �̵��� ���⿡ ���� �ִ���, �̹� �湮�� ������ �ƴ��� üũ�Ѵ�.
		ret+=dfs(nx, ny);
	}
	return ret;
}

//���� : 1 ���� : 2 ���� : 4 ���� : 8
int main() {
	int i, j, k;
	cin >> m >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int maxSize = -1, maxSumSize = -1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (chk[i][j] == 0) {
				int size = dfs(i, j);
				maxSize = max(maxSize, size); // ���� ���� ���� ���� ����
				sizeArr[mark] = size;
				mark++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < 4; k++) {
				int nx = i + nxt[k][0], ny = j + nxt[k][1];

				// ���� ������ �����ų�, ���� ��� ���� ���� ��� continue
				if (nx < 0 || nx >= n || ny < 0 || ny >= m || chk[i][j] == chk[nx][ny]) continue; 

				maxSumSize = max(maxSumSize, sizeArr[chk[i][j]] + sizeArr[chk[nx][ny]]); // �ٸ� ��� ������ �� �ִ� ���̸� �����Ѵ�.
			}
		}
	}
	cout << mark - 1 << "\n";
	cout << maxSize << "\n";
	cout << maxSumSize << "\n";
}*/

/* 2021/02/06 */

/*int w[100], v[100], cache[101][100001]; //12865 ����� �賶
int main() {
	int i, j, n, k;
	cin >> n >> k;
	for (i = 1; i <= n; i++) {
		cin >> w[i] >> v[i];
	}

	int ret = 0;

	for (i = 1; i <= n; i++) {
		for (j = 0; j <= k; j++) {
			cache[i][j] = cache[i - 1][j];
			if (j - w[i] >= 0) {
				cache[i][j] = max(cache[i][j], cache[i - 1][j - w[i]] + v[i]);
				ret = max(ret, cache[i][j]);
			}
		}
	}

	cout << ret;
}*/

/*int s2d2[11][11], soil[11][11], num, adj[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1} }; // 16235 ���� ����ũ(���� ��Ǯ����)
priority_queue<int> board[11][11]; // �� ������ ���� ����
vector<int> dead[11][11];
int main() {
	int n, m, k, p, q, r, s, x, y, z;
	cin >> n >> m >> k;
	num = m; // ���� ���� ����
	for (p = 1; p <= n; p++) {
		for (q = 1; q <= n; q++) {
			cin >> s2d2[p][q];
			soil[p][q] = 5;
		}
	}

	for (p = 0; p < m; p++) {
		cin >> x >> y >> z;
		board[x][y].push(z);
	}

	for (p = 0; p < k; p++) {
		// ��
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				vector<int> tmp;
				while (!board[q][r].empty()) {
					int tree = board[q][r].top();
					board[q][r].pop();
					if (soil[q][r] >= tree) { // ���� ����
						soil[q][r] -= tree;
						tree++;
						tmp.push_back(tree);
					}
					else { // ���� ���
						dead[q][r].push_back(tree);
						num--;
					}
				}
				for (auto it : tmp) {
					board[q][r].push(it);
				}
			}
		}
		// ����
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				for (auto it : dead[q][r]) {
					soil[q][r] += it / 2;
				}
				dead[q][r].clear();
			}
		}

		// ����
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				vector<int> tmp2;
				while (!board[q][r].empty()) {
					int tree = board[q][r].top();
					board[q][r].pop();
					if (tree % 5 == 0) { // ����
						for (s = 0; s < 8; s++) {
							int nxtQ = q + adj[s][0], nxtR = r + adj[s][1];
							if (nxtQ<1 || nxtQ>n || nxtR<1 || nxtR>n) continue;
							board[nxtQ][nxtR].push(1); // �� ���� �߰�
							num++; // �� ���� �߰�
						}
					}
					tmp2.push_back(tree);
				}
				for (auto it : tmp2) board[q][r].push(it);
			}
		}

		//�ܿ�
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				soil[q][r] += s2d2[q][r];
			}
		}
	}

	cout << num;
}*/

/*int s2d2[11][11], soil[11][11], num, adj[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1} };
vector<int> board[11][11]; // �� ������ ���� ����
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k, p, q, r, s, x, y, z;
	cin >> n >> m >> k;
	num = m; // ���� ���� ����
	for (p = 1; p <= n; p++) {
		for (q = 1; q <= n; q++) {
			cin >> s2d2[p][q];
			soil[p][q] = 5;
		}
	}

	for (p = 0; p < m; p++) {
		cin >> x >> y >> z;
		board[x][y].push_back(z);
	}

	for (p = 0; p < k; p++) {
		// ��
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				for (auto& tree : board[q][r]) {
					if (tree < 0) continue;
					if (soil[q][r] >= tree) { // ���� ����
						soil[q][r] -= tree;
						tree++;
					}
					else { // ���� ���
						tree = -tree; // ������ ó���ϱ� ���� ������ ����. ó�� ������ -999�� ����
						num--;
					}
				}
			}
		}

		// ����
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				for (auto& tree : board[q][r]) {
					if (tree < 0 && tree != -999) {
						soil[q][r] += (-tree) / 2;
						tree = -999;
					}
				}
			}
		}

		// ����
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				for (auto& tree : board[q][r]) {
					if (tree % 5 == 0) { // ����
						for (s = 0; s < 8; s++) {
							int nxtQ = q + adj[s][0], nxtR = r + adj[s][1];
							if (nxtQ<1 || nxtQ>n || nxtR<1 || nxtR>n) continue;
							board[nxtQ][nxtR].push_back(1); // �� ���� �߰�
							sort(board[nxtQ][nxtR].begin(), board[nxtQ][nxtR].end()); // ���� � ������ ����
							num++; // �� ���� �߰�
						}
					}
				}
			}
		}

		//�ܿ�
		for (q = 1; q <= n; q++) {
			for (r = 1; r <= n; r++) {
				soil[q][r] += s2d2[q][r];
			}
		}
	}

	cout << num;
}*/

/* 2021/02/20 */

const int MAX = 1000, NINF=-1e9; // 2169 �κ� �����ϱ�
int n, m;
int board[MAX][MAX], cache[MAX][MAX][4]; //ĭ(x, y)�� ���� ������ �ִ� ĭ�� ��ġ 0 : �ʱ� ��ġ(0, 0)�� �� 1 : ���� 2 : �Ʒ� 3 : ������ 

int nxt[3][2] = { {0, 1}, {1, 0},  {0, -1} };
int dp(int x, int y, int prev) {
	if (x == n - 1 && y == m - 1) {
		return board[x][y];
	}

	int& ret = cache[x][y][prev + 1];
	if (ret != -1) return ret;
	ret = NINF;
	for (int i = 0; i < 3; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
		if ((i == 0 && prev == 2) || (i == 2 && prev == 0)) continue;
		ret = max(ret, board[x][y] + dp(nx, ny, i));
	}

	return ret;
}
int main() {
	int i, j;
	cin >> n >> m;
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	cout << dp(0, 0, -1);
}

/*int n; // 2023 �ű��� �Ҽ�

bool isPrime(int num) {
	if (num == 1) return false;
	int i;
	for (i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

void dfs(int idx, int num) {
	int i, j;
	if (idx == n) {
		if (isPrime(num)) cout << num << "\n";
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (idx == 0 && i==0) continue;
		if (!isPrime(num * 10 + i)) continue;
		dfs(idx + 1, num * 10 + i);
	}
}
int main() {
	cin >> n;
		
	dfs(0, 0);
}*/

/*string str; // 1248 �����
char board[10][10];
int n, chk = 0;

void dfs(int idx, vector<int> vec) {
	if (chk) return; // �̹� ������ ��������� �ٷ� ����
	if (idx == n) { // ��� ���� ����, ����ϰ� chk 1�� ���� �� ����
		for (auto it : vec) {
			cout << it << " ";
		}
		chk = 1;
		return;
	}
	int i, j;
	for (i = -10; i <= 10; i++) {
		vec[idx] = i;
		int sum = 0, chk=1;
		for (j = idx; j >=0; j--) { // ���� üũ
			sum += vec[j];
			if ((board[j][idx] == '+' && sum <= 0) ||
				(board[j][idx] == '-' && sum >= 0) ||
				(board[j][idx] == '0' && sum != 0)) chk=0;
		}
		if(chk) dfs(idx + 1, vec);
	}
}

int main() {
	cin >> n >> str;
	int i, j, idx = 0;

	//�迭 ����
	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			board[i][j] = str[idx++];
		}
	}

	dfs(0, vector<int>(n));
}*/