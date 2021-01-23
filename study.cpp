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



/*const int INF = 1e9; // 16197 두 동전

char board[20][20];
int n, m, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

//ax, ay : 첫 번째 동전 좌표, bx, by : 두 번째 동전 좌표, moveNum : 이동 횟수

bool outChk(int x, int y) { // 동전이 보드 밖으로 나갔는지 체크
	if (x < 0 || x > n - 1 || y < 0 || y > m - 1) return true;
	else return false;
}

void print(int mode, int ax, int ay, int bx, int by, int mvNum) { // 테스트용 출력 함수
	cout << (mode ? "b " : "a ") << "out, ax : " << ax << ", ay : " << ay << ", bx : " << bx << ", by : " << by << ", mvNum : " << mvNum << endl;
}

int dfs(int ax, int ay, int bx, int by, int moveNum) {
	if (moveNum > 10) {
		return INF;
	}

	// 동전 a 밖으로 떨어짐
	if (outChk(ax, ay)){
		if (!outChk(bx, by)) {
			//print(0, ax, ay, bx, by, moveNum);
			return moveNum;
		}
		else return INF; // 둘이 같이 떨어짐
	}
	else if (outChk(bx, by)) {
		//print(1, ax, ay, bx, by, moveNum);
		return moveNum; // 동전 a는 밖으로 떨어지지 않았으므로 바로 이동 횟수 리턴
	}
	
	int ret = INF;
	for (int i = 0; i < 4; i++) {
		int axNxt = ax + nxt[i][0], ayNxt = ay + nxt[i][1],
			bxNxt = bx + nxt[i][0], byNxt = by + nxt[i][1]; // 다음으로 이동할 칸을 구한다.

		// 이동하려는 방향의 칸이 벽일 경우 제자리에 그대로
		if (board[axNxt][ayNxt] == '#') {
			axNxt = ax, ayNxt = ay;
		}

		// 이동하려는 방향의 칸이 벽일 경우 제자리에 그대로
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
			if (board[i][j] == 'o') { // 동전의 처음 위치 저장
				if (a == -1) a = i, b = j;
				else c = i, d = j;
			}
		}
	}

	int ret = dfs(a, b, c, d, 0);
	cout << (ret == INF ? -1 : ret); // 최종 값이 INF일 경우 10번 이내에 동전 하나만 떨어뜨리는 방법이 없음을 의미한다.
}*/

/*vector<int> pos; // 8983 사냥꾼
vector<pair<int, int>> animal; 
int main() {
	int i, m, n, range, x, y;
	cin >> m >> n >> range;
	for (i = 0; i < m; i++) {
		cin >> x;
		pos.push_back(x); // 사로 위치 저장
	}

	sort(pos.begin(), pos.end()); //사로 정렬
	for (i = 0; i < n; i++) {
		cin >> x >> y;
		animal.emplace_back(x, y); // 각 동물의 좌표 저장
	}

	sort(animal.begin(), animal.end()); // 동물 정렬(x 오름차순, y 오름차순)

	int ret = 0;
	for (i = 0; i < n; i++) {
		int x=animal[i].first, y=animal[i].second, l = 0, r = m, mid;
		while (l < r) { // 이분 탐색
			mid = l + r >> 1;
			int dist = abs(pos[mid] - x) + y; // 동물에서 사대 pos[mid]까지의 거리
			if (dist <= range) { // 사정거리 안
				ret++; // 이 동물은 잡을 수 있음.
				break;
			}
			else { //사정거리 밖
				if (pos[mid]< x) { // 동물이 사대 pos[mid]보다 오른쪽에 있음.
					l = mid + 1;
				}
				else r = mid;// 동물이 사대보다 pos[mid]보다 왼쪽에 있음.
			}
		}
	}
	cout << ret;
}*/

/*int n, m, mark=1, board[50][50], chk[50][50], nxt[4][2] = { {0, -1}, {-1, 0}, {0, 1}, {1, 0} }, sizeArr[2501]; //2234 성곽
    
	// -----------------------------------------------------------------
	// n, m : 세로, 가로 크기
	// mark : 방의 갯수를 세기 위한 변수
	// board : 벽에 대한 정보 저장
	// chk : 각 칸이 어느 방에 속해있는지 기록한다.
	// nxt : 다음 칸을 확인하기 위해 사용, 차례대로 서, 북, 동, 남
	// sizeArr : 각 방의 크기를 저장하기 위해 사용
	// -----------------------------------------------------------------

int dfs(int x, int y) {
	chk[x][y] = mark;
	int ret = 1; // 방이 몇 칸인지 저장한다.
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if ((board[x][y] & (1<<i)) || chk[nx][ny]) continue; // 이동할 방향에 벽이 있는지, 이미 방문한 지점은 아닌지 체크한다.
		ret+=dfs(nx, ny);
	}
	return ret;
}

//서쪽 : 1 북쪽 : 2 동쪽 : 4 남쪽 : 8
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
				maxSize = max(maxSize, size); // 가장 넓은 방의 넓이 저장
				sizeArr[mark] = size;
				mark++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (k = 0; k < 4; k++) {
				int nx = i + nxt[k][0], ny = j + nxt[k][1];

				// 보드 밖으로 나가거나, 현재 방과 같은 방인 경우 continue
				if (nx < 0 || nx >= n || ny < 0 || ny >= m || chk[i][j] == chk[nx][ny]) continue; 

				maxSumSize = max(maxSumSize, sizeArr[chk[i][j]] + sizeArr[chk[nx][ny]]); // 다른 방과 합쳤을 때 최대 넓이를 저장한다.
			}
		}
	}
	cout << mark - 1 << "\n";
	cout << maxSize << "\n";
	cout << maxSumSize << "\n";
}*/