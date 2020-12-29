#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <utility>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

/*int s, n, k, row1, row2, col1, col2, init[8][8], ret[50][50]; // 1030 ����Ż ��� (���� ������ ���, �����ɸ�)

void func(int s, int r1, int r2, int c1, int c2, int isBlack) {
	cout << "s : " << s << ", r1 : " << r1 << ", r2 : " << r2 << ", c1 : " << c1 << ", c2 : " << c2 << endl;
	int i, j;
	if (s == 1 || isBlack) {
		cout << "here, isBlack : "<<isBlack<<endl;
		for (i = r1; i <= r2; i++) {
			for (j = c1; j <= c2; j++) {
				if (isBlack) ret[i - row1][j - col1] = 1; // r1~r2, c1~c2 ������ ���� �������� ���
				else ret[i - row1][j - col1] = init[i % n][j % n]; // s=1�� ���
			}
		}
		return;
	}

	int rs=r1, cs=c1, rStart=0, cStart=0, rBorder=0, cBorder=0, smallerN = (int)pow(n, s - 1); // rs, cs : ���� ����
																							   // rBorder, cBorder : ���� ��, �� �����ִ� ����
																							   // smallerN : N^(s-1)
	cout << "smallerN : " << smallerN << endl;
	while (rStart <= r1) rStart += smallerN;
	while (cStart <= c1) cStart += smallerN;

	rBorder = rStart;
	while (true) {
		int blk = 0;
		cs = c1;
		cBorder = cStart;
		int re = min(row2, rBorder - 1);
		while (true) {
			cout << "rs : "<<rs<<", cs : "<<cs<<", rBorder : " << rBorder << ", cBorder : " << cBorder << endl;
			cout << "border : " << smallerN * ((n - k) / 2) << " ~ " << smallerN * ((n + k) / 2) << endl;
			int tmp = pow(n, s), a=rs%tmp, b=cs%tmp;
			if ((a >= smallerN * ((n - k) / 2)) && (a < smallerN * ((n + k) / 2))
				&& (b >= smallerN * ((n - k) / 2)) && (b < smallerN * ((n + k) / 2))) blk = 1;
			else blk = 0;
			int ce = min(col2, cBorder - 1);
			func(s - 1, rs, re, cs, ce, blk);
			if (ce == col2) break; // ���� ���� �������� �� �ݺ��� ����
			cs = cBorder;
			cBorder += smallerN;
		}
		if (re == row2) break; // ���� ���� �������� �� �ݺ��� ����
		rs = rBorder;
		rBorder += smallerN;
	}
	cout << "	r1 : "<<r1<<", r2 : "<<r2<<", c1 : "<<c1<<", c2 : "<<c2<<", end." << endl;
}
int main() {
	int i, j;
	cin >> s >> n >> k >> row1 >> row2 >> col1 >> col2;
	if (s == 0) {
		cout << 0;
		return 0;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i >= (n - k) / 2 && i < (n + k) / 2 && j >= (n - k) / 2 && j < (n + k) / 2) { // ���������� ĥ�ϴ� �κ�
				init[i][j] = 1;
			}
			else init[i][j] = 0;
		}
	} //Ȯ�� ��

	func(s, row1, row2, col1, col2, 0);

	for (i = 0; i <= row2 - row1; i++) {
		for (j = 0; j <= col2 - col1; j++) {
			cout << ret[i][j];
		}
		cout << endl;
	}
}*/

/*int s, n, k, r1, r2, c1, c2; //1030 ����Ż ��� (����)

int func(int len, int x, int y) {
	if (len == 1) return 0;
	int border = len / n;
	if (x >= border * (n - k) / 2 && x < border * (n + k) / 2 && y >= border * (n - k) / 2 && y < border * (n + k) / 2) {
		return 1;
	}
	return func(border, x % border, y % border);
}

int main() {
	int i, j;
	cin >> s >> n >> k >> r1 >> r2 >> c1 >> c2;
	if (s == 0) {
		cout << 0;
		return 0;
	}
	
	int len = 1;
	while (s--) len *= n;
	for (i = r1; i <= r2; i++) {
		for (j = c1; j <= c2; j++) {
			cout << func(len, i, j);
		}
		cout << endl;
	}
}*/

/*typedef long long ll; // 1034 ����
ll num[50];
int n, m;
ll maxa; // n�ڸ����� ��� 1�� ������
char board[50][50];

bool chk(ll num, int digit) { // num�� digit�ڸ� bit�� 1���� 0���� Ȯ���ϴ� �Լ�
							  // 1�̸� true, 0�̸� false return
	return num & ((1ll) << (n-digit-1));
}

ll reverse(ll num) { // num�� bit 0 -> 1��, 1 -> 0���� ��ȯ�ϴ� �Լ� 
	return num ^ maxa;
}

int count(ll sum) { // ���� sum���� bit 1�� ������ ���� �Լ�
	int ret = 0;
	while (sum > 0) {
		if (sum & 1) ret++;
		sum >>= 1;
	}
	return ret;
}

int main() {
	int i, j, k;
	cin >> n >> m;
	maxa = (((1ll) << n) - 1);
	for (i = 0; i < n; i++) {
		cin >> board[i];
	}
	cin >> k;

	// �� ���� ���ڷ� ��Ÿ����
	for (i = 0; i < m; i++) { //��
		for (j = 0; j < n; j++) { //��
			num[i] += board[j][i]-'0';
			if(j!=n-1) num[i] <<= 1;
		}
	}

	int ret = 0;
	for (i = 0; i < n; i++) {
		int remain = k;
		long long sum = maxa; // �� ���� and ������ ����� ��.
		for (j = 0; j < m; j++) {
			if (!chk(num[j], i)) { // num[j]�� 2^i �ڸ��� 0�� ���
				sum &= reverse(num[j]);
				remain--;
			}
			else sum &= num[j];
		}
		if (remain < 0 || remain % 2 == 1) continue;
		ret = max(ret, count(sum));
	}
	cout << ret << endl;
}*/

/*int n, arr[10]; //17127 ������ �������� �Ǿ ����

int func(int idx, int prev, int val) {
	if (idx == 4) return val;
	int ret = 0, mul=1;
	for (int i = prev + 1; i < n - (3 - idx); i++) {
		mul *= arr[i];
		ret = max(ret, func(idx + 1, i, val+mul));
	}
	return ret;
}
int main() {
	int i;
	cin >> n;
	for (i = 0; i < n; i++) cin >> arr[i];
	cout << func(0, -1, 0);
}*/

/*map<string, int> mp; //15997 �º� ����

typedef struct game {
	int x, y;
	double win, draw, lose;
}Game;

Game gameArr[6];
double ret[6];
int score[6];
vector<pair<int, int>> finalScore(4);
void func(int idx, double proc) {
	if (idx == 6) { // ��� ������ Ȯ�� �����ֱ�
		if (proc == 0) return;
		for (int i = 0; i < 4; i++) {
			finalScore[i] = {score[i], i};
		}
		sort(finalScore.begin(), finalScore.end());
		int aScore = finalScore[0].first,
			bScore = finalScore[1].first,
			cScore = finalScore[2].first,
			dScore = finalScore[3].first;

		int a = finalScore[0].second,
			b = finalScore[1].second,
			c = finalScore[2].second,
			d = finalScore[3].second;
		//----------------------------------------------------------------------------------
		//	���� ����� ��
		//	1. b != c-> c, d ����
		//	2. b == c -> d ����, b/c ��÷�Ͽ� �� �� ���� -> b�� c�� p/2 Ȯ���� ����
		//	3. a == b == c -> d ����, a/b/c ��÷�Ͽ� �� �� ���� -> a/b/c�� p/3 Ȯ���� ����
		//	4. b == c == d -> b/c/d ��÷�Ͽ� �� �� ���� -> b/c/d p*2/3 Ȯ���� ����
		//	5. a == b == c == d -> a/b/c/d ��÷�Ͽ� �� �� ���� -> a/b/c/d p/2 Ȯ���� ����
		//	                                                       
		//-----------------------------------------------------------------------------------

		if (bScore != cScore) { // 1
			ret[c] += proc;
			ret[d] += proc;
		}
		else if (aScore == bScore && cScore == dScore) { // 5
			ret[a] += proc / 2;
			ret[b] += proc / 2;
			ret[c] += proc / 2;
			ret[d] += proc / 2;
		}
		else if (aScore == bScore) { // 3
			ret[a] += proc / 3;
			ret[b] += proc / 3;
			ret[c] += proc / 3;
			ret[d] += proc;
		}
		else if (cScore == dScore) { // 4
			ret[b] += proc * 2 / 3;
			ret[c] += proc * 2 / 3;
			ret[d] += proc * 2 / 3;
		}
		else { // 2
			ret[b] += proc / 2;
			ret[c] += proc / 2;
			ret[d] += proc;
		}
		return;
	}

	//-----------------------------------------
	//	idx��° ������ �����ڸ� x, y�� ����.
	//	1. x�� �̰��� ��
	//	2. ����� ��
	//	3. y�� �̰��� ��
	//	�� ���� �� �ִ�. ������ ��� ����Ž��
	//-----------------------------------------

	Game g = gameArr[idx];
	//1. x�� �̰��� ��
	score[g.x] += 3;
	func(idx + 1, proc * g.win);
	score[g.x] -= 3;

	//2. ���� ����� ��
	score[g.x]++;
	score[g.y]++;
	func(idx + 1, proc * g.draw);
	score[g.x]--;
	score[g.y]--;

	//3. y�� �̰��� ��
	score[g.y] += 3;
	func(idx + 1, proc * g.lose);
	score[g.y] -= 3;
}

int main() {
	int i;
	string a, b;
	double p, q, r;
	for (i = 0; i < 4; i++) {
		cin >> a;
		mp[a] = i;
	}

	for (i = 0; i < 6; i++) {
		cin >> a >> b >> p >> q >> r;
		gameArr[i] = { mp[a], mp[b], p, q, r };
	}

	func(0, 1.0);

	cout << fixed;
	cout.precision(10);
	for (i = 0; i < 4; i++) {
		cout << ret[i] << endl;
	}
}*/

/*const int MAX = 300000; //15998 īī���Ӵ�
typedef long long ll;
int n;
ll arr[MAX][2];
vector<pair<int, ll>> vec;
vector<ll> measure;
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int i, chk=1;
	ll curMoney = 0;
	cin >> n;
	//1. ���� �ݾ� ���ϱ�
	for (i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
		if (arr[i][0] < 0 && -arr[i][0] > curMoney) { // ���� �ݾ׺��� �� ���� �ݾ��� ����Ϸ� �ϴ� ���
			ll km = arr[i][1] - arr[i][0] - curMoney; // �ݾ� m�� k�� �������� ���� ���� �ݾ�
			vec.emplace_back(i, km);
		}
		else if(curMoney + arr[i][0] != arr[i][1]) {
			chk = 0;
		}
		curMoney = arr[i][1];
	}
	
	if (!chk) {
		cout << -1;
		return 0;
	}
	if (vec.size()) {
		//2. ���� �ݾ׵��� �ִ����� ���ϱ�
		ll tmp = vec[0].second;
		for (i = 1; i < vec.size(); i++) {
			if (tmp < vec[i].second) tmp = gcd(vec[i].second, tmp);
			else tmp = gcd(tmp, vec[i].second);
		}

		int chk = 1;
		for (auto it : vec) {
			int idx = it.first;
			ll prev = (idx == 0 ? 0 : arr[idx - 1][1]);
			if (it.second - tmp >= -(prev + arr[idx][0])) { // ���� ������ �ʿ� �̻����� �� ���,
															// �� ���� ���� �� �� ����.
				chk = 0;
				break;
			}
		}
		if (chk) {
			cout << tmp;
			return 0;
		}
		cout << -1;
	}
	else cout << 1;
}*/