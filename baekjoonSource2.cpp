#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

/*int s, n, k, row1, row2, col1, col2, init[8][8], ret[50][50]; // 1030 프랙탈 평면 (내가 생각한 방법, 오래걸림)

void func(int s, int r1, int r2, int c1, int c2, int isBlack) {
	cout << "s : " << s << ", r1 : " << r1 << ", r2 : " << r2 << ", c1 : " << c1 << ", c2 : " << c2 << endl;
	int i, j;
	if (s == 1 || isBlack) {
		cout << "here, isBlack : "<<isBlack<<endl;
		for (i = r1; i <= r2; i++) {
			for (j = c1; j <= c2; j++) {
				if (isBlack) ret[i - row1][j - col1] = 1; // r1~r2, c1~c2 범위가 전부 검정색인 경우
				else ret[i - row1][j - col1] = init[i % n][j % n]; // s=1인 경우
			}
		}
		return;
	}

	int rs=r1, cs=c1, rStart=0, cStart=0, rBorder=0, cBorder=0, smallerN = (int)pow(n, s - 1); // rs, cs : 시작 지점
																							   // rBorder, cBorder : 각각 행, 열 끊어주는 구간
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
			if (ce == col2) break; // 열을 전부 분할했을 때 반복문 종료
			cs = cBorder;
			cBorder += smallerN;
		}
		if (re == row2) break; // 행을 전부 분할했을 때 반복문 종료
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
			if (i >= (n - k) / 2 && i < (n + k) / 2 && j >= (n - k) / 2 && j < (n + k) / 2) { // 검은색으로 칠하는 부분
				init[i][j] = 1;
			}
			else init[i][j] = 0;
		}
	} //확인 끝

	func(s, row1, row2, col1, col2, 0);

	for (i = 0; i <= row2 - row1; i++) {
		for (j = 0; j <= col2 - col1; j++) {
			cout << ret[i][j];
		}
		cout << endl;
	}
}*/

/*int s, n, k, r1, r2, c1, c2; //1030 프랙탈 평면 (빠름)

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

typedef long long ll;
ll num[50];
int n, m;
char board[50][50];

bool chk(ll num, int digit) {
	return num & ((1ll) << (n-digit-1));
}

ll reverse(ll num) {
	return num ^ (((1ll) << n) - 1);
}

int count(ll sum) {
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
	for (i = 0; i < n; i++) {
		cin >> board[i];
	}
	cin >> k;

	// 각 열을 숫자로 나타내기
	for (i = 0; i < m; i++) { //열
		for (j = 0; j < n; j++) { //행
			num[i] += board[j][i]-'0';
			if(j!=n-1) num[i] <<= 1;
		}
	}

	int ret = 0;
	for (i = 0; i < n; i++) {
		int remain = k;
		long long sum = ((1ll)<<n) - 1; // 각 열들 and 연산한 결과가 들어감.
		for (j = 0; j < m; j++) {
			if (!chk(num[j], i)) { // num[j]의 2^i 자리가 0인 경우
				sum &= reverse(num[j]);
				remain--;
			}
			else sum &= num[j];
		}
		if (remain < 0 || remain % 2 == 1) continue;
		ret = max(ret, count(sum));
	}
	cout << ret << endl;
}