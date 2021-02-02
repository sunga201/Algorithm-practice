#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <string>
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

/*typedef vector<vector<long long>> Matrix; //11444 �Ǻ���ġ �� 6
const int MOD = 1e9 + 7;
long long n;
Matrix init = { {1, 1}, {1, 0} };

Matrix matrixMul(Matrix a, Matrix b) {
	Matrix ret(2);
	int i, j, k;
	for (i = 0; i < 2; i++) {
		ret[i].resize(2);
		for (j = 0; j < 2; j++) {
			ret[i][j] = 0;
			for (k = 0; k < 2; k++) {
				ret[i][j] += a[i][k] * b[k][j];
				ret[i][j] %= MOD;
			}
		}
	}
	return ret;
}

Matrix func(long long n) {
	if (n == 1) return init;
	Matrix tmp;
	if (n % 2) { // n Ȧ��
		tmp = func(n - 1);
		return matrixMul(init, tmp);
	}
	else { // n ¦��
		tmp = func(n / 2);
		return matrixMul(tmp, tmp);
	}
}

int main(){
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}

	Matrix ret = func(n);
	cout << ret[1][0];
}*/

/*const int MOD = 1e9 + 7; // 15999 ������	
int nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
char board[2000][2000];

long long func(int num) {
	if (num == 1) return 2;
	long long tmp;
	if (num % 2) {
		tmp = func(num - 1);
		return (2 * tmp) % MOD;
	}
	else {
		tmp = func(num / 2);
		return (tmp * tmp) % MOD;
	}
}
int main() {
	int i, j, k, n, m;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> board[i];
	}

	int num = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			char here = board[i][j];
			for (k = 0; k < 4; k++) {
				int nxtX = i + nxt[k][0], nxtY = j + nxt[k][1];
				if (nxtX < 0 || nxtX >= n || nxtY < 0 || nxtY >= m) continue;
				if (board[nxtX][nxtY] != here) break;
			}
			if (k == 4) {
				num++;
			}
		}
	}
	cout << func(num) << endl;
}*/

/*const int UNIT = 10000; // 15953 ��� ����
int firstArr[2][6] = { {1, 3, 6, 10, 15, 21}, {500, 300, 200, 50, 30, 10} },
    secondArr[2][5] = { {1, 3, 7, 15, 31}, {512, 256, 128, 64, 32} };
int main() {
	int i, j, t, a, b;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> a >> b;
		int num = 0;
		if (a != 0) {
			for (j = 0; j < 6; j++) {
				if (firstArr[0][j] >= a) {
					num += firstArr[1][j];
					break;
				}
			}
		}

		if (b != 0) {
			for (j = 0; j < 5; j++) {
				if (secondArr[0][j] >= b) {
					num += secondArr[1][j];
					break;
				}
			}
		}
		cout << num * UNIT << "\n";
	}
}*/

/*typedef long long ll; // 1081 ��

int arr[10] = { 0, 1, 3, 6, 10, 15, 21, 28, 36, 45 };
ll func(int n) {
	ll div = 1, sum = 0;
	while (n / div > 0) {
		int quot = n / (div * 10), remainder = n % (div * 10);
		if (n / (div*10) != 0) {
			sum += quot * div * arr[9];
		}
		ll smallerDivQuot = remainder / div, smallerDivRemainder = remainder % div;
		if (div != 1) {
			sum += smallerDivQuot * (smallerDivRemainder + 1ll);
		}
		if (div == 1) {
			sum += arr[smallerDivQuot] * div;
		}
		else
			sum += arr[smallerDivQuot - 1] * div;
		div *= 10;
	}
	return sum;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << func(b) - func(a - 1);
}*/

/*char board[8][8]; //1100 �Ͼ� ĭ
int main() {
	int i, j, chk = 1, ret=0;
	for (i = 0; i < 8; i++) {
		cin >> board[i];
	}
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (chk && board[i][j] == 'F') ret++;
			chk = (chk + 1) % 2;
		}
		chk = (chk + 1) % 2;
	}
	cout << ret;
}*/

/*int rad[2002]; //1254 �Ӹ���� �����
int main() {

	string s;
	cin >> s;
	char temp[2002];
	int i, r=0, c=0, len=s.length();
	for (i = 0; i < len; i++) {
		temp[2 * i] = '#';
		temp[2 * i + 1] = s[i];
	}
	temp[2 * len] = '#';
	temp[2 * len + 1] = '\0';
	for (i = 0; i <= 2*len; i++) {
		if (r < i) rad[i] = 0;
		else rad[i] = min(rad[2 * c - i], r - i);
		while (i + rad[i] + 1 <= 2 * len && i - (rad[i] + 1) >= 0
			&& temp[i + rad[i] + 1] == temp[i - rad[i] - 1]) {
			rad[i]++;
		}
		if (r < i + rad[i]) {
			r = i + rad[i];
			c = i;
		}
	}

	int mina = 1e9;
	for (i = 0; i <= 2*len; i++) {
		if (rad[i] + i == 2 * len) {
			int t = ((i - 1) - (2 * len - 1 - i)) / 2;
			mina = min(mina, t);
		}
	}
	cout << len + mina << endl;
}*/

/*int dp[5000][5000]; // 5502 �Ӹ����
int main() {
	int i, j, n;
	string s, sRev;
	cin >> n >> sRev;
	s = sRev;
	reverse(sRev.begin(), sRev.end());
	for (i = 0; i < n; i++) {
		if (s[i] == sRev[0] || (i > 0 && dp[0][i - 1] == 1)) dp[0][i] = 1;
		if (sRev[i] == s[0] || (i > 0 && dp[i - 1][0] == 1)) dp[i][0] = 1;
	}

	int ret = 0;
	for (i = 1; i < n; i++) {
		for (j = 1; j < n; j++) {
			if (sRev[i] == s[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
			dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]));
			ret = max(ret, dp[i][j]);
		}
	}
	cout << n - ret;
}*/

/*const int MAX = 2000000; // 1747 �Ҽ�&�Ӹ����
int arr[MAX], prime[MAX], sz=0;
void func() {
	int i;
	for (i = 2; i * i <= MAX; i++) {
		if (arr[i]) continue;
		int here = i * 2;
		while (here <= MAX) {
			arr[here] = 1;
			here += i;
		}
	}

	for (i = 2; i < MAX; i++) {
		if (arr[i] == 0) {
			prime[sz++] = i;
		}
	}
}

bool isPalindrome(int num) {
	string s = to_string(num);
	int i=0, j=s.length()-1;
	while (i < j) {
		if (s[i] != s[j]) return false;
		i++;
		j--;
	}
	return true;
}
int main() {
	int i, n;
	func();
	cin >> n;
	for (i = 0; i < sz; i++) {
		if (n > prime[i]) continue;
		if (isPalindrome(prime[i])) {
			cout << prime[i];
			return 0;
		}
	}
}*/

/*int main() { //10174 �Ӹ����
	int n, i;
	string s;
	cin >> n;
	cin.get();
	while (n--) {
		getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		int len = s.length();
		for (i = 0; i < len/2; i++) {
			if (s[i] != s[len - i - 1]) {
				cout << "No\n";
				break;
			}
		}
		if(i==len/2) cout << "Yes\n";
	}
}*/

/*int main() { // 13333 Q-�ε���
	int i, n, a;
	vector<int> vec;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a;
		vec.push_back(a);
	}

	sort(vec.begin(), vec.end());
	for (i = 10000; i >= 0; i--) {
		auto it = lower_bound(vec.begin(), vec.end(), i);
		if (vec.end() - it >= i) {
			cout << i;
			return 0;
		}
	}
}*/

/*int rail[40000], eat[3001]; //2531 ȸ�� �ʹ�
int main() {
	int i, j, n, d, k, c, now=0;
	cin >> n >> d >> k >> c;
	for (i = 0; i < n; i++) {
		cin >> rail[i];
	}

	for (i = 0; i < k; i++) {
		rail[n + i] = rail[i];
		eat[rail[i]]++; // 0������ k-1�� �ʹ��� ���� ��
		if (eat[rail[i]] == 1) now++;
	}
	eat[c]++; // �������� �Դ� �ʹ� ǥ��
	if (eat[c] == 1) now++;
	int ret = now; // ret�� �ִ�� ���� ������ �ʹ��� ���� ���� �ʹ� ������

	int l = 0, r = k-1;
	while (r < n + k - 2) {
		eat[rail[l]]--;
		if (eat[rail[l]] == 0) now--;

		eat[rail[r + 1]]++;
		if (eat[rail[r + 1]] == 1) now++;
		ret = max(ret, now);
		l++;
		r++;
	}
	cout << ret;
}*/

/*int main() { //1940 �ָ�
	int i, n, m, a, ret=0;
	vector<int> vec;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	int l = 0, r = n - 1;
	while (l < r) {
		if (vec[l] + vec[r] == m) {
			ret++;
			l++;
			r--;
		}
		else if (vec[l] + vec[r] < m) l++;
		else r--;
	}
	cout << ret;
}*/

/*int main() { //1312 �Ҽ�
	int a, b, n, ret=0;
	cin >> a >> b >> n;
	a = a % b;
	while (n--) {
		a *= 10;
		ret = a / b;
		a %= b;
	}
	cout << ret;
}*/

/*// ��ŸƮ��ũ Ÿ��
//0 ~ 9���� ��ȣ�� ǥ���� �� ������ �ʴ� ������ �ε����� �̸� ����س��´�.
//�ε����� row * 3 + col�� ���� ex) (2, 1) -> 7
vector<int> vec[10] = { 
	{4, 7, 10}, // 0
	{0, 1, 3, 4, 6, 7, 9, 10, 12, 13}, //1
	{3, 4, 10, 11}, //2
	{3, 4, 9, 10}, //3
	{1, 4, 9, 10, 12, 13}, //4
	{4, 5, 9, 10}, //5
	{4, 5, 10}, //6
	{3, 4, 6, 7, 9, 10, 12, 13}, //7
	{4, 10}, //8
	{4, 9, 10} //9
};

vector<int> digit[9]; // ��ȣ �ȳ��� �� �ڸ��� ��Ÿ�� �� �ִ� ���ڵ��� ��Ƴ��� ���� �迭
int powList[9] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000 };
char board[5][35];
int main() {
	int n, i, j, k;
	long long sum = 0;
	cin >> n;
	for (i = 0; i < 5; i++) {
		cin >> board[i];
	}

	for (i = 0; i < n; i++) { // �� �ڸ��� Ȯ��
		vector<int> light; // ���� �ڸ����� �����ִ� ������ �ε����� �����ϴ� �迭
		for (j = 0; j < 5; j++) {
			for (k = i * 4; k < i * 4 + 4; k++) {
				if (board[j][k] == '#') { // ���� �����ִ� ���
					int idx = k - i * 4 + j * 3;
					light.push_back(idx);
				}
			}
		}

		for (j = 0; j < 10; j++) {
			int chk = 0;
			for (auto noLight : vec[j]) {
				for (auto pnt : light) {
					if (noLight == pnt) { // Ư�� ���ڰ� �Ǳ� ���ؼ� �����־�� �ϴ� �ڸ��� ������ �����ִٸ�
									      // �� �ڸ��� �� ���ڰ� �� �� ����.
						chk = 1;
						break;
					}
				}
				if (chk) break;
			}
			if (!chk) {
				digit[i].push_back(j);
			}
		}
	}

	double mul = 1.0; //����� �� ����. �ִ� 1e9-1
	for (i = 0; i < n; i++) {
		mul *= digit[i].size(); 
	}

	if (mul == 0) { // �� �� �ִ� ���� ����. -1 ���
		cout << -1;
		return 0;
	}

	// �� �ڸ����� ������ �� �ڸ��� �ü��ִ� ������ �հ�, �� ���ڰ� ���Ǵ� ��� ��츦 ���ؼ� ���� �� �ִ�.
	// ������� 100�� �ڸ� 4 / 10�� �ڸ� 0, 1, 3, 4, 7, 8, 9  / 1���ڸ� 5�� ���������
	// 100�� �ڸ� �� : 4 * ������ �ڸ� ����� �� 7 X 1 * 100 = 2800
	// 10�� �ڸ� �� : (0 + 1 + 3 + 4 + 7 + 8 + 9) * ������ �ڸ� ����� �� 1 X 1 * 10 = 320
	// 1�� �ڸ� �� : 5 * ������ �ڸ� ����� �� 1 X 7  * 1  = 35
	// �� ���� ���ϸ� 3155�̰�, �̸� ��� ����� �� 7�� ������ �� 450.7�̶�� ��հ��� ���� �� �ִ�.
	for (i = 0; i < n; i++) {
		int tmp = 0;
		for (auto num : digit[i]) tmp += num;
		sum += tmp * (mul / digit[i].size()) * powList[n - i - 1];
	}
	cout << sum / mul << endl;
}*/

int arr[10] = { 1, 3, 4,5 ,2, 7, 10, 9, 8, 6 }, tmp[10];

/*void qSort(int start, int end) { //qsort 1
	if (start >= end) return;
	int p = start, q = end, pivot = arr[(p + q) / 2];
	while (p <= q) {
		while (arr[p] < pivot && p<=end) p++;
		while (arr[q] > pivot && q>=start) q--;
		if (p <= q) {
			swap(arr[p], arr[q]);
			p++;
			q--;
		}
	}
	qSort(start, q);
	qSort(p, end);
}*/

/*int partition(int start, int end) { //qsort 2
	int p = start+1, q = end, pivot = arr[start];
	while (p <= q) {
		while (arr[p] < pivot && p <= end) p++;
		while (arr[q] > pivot && q >= start) q--;
		if (p <= q) {
			swap(arr[p], arr[q]);
			p++;
			q--;
		}
	}
	swap(arr[start], arr[q]);
	return q;
}

void qSort(int start, int end) {
	if (start >= end) return;
	int p = partition(start, end);
	qSort(start, p - 1);
	qSort(p + 1, end);
}*/

/*void merge(int start, int mid, int end) { //merge sort
	int p = start, q = mid+1, idx = start;
	while (p <= mid && q <= end) {
		if (arr[p] <= arr[q]) tmp[idx++] = arr[p++];
		else tmp[idx++] = arr[q++];
	}

	while(p<=mid) tmp[idx++] = arr[p++];
	while(q<=end) tmp[idx++] = arr[q++];

	for (int i = start; i <= end; i++) {
		arr[i] = tmp[i];
	}
}

void mSort(int start, int end) {
	if (start >= end) return;
	int mid = start + end >> 1;
	mSort(start, mid);
	mSort(mid+1, end);
	merge(start, mid, end);
}*/

/*int main() {
	int i;
	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	qSort(0, 9);
	for (i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}*/

/*char board[50][50]; // 1051 ���� ���簢��
int main() {
	int i, j, k, n, m;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> board[i];
	}

	int len = min(n, m);
	for (i = len - 1; i >= 1; i--) {
		for (j = 0; j + i < n; j++) {
			for (k = 0; k + i < m; k++) {
				int a = board[j][k], b = board[j][k + i], c = board[j + i][k], d = board[j + i][k + i];
				if (a == b && b == c && c == d) {
					cout << (i+1)*(i+1);
					return 0;
				}
			}
		}
	}
	cout << 1;
}*/

/*int n, m;
int adj[1001][1001], d, visited[1001];

void dfs(int here, int obj, int dist) {
	if (d != -1) return;
	if (here == obj) {
		d = dist;
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (adj[here][i] && !visited[i]) {
			visited[i] = 1;
			dfs(i, obj, dist + adj[here][i]);
		}
	}
}
int main() {
	int i, a, b, c;
	cin >> n >> m;
	for (i = 0; i < n - 1; i++) {
		cin >> a >> b >> c;
		adj[a][b] = c;
		adj[b][a] = c;
	}

	for (i = 0; i < m; i++) {
		memset(visited, 0, sizeof(visited));
		d = -1;
		cin >> a >> b;
		visited[a] = 1;
		dfs(a, b, 0);
		cout << d <<"\n";
	}
}*/

/*const int MAX = 1001; //13901 �κ�
int nxt[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} }, board[MAX][MAX], chk[MAX][MAX], dir[4];
int main() {
	int r, c, k, a, b, x, y, i, j;
	cin >> r >> c >> k;
	for (i = 0; i < k; i++) {
		cin >> a >> b;
		board[a][b] = 1;
	}
	cin >> x >> y;
	chk[x][y] = 1;
	for (i = 0; i < 4; i++) cin >> dir[i];
	int idx = 0, stk = 0;
	while (true) {
		int d = dir[idx] - 1, nx = x + nxt[d][0], ny = y + nxt[d][1];
		if (nx >= 0 && nx < r && ny >= 0 && ny < c && board[nx][ny] == 0 && chk[nx][ny] == 0) {
			stk = 0;
			while (nx >= 0 && nx < r && ny >= 0 && ny < c && board[nx][ny] == 0 && chk[nx][ny] == 0) {
				chk[nx][ny] = 1;
				nx += nxt[d][0], ny += nxt[d][1];
			}

			x = nx-nxt[d][0], y = ny-nxt[d][1];
		}
		else stk++;
		if (stk == 4) break;
		idx++;
		if(idx==4) idx = 0;
	}
	cout << x << " " << y << "\n";
}*/