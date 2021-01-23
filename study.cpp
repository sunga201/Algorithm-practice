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
#pragma warning(disable:4996)
using namespace std;



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