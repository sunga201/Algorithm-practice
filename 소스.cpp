#pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <stack>
#include <functional>
#include <iterator>
#include <regex>
#include <set>
#include <iomanip>
#include <ctime>

using namespace std;

////////////////////////////////////////
			 /*1차원 배열*/
////////////////////////////////////////

/*int main() { //10818 최소, 최대
	int i, n, a, mina = 1000001, maxa = -1000001;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (mina > a) mina = a;
		if (maxa < a) maxa = a;
	}
	printf("%d %d", mina, maxa);
}*/

/*int main() { //2562 최댓값
	int i, a, idx, m = -1;
	for (i = 0; i < 9; i++) {
		scanf("%d", &a);
		if (m < a) {
			m = a;
			idx = i + 1;
		}
	}
	printf("%d\n%d", m, idx);
}*/

/*int main() { //2920 음계
	int i, a, b, mod;
	scanf("%d", &a);
	if (a == 1) mod = 1;
	else if (a == 8) mod = -1;
	else {
		printf("mixed");
		return 0;
	}
	for (i = 1; i < 8; i++) {
		scanf("%d", &b);
		if (b - a != mod) {
			printf("mixed");
			return 0;
		}
		a = b;
	}
	printf(mod == 1 ? "ascending" : "descending");
}*/

/*int i, a, b, c, arr[10], tmp; //2577 숫자의 개수
int main() {
	scanf("%d%d%d", &a, &b, &c);
	tmp = a * b * c;
	while (tmp > 0) {
		arr[tmp % 10]++;
		tmp /= 10;
	}
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}*/

/*int i, a, b, c, arr[42], ret; //3052 나머지
int main() {
	for (i = 0; i < 10; i++) {
		scanf("%d", &c);
		arr[c % 42]++;
		if (arr[c % 42] == 1) ret++;
	}
	printf("%d", ret);
}*/

/*int main() { //1546 평균
	int i, n, m=-1, arr[1000];
	double ret = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (m < arr[i]) m = arr[i];
	}

	for (i = 0; i < n; i++) {
		ret += ((double)arr[i] / m) * 100;
	}
	printf("%lf", ret / n);
}*/

/*int main() { //8958 OX 퀴즈
	int i,t;
	string s;
	cin >> t;
	while (t--) {
		int m=0, ret = 0;
		cin >> s;
		for (i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				m++;
				ret += m;
			}
			else m = 0;
		}
		printf("%d\n", ret);
	}
}*/

/*int main() { //4344 평균은 넘겠지
	int i, n, c;
	scanf("%d", &c);
	while (c--) {
		int arr[1000], ret=0, num=0;
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			ret += arr[i];
		}
		int mean = ret / n;
		for (i = 0; i < n; i++) {
			if (mean < arr[i]) num++;
		}
		printf("%.3lf%%\n", ((double)num / n) * 100);
	}
}*/

////////////////////////////////////////
			    /*함수*/
////////////////////////////////////////

/*typedef long long ll; //15596 정수 N개의 합
ll sum(vector<int>& a) {
	ll ret = 0;
	for (int i = 0; i < a.size(); i++) {
		ret += a[i];
	}
	return ret;
}*/

/*void func(){ //4673 셀프 넘버
	int i, arr[100001] = { 0, };
	for (i = 1; i <= 10000; i++) {
		int tmp = i, num = i;
		while (num > 0) {
			tmp += num % 10;
			num /= 10;
		}
		arr[tmp]++;
	}

	for (i = 1; i <= 10000; i++) {
		if (!arr[i]) printf("%d\n", i);
	}
}

int main() {
	func();
}*/

/*int main() { //1065 한수
	int i, n, ret=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int tmp = i, k, kt, chk=0;
		int a = tmp % 10;
		tmp /= 10;
		int b = tmp % 10;
		tmp /= 10;
		k = b - a;
		a = b;
		while (tmp > 0) {
			b = tmp % 10;
			kt = b - a;
			if (kt != k) {
				chk = 1;
				break;
			}
			tmp /= 10;
			a = b;
		}
		if (!chk) ret++;
	}
	printf("%d", ret);
}*/

////////////////////////////////////////
				/*문자열*/
////////////////////////////////////////

/*int main() { char a; scanf("%c", &a); printf("%d", a); } //11654 아스키 코드*/

/*int main() { //11720 숫자의 합
	int i, n, ret=0;
	char arr[100];
	scanf("%d%s", &n, arr);
	for (i = 0; i < n; i++) {
		ret += arr[i] - '0';
	}
	printf("%d", ret);
}*/

/*int main() { //10809 알파벳 찾기
	int k, i, a[26];
	for (i = 0; i < 26; i++) {
		a[i] = -1;
	}
	string s;
	cin >> s;
	for (i = 0; i < s.length(); i++) {
		k = s[i] - 'a';
		if(a[k]==-1) a[k]= i;
	}
	for (i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}
}*/

/*int main() { //2675 문자열 반복
	int i, j, r, t;
	string s;
	cin >> t;
	while (t--) {
		cin >> r >> s;
		for(i=0; i<s.length(); i++)
			for(j=0; j<r; j++) cout << s[i];
		cout << endl;
	}
}*/

/*int main() { //1157 단어 공부
	int i, max=-1, maxi, chk=0, arr[26] = { 0, };
	string s;
	cin >> s;
	for (i = 0; i < s.length(); i++) {
		if (s[i] > 'Z') arr[s[i] - 'a']++;
		else arr[s[i] - 'A']++;
	}
	for (i = 0; i < 26; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxi = i;
			chk = 0;
		}
		else if (max == arr[i]) {
			chk = 1;
		}
	}
	if (chk) cout << "?";
	else cout << static_cast<char>(maxi+'A');
}*/

/*int main() { //1152 단어의 개수
	int i, ret = 0;
	char a[1000001];
	fgets(a, 1000001, stdin);
	int len = strlen(a), start = 0, end = len - 2;
	while (start < len && a[start] == ' ') { start++; }
	if (start == len-1) {
		printf("0");
		return 0;
	}

	while (end >= 0 && a[end] == ' ') { end--; }
	for (i = start; i <= end; i++) {
		if (a[i] == ' ') ret++;
	}
	printf("%d", ret + 1);
}*/

/*int main() { //2908 상수
	int i, j, a, b, c, d, chk;
	scanf("%d%d", &a, &b);
	c = a, d = b;
	for (i = 0; i < 3; i++) {
		int at = c % 10, bt = d % 10;
		if (at > bt) {
			chk = 1;
			break;
		}
		else if (at < bt) {
			chk = -1;
			break;
		}
		c /= 10, d /= 10;
	}
	int e = chk == 1 ? a : b;	
	for (i = 0; i < 3; i++) {
		printf("%d", e % 10);
		e /= 10;
	}
}*/

/*int main() { //5622 다이얼
	int i, ret=0;
	char a[15];
	scanf("%s", a);
	for (i = 0; i < strlen(a); i++) {
		char k = a[i];
		if (k >= 'A' && k <= 'C') ret += 3;
		else if (k >= 'D' && k <= 'F') ret += 4;
		else if (k >= 'G' && k <= 'I') ret += 5;
		else if (k >= 'J' && k <= 'L') ret += 6;
		else if (k >= 'M' && k <= 'O') ret += 7;
		else if (k >= 'P' && k <= 'S') ret += 8;
		else if (k >= 'T' && k <= 'V') ret += 9;
		else ret += 10;
	}
	printf("%d", ret);
}*/

/*int main() { //2941 크로아티아 알파벳
	char a[101];
	scanf("%s", a);
	int i = 0, len = strlen(a), ret=0;
	while (i < len) {
		if (a[i] >= 'a') ret++;
		if (i+1<len&&(a[i] == 'c'&&a[i+1]<'a')|| (a[i] == 's' && a[i + 1] < 'a')||(a[i] == 'z' && a[i + 1] < 'a')) {
			i += 2;
			continue;
		}
		else if (a[i] == 'd') {
			if (i+2<len&&a[i + 1] == 'z' && a[i + 2] < 'a')
				i += 3;
			else if (i+1<len&&a[i + 1] < 'a')
				i += 2;
			else i++;
			continue;
		}
		else if (a[i] == 'l'||a[i]=='n') {
			if (i+1<len&&a[i + 1] == 'j')
				i += 2;
			else i++;
			continue;
		}
		i++;
	}
	printf("%d", ret);
}*/

/*int main() { //1316 그룹 단어 체커
	int i, n, ret=0;
	char a[100];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", a);
		int len = strlen(a), arr[26] = { 0, };
		for (i = 0; i < len; i++) {
			int idx = a[i] - 'a';
			if (arr[idx] == -1) continue;
			else if (arr[idx] == 0)
				arr[idx] = 1;

			else if (a[i - 1] != a[i]) {
					arr[idx] = -1;
			}
		}
		for (i = 0; i < 26; i++) {
			if (arr[i] == -1) {
				break;
			}
		}
		if (i == 26) ret++;
	}
	printf("%d", ret);
}*/

////////////////////////////////////////
			    /*수학 1*/
////////////////////////////////////////

/*int main() { //1712 손익분기점
	long long a, b, c;
	scanf("%lld%lld%lld", &a, &b, &c);
	if (c - b <= 0)printf("-1");
	else printf("%lld", (a / (c - b)) + 1);
}*/

/*int main() { //2839 설탕 배달
	int n, tmp, fn, tn=0;
	scanf("%d", &n);
	fn = n / 5, tmp = n % 5;
	while (true) {
		if (tmp == 4) {
			tn++;
			tmp = 1;
			continue;
		}
		else if (tmp == 3) {
			tn++;
			break;
		}
		else if (tmp == 0) {
			break;
		}
		else {
			fn--;
			if (fn < 0) break;
			tn++;
			tmp += 2;
		}
	}
	printf(fn==-1 ? "-1" : "%d", fn+tn);
}*/

/*int main() { //2292 벌집
	int n, i=1, s=1, k=6;
	scanf("%d", &n);
	while (true) {
		if (n <= s) {
			printf("%d", i);
			break;
		}
		s += k;
		k += 6;
		i++;
	}
}*/

/*int main() { //1193 분수 찾기
	int n, k = 1, t = 2, chk=1;
	scanf("%d", &n);
	while (true) {
		if (n <= k) {
			int a, b;
			if (chk == 1)
				a = 1 + k - n, b = t - a;
			else
				b = 1 + k - n; a = t - b;
			printf("%d/%d", a, b);
			return 0;
		}
		chk *= -1;
		k += t;
		t++;
	}
}*/

/*int main() { //2869 달팽이는 올라가고 싶다
	int a, b, v;
	scanf("%d%d%d", &a, &b, &v);
	printf("%d", (	(v - a) / (a - b)+((v-a)%(a-b)==0?0:1)) + 1);
}*/

/*int main() { //10250 ACM 호텔
	int t, h, w, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &h, &w, &n);
		int a = (n-1) % h+1, b = (n-1) / h + 1;
		printf("%d\n", a * 100 + b);
	}
}*/

/*int main() { //2775 부녀회장이 될 테야
	int i, j, t, k, n, arr[15][15];
	arr[0][0] = 1;
	for (i = 1; i < 15; i++) {
		arr[0][i] = arr[0][i-1]+i + 1;
		arr[i][0] = arr[0][0];
	}

	for (i = 1; i < 15; i++) {
		for (j = 1; j < 15; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &k, &n);
		printf("%d\n", arr[k-1][n-1]);
	}
}*/

/*int main() { //1011 Fly me to the Alpha Centauri
	int t, x, y, ret;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &x, &y);
		double s = sqrt(y - x);
		if (s - (int)s == 0) ret = s * 2 - 1;
		else if (s - (int)s < 0.5) ret = (int)s * 2;
		else ret = (int)s * 2 + 1;
		printf("%d\n", ret);
	}
}*/

////////////////////////////////////////
				/*수학 2*/
////////////////////////////////////////

/*int main() { //1978 소수 찾기
	int i, j, n;
	int arr[1001] = { 0, };
	arr[1] = 1;
	for (i = 2; i < 501; i++) {
		for (j = i+1; j < 1001; j++) {
			if (arr[j] == 1) continue;
			if (j % i == 0) arr[j] = 1;
		}
	}
	cin >> n;
	int tmp, sum = 0;
	for (i = 0; i < n; i++) {
		cin >> tmp;
		if (arr[tmp] == 0) sum++;
	}
	cout << sum;
}*/

/*int check[10001]; //2581 소수

int main() {
	int i, m, n;
	cin >> m >> n;
	for (i = 2; i <= 100; i++) {
		int tmp = 2*i;
		while (tmp <= 10000) {
			if(!check[tmp]) check[tmp] = 1;
			tmp += i;
		}
	}
	check[1] = 1;
	int sum = 0, min = 0;
	for (i = m; i <= n; i++) {
		if (!check[i]) {
			sum += i;
			if (!min) min = i;
		}
	}

	if (!min) cout << -1 << endl;
	else {
		cout << sum << endl << min << endl;
	}
}*/

/*int check[1000001]; //1929 소수 구하기

int main() {
	int i, m, n;
	cin >> m >> n;
	for (i = 2; i <= 1000; i++) {
		int tmp = 2 * i;
		while (tmp <= 1000000) {
			if (!check[tmp]) check[tmp] = 1;
			tmp += i;
		}
	}
	check[1] = 1;
	int sum = 0, min = 0;
	for (i = m; i <= n; i++) {
		if (!check[i]) {
			printf("%d\n", i);
		}
	}
}*/

/*int check[246913]; //4948 베르트랑 공준
int main() {
	int i;
	for (i = 2; i <= 496; i++) {
		int tmp = 2 * i;
		while (tmp <= 246912) {
			if (!check[tmp]) check[tmp] = 1;
			tmp += i;
		}
	}
	check[1] = 1;
	while (true) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		int num = 0;
		for (i = n+1; i <= 2*n; i++) {
			if (!check[i]) {
				num++;
			}
		}
		cout << num << endl;
	}
}*/

/*int arr[10001]; //9020 골드바흐의 추측
int main() {
	int i, t, n;
	cin >> t;
	arr[1] = 1;
	for (i = 2; i <= 10000; i++) {
		int tmp = i * 2;
		while (tmp <= 10000) {
			if (!arr[tmp]) arr[tmp] = 1;
			tmp += i;
		}
	}

	while (t--) {
		cin>>n;
		for (i = n / 2; i >= 2; i--) {
			if (!arr[i]) {
				if (!arr[n - i]) {
					cout << i << " " << n-i << endl;
					break;
				}
			}
		}
	}
}*/

/*int main() { //1085 직사각형에서 탈출
	int x, y, w, h;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	printf("%d", min(x, min(y, min(w-x, h-y))));
}*/

/*
int i, a, b, x[1001], y[1001]; //3009 네 번째 점
int main() {
	for (i = 0; i < 3; i++) {
		scanf("%d %d", &a, &b);
		x[a]++;
		y[b]++;
	}

	for (i = 1; i <= 1000; i++) {
		if (x[i] == 1) {
			a = i;
		}
		if (y[i] == 1) {
			b = i;
		}
	}
	printf("%d %d", a, b);
}*/

/*int main() { //4153 직각삼각형
	int i, arr[3];
	while (true) {
		for (i = 0; i < 3; i++) {
			scanf("%d", &arr[i]);
		}
		if (arr[0] == 0) return 0;
		sort(arr, arr + 3);
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			printf("right\n");

		else printf("wrong\n");
	}
}*/

/*const double PI = 3.141592653589793; //3053 택시 기하학
int main() {
	printf("%.20lf\n", PI);
	double r;
	scanf("%lf", &r);
	printf("%.6lf\n%.6lf\n", r * r * PI, 2 * r * r);
}*/

/*int main() { //1002 터렛
	int t, x1, y1, r1, x2, y2, r2, ret;
	double dist;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				printf("-1\n");
			else printf("0\n");
			continue;
		}
		dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if (r1 + r2 > dist) ret = 2;
		else if (r1 + r2 == dist) ret = 1;
		else ret = 0;

		if (dist == abs(r1 - r2)) ret = 1;
		else if (dist < abs(r1 - r2))
			ret = 0;

		printf("%d\n", ret);
	}
}*/

////////////////////////////////////////
				 /*재귀*/
////////////////////////////////////////

/*long fact(long n) { //10872 팩토리얼
	if (n == 1) return 1;
	return n * fact(n - 1);
}
int main() {
	long n;
	scanf_s("%ld", &n);
	printf("%ld", fact(n));
}*/

/*int f(int n) { //10870 피보나치 수 5
	if (n == 0) return 0;
	if (n <= 2) return 1;
	return f(n - 1) + f(n - 2);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}*/

/*char arr[6600][6600]; //2447 별 찍기 - 10
void recur(int x, int y, int n) {
	if (n == 1) {
		arr[x][y] = '*';
		return;
	}
	if (n == 3) {
		arr[x][y] = '*';
		arr[x][y + 1] = '*';
		arr[x][y + 2] = '*';
		arr[x + 1][y] = '*';
		arr[x + 1][y + 2] = '*';
		arr[x + 2][y] = '*';
		arr[x + 2][y + 1] = '*';
		arr[x + 2][y + 2] = '*';
		return;
	}
	else {
		recur(x, y, n / 3);
		recur(x, y + n/3, n / 3);
		recur(x, y + 2*n/3, n / 3);
		recur(x+ n / 3, y, n / 3);
		recur(x+ n / 3, y + 2 * n / 3, n / 3);
		recur(x+ 2 * n / 3, y, n / 3);
		recur(x+ 2 * n / 3, y + n / 3, n / 3);
		recur(x+ 2 * n / 3, y + 2 * n / 3, n / 3);
	}
}

int main() {
	int i, j, n;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = ' ';
		}
	}

	recur(0, 0, n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c", arr[i][j]);
		}
		if(i!=n-1) printf("\n");
	}
}*/

/*void h(int num, int s, int i, int d) { //11729 하노이탑 이동 순서
	if (num == 1) {
		printf("%d %d\n", s, d);
		return;
	}
	h(num - 1, s, d, i);
	printf("%d %d\n", s, d);
	h(num - 1, i, s, d);
}
int main() {
	int n;
	scanf_s("%d", &n);
	printf("%d\n", (1 << n) - 1);
	h(n, 1, 2, 3);
}*/

/*char a[20000000];//11729 하노이탑 이동 순서 (printf 대신 문자열에 넣어 실행 시간을 단축시켰다. 대신 메모리 사용량이 늘어남)
int idx = 0;
void h(int num, int s, int i, int d) {
	if (num == 1) {
		a[idx++] = s + '0';
		a[idx++] = ' ';
		a[idx++] = d + '0';
		a[idx++] = '\n';
		return;
	}
	h(num - 1, s, d, i);
	a[idx++] = s + '0';
	a[idx++] = ' ';
	a[idx++] = d + '0';
	a[idx++] = '\n';
	h(num - 1, i, s, d);
}
int main() {
	int n;
	scanf_s("%d", &n);
	printf("%d\n", (1 << n) - 1);
	h(n, 1, 2, 3);
	a[idx] = '\0';
	printf("%s", a);
}*/

////////////////////////////////////////
			/*브루트 포스*/
////////////////////////////////////////

/*int main() { //2798 블랙잭
	int i, j, k, n, m, max = -1;
	int card[100];
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {
				if (card[i] + card[j] + card[k] <= m) max=max < card[i] + card[j] + card[k] ? card[i] + card[j] + card[k] : max;
			}
		}
	}
	printf("%d\n", max);
}*/

/*int main() { //2231 분해합
	int i, n;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		int k = i, tmp = 10, sum = 0;
		while (true){
			sum += k % tmp;
			if (k<10) break;
			k /= 10;
		}
		if (i + sum == n) {
			printf("%d\n", i);
			return 0;
		}
	}
	printf("0");
}*/

/*int main() { //7568 덩치
	int i, j, n;
	int x[50], y[50], rank[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &x[i], &y[i]);
	}
	fill(rank, rank + n, 1);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) continue;
			if (x[i] < x[j] && y[i] < y[j]) rank[i]++;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", rank[i]);
	}
}*/

/*char w[2] = { 'W', 'B' }; //1018 체스판 다시 칠하기
int main() {
	int i, j, n, m, a=0, b=0, min = 99999999, ret;
	char board[50][50];
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%s", board[i]);
	}

	int xslide = 0, yslide = 0;
	while (8 + xslide != n + 1) {
		while (8 + yslide != m + 1) {
			for (i = xslide; i < 8 + xslide; i++) {
				for (j = yslide; j < 8 + yslide; j++) {
					if (board[i][j] != w[(i+j)%2]) a++;
					if (board[i][j] != w[(i+j+1)%2]) b++;
				}
			}
			ret = a <= b ? a : b;
			min = min > ret ? ret : min;
			a = 0, b = 0;
			yslide++;
		}
		yslide = 0;
		xslide++;
	}
	printf("%d", min);
}*/

/*int main() { //1436 영화감독 숌
	int n, i=0, j, k=0, chk=0, ret=0;
	scanf("%d", &n);
	while (true) {
		string test = to_string(i); // std::to_string(int) : int를 string 형으로 변환
		i++;
		if (test.size() < 3) continue;
		while (3 + k != test.size() + 1) {
			for (j = k; j < 3 + k; j++) {
				if (test[j] != '6') {
					chk = 1;
					break;
				}
			}
			if (!chk) {
				ret++;
				chk = 0;
				break;
			}
			chk = 0;
			k++;
		}

		if (ret == n) {
			printf("%s\n", test.c_str());
			return 0;
		}
		k = 0;
	}
}*/

////////////////////////////////////////
				/*정렬*/
////////////////////////////////////////

/*int n, arr[1000]; //2750 수 정렬하기( O(n^2), bubble sort)

void bs() {
	int i, j;
	for (i = n-1; i >=0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int i;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	bs();
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}*/

/*int n, arr[1000001]; //2751 수 정렬하기 2( O(nlogn), quick sort)

void qs(int start, int end) {
	if (start >= end) return;
	int p = start, q = end, pivot = arr[(start + end) / 2];
	while (p <= q) {
		while (arr[p] < pivot) p++;
		while (arr[q] > pivot) q--;
		if (p <= q) {
			int tmp = arr[p];
			arr[p] = arr[q];
			arr[q] = tmp;
			p++;
			q--;
		}
	}
	qs(p, end);
	qs(start, q);
}

int main() {
	int i;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	qs(0, n-1);
	for (i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
}*/

/*int n, arr[10001] = { 0, }; //10989 수 정렬하기 3(기수 정렬)

int main() {
	int i, j, tmp;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &tmp);
		arr[tmp]++;
	}
	int count = n;
	for (i = 0; i < 10001; i++) {
		if (count == 0) break;
		if (arr[i] != 0) {
			for (j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
			count--;
		}
	}
}*/

/*int n, arr[500000], chk[8001] = { 0, }; //2108 통계학

void qs(int start, int end) {
	if (start >= end) return;
	int p = start, q = end, pivot = arr[(start + end) / 2];
	while (p <= q) {
		while (arr[p] < pivot) p++;
		while (arr[q] > pivot) q--;
		if (p <= q) {
			int tmp = arr[p];
			arr[p] = arr[q];
			arr[q] = tmp;
			p++;
			q--;
		}
	}
	qs(p, end);
	qs(start, q);
}

int main() {
	int i;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

	int sum = 0;
	for (i = 0; i < n; i++) {
		sum += arr[i];
		chk[arr[i] + 4000]++;
	}
	int mean;
	if (sum < 0 && sum % n <=-(double)n/2) {
		mean = sum / n - 1;
	}
	else if (sum > 0 && sum % n >= (double)n / 2) {
		mean = sum / n + 1;
	}
	else mean = sum / n;
	int maxa = -5000, idx=-1, k=1;

	for (i = 0; i < 8001; i++) {
		if (chk[i] == 0) continue;
		if (maxa == chk[i]&&k==1) {
			k++;
			idx = i-4000;
		}
		if (maxa < chk[i]) {
			maxa = chk[i];
			idx = i-4000;
			k = 1;
		}
	}
	qs(0, n-1);
	printf("%d\n%d\n%d\n%d\n", mean, arr[n / 2], idx, arr[n - 1] - arr[0]);
}*/

/*bool cmp(int a, int b) {//1427 소트인사이드
	return a > b;
}

int main() {
	int i;
	char k[10];
	int arr[10];
	scanf("%s", k);
	int l = strlen(k);
	for (i = 0; i <l; i++) {
		arr[i] = k[i] - '0';
	}
	sort(arr, arr + l, cmp);
	for (i = 0; i < l; i++) {
		printf("%d", arr[i]);
	}
}*/

/*bool cmp(pair<int, int> a, pair<int, int> b) { //11650 좌표 정렬하기
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}
int main() {
	int i, n, a, b;
	vector<pair<int, int>> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		vec.push_back(make_pair(a, b));
	}
	sort(vec.begin(), vec.end(), cmp);
	for (auto it = vec.begin(); it != vec.end(); it++) {
		printf("%d %d\n", it->first, it->second);
	}
}*/

/*bool cmp(pair<int, int> a, pair<int, int> b) { //11651 좌표 정렬하기 2
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}
int main() {
	int i, n, a, b;
	vector<pair<int, int>> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		vec.push_back(make_pair(a, b));
	}
	sort(vec.begin(), vec.end(), cmp);
	for (auto it = vec.begin(); it != vec.end(); it++) {
		printf("%d %d\n", it->first, it->second);
	}
}*/

/*bool cmp(string a, string b) { //1181 단어 정렬
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}
int main() {
	int i, n;
	string s;
	scanf("%d", &n);
	vector<string> vec;
	for (i = 0; i < n; i++) {
		cin >> s;
		vec.push_back(s);
	}
	sort(vec.begin(), vec.end(), cmp);
	vec.erase(unique(vec.begin(), vec.end()), vec.end()); //벡터 원소 중복 제거
	for (auto it = vec.begin(); it != vec.end(); it++) {
		cout << *it << endl;
	}
}*/

/*bool cmp(pair<int, char*> a, pair<int, char*> b) { //10814 나이 순 정렬
	if (a.first == b.first) return false;
	return a.first < b.first;
}

int main() {
	int i, n;
	scanf("%d\n", &n);
	vector<pair<int, char *>> vec;
	char* str;
	for (i = 0; i < n; i++) {
		int age;
		char tmp[101];
		scanf("%d%s", &age, tmp);
		str = new char[strlen(tmp) + 1];
		strcpy(str, tmp);
		vec.push_back(make_pair(age, str));
	}

	stable_sort(vec.begin(), vec.end(), cmp);
	for (auto it = vec.begin(); it != vec.end(); it++) {
		printf("%d %s\n", it->first, it->second);
	}
}*/

////////////////////////////////////////
			  /*백트래킹*/
////////////////////////////////////////

/*int n, m, arr[10], chk[10] = { 0, }; //15649 N과 M (1)

void dp(int num, string ret) {
	if (num == m) {
		printf("%s\n", ret.c_str());
		return;
	}
	for (int i = 0; i < n; i++) {
		if (chk[i] == 1) continue;
		chk[i] = 1;
		dp(num + 1, ret +to_string(i+1)+" ");
		chk[i] = 0;
	}
}

int main() {
	cin >> n >> m;
	dp(0, "");
}*/

/*int n, m, arr[10], chk[10] = { 0, }; //15650 N과 M (2)

void dp(int num, int prev, string ret) {
	if (num == m) {
		printf("%s\n", ret.c_str());
		return;
	}
	for (int i = prev+1; i < n; i++) {
		if (chk[i] == 1) continue;
		chk[i] = 1;
		dp(num + 1, i, ret +to_string(i+1)+" ");
		chk[i] = 0;
	}
}

int main() {
	cin >> n >> m;
	dp(0, -1, "");
}*/

/*int n, m, arr[10]; //15651 N과 M (3)

void dp(int num, string ret) {
	if (num == m) {
		printf("%s\n", ret.c_str());
		return;
	}
	for (int i = 0; i < n; i++) {
		dp(num + 1, ret + to_string(i + 1) + " ");
	}
}

int main() {
	cin >> n >> m;
	dp(0, "");
}*/

/*int n, m, arr[10]; //15652 N과 M (4)

void dp(int num, int prev, string ret) {
	if (num == m) {
		printf("%s\n", ret.c_str());
		return;
	}
	for (int i = prev; i < n; i++) {
		dp(num + 1, i, ret + to_string(i + 1) + " ");
	}
}

int main() {
	cin >> n >> m;
	dp(0, 0, "");
}*/

/*int n, chk[15][15] = { 0, };

void checkOn(int choose, int idx) {
	int j;
	for (j = 0; j < n; j++) {
		chk[choose][j] += 1;
		chk[j][idx] += 1;
	}
	int tmp = choose - 1, tk = idx + 1;
	while (tmp >= 0 && tk < n) {
		chk[tmp][tk] += 1;
		tmp--;
		tk++;
	}
	tmp = choose + 1, tk = idx + 1;
	while (tmp < n && tk < n) {
		chk[tmp][tk] += 1;
		tmp++;
		tk++;
	}
	tmp = choose - 1, tk = idx - 1;
	while (tk >= 0 && tmp < n) {
		chk[tmp][tk] += 1;
		tmp--;
		tk--;
	}
	tmp = choose + 1, tk = idx - 1;
	while (tk >= 0 && tmp < n) {
		chk[tmp][tk] += 1;
		tmp++;
		tk--;
	}
}

void checkOff(int choose, int idx) {
	int j;
	for (j = 0; j < n; j++) {
		chk[choose][j] -=1;
		chk[j][idx] -=1;
	}
	int tmp = choose - 1, tk = idx + 1;
	while (tmp >= 0 && tk < n) {
		chk[tmp][tk] -=1;
		tmp--;
		tk++;
	}
	tmp = choose + 1, tk = idx + 1;
	while (tmp < n && tk < n) {
		chk[tmp][tk] -= 1;
		tmp++;
		tk++;
	}
	tmp = choose - 1, tk = idx - 1;
	while (tk >= 0 && tmp < n) {
		chk[tmp][tk] -= 1;
		tmp--;
		tk--;
	}
	tmp = choose + 1, tk = idx - 1;
	while (tk >= 0 && tmp < n) {
		chk[tmp][tk] -= 1;
		tmp++;
		tk--;
	}
}
int ret = 0;
void bt(int idx) {
	int choose, j;
	if (idx == n) {
		ret++;
		return;
	}
	for (choose = 0; choose < n; choose++) {
		if (chk[choose][idx]>0) {
			continue;
		}
		checkOn(choose, idx);
		bt(idx+1);
		checkOff(choose, idx);
	}
}
int main() {
	int i, j;
	cin >> n;
	bt(0);
	cout << ret << endl;
}*/

/*int n, ret, chk[15]; //9663 N-Queen
void bt(int idx) {
	int choose, i, j;
	if (idx == n) {
		ret++;
		return;
	}
	int ch = 0;
	for (choose = 0; choose < n; choose++) {
		for (j = 0; j < idx; j++) {
			if (chk[j] == choose) {
				ch = 1;
				break;
			}
			if (abs(j - idx) == abs(chk[j] - choose)) {
				ch = 1;
				break;
			}
		}
		if (ch == 1) {
			ch = 0;
			continue;
		}
		chk[idx] = choose;
		bt(idx + 1);
	}
}
int main() {
	int i, j;
	cin >> n;

	for (i = 0; i < n; i++) {
		chk[i] = -1;
	}
	bt(0);
	cout << ret << endl;
}*/

//2019-11-13 / 11문제

/*int sudoku[9][9]; //2580 스도쿠
int sector[9][9][2] = { {{0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}},
						{{0, 3}, {0, 4}, {0, 5}, {1, 3}, {1, 4}, {1, 5}, {2, 3}, {2, 4}, {2, 5}},
						{{0, 6}, {0, 7}, {0, 8}, {1, 6}, {1, 7}, {1, 8}, {2, 6}, {2, 7}, {2, 8}},
						{{3, 0}, {3, 1}, {3, 2}, {4, 0}, {4, 1}, {4, 2}, {5, 0}, {5, 1}, {5, 2}},
						{{3, 3}, {3, 4}, {3, 5}, {4, 3}, {4, 4}, {4, 5}, {5, 3}, {5, 4}, {5, 5}},
						{{3, 6}, {3, 7}, {3, 8}, {4, 6}, {4, 7}, {4, 8}, {5, 6}, {5, 7}, {5, 8}},
						{{6, 0}, {6, 1}, {6, 2}, {7, 0}, {7, 1}, {8, 2}, {8, 0}, {8, 1}, {8, 2}},
						{{6, 3}, {6, 4}, {6, 5}, {7, 3}, {7, 4}, {8, 5}, {8, 3}, {8, 4}, {8, 5}},
						{{6, 6}, {6, 7}, {6, 8}, {7, 6}, {7, 7}, {8, 8}, {8, 6}, {8, 7}, {8, 8}} };
vector<int> zeroIdx;

void bfs(int idx) {
	if (idx == zeroIdx.size()) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << sudoku[i][j] << " ";
			}
			cout << endl;
		}
		exit(0);
	}
	int i, j, x=zeroIdx[idx]/9, y=zeroIdx[idx]%9, chk=0;

	for (i = 1; i <= 9; i++) {
		for (j = 0; j < 9; j++) {
			if (sudoku[x][j] == i || sudoku[j][y] == i) {
				chk = 1;
				break;
			}
		}

		if (chk != 1) {
			int blockIdx;
			if (x < 3) {
				if (y < 3) blockIdx = 0;
				else if (y < 6) blockIdx = 1;
				else blockIdx = 2;
			}
			else if (x < 6) {
				if (y < 3) blockIdx = 3;
				else if (y < 6) blockIdx = 4;
				else blockIdx = 5;
			}

			else {
				if (y < 3) blockIdx = 6;
				else if (y < 6) blockIdx = 7;
				else blockIdx = 8;
			}

			for (j = 0; j < 9; j++) {
				if (sudoku[sector[blockIdx][j][0]][sector[blockIdx][j][1]] == i) {
					chk = 1;
					break;
				}
			}
		}

		if (chk == 1) {
			chk = 0;
			continue;
		}
		sudoku[x][y] = i;
		bfs(idx + 1);
		sudoku[x][y] = 0;
	}
}

int main() {
	int i, j;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cin >> sudoku[i][j];
			if (sudoku[i][j] == 0) zeroIdx.push_back(i * 9 + j);
		}
	}
	bfs(0);
}*/

/*int n, num[100], op[4], maxa=-(10e8)-1, mina=(10e8)+1; //14888 연산자 끼워넣기
void bt(int cur, int idx) {
	if (idx == n) {
		maxa = max(cur, maxa);
		mina = min(cur, mina);
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (op[i] == 0) continue;
		op[i]--;
		switch (i) {
			case 0:
				bt(cur + num[idx], idx + 1);
				break;

			case 1:
				bt(cur - num[idx], idx + 1);
				break;

			case 2:
				bt(cur * num[idx], idx + 1);
				break;

			default:
				bt(cur / num[idx], idx + 1);
				break;
		}
		op[i]++;
	}
}

int main() {
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> num[i];
	}

	for (i = 0; i < 4; i++) {
		cin >> op[i];
	}
	bt(num[0], 1);
	cout << maxa << endl << mina << endl;
}*/

/*int n; /14889 스타트와 링크(156ms)
int status[20][20], chk[20] = { 0, }, mina = (10e4);

int cal_score(vector<int> list) {
	int i, j, start=0, link=0, size=list.size();
	vector<int> tmp;
	for (i = 0; i < n; i++) {
		tmp.push_back(i);
	}

	for (auto it = tmp.begin(); it!=tmp.end();) {
		int chk = 0;
		for (j = 0; j < size; j++) {
			if (list[j] == *it) {
				it=tmp.erase(it);
				chk = 1;
				break;
			}
		}
		if (!chk) it++;
	}

	for (i = 0; i < size; i++) {
		for (j = i+1; j < size; j++) {

			start += status[list[i]][list[j]]+status[list[j]][list[i]];

			link += status[tmp[i]][tmp[j]]+status[tmp[j]][tmp[i]];
		}
	}
	return abs(start - link);
}

void bt(int idx, int prev, vector<int> list) {
	if (idx == (n/2)) {
		mina = min(mina, cal_score(list));
		return;
	}

	for (int i = prev+1; i < n; i++) {
		if (chk[i] == 1) continue;
		list.push_back(i);
		chk[i] = 1;
		bt(idx + 1, i, list);
		list.pop_back();
		chk[i] = 0;
	}
}

int main() {
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> status[i][j];
		}
	}
	vector<int> vec;
	bt(0, -1, vec);
	cout << mina;
}*/

/*int n, idxs = 0, idxl = 0; //14889 스타트와 링크(수정, 12ms)
int status[20][20], start[10], link[10], mina = (10e4);

void bt(int idx) {
	int i, j;
	if (idx == n) {
		int s = 0, l = 0;
		for (i = 0; i < n / 2; i++) {
			for (j = i + 1; j < n / 2; j++) {
				s += status[start[i]][start[j]] + status[start[j]][start[i]];
				l += status[link[i]][link[j]] + status[link[j]][link[i]];
			}
		}
		int res = abs(s - l);
		mina = mina > res ? res : mina;
		return;
	}
	if (idxs < n / 2) {
		start[idxs++] = idx;
		bt(idx + 1);
		idxs--;
	}

	if (idxl < n / 2) {
		link[idxl++] = idx;
		bt(idx + 1);
		idxl--;
	}
}

int main() {
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cin >> status[i][j];
		}
	}
	start[idxs++] = 0;
	bt(1);
	cout << mina;
}*/

////////////////////////////////////////
			/*동적 계획법 1*/
////////////////////////////////////////

/*int main() { //2748 피보나치 수 2
	int i, n;
	long long arr[91];
	scanf("%d", &n);
	arr[0] =0, arr[1] =1;
	for (i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	printf("%lld\n", arr[n]);
}*/

/*int main() { //1003 피보나치 함수
	int i, t;
	pair<int, int> fibo[41];
	fibo[0] = make_pair(1, 0), fibo[1] = make_pair(0, 1);
	for (i = 2; i <= 40; i++) {
		fibo[i] = make_pair(fibo[i - 1].first + fibo[i - 2].first, fibo[i - 1].second + fibo[i - 2].second);
	}
	scanf("%d\n", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		printf("%d %d\n", fibo[n].first, fibo[n].second);
	}
}*/

/*int main() {//1904 01타일
	int i, n, arr[1000000];
	arr[1] = 1, arr[2] = 2;
	scanf("%d", &n);
	for (i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
	}
	printf("%d\n", arr[n]);
}*/

/*int main() {//9461 파도반 수열
	int i, n, t;
	long long  arr[101];
	scanf("%d", &t);
	arr[1] = 1, arr[2] = 1, arr[3]=1, arr[4]=2, arr[5]=2;
	for (i = 6; i <= 100; i++) {
		arr[i] = arr[i - 1] + arr[i - 5];
	}
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", arr[n]);
	}
}*/

/*int main() { //1149 RGB 거리
	int i, j, n, arr[1000][3], dp[1000][3];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
		if (i == 0) {
			for (j = 0; j < 3; j++) {
				dp[0][j] = arr[0][j];
			}
			continue;
		}
		for (j = 0; j < 3; j++) {
			dp[i][j] = arr[i][j] + min(dp[i - 1][(j + 1) % 3], dp[i - 1][(j + 2) % 3]);
		}
	}
	printf("%d\n", min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2])));
}*/

/*int main() { //1932 정수 삼각형
	int i, j, n, arr[500][500], dp[500][500];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			scanf("%d", &arr[i][j]);
		}
		if (i == 0) {
			dp[0][0] = arr[0][0];
			continue;
		}
		dp[i][0] = arr[i][0] + dp[i - 1][0];
		for (j = 1; j < i; j++) {
			dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
		dp[i][i] = arr[i][i] + dp[i - 1][i-1];
	}
	int ret = -1;
	for (i = 0; i < n; i++) {
		ret = max(ret, dp[n-1][i]);
	}
	printf("%d\n", ret);
}*/

/*int n, score[300], dp[302][3]; //2579 계단 오르기
const int MIN = -987654321;
int func(int cur, int stk) {
	if (cur >= n-1) return 0;
	if (cur == n - 2 && stk == 1) return MIN;
	int& ret = dp[cur + 1][stk];
	if (ret != -1) return ret;

	ret = MIN;
	if (cur + 2 < n) {
		int two = func(cur + 2, 0) + score[cur + 2];
		ret = max(ret, two);
	}

	if (cur + 1 < n && stk != 1) {
		int one;
		if (cur == -1) one = func(cur + 1, stk) + score[cur + 1];
		else one = func(cur + 1, stk + 1) + score[cur + 1];
		ret = max(ret, one);
	}
	if (ret < 0) {
		ret = 0;
	}

	return ret;
}

int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < 302; i++) {
		fill(dp[i], dp[i] + 3, -1);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
	}
	printf("%d\n", func(-1, 0));
}*/

/*const int MAX = 1000001; //1463 1로 만들기
int main() {
	int i, n, dp[MAX];
	scanf("%d", &n);
	fill(dp, dp + MAX, MAX);
	for (i = n-1; i >= 1; i--) {

		if (i * 2 <= n) {
			if (dp[i * 2] == MAX) dp[i * 2] = 0;
			dp[i] = min(dp[i], dp[i * 2] + 1);
		}
		if (i * 3 <= n) {
			if (dp[i * 3] == MAX) dp[i * 3] = 0;
			dp[i] = min(dp[i], dp[i * 3] + 1);
		}
		if (dp[i + 1] == MAX) dp[i + 1] = 0;
		dp[i] = min(dp[i], dp[i + 1]+1);
	}
	if (dp[1] == MAX) dp[1] = 0;
	printf("%d\n", dp[1]);
}*/

/*const int DIV = 10e8; //10844 쉬운 계단 수
int main() {
	int i, j, n, dp[102][10];
	scanf("%d", &n);
	dp[1][0] = 0;
	for (i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}
	for (i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1]%DIV;
		for (j = 1; j < 9; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1])%DIV;
		}
		dp[i][9] = dp[i - 1][8]%DIV;
	}
	int ret = 0;
	for (i = 0; i <= 9; i++) {
		ret = (ret+dp[n][i])%DIV;
	}
	printf("%d\n", ret);
}*/

/*int main() { //2156 포도주 시식
	int i, j, n, arr[10000], dp[10000][2];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int maxa;
	dp[0][0] = maxa = arr[0], dp[0][1] = 0;
	dp[1][0] = arr[1], dp[1][1] = dp[0][0]+arr[1];
	for (i = 2; i < n; i++) {
		dp[i][0] = arr[i] + maxa;
		dp[i][1] = arr[i] + dp[i - 1][0];
		maxa = max(maxa, max(dp[i-1][0], dp[i - 1][1]));
	}
	int ret = -1;
	for (i = 0; i < n; i++) {
		ret = max(ret, max(dp[i][0], dp[i][1]));
	}
	printf("%d\n", ret);
}*/

/*int main() { //11053 가장 긴 증가하는 부분 수열
	int i, n, num;
	vector<int> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		auto it = lower_bound(vec.begin(), vec.end(), num);
		if (it == vec.end()) vec.push_back(num);
		else{
			*it = num;
		};
	}

	printf("%d\n", vec.size());
}*/

/*int main() { //11054 가장 긴 바이토닉 부분 수열
	int i, j, n, arr[1000], mid, ret=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		int tmp = 0;
		mid = arr[i];
		vector<int> front, back;
		for (j = 0; j < i; j++) {
			auto it = lower_bound(front.begin(), front.end(), arr[j]);
			if (it == front.end()) front.push_back(arr[j]);
			else *it = arr[j];
		}

		for (j = n-1; j > i; j--) {
			auto it = lower_bound(back.begin(), back.end(), arr[j]);
			if (it == back.end()) back.push_back(arr[j]);
			else *it = arr[j];
		}
		if ((!front.empty()&&front[front.size() - 1] > mid) || (!back.empty()&&back[back.size() - 1] > mid)) continue;
		tmp = (front.size() + back.size() + 1);
		if (!front.empty() && front[front.size() - 1] == mid) tmp--;
		if (!back.empty() && back[back.size() - 1] == mid) tmp--;
		ret=max(ret, tmp);

	}
	printf("%d\n", ret);
}*/

/*int main() { //2565 전깃줄
	int i, n, a, b;
	scanf("%d", &n);
	vector<pair<int, int>> vec;
	vector<int> ret;
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		vec.push_back(make_pair(a, b));
	}
	sort(vec.begin(), vec.end());
	for (i = 0; i < n; i++) {
		auto it = lower_bound(ret.begin(), ret.end(), vec[i].second);
		if (it == ret.end()) ret.push_back(vec[i].second);
		else *it = vec[i].second;
	}
	printf("%d", n - ret.size());
}*/

/*int dp[1001][1001]; //9251 LCS(다시 풀어보기)
int main() {
	char arr1[1001], arr2[1001];
	int i, j;
	scanf("%s%s", arr1, arr2);
	int len1 = strlen(arr1), len2=strlen(arr2);
	for (i = 1; i <= len2; i++) {//비교 문자열
		for (j = 1; j <= len1; j++) {//기준 문자열
			if (arr2[i - 1] == arr1[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	printf("%d", dp[len2][len1]);
}*/

/*int main() { //1912 연속합(다시 풀어보기)
	int i, n, arr[100000], sum=0, dp[100000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	dp[0] = arr[0];
	for (i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
	}
	int ret = -1001;
	for (i = 0; i < n; i++) {
		ret = max(ret, dp[i]);
	}
	printf("%d", ret);
}*/

/*int dp[101][100001], w[101], v[101]; // 평범한 배낭(다시 풀어보기)

int main() {
	int i, j, n, k;
	scanf("%d%d", &n, &k);
	for (i = 1; i <= n; i++) {
		scanf("%d%d", &w[i], &v[i]);
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= k; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= w[i]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
			}
		}
	}
	printf("%d", dp[n][k]);
}*/

////////////////////////////////////////
		  /*그리디 알고리즘*/
////////////////////////////////////////

/*int main() { //11047 동전 0
	int i, n, k, arr[1000000], ret=0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = n - 1; i >= 0; i--) {
		ret += k / arr[i];
		k %= arr[i];
	}
	printf("%d", ret);
}*/

/*int main() { //1931 회의실 배정
	int i, n, a, b, ret=0, cur=0;
	vector<pair<int, int>> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		vec.emplace_back(b, a);
	}
	sort(vec.begin(), vec.end());
	for (auto it : vec) {
		if (it.first >= cur&&it.second>=cur) {
			ret++;
			cur = it.first;
		}
	}
	printf("%d", ret);
}*/

/*void qSort(int* arr, int start, int end) { //11399 ATM
	if (start >= end) return;
	int p = start, q = end, pivot = (arr[(p+q)/2]);
	while (p <= q) {
		while (arr[p] < pivot) p++;
		while (arr[q] > pivot) q--;
		if (p <= q) {
			int tmp = arr[p];
			arr[p] = arr[q];
			arr[q] = tmp;
			p++;
			q--;
		}
	}
	qSort(arr, p, end);
	qSort(arr, start, q);
}

int main() {
	int i, n, arr[1000], ret = 0, sum = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	qSort(arr, 0, n-1);
	for (i = 0; i < n; i++) {
		ret += sum + arr[i];
		sum += arr[i];
	}
	printf("%d", ret);
}*/

/*int main() { //1541 잃어버린 괄호
	int idxn=0, idxo=0, num[50], oper[50];
	string s;
	cin >> s;
	int i=0;
	while(i<s.length()) {
		if (s[i] == '-') {
			oper[idxo++] = -1;
		}

		else if (s[i] == '+') {
			oper[idxo++] = 1;
		}

		else {
			int k, tmp=0;
			while (i<s.length()&&s[i] != '-' && s[i] != '+') {
				k = s[i] - '0';
				tmp = tmp * 10 + k;
				i++;
			}
			num[idxn++] = tmp;
			i--;
		}
		i++;
	}
	int ret = num[0];
	i = 0;
	while(i<idxo){
		if (oper[i] == -1) {
			ret -= num[i+1];
			i++;
			while (i<idxo&&oper[i] == 1) {
				ret -= num[i+1];
				i++;
			}
			i--;
		}
		else {
			ret += num[i+1];
		}
		i++;
	}
	cout << ret;
}*/

////////////////////////////////////////
			   /*수학 3*/
////////////////////////////////////////

/*int main() { //5086 배수와 약수
	int a, b;
	while (true) {
		scanf("%d%d", &a, &b);
		if (a == 0) return 0;
		if (b % a == 0) printf("factor\n");
		else if (a % b == 0) printf("multiple\n");
		else printf("neither\n");
	}
}*/

/*int main() { //1037 약수
	int i, n;
	int arr[50];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	if (n == 1) cout << arr[0] * arr[0] << endl;
	else cout << arr[0] * arr[n - 1] << endl;
}*/

/*int main(){ //11653 소인수분해
	int i, n;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			printf("%d\n", i);
		}
	}
}*/

/*int main() { //2609 최대공약수와 최소공배수
	int i, a, b, border, ret=1;
	cin >> a >> b;
	border = a < b ? a : b;
	for (i = 2; i <= border; i++) {
		while (a % i == 0 && b % i == 0) {
			a /= i;
			b /= i;
			ret *= i;
		}
	}
	cout << ret << endl << ret * a * b << endl;
}*/

/*int getGcd(vector<int> sub) { //2981 검문
	int i, j, ret=1;
	for (i = 2; i <= sub[0]; ) {
		int chk = 0;
		for (j = 0; j < sub.size(); j++) {
			if (sub[j] % i != 0) {
				chk = 1;
				i++;
				break;
			}
		}
		if (!chk) {
			for (j = 0; j < sub.size(); j++) sub[j] /= i;
			ret *= i;
		}
	}

	return ret;
}

int main() {
	int i, j, n, gcd;
	int arr[100];
	vector<int> sub, yak;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			sub.push_back(arr[j] - arr[i]);
		}
	}
	sort(sub.begin(), sub.end());
	gcd=getGcd(sub);
	for (i = 2; i*i <= gcd; i++) {
		if (gcd % i == 0) {
			yak.push_back(i);
			yak.push_back(gcd / i);
		}
	}
	yak.push_back(gcd);
	yak.erase(unique(yak.begin(), yak.end()), yak.end());
	sort(yak.begin(), yak.end());
	for (auto it = yak.begin(); it != yak.end(); it++) {
		printf("%d ", *it);
	}
}*/

/*int getGcd(int a, int b) { //3036 링
	int i, min, ret=1;
	min = a < b ? a : b;
	for (i = 2; i <= min; i++) {
		while (a % i == 0 && b % i == 0) {
			a /= i;
			b /= i;
			ret *= i;
		}
	}
	return ret;
}

int main() {
	int i, n, a, b, gcd;
	scanf("%d%d", &n, &a);
	for (i = 1; i < n; i++) {
		scanf("%d", &b);
		gcd = getGcd(a, b);
		printf("%d/%d\n", a / gcd, b / gcd);
	}
}*/

/*int fact(int n) { //11050 이항 계수 1
	if (n <= 1) return 1;
	return n * fact(n - 1);
}
int main() {
	int n, k;
	cin >> n >> k;
	cout << fact(n) / (fact(k) * fact(n - k)) << endl;
}*/

/*int check[1001][1001]; //11051 이항 계수 2

int bi(int n, int k) {
	if (n == 0 || k == 0||n==k) return 1;
	if (k == 1) return n;
	if (check[n][k]) return check[n][k];
	return check[n][k]=(bi(n - 1, k - 1) + bi(n - 1, k)) % 10007;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << bi(n, k) << endl;
}*/

/*int main() { //9375 패션왕 신해빈
	int i, j, n, idx = 0;
	string name, tmpc;
	cin >> n;
	while(n--){
		vector<pair<string, int>> vec;
		int k, ret=1;
		cin >> k;
		for (i = 0; i < k; i++) {
			int chk = 0;
			cin >> name >> tmpc;
			for (j = 0; j < vec.size(); j++) {
				if (vec[j].first == tmpc) {
					vec[j].second++;
					chk = 1;
				}
			}
			if(!chk) vec.push_back(make_pair(tmpc, 1));
		}

		for (auto it = vec.begin(); it != vec.end(); it++) {
			ret *= it->second+1;
		}
		cout << ret - 1 << endl;
	}
}*/

/*int main() { //1676 팩토리얼 0의 갯수
	int i, n, arr[501], two=0, five=0, stk=0;
	cin >> n;
	for (i = 1; i <= 500; i++) {
		int tmp = i;
		while (tmp % 2 == 0) {
			tmp /= 2;
			two++;
		}

		while (tmp % 5 == 0) {
			tmp /= 5;
			five++;
		}

		while (two > 0 && five > 0) {
			stk++;
			two--;
			five--;
		}
		arr[i] = stk;
	}
	cout << arr[n] << endl;
}*/

/*int func(int n, int div) { //2004 조합 0의 개수
	int ret = 0;
	while (n >= div) {
		ret += n / div;
		n /= div;
	}
	return ret;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << min(func(n, 5) - (func(k, 5) + func(n - k, 5)), func(n, 2) - (func(k, 2) + func(n - k, 2)))<< endl;
}*/

////////////////////////////////////////
				 /*스택*/
////////////////////////////////////////

/*class myStack { //10828 스택
private:
	int stk[10001];
	int t;
public:
	myStack() : t(-1) {}

	void push(int val) {
		stk[++t] = val;
	}

	void pop() {
		if (t == -1) printf("-1\n");
		else printf("%d\n", stk[t--]);
	}

	void empty() {
		int ret = t == -1 ? 1 : 0;
		printf("%d\n", ret);
	}

	void top() {
		if (t == -1) printf("-1\n");
		else printf("%d\n", stk[t]);
	}

	void size() {
		printf("%d\n", t + 1);
	}
};

int main() {
	int i, n, num;
	char *command=new char[20];
	scanf("%d", &n);
	myStack myStk;
	cin.ignore();
	for (i = 0; i < n; i++) {
		scanf("%s", command);
		if (command[0] == 'p') {
			if (command[1] == 'u') {
				scanf("%d", &num);
				myStk.push(num);
			}
			else
				myStk.pop();
		}

		else if (command[0] == 's')
			myStk.size();

		else if (command[0] == 'e')
			myStk.empty();

		else
			myStk.top();
	}
	return 0;
}*/

/*int main() { //10773 제로
	int i, k, n, ret = 0;
	stack<int> stk;
	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		scanf("%d", &n);
		if (n == 0) {
			ret -= stk.top();
			stk.pop();
		}
		else {
			ret += n;
			stk.push(n);
		}
	}
	printf("%d", ret);
}*/

/*int main() { //9012 괄호
	int i, j, n;
	scanf("%d", &n);
	char ps[50];
	for (i = 0; i < n; i++) {
		int chk = 0;
		scanf("%s", ps);
		for (j = 0; j < strlen(ps); j++) {
			if (ps[j] == '(') chk++;
			else chk--;
			if (chk < 0) break;
		}
		if (!chk) printf("YES\n");
		else printf("NO\n");
	}
}*/

/*int main() { //4949 균형잡힌 세상
	char string[10000];
	while (true) {
		fgets(string, 10000, stdin);
		if (strlen(string) == 2 && string[0] == '.') return 0;
		stack<int> recent;//recent 0 : small, 1 : big
		int i = 0, small=0, big=0, chk=0;
		while (i<strlen(string)) {
			if (string[i] == '.') {
				if (small == 0 && big == 0 && !chk)
					printf("yes\n");
				else printf("no\n");
				while (!recent.empty()) recent.pop();
				small = 0, big = 0, chk = 0;
			}
			if (!chk) {
				if (string[i] == '(') {
					recent.push(0);
					small++;
				}

				else if (string[i] == '[') {
					recent.push(1);
					big++;
				}

				else if (string[i] == ')') {
					if (recent.empty() || recent.top() == 1) {
						chk = 1;
						continue;
					}
					small--;
					recent.pop();
				}

				else if (string[i] == ']') {
					if (recent.empty() || recent.top() == 0) {
						chk = 1;
						continue;
					}
					big--;
					recent.pop();
				}
			}
			i++;
		}
	}
}*/

/*int chk[100001]; //1874 스택 수열, 1120ms
int main() {
	int i, j, n, num;
	stack<int> stk;
	vector<char> ret;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (stk.empty() || stk.top() != num) {
			for (j = 1; j <= num; j++) {
				if (chk[j]) continue;
				stk.push(j);
				chk[j]++;
				ret.push_back('+');
			}
		}
		if (stk.top() != num) {
			printf("NO\n");
			return 0;
		}
		stk.pop();
		ret.push_back('-');
	}
	for (auto it = ret.begin(); it != ret.end(); it++) {
		printf("%c\n", *it);
	}
}*/

/*int stk[100001]; //1874 스택 수열, 16ms
char ret[400001];
int main() {
	int i, j, n, num, top=0, idx=0, k=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (stk[top]<num) {
			while(stk[top]<num){
				ret[idx++]='+';
				ret[idx++] = '\n';
				stk[++top] = k++;
			}
			ret[idx++] = '-';
			ret[idx++] = '\n';
			top--;
		}
		else if (stk[top]>num) {
			printf("NO\n");
			return 0;
		}
		else {
			ret[idx++] = '-';
			ret[idx++] = '\n';
			top--;
		}
	}
	puts(ret);
}*/

////////////////////////////////////////
			   /*큐, 덱*/
////////////////////////////////////////

/*int main() { //18258 큐 2
	int i, n, myQue[2000000], front = 0, back = 0;
	char command[6];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", command);
		int size = back-front;
		if (!strcmp(command, "push")) {
			int num;
			scanf("%d", &num);
			myQue[back++] = num;
		}
		else if (command[0] == 'p') {
			if (size == 0) {
				printf("-1\n");
			}
			else printf("%d\n", myQue[front++]);
		}
		else if (command[0] == 's') {
			printf("%d\n", size);
		}
		else if (command[0] == 'e') {
			printf(size == 0 ? "1\n" : "0\n");
		}
		else if (command[0] == 'f') {
			printf(size == 0 ? "-1\n" : "%d\n", myQue[front]);
		}
		else if (command[0] == 'b') {
			printf(size == 0 ? "-1\n" : "%d\n", myQue[back-1]);
		}
	}
}*/

/*struct Node { //2164 카드2
	int val;
	Node* next;
	Node* prev;
};
class Myqueue {
private:
	Node* head;
	Node* tail;
	int size;
public:
	Myqueue() : size(0) {
		head = tail = nullptr;
	}

	void push(int val) {
		Node* newNode = new Node;
		newNode->val = val;
		newNode->next = tail;
		newNode->prev = nullptr;
		if(size!=0) newNode->next->prev = newNode;
		if (size == 0) head = newNode;
		tail = newNode;
		size++;
	}

	int front() {
		return head->val;
	}

	void pop() {
		Node* tmp = head;
		head = head->prev;
		if(head!=NULL) head->next = nullptr;
		size--;
		delete tmp;
	}

	bool empty() {
		return size == 0 ? true : false;
	}
};

int main() {
	int i, n, res, tmp;
	cin >> n;
	Myqueue que;
	for (i = 1; i <= n; i++) {
		que.push(i);
	}
	while (!que.empty()) {
		res = que.front();
		que.pop();
		if (que.empty()) {
			break;
		}
		tmp = que.front();
		que.pop();
		que.push(tmp);
	}
	cout <<res;
}*/

/*int main() { //11866 조세퍼스 문제 0
	int i, j, n, k, tmp;
	cin >> n >> k;
	queue<int> que;
	vector<int> ret;
	for (i = 1; i <= n; i++) {
		que.push(i);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < k - 1; j++) {
			tmp = que.front();
			que.pop();
			que.push(tmp);
		}
		ret.push_back(que.front());
		que.pop();
	}
	cout << "<";
	for (i = 0; i < n; i++) {
		if (i != n - 1)cout << ret[i] << ", ";
		else cout << ret[i] << ">";
	}
}*/

/*int main() { //프린터 큐
	int t;
	cin >> t;
	while (t--) {
		int i, n, m, imp, maxa=-1, num=-1, ret=0;
		queue<pair<int, int>> que;
		priority_queue<int> pQue;
		cin >> n >> m;
		for (i = 0; i < n; i++) {
			cin >> imp;
			pQue.push(imp);
			que.push(make_pair(imp, i));
		}
		pair<int, int> paper;
		while(true){
			if (num == m) break;
			paper = que.front();
			if (paper.first == pQue.top()) {
				num = paper.second;
				ret++;
				pQue.pop();
				que.pop();
			}
			else {
				que.pop();
				que.push(paper);
			}
		}
		cout << ret << endl;
	}
}*/

/*struct Node { //10866 덱
	int val;
	Node* next;
	Node* prev;
};
class MyDeque {
private:
	Node* head, * tail;
	int sz;
public:
	MyDeque() {
		head = NULL;
		tail = NULL;
		sz = 0;
	}

	void push_front(int x) {
		Node* newNode = new Node;
		newNode->val = x;
		newNode->prev = head;
		newNode->next = nullptr;

		if (sz == 0)
			tail = newNode;
		else
			head->next = newNode;
		head = newNode;
		sz++;
	}

	void push_back(int x) {
		Node* newNode = new Node;
		newNode->val = x;
		newNode->next = tail;
		newNode->prev = nullptr;

		if (sz == 0)
			head = newNode;
		else
			tail->prev = newNode;
		tail = newNode;
		sz++;
	}

	int pop_front() {
		if (sz == 0) return -1;
		int ret = head->val;
		Node * tmpNode = head;
		head = head->prev;
		delete tmpNode;
		if (head != nullptr) head->next = nullptr;
		sz--;

		return ret;
	}

	int pop_back() {
		if (sz == 0) return -1;
		int ret = tail->val;
		Node * tmpNode = tail;
		tail = tail->next;
		delete tmpNode;
		if (tail != nullptr) tail->prev = nullptr;
		sz--;

		return ret;
	}

	int size() { return sz; }
	bool empty() {
		return sz == 0 ? true : false;
	}

	int front() {
		if (sz == 0) return -1;
		return head->val;
	}

	int back() {
		if (sz == 0) return -1;
		return tail->val;
	}
};

void func(MyDeque & dQue, const char* com, int num) {
	if (!strcmp(com, "push_back")) {
		dQue.push_back(num);
	}
	else dQue.push_front(num);
}

void func(MyDeque & dQue, const char* com) {
	int ret;

	if (!strcmp(com, "pop_front")) ret=dQue.pop_front();
	else if (!strcmp(com, "pop_back")) ret=dQue.pop_back();
	else if (!strcmp(com, "size")) ret=dQue.size();
	else if (!strcmp(com, "empty")) ret=dQue.empty();
	else if (!strcmp(com, "front")) ret=dQue.front();
	else ret=dQue.back();
	printf("%d\n", ret);
}

int main() {
	int i, n, num;
	char command[20];
	MyDeque dQue;
	scanf("%d", &n);
	fgetc(stdin);
	for (i = 0; i < n; i++) {
		scanf("%s", command);
		if (!strcmp(command, "push_back") || !strcmp(command, "push_front")) {
			scanf("%d", &num);
			func(dQue, command, num);
		}
		else func(dQue, command);
	}
}*/

/*int arr[51], chk[51]; //1021 회전하는 큐
int main() {
	int i, j, n, m, num, top=1, ret=0;
	scanf("%d%d", &n, &m);
	int size = n;
	for (i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (i = 0; i < m; i++) {
		scanf("%d", &num);
		if(arr[top]!=num){
			int dist = 0;
			while (arr[top] != num) {
				top++;
				if (top > n) top = 1;
				if (chk[top]) continue;
				dist++;
			}
			ret += (dist < size-dist) ? dist : size-dist;
		}
		int init = top;
		chk[top] = 1;
		while (chk[top]) {
			top++;
			if (top > n) top = 1;
			if (init == top) break;
		}
		size--;
	}
	printf("%d\n", ret);
}*/

/*int main() { //5430 AC
	int i, t, n;
	char command[100001], arrStr[400001];
	int arr[400001];
	scanf("%d\n", &t);
	while (t--) {
		scanf("%s", command);
		scanf("%d", &n);
		scanf("%s", arrStr);
		int top = 0, back = n - 1, rev = 1, chk=0; //rev=-1 : ccw
		if (strlen(arrStr) == 2) {
			for (i = 0; i < strlen(command); i++) {
				if (command[i] == 'D') {
					printf("error\n");
					chk = 1;
					break;
				}
			}
			if (!chk) printf("[]\n");
			continue;
		}

		arr[0] = atoi(strtok(arrStr, "[,]"));
		for (i = 1; i < n; i++) {
			arr[i] = atoi(strtok(NULL, "[,]"));
		}

		for (i = 0; i < strlen(command); i++) {
			if (command[i] == 'R') {
				int tmp = back;
				back = top;
				top = tmp;
				rev *=-1;
			}

			else {
				top += rev;
				if (top == -1 || top == n+1) {
					printf("error\n");
					chk = 1;
					break;
				}
			}
		}
		if (!chk) {
			if ((rev==-1&&top < back)||(rev==1&&top>back)) printf("[]\n");
			else {
				printf("[");
				while (top != back) {
					printf("%d,", arr[top]);
					top += rev;
				}
				printf("%d]\n", arr[top]);
			}
		}
	}
}*/

////////////////////////////////////////
			  /*분할 정복*/
////////////////////////////////////////

/*int arr[128][128], w, b; //2630 색종이 만들기

void func(int vStart, int vEnd, int hStart, int hEnd) {
	if (vEnd - vStart == 1 && hStart - hEnd == 1) {
		if (arr[vStart][vEnd] == 1) b++;
		else w++;
		return;
	}
	int i, j, init=arr[vStart][hStart], chk=0;
	for (i = vStart; i < vEnd; i++) {
		for (j = hStart; j < hEnd; j++) {
			if (init != arr[i][j]) {
				chk = 1;
				break;
			}
		}
		if (chk) break;
	}

	if (chk) {
		int len = (vEnd - vStart)/2;
		func(vStart, vStart+len, hStart, hStart+len);
		func(vStart+len, vEnd, hStart, hStart + len);
		func(vStart, vStart + len, hStart + len, hEnd);
		func(vStart + len, vEnd, hStart + len, hEnd);
	}

	else {
		if (init) b++;
		else w++;
	}
}
int main() {
	int i, j, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	func(0, n, 0, n); //가로 시작 끝, 세로 시작 끝
	printf("%d\n%d\n", w, b);
}*/

/*char arr[64][64]; //1992 쿼드트리

void func(int vS, int vE, int hS, int hE) {

	int chk=0;
	char c = arr[vS][hS];
	for (int i = vS; i < vE; i++) {
		for (int j = hS; j < hE; j++) {
			if (c != arr[i][j]) {
				chk = 1;
				break;
			}
		}
		if (chk) break;
	}
	if (chk) {
		printf("(");
		int len = (vE - vS) / 2;
		func(vS, vS + len, hS, hS + len);
		func(vS, vS + len, hS + len, hE);
		func(vS + len, vE, hS, hS + len);
		func(vS + len, vE, hS + len, hE);
		printf(")");
	}
	else {
		if (c=='1') printf("1");
		else printf("0");
	}
}

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", arr[i]);
	}
	func(0, n, 0, n);
}*/

/*int arr[2187][2187], m, z, o; //1780 종이의 개수

void func(int vStart, int hStart, int len) {
	if (len==1) {
		if (arr[vStart][hStart] == 1) o++;
		else if (arr[vStart][hStart] == 0) z++;
		else m++;
		return;
	}
	int i, j, init = arr[vStart][hStart], chk = 0;
	for (i = vStart; i < vStart+len; i++) {
		for (j = hStart; j < hStart+len; j++) {
			if (init != arr[i][j]) {
				chk = 1;
				break;
			}
		}
		if (chk) break;
	}

	if (chk) {
		for (i = 0; i < 3; i++) {
			for(j=0; j<3; j++)
				func(vStart+i*len/3, hStart + j * len / 3, len / 3);
		}
	}

	else {
		if (init == 1) o++;
		else if (init == 0) z++;
		else m++;
	}
}
int main() {
	int i, j, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	func(0, 0, n); //가로 시작, 세로 시작, 길이
	printf("%d\n%d\n%d\n", m, z, o);
}*/

/*unsigned long long func(unsigned long long a, unsigned long long b, unsigned long long c) { //1629 곱셈
	if (b == 1) return a%c;
	unsigned long long tmp = func(a, b / 2, c);
	if (b % 2 == 1)
		return ((a * tmp) % c * tmp) % c;
	else return (tmp*tmp) % c;
}

int main() {
	unsigned long long a, b, c;
	cin >> a >> b >> c;
	cout << func(a, b, c) << endl;
}*/

/*typedef long long ll; //11401 이항 계수 3 (페르마의 소정리)
const int DIV = 1000000007;
ll factArr[4000001];

void fact() {
	factArr[0] = factArr[1] = 1;
	for (int i = 2; i <= 4000000; i++) {
		factArr[i] = (factArr[i - 1] * i) % DIV;
	}
}

ll power(ll n, ll mul) {
	ll ret = 1;
	while (mul > 0) {
		if (mul % 2) {
			ret *= n;
			ret %= DIV;
			mul--;
		}
		n *= n;
		n %= DIV;
		mul /= 2;
	}
	return ret;
}

int main() {
	long long n, k;
	fact();
	scanf("%lld%lld", &n, &k);
	printf("%d", (factArr[n]*power((factArr[k]*factArr[n-k])%DIV, DIV-2))%DIV);
}*/

/*int arr1[100][100], arr2[100][100], ret; //2740 행렬 곱셈
int main() {
	int i, j, h, n, m, k;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	scanf("%d%d", &m, &k);
	for (i = 0; i < m; i++) {
		for (j = 0; j < k; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			for (h = 0; h < m; h++) {
				ret += arr1[i][h] * arr2[h][j];
			}
			printf("%d ", ret);
			ret = 0;
		 }
		printf("\n");
	}
}*/

/*
typedef vector<vector<int>> matrix; //10830 행렬 제곱
typedef long long ll;
int n;
matrix arr;

matrix mul(matrix a, matrix b) {
	int i, j, k;
	matrix ret(n);
	for (i = 0; i < n; i++) {
		ret[i] = vector<int>(n);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			ret[i][j] = 0;
			for (k = 0; k < n; k++) {
				ret[i][j] += (a[i][k] * b[k][j]) % 1000;
			}
			ret[i][j] %= 1000;
		}
	}
	return ret;
}

matrix func(matrix arr, ll b) {
	int i, j, chk = 0;
	matrix ret(n);
	for (i = 0; i < n; i++) {
		ret[i] = vector<int>(n);
	}
	while (b > 0) {
		if (b % 2) {
			if (!chk) {
				for (i = 0; i < n; i++) {
					for (j = 0; j < n; j++) {
						ret[i][j] = arr[i][j]%1000;
					}
				}
				chk = 1;
			}
			else ret = mul(ret, arr);
			b--;
		}
		arr = mul(arr, arr);
		b /= 2;
	}

	return ret;
}

int main() {
	int i, j;
	ll b;
	scanf("%d%lld", &n, &b);
	arr = matrix(n);
	for (i = 0; i < n; i++) {
		arr[i] = vector<int>(n);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	matrix ret=func(arr, b);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", ret[i][j]);
		}
		printf("\n");
	}
}*/

/*int n; //6549 히스토그램에서 가장 큰 직사각형
typedef long long ll;
int height[100000];
ll func(int start, int end) {
	if (end == start) return height[start];
	int mid = (start + end) / 2;
	ll ret = max<long long>(func(start, mid), func(mid + 1, end));
	int i = mid, j = mid + 1;
	ll h = min(height[i], height[j]), len = 2, w = len * h;
	while (i > start&&j<end) {
		if (height[i - 1] < height[j + 1]) {
			h = min<long long>(h, height[j + 1]);
			w = max<long long>(w, (len + 1) * h);
			j++;
			len++;
		}
		else {
			h = min<long long>(h, height[i-1]);
			w = max<long long>(w, (len + 1) * h);
			i--;
			len++;
		}
	}

	if (i == start) {
		while (j < end) {
			h = min<long long>(h, height[j + 1]);
			w = max<long long>(w, (len + 1) * h);
			j++;
			len++;
		}
	}

	else {
		while (i>start) {
			h = min<long long>(h, height[i - 1]);
			w = max<long long>(w, (len + 1) * h);
			i--;
			len++;
		}
	}
	ret = max<long long>(ret, w);
	return ret;
}

int main() {
	int i;
	while (true) {

		scanf("%d", &n);
		if (!n) break;
		memset(height, 0, sizeof(height));
		for (i = 0; i < n; i++) scanf("%d", &height[i]);
		printf("%lld\n", func(0, n - 1));
	}
	return 0;
}*/

/*int n; //2261 가장 가까운 두 점
vector<pair<int, int>> pnt;

int func(int start, int end) {
	if (start == end) return 999999999;
	if (end - start == 1) {
		int a = pnt[start].first - pnt[end].first, b=pnt[start].second-pnt[end].second;
		return a * a + b * b;
	}

	int i, j, mid = (start + end) / 2,
		ret = min(func(start, mid), func(mid + 1, end)), xMid;

	if (!(end - start) % 2) xMid = pnt[mid].first;
	else xMid = (pnt[mid].first + pnt[mid+1].first) / 2;
	vector<pair<int, int>> points;
	for (i = start; i <= end; i++) {
		int tmp = (pnt[i].first - xMid) * (pnt[i].first-xMid);
		if (tmp<ret) {
			points.push_back(make_pair(pnt[i].second, pnt[i].first));
		}
	}
	sort(points.begin(), points.end());
	int sz=points.size();
	for (i = 0; i < sz-1; i++) {
		for (j = i+1; j < sz; j++) {
			int yDist = points[j].first - points[i].first;
			if (yDist * yDist >= ret) {
				break;
			}
			int	xDist = points[j].second - points[i].second,
				dist = xDist * xDist + yDist * yDist;

			ret = min(ret, dist);
		}
	}
	return ret;
}

int main() {
	int i, a, b;
	scanf("%d", & n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		pnt.push_back(make_pair(a, b));
	}
	sort(pnt.begin(), pnt.end());
	printf("%d", func(0, n - 1));
}*/

////////////////////////////////////////
			  /*이분 탐색*/
////////////////////////////////////////

/*int func(int num, int start, int end) {
	if (start > end) return 0;
	if (start == end) {
		if (arr[start] == num) {
			return 1;
		}
		return 0;
	}
	int mid = (start + end) / 2;
	if (num < arr[mid]) {
		func(num, start, mid - 1);
	}
	else if (num > arr[mid]) {
		func(num, mid + 1, end);
	}
	else {
		return 1;
	}
}*/

/*int main() { //1920 수 찾기
	int i, n, m, obj, arr[100000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &obj);
		int chk=0, left = 0, right = n - 1, mid = (left + right) / 2;
		while (left<right) {
			if (arr[mid] > obj) right = mid - 1;
			else if (arr[mid] < obj) left = mid + 1;
			else {
				chk = 1;
				break;
			}
			mid = (left + right) / 2;
		}
		if (left == right && arr[mid] == obj) chk = 1;
		printf("%d\n", chk);
	}
}*/

/*int main() {
	int i, n, m, card[500000], possess;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}
	sort(card, card + n);
	scanf("%d", &m);
	int num = m;
	for(i=0; i<m; i++){
		scanf("%d", &possess);
		int sum=0, left = 0, right = n - 1, mid=0;
		while (left < right) {
			mid = (left + right) / 2;
			if (card[mid] > possess) right = mid - 1;
			else if (card[mid] < possess) left = mid + 1;
			else {
				sum++;
				int tl = mid - 1, tr = mid + 1;
				while (tl>=0&&card[tl] == possess){
					tl--;
					sum++;
				}

				while (tr<n&&card[tr] == possess) {
					tr++;
					sum++;
				}
				break;
			}
		}
		if (left == right&&card[left]==possess) {
			sum++;
		}
		printf("%d ", sum);
		num -= sum;
	}
}*/

/*int main() { //10816 숫자 카드 2
	int i, n, m, card[500000], possess;
	unordered_map<int, int> mp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
		if (mp.find(card[i]) == mp.end()) {
			mp.insert(make_pair(card[i], 1));
		}
		else mp[card[i]]++;
	}
	sort(card, card + n);
	scanf("%d", &m);
	int num = m;
	for (i = 0; i < m; i++) {
		scanf("%d", &possess);
		int sum = 0, left = 0, right = n - 1, mid = 0;
		while (left < right) {
			mid = (left + right) / 2;
			//printf("%d, %d, %d, %d\n", left, right, mid, card[mid]);
			if (card[mid] > possess) right = mid - 1;
			else if (card[mid] < possess) left = mid + 1;
			else {
				sum += mp[possess];
				break;
			}
		}
		if (left == right && card[left] == possess) {
			sum++;
		}
		printf("%d ", sum);
	}
}*/

/*typedef long long ll; //1654 랜선 자르기
int main() {
	int i, k, n, line[10000], border=0;
	scanf("%d%d", &k, &n);
	for (i = 0; i < k; i++) {
		scanf("%d", &line[i]);
	}

	ll left = 0, right = (ll)2 << 31 - 1, mid, num;
	for(int it=0; it<100; it++){
		mid = (left + right) / 2;
		num = 0;
		for (i = 0; i < k; i++) {
			num += line[i] / mid;
		}
		if (num >= n) left = mid;
		else right = mid;
	}
	printf("%lld\n", mid);
}*/

/*typedef long long ll; //2805 나무 자르기
int main() {
	int i;
	ll n, m, height[1000000];
	scanf("%lld%lld", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%lld", &height[i]);
	}
	ll left = 0, right = 10e8, mid, pl, pr;
	while(true){
		pl = left, pr = right;
		ll sum = 0;
		mid = (left + right) / 2;
		for (i = 0; i < n; i++) {
			if (height[i] > mid) {
				sum += height[i] - mid;
			}
		}
		if (sum >= m) left = mid;
		else right = mid;
		if (pl == left && pr == right) break;
	}
	printf("%lld", mid);
}*/

/*int main() { //2110 공유기 설치
	int it, i, n, c, pos[200000];
	scanf("%d%d", &n, &c);
	for (i = 0; i < n; i++) {
		scanf("%d", &pos[i]);
	}
	sort(pos, pos + n);
	int left = 0, right = 10e8, mid;
	for (it = 0; it < 100; it++) {
		mid = (left + right) / 2;
		int now = pos[0], ret=1;

		for (i = 1; i < n; i++) {
			if (pos[i] >= now + mid) {
				now = pos[i];
				ret++;
			}
		}
		if (ret < c) right = mid;
		else left = mid;
	}
	printf("%d", left);
}*/

/*int main() { //1300 K번째 수
	int i, j, n, k;
	scanf("%d%d", &n, &k);
	int left = 0, right = 10e8, mid, ret;
	for (i = 0; i < 100; i++) {
		mid = (left + right) / 2;
		ret = 0;
		for (j = 1; j <= n; j++) {
			ret += min(mid / j, n);
		}
		if (ret <=k-1) {
			left = mid;
		}
		else {
			right = mid;
		}
	}

	while (ret < k) {
		ret = 0;
		left++;
		for (j = 1; j <= n; j++) {
			ret += min(left / j, n);
		}
	}
	printf("%d", left);
}*/

/*int main() { //12015 가장 긴 증가하는 부분 수열 2
	int i, j, n, num;
	vector<int> vec;
	vec.push_back(0);
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		auto it = lower_bound(vec.begin(), vec.end(), num);
		if (it == vec.end()) {
			vec.push_back(num);
		}
		else if(*it>num) *it = num;
	}
	printf("%d\n", vec.size() - 1);
}*/

////////////////////////////////////////
			 /*우선순위 큐*/
////////////////////////////////////////

/*int main() { //11279 최대 힙(STL priority queue)
	priority_queue<int> pQue;
	int i, n, input;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &input);
		if (!input) {
			if (pQue.empty()) printf("0\n");
			else {
				printf("%d\n", pQue.top());
				pQue.pop();
			}
		}
		else pQue.push(input);
	}
}*/

/*void erase(int* arr, int tail) { //11279 최대 힙 (직접 구현)
	arr[1] = arr[tail];
	int idx = 1;
	while (idx*2 < tail) {
		int next = (arr[idx * 2] > arr[idx * 2 + 1]) ? idx * 2 : idx * 2 + 1;
		if (arr[idx] < arr[next]) {
			int tmp = arr[idx];
			arr[idx] = arr[next];
			arr[next] = tmp;

			idx = next;
		}
		else break;
	}
}

void put(int* arr, int num, int tail) {
	arr[tail] = num;
	int child=tail, parent=tail/2;
	while (parent>=1) {
		if (arr[parent] < arr[child]) {
			int tmp = arr[parent];
			arr[parent] = arr[child];
			arr[child] = tmp;

			child = parent;
			parent /= 2;
		}
		else break;
	}
}

int main() {
	int i, n, arr[100001], num, tail=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (!num) {
			if (tail == 1) printf("0\n");
			else {
				printf("%d\n", arr[1]);
				tail--;
				erase(arr, tail);
			}
		}
		else {
			put(arr, num, tail);
			tail++;
		}
	}
}*/

/*void erase(int* arr, int tail) { //1927 최소 힙
	arr[1] = arr[tail];
	int idx = 1;
	while (idx * 2 < tail) {
		int next = (arr[idx * 2] < arr[idx * 2 + 1]) ? idx * 2 : idx * 2 + 1;
		if (arr[idx] > arr[next]) {
			int tmp = arr[idx];
			arr[idx] = arr[next];
			arr[next] = tmp;

			idx = next;
		}
		else break;
	}
}

void push(int* arr, int tail, int val) {
	arr[tail] = val;
	int child = tail, parent = child / 2;
	while (parent >= 1) {
		if (arr[child] < arr[parent]) {
			int tmp = arr[child];
			arr[child] = arr[parent];
			arr[parent] = tmp;

			child = parent;
			parent /= 2;
		}
		else break;
	}
}

int main() {
	int i, n, num, arr[100001], tail=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (!num) {
			if (tail == 1) printf("0\n");
			else {
				printf("%d\n", arr[1]);
				tail--;
				erase(arr, tail);
			}
		}
		else {
			push(arr, tail, num);
			tail++;
		}
	}
}*/

/*void erase(int* arr, int tail) { //11286 절댓값 힙
	arr[1] = arr[tail];
	int idx = 1;
	while (idx * 2 < tail) {
		int next;
		if (abs(arr[idx * 2]) < abs(arr[idx * 2 + 1])) next = idx * 2;
		else if (abs(arr[idx * 2]) > abs(arr[idx * 2 + 1])) next = idx * 2+1;
		else {
			if (arr[idx * 2] < arr[idx * 2 + 1]) next = idx * 2;
			else next = idx * 2 + 1;
		}
		if (abs(arr[idx]) > abs(arr[next])||((abs(arr[idx])==abs(arr[next]))&&arr[idx]>arr[next])) {
			int tmp = arr[idx];
			arr[idx] = arr[next];
			arr[next] = tmp;

			idx = next;
		}
		else break;
	}
}

void push(int* arr, int tail, int val) {
	arr[tail] = val;
	int child = tail, parent = child / 2;
	while (parent >= 1) {
		if (abs(arr[child]) < abs(arr[parent]) || ((abs(arr[child]) == abs(arr[parent]))) && arr[child] < arr[parent]) {
			int tmp = arr[child];
			arr[child] = arr[parent];
			arr[parent] = tmp;

			child = parent;
			parent /= 2;
		}
		else break;
	}
}

int main() {
	int i, n, num, arr[100001], tail = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (!num) {
			if (tail == 1) printf("0\n");
			else {
				printf("%d\n", arr[1]);
				tail--;
				erase(arr, tail);
			}
		}
		else {
			push(arr, tail, num);
			tail++;
		}
	}
}*/

/*const int MAX = 1, MIN = -1; //1655 가운데를 말해요
class MaxMinHeap {
private:
	int maxSize, mode, tail, arr[100001];
public:
	MaxMinHeap(int size, int m) : maxSize(size), mode(m), tail(1) {
		for (int i = 0; i < 100000; i++) {
			arr[i] = 0;
		}
	}

	void push(int val) {
		arr[tail] = val;
		int child = tail, parent = child / 2;
		while (parent >= 1) {
			if (mode * arr[child] > mode * arr[parent]) {
				int tmp = arr[child];
				arr[child] = arr[parent];
				arr[parent] = tmp;

				child = parent;
				parent /= 2;
			}
			else break;
		}
		tail++;
	}

	void erase() {
		tail--;
		if (tail == 1) {
			arr[1] = -1;
			return;
		}
		arr[1] = arr[tail];
		int idx = 1;
		while (idx * 2 < tail) {
			int next = (mode * arr[idx * 2] > mode * arr[idx * 2 + 1]) ? idx * 2 : idx * 2 + 1;
			if (mode * arr[next] > mode * arr[idx]) {
				int tmp = arr[next];
				arr[next] = arr[idx];
				arr[idx] = tmp;

				idx = next;
			}
			else break;
		}
	}

	int getSize() {
		return tail;
	}

	int getRoot() {
		if (tail == 1) return -mode*10001;
		return arr[1];
	}

	void print() {
		for (int i = 1; i < tail; i++) {
			printf("%d ", arr[i]);
		}
	}
};

int main() {
	int i, n, mid, num;
	scanf("%d", &n);
	MaxMinHeap maxHeap(n, MAX), minHeap(n, MIN);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (i == 0) mid = num;
		else {
			int leftVal = maxHeap.getRoot(), rightVal = minHeap.getRoot(),
				left = maxHeap.getSize(), right=minHeap.getSize();

			if (num<=leftVal||(leftVal<num&&num<=mid)) {
				if (left + 1 - right >= 2) {
					minHeap.push(mid);
					maxHeap.push(num);
					mid = maxHeap.getRoot();
					maxHeap.erase();

				}
				else maxHeap.push(num);
			}

			else if (num >= rightVal || (mid < num && num < rightVal)) {
				if (right + 1 - left >= 2) {
					maxHeap.push(mid);
					minHeap.push(num);
					mid = minHeap.getRoot();
					minHeap.erase();
				}
				else minHeap.push(num);
			}

			if (i % 2) {
				left = maxHeap.getSize(), right = minHeap.getSize();
				if (left > right&&maxHeap.getRoot()<mid) {
					minHeap.push(mid);
					mid = maxHeap.getRoot();
					maxHeap.erase();
				}
			}
		}
		printf("%d\n", mid);
	}
}*/

////////////////////////////////////////
			/*동적 계획법 2*/
////////////////////////////////////////

/*int val[10001]; //2293 동전 1
int main() {
	int i, j, n, k, arr[100];
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	val[0] = 1;
	for (i = 0; i< n; i++) {
		for (j = 1; j <= k; j++) {
			if(j-arr[i]>=0) val[j] += val[j - arr[i]];
		}
	}
	printf("%d\n", val[k]);
}*/

/*int sum[501], k, dp[501][501];

int func(int start, int end) {
	if (start == end) return chapter[start];
	if (start + 1 == end) return chapter[start] + chapter[end];
	int &ret = dp[start][end];
	if (ret) return ret;
	ret = 999999999;
	for (int i = start; i < end; i++) {
		ret = min(ret, func(start, i)+func(i+1, end));
	}
	return ret;
}*/

/*const int INF = 1000000007; //11066 파일 합치기
int main() {
	int i, x, y, mid, t, chapter, sum[501], k, dp[501][501];
	scanf("%d", &t);
	while (t--) {
		sum[0] = 0;
		for (i = 0; i < 501; i++) {
			memset(dp[i], 0, sizeof(dp[i]));
		}
		scanf("%d", &k);
		for (i = 1; i<= k; i++) {
			scanf("%d", &chapter);
			if (i == 0) sum[i] = chapter;
			else sum[i] = sum[i-1]+chapter;
		}

		for (i = 1; i < k; i++) {
			for (x = 1; x + i <= k; x++) {
				y = x + i;
				dp[x][y] = INF;
				for (mid = x; mid < y; mid++) {
					dp[x][y] = min(dp[x][y], dp[x][mid] + dp[mid + 1][y] + sum[y] - sum[x - 1]);
				}
			}
		}
		printf("%d\n", dp[1][k]);
	}
}*/

/*const int INF = 2147483647; //11049 행렬의 곱셈 순서
int sz[501][2], dp[501][501];
int main() {
	int i, x, y, mid, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d%d", &sz[i][0], &sz[i][1]);
	}

	for (i = 1; i < n; i++) {
		for (x = 1; x + i <= n; x++) {
			y = x + i;
			dp[x][y] = INF;
			for (mid = x; mid < y; mid++) {
				dp[x][y] = min(dp[x][y], dp[x][mid] + dp[mid + 1][y] + sz[x][0] * sz[mid][1] * sz[y][1]);
			}
		}
	}
	printf("%d\n", dp[1][n]);
}*/

/*const int WALL = 10001; //1520 내리막 길
int mp[502][502], ret, m, n, chk[502][502];

int func(int x, int y) {
	if (x == m && y == n) {
		return 1;
	}
	int& ret = chk[x][y];
	if (ret != -1) return ret;
	ret = 0;
	if (mp[x][y] > mp[x + 1][y]) ret+=func(x + 1, y);
	if (mp[x][y] > mp[x - 1][y]) ret+=func(x - 1, y);
	if (mp[x][y] > mp[x][y + 1]) ret+=func(x, y + 1);
	if (mp[x][y] > mp[x][y - 1]) ret+=func(x, y - 1);
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i <= n+1; i++) {
		mp[0][i] = WALL;
		mp[m+1][i] = WALL;
	}

	for (i = 0; i <= m + 1; i++) {
		mp[i][0] = WALL;
		mp[i][n+1] = WALL;
	}

	vector<pair<int, int>> path;
	for (i = 1; i <= m; i++) {
		for(j=1; j<=n ;j++){
			scanf("%d", &mp[i][j]);
			chk[i][j] = -1;
		}
	}

	printf("%d", func(1, 1));
}*/

/*int n, m, mem[100], cost[100], dp[100][100];

int func(int idx, int c) {
	printf("idx : %d, c : %d\n", idx, c);
	if (idx > n) {
		return 0;
	}
	int& ret = dp[idx][c];
	if (ret != -1) return ret;
	ret = max(mem[idx] + func(idx + 1, c + cost[idx]), func(idx + 1, c));
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &mem[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &cost[i]);
		for (j = 0; j < n; j++) {
			dp[i][j] = -1;
		}
	}

	func(0, 0);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (dp[i][j] >= m) {
				printf("i : %d, j : %d\n", i, j);
				printf("%d", dp[i][j]);
				return 0;
			}
		}
	}
}*/

/*int main() { //7579
	int i, j, n, m, mem[100], cost[100], dp[100][10001];
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &mem[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &cost[i]);
		for (j = 0; j < 10001; j++) {
			dp[i][j] = -1;
		}
	}
	dp[0][0] = 0, dp[0][cost[0]] = mem[0];
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < 10001; j++) {
			if (dp[i][j] !=-1) {
				dp[i+1][j+cost[i+1]] = mem[i+1] + dp[i][j];
				dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
			}
		}
	}

	for (i = 0; i < 10001; i++) {
		for (j = 0; j < n; j++) {
			if (dp[j][i] >= m) {
				printf("%d", i);
				return 0;
			}
		}
	}
}*/

/*void manachers(int n, int* arr, int *ret) { //10942 팰린드롬?
	int i, r = 0, p = 0;
	ret[0] = 0;
	for (i = 0; i < n; i++) {
		if (i <= r) {
			ret[i] = min(r - i, ret[2 * p - i]);
		}
		else {
			ret[i] = 0;
		}
		while (i - ret[i] - 1 >= 0 && i + ret[i] + 1 < n && arr[i - ret[i] - 1] == arr[i + ret[i] + 1])
			ret[i]++;

		if (r < i + ret[i]) {
			r = i + ret[i];
			p = i;
		}
	}
}

int main() {
	int i, n, m, s, e, arr[4001];
	arr[0] = -1;
	scanf("%d", &n);
	for (i = 1; i < 2*n; i+=2) {
		scanf("%d", &arr[i]);
		arr[i + 1] = -1;
	}
	int* ret = new int[2 * n + 1];
	manachers(2*n+1, arr, ret);

	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &s, &e);
		if (s > e || e > n || s > n) printf("0\n");
		else if (s == e) printf("1\n");
		else {
			int r = ret[s + e - 1];
			if (r + s + e - 1 >= e * 2 - 1) printf("1\n");
			else printf("0\n");
		}
	}
}*/

/*const int MAX = 987654321;
int n, w, dp[2001][2001];
pair<int, int> point[2001];
pair<pair<int, int>, int> nextPoint[2001][2001];

int getDistance(pair<int, int> a, pair<int, int> b) {
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int func(int idx, pair<int, int> first, pair<int, int>second) {
	if (idx >= w) {
		return 0;
	}
	int firstDist = getDistance(first, point[idx]),
		secondDist = getDistance(second, point[idx]);
	int& ret = dp[firstDist][secondDist];
	if (ret != -1) return ret;
	int f = func(idx + 1, point[idx], second) + firstDist, s = func(idx + 1, first, point[idx]) + secondDist;
	ret = MAX;
	if (ret > f) {
		ret = f;
		int nfirstDist = getDistance(point[idx], point[idx + 1]),
			nsecDist = getDistance(second, point[idx + 1]);
		nextPoint[firstDist][secondDist] = make_pair(make_pair(nfirstDist, nsecDist), 1);

	}

	if (ret > s) {
		ret = s;
		int nfirstDist = getDistance(first, point[idx + 1]),
			nsecDist = getDistance(point[idx], point[idx + 1]);
		nextPoint[firstDist][secondDist] = make_pair(make_pair(nfirstDist, nsecDist), 2);
	}

	return ret;
}

void reconstruct(int a, int b) {
	for (int i = 0; i < w; i++) {
		printf("%d\n", nextPoint[a][b].second);
		int ta = nextPoint[a][b].first.first,
			tb = nextPoint[a][b].first.second;
		a = ta, b = tb;
	}
}

int main() {
	int i, a, b;
	scanf("%d%d", &n, &w);
	vector<int> num;
	for (i = 0; i < 2001; i++) {
		fill(dp[i], dp[i] + 2001, -1);
	}

	for (i = 0; i < w; i++) {
		scanf("%d%d", &a, &b);
		point[i] = make_pair(a, b);
	}
	printf("%d\n", func(0, make_pair(1, 1), make_pair(n, n)));
	reconstruct(getDistance(make_pair(1, 1), point[0]), getDistance(make_pair(n, n), point[0]));
}*/

/*const int MAX = 987654321; //2618 경찰차(다시 풀어보기)
int n, w, dp[2001][2001], check[2001][2001];
pair<int, int> point[2003];
pair<pair<int, int>, int> nextPoint[2001][2001];

int getDistance(pair<int, int> a, pair<int, int> b) {
	return abs(a.first - b.first) + abs(a.second - b.second);
}

int func(int x, int y) {
	int here = max(x, y) + 1;
	if (here >= w + 2) return 0;
	int& ret = dp[x][y];
	if (ret != -1) return ret;
	int firstDist = getDistance(point[x], point[here]),
		secondDist = getDistance(point[y], point[here]);
	ret = MAX;
	int f = func(here, y)+firstDist, s = func(x, here)+secondDist;
	if (ret > f)
		ret = f;
	if (ret > s){
		ret = s;
		check[x][y] = 1;
	}
	return ret;
}

int main() {
	int i, a, b;
	scanf("%d%d", &n, &w);
	for (i = 0; i < 2001; i++) {
		fill(dp[i], dp[i] + 2001, -1);
	}

	point[0] = make_pair(1, 1);
	point[1] = make_pair(n, n);
	for (i = 2; i < w+2; i++) {
		scanf("%d%d", &a, &b);
		point[i] = make_pair(a, b);
	}

	printf("%d\n", func(0, 1));
	for (int x=0, y=1; max(x, y)+1<w+2;) {
		printf("%d\n", check[x][y]);
		if (check[x][y]) y=max(x, y)+1;
		else x=max(x, y)+1;
	}
}*/

////////////////////////////////////////
			/*DFS와 BFS*/
////////////////////////////////////////
/*int chk(const int arr[][101], int *check, int i, int n) { //2606 바이러스
	if (check[i] == 1) return 0;
	check[i] = 1;
	int ret = 0;
	for (int idx = 1; idx <= n; idx++) {
		if (check[idx] == 1) continue;
		if (arr[i][idx] == 1) ret += 1 + chk(arr, check, idx, n);
	}

	return ret;
}

int main() {
	int i, j, n, m, a, b;
	cin >> n >> m;
	int arr[101][101];

	for (i = 0; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			arr[i][j] = 0;
		}
	}
	int* check = new int[n+1];
	memset(check, 0, n+1);
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	cout<<chk(arr, check, 1, n)<<endl;
}*/

/*void func(char arr[][28], int chk[][28], int x, int y, int mk) { //2667 단지번호붙이기
	if (chk[x][y]) return;
	chk[x][y] = mk;
	int ptx[4] = { x - 1, x + 1, x, x };
	int pty[4] = { y, y, y - 1, y + 1 };
	for (int i = 0; i < 4; i++) {
		if (arr[ptx[i]][pty[i]]=='1') func(arr, chk, ptx[i], pty[i], mk);
	}
}

void bs(vector<int>& result) {
	int i, j;
	for (i = result.size()-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (result[j] > result[j + 1]) {
				int tmp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int i, j, n;
	char arr[28][28];
	int chk[28][28];
	for (i = 0; i < 28; i++) {
		memset(chk[i], 0, 28 * sizeof(int));
		for (j = 0; j < 28; j++) arr[i][j] = '0';
	}
	cin >> n;
	char* lin = new char[n];
	for (i = 1; i <= n; i++) {
		cin >> lin;
		for (j = 1; j <= n; j++) {
			arr[i][j] = lin[j-1];
		}
	}
	int mk = 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (chk[i][j]||arr[i][j]=='0') continue;
			else {
				func(arr, chk, i, j, mk);
				mk++;
			}
		}

	}

	vector<int> result(mk, 0);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (chk[i][j] == 0) continue;
			result[chk[i][j]]++;
		}
	}

	bs(result);
	cout << mk-1 << endl;
	for (i = 1; i < mk; i++) cout << result[i] << endl;
}*/

/*char map[25][25] = { 0, }; //2667 단지번호붙이기 (수정)
int i, j, n, mk = 0;
int bfs(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < n && map[x][y] == '1') {
		map[x][y] = '0';
		return 1 + bfs(x - 1, y) + bfs(x + 1, y) + bfs(x, y - 1) + bfs(x, y + 1);
	}
	return 0;
}

int main() {
	cin >> n;
	int chk[625] = { 0, };
	for (i = 0; i < n; i++) cin >> map[i];
	mk = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (map[i][j] == '1') {
				chk[mk] = bfs(i, j);
				mk++;
			}
		}
	}
	sort(chk, chk + mk);
	cout << mk<<endl;
	for (i = 0; i < mk; i++) {
		cout << chk[i] << endl;
	}
}*/

/*int i, j, m, n, k, x, y, map[50][50]; //1012 유기농 배추

int bfs(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < m && map[x][y] == 1) {
		map[x][y] = 0;
		return 1 + bfs(x - 1, y) + bfs(x + 1, y) + bfs(x, y - 1) + bfs(x, y + 1);
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int ret=0, chk[2500] = { 0, };
		cin >> m>>n>>k;
		for (i = 0; i < n; i++) {
			memset(map[i], 0, m * sizeof(int));
		}
		for (i = 0; i < k; i++) {
			cin >> x>>y;
			map[y][x] = 1;
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (map[i][j] == 1) {
					bfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << endl;
	}
}*/

/*int i, n, m; //2178 미로 탐색(BFS)
char map[101][101];
int chk[101][101] = { 0, };
int bfs(int idx) {
	queue<pair<int, int>> que;
	int x = idx / m, y = idx % m;
	pair<int, int> p(make_pair(idx, 1));
	que.push(p);
	chk[0][0] = 1;
	int ret = 0;
	while (!que.empty()) {
		pair<int, int> tmp = que.front();
		int idx = tmp.first;
		ret = tmp.second;
		x = idx / m, y = idx % m;

		if (x == n - 1 && y == m - 1) return tmp.second;
		que.pop();
		if (x >= 0 && chk[x - 1][y] == 0 && map[x - 1][y] == '1') {
			que.push(make_pair(m * (x - 1) + y, ret + 1)); chk[x - 1][y] = 1;
		}
		if (x < n && chk[x + 1][y] == 0 && map[x + 1][y] == '1') {
			que.push(make_pair(m * (x + 1) + y, ret + 1)); chk[x + 1][y] = 1;
		}
		if (y >= 0 && chk[x][y - 1] == 0 && map[x][y - 1] == '1') {
			que.push(make_pair(m * x - 1 + y, ret + 1)); chk[x][y - 1] = 1;
		}
		if (y < m && chk[x][y + 1] == 0 && map[x][y + 1] == '1') {
			que.push(make_pair(m * x + 1 + y, ret + 1)); chk[x][y + 1] = 1;
		}
	}
	return ret;
}

int main() {
	char* line;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> map[i];
	}
	cout<<bfs(0)<<endl;
}*/

/*int map[1001][1001]; //7576 토마토
vector<int> chk;
int main() {
	int i, j, m, n;

	cin >> m >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 0) break;
		}
		if (j != m) break;
	}
	if (i == n) {
		cout << 0 << endl;
		return 0;
	}
	queue<pair<int, int>> que, nextQue;
	int ret = -1, chk = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 1) {
				que.push(make_pair(i, j));
				chk++;
			}
		}
	}
	while (chk > 0) {
		chk = 0;
		while (!que.empty()) {
			pair<int, int> tmp = que.front();
			//cout << tmp.first << " " << tmp.second << endl;

			que.pop();

			int x = tmp.first, y = tmp.second;
			if (x > 0 && map[x - 1][y] == 0) {
				map[x - 1][y] = 1;
				nextQue.push(make_pair(x - 1, y));
				chk++;
			}

			if (x < n - 1 && map[x + 1][y] == 0) {
				map[x + 1][y] = 1;
				nextQue.push(make_pair(x + 1, y));
				chk++;
			}

			if (y > 0 && map[x][y - 1] == 0) {
				map[x][y - 1] = 1;
				nextQue.push(make_pair(x, y - 1));
				chk++;
			}

			if (y < m - 1 && map[x][y + 1] == 0) {
				map[x][y + 1] = 1;
				nextQue.push(make_pair(x, y + 1));
				chk++;
			}
		}
		que = nextQue;
		while (!nextQue.empty()) nextQue.pop();
		ret++;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 0) break;
		}
		if (j != m) break;
	}
	if (i != n) cout << -1 << endl;
	else cout << ret << endl;
}*/

/*int map[10001][101]; //7569 토마토(3차원)
vector<int> chk;
int main() {
	int i, j, m, n, h;

	cin >> m >> n >> h;
	for (i = 0; i < n * h; i++) {
		for (j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	for (i = 0; i < n * h; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 0) break;
		}
		if (j != m) break;
	}
	if (i == n * h) {
		cout << 0 << endl;
		return 0;
	}
	queue<pair<int, int>> que, nextQue;
	int ret = -1, chk = 0;
	for (i = 0; i < n * h; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 1) {
				que.push(make_pair(i, j));
				chk++;
			}
		}
	}
	while (chk > 0) {
		chk = 0;
		while (!que.empty()) {
			pair<int, int> tmp = que.front();

			que.pop();

			int x = tmp.first, y = tmp.second;
			if (x > 0 && map[x - 1][y] == 0 && (x + 1) % n != 1) {
				map[x - 1][y] = 1;
				nextQue.push(make_pair(x - 1, y));
				chk++;
			}

			if (x < n * h - 1 && map[x + 1][y] == 0 && (x + 1) % n != 0) {
				map[x + 1][y] = 1;
				nextQue.push(make_pair(x + 1, y));
				chk++;
			}

			if (y > 0 && map[x][y - 1] == 0) {
				map[x][y - 1] = 1;
				nextQue.push(make_pair(x, y - 1));
				chk++;
			}

			if (y < m - 1 && map[x][y + 1] == 0) {
				map[x][y + 1] = 1;
				nextQue.push(make_pair(x, y + 1));
				chk++;
			}
			if (x > n - 1 && map[x - n][y] == 0) {
				map[x - n][y] = 1;
				nextQue.push(make_pair(x - n, y));
				chk++;
			}

			if (x < n * h - n && map[x + n][y] == 0) {
				map[x + n][y] = 1;
				nextQue.push(make_pair(x + n, y));
				chk++;
			}
		}
		que = nextQue;
		while (!nextQue.empty()) nextQue.pop();
		ret++;
	}

	for (i = 0; i < n * h; i++) {
		for (j = 0; j < m; j++) {
			if (map[i][j] == 0) break;
		}
		if (j != m) break;
	}
	if (i != n * h) cout << -1 << endl;
	else cout << ret << endl;
}*/

/*int n, k, chk[100002] = { 0, }; //1697 숨바꼭질
int bfs(int idx) {
	queue<pair<int, int>> que;
	que.push(make_pair(idx, 0));
	chk[n] = 1;
	while (!que.empty()) {
		pair<int, int> tmp = que.front();
		que.pop();
		int point = tmp.first, ret = tmp.second;
		if (point == k) return ret;
		if (point > 0 && chk[point - 1] == 0) {
			que.push(make_pair(point - 1, ret + 1));
			chk[point - 1] = 1;
		}
		if (point <= 100000 && chk[point + 1] == 0) {
			que.push(make_pair(point + 1, ret + 1));
			chk[point + 1] = 1;
		}
		if (point <= 50000 && chk[point * 2] == 0) {
			que.push(make_pair(point * 2, ret + 1));
			chk[point * 2] = 1;
		}
	}
}

int main() {
	cin >> n >> k;
	cout << bfs(n);
}*/

/*char map[1001][1001] = { 0, }; //2206 벽 부수고 이동하기
int chk[1001][1001] = { 0, };
int main() {
	int i, j, n, m;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> map[i];
	}

	queue<pair<pair<int, int>, pair<int, int>>> que; //x, y, ret, crush
	que.push(make_pair(make_pair(0, 0), make_pair(0, 1)));
	while (!que.empty()) {
		pair<pair<int, int>, pair<int, int>> tmp = que.front();
		que.pop();
		int x = tmp.first.first, y = tmp.first.second;
		int ret = tmp.second.first, crush = tmp.second.second;
		if (x == m - 1 && y == n - 1) {
			cout << ret << endl;
			return 0;
		}

		if (x > 0 && chk[x - 1][y] == 0) {
			if (crush == 1) {
				que.push(make_pair(make_pair(x - 1, y), make_pair(ret + 1, crush - 1)));
			}
			que.push(make_pair(make_pair(x - 1, y), make_pair(ret + 1, crush)));
			chk[x - 1][y] = 1;
		}

		if (x < n && chk[x + 1][y] == 0) {
			if (crush == 1) {
				que.push(make_pair(make_pair(x + 1, y), make_pair(ret + 1, crush - 1)));
			}
			que.push(make_pair(make_pair(x + 1, y), make_pair(ret + 1, crush)));
			chk[x+1][y] = 1;
		}

		if (y > 0 && chk[x][y-1] == 0) {
			if (crush == 1) {
				que.push(make_pair(make_pair(x, y-1), make_pair(ret + 1, crush - 1)));
			}
			que.push(make_pair(make_pair(x, y-1), make_pair(ret + 1, crush)));
			chk[x][y-1] = 1;
		}

		if (y < m && chk[x][y+1] == 0) {
			if (crush == 1) {
				que.push(make_pair(make_pair(x, y+1), make_pair(ret + 1, crush - 1)));
			}
			que.push(make_pair(make_pair(x, y+1), make_pair(ret + 1, crush)));
			chk[x][y+1] = 1;
		}
	}

	if (chk[m - 1][n - 1] == 0) cout << -1 << endl;
}*/

////////////////////////////////////////
			  /*최단 경로*/
////////////////////////////////////////

/*typedef pair<int, int> p; //1753 최단경로
const int INF = 987654321;
int v, e, x, y, w, dist[20001];

int main() {
	int i, j, k;
	vector<p> adj[20001];
	scanf("%d%d%d", &v, &e, &k);
	for (i = 0; i < e; i++) {
		scanf("%d%d%d", &x, &y, &w);
		adj[x].emplace_back(y, w);
	}

	for (i = 1; i <= v; i++) {
		dist[i] = INF;
	}
	dist[k] = 0;
	priority_queue<p> pQue;
	pQue.emplace(0, k);
	while (!pQue.empty()) {
		int next = pQue.top().second;
		pQue.pop();
		for (auto it : adj[next]) {
			if (dist[it.first] > dist[next] + it.second) {
				dist[it.first] = dist[next] + it.second;
				pQue.emplace(-dist[it.first], it.first);
			}
		}
	}

	for (i = 1; i <= v; i++) {
		if (dist[i] == INF) printf("INF\n");
		else printf("%d\n", dist[i]);
	}
}*/
/*typedef pair<int, int> p;
const int INF = 987654321;
int prevVertex[801], dist[801];
int main() {
	int i, n, e, a, b, c, x, y;
	vector<pair<int, int>> adj[801];
	scanf("%d%d", &n, &e);
	for (i = 1; i <=n; i++) {
		dist[i] = INF;
	}
	for (i = 0; i < e; i++) {
		scanf("%d%d%d", &a, &b, &c);
		adj[a].emplace_back(b, c);
		adj[b].emplace_back(a, c);
	}
	scanf("%d%d", &x, &y);

	priority_queue<p> pQue;
	pQue.emplace(0, 1);
	dist[1] = 0;
	while (!pQue.empty()) {
		int next = pQue.top().second;
		pQue.pop();
		for (auto it : adj[next]) {
			if (dist[it.first] > dist[next] + it.second) {
				dist[it.first] = dist[next] + it.second;
				pQue.emplace(-dist[it.first], it.first);
				prevVertex[it.first] = next;
			}
		}
	}
	
	int xc=0, yc=0, here = n;
	while (here != 0) {
		printf("here : %d\n", here);
		if (here == x) xc = 1;
		else if (here == y) yc = 1;
		here = prevVertex[here];
	}
	printf("test, %d\n", dist[n]);
	if (xc && yc) printf("%d\n", dist[n]);
	else printf("-1\n");
}*/

/*typedef pair<int, int> p; //1504 특정한 최단 경로
const int INF = 987654321;
int dist[801];
vector<pair<int, int>> adj[801];

int getDistance(int start, int obj) {
	priority_queue<p> pQue;
	pQue.emplace(0, start);
	dist[start] = 0;
	while (!pQue.empty()) {
		int next = pQue.top().second;
		pQue.pop();
		for (auto it : adj[next]) {
			if (dist[it.first] > dist[next] + it.second) {
				dist[it.first] = dist[next] + it.second;
	pQue.emplace(-dist[it.first], it.first);
			}
		}
	}
	return dist[obj];
}

int main() {
	int i, n, e, a, b, c, x, y;
	scanf("%d%d", &n, &e);
	if (e == 0) {
		printf("-1\n");
		return 0;
	}
	fill(dist, dist + n + 1, INF);

	for (i = 0; i < e; i++) {
		scanf("%d%d%d", &a, &b, &c);
		adj[a].emplace_back(b, c);
		adj[b].emplace_back(a, c);
	}
	scanf("%d%d", &x, &y);
	int ret1=0, ret2=0, idxArr[3][2] = { {1, x}, {x, y}, {y, n} };
	for (i = 0; i < 3; i++) {
		ret1 += getDistance(idxArr[i][0], idxArr[i][1]);
		fill(dist, dist + n + 1, INF);
	}
	idxArr[0][1] = y, idxArr[1][0] = y, idxArr[1][1] = x, idxArr[2][0] = x;
	for (i = 0; i < 3; i++) {
		ret2 += getDistance(idxArr[i][0], idxArr[i][1]);
		fill(dist, dist + n + 1, INF);
	}
	int ret = ret1 < ret2 ? ret1 : ret2;
	if (ret >= INF) printf("-1\n");
	else printf("%d\n", ret);
}*/

/*typedef pair<int, int> p; //9370 미확인 도착지
const int INF = 987654321;
int dist[2001];

int getDistance(vector<p> *adj, int start, int end) {
	priority_queue<p> pQue;
	pQue.emplace(0, start);
	dist[start] = 0;

	while (!pQue.empty()) {
		int next = pQue.top().second;
		pQue.pop();
		for (auto it : adj[next]) {
			if (dist[it.first] > dist[next] + it.second) {
				dist[it.first] = dist[next] + it.second;
				pQue.emplace(-dist[it.first], it.first);
			}
		}
	}
	return dist[end];
}

int main() {
	int i, j, n, m, t, s, g, h, a, b, d, k, candid[100];
	scanf("%d", &k);
	while (k--) {
		vector<p> adj[2001];
		scanf("%d%d%d%d%d%d", &n, &m, &t, &s, &g, &h);
		for (i = 0; i < m; i++) {
			scanf("%d%d%d", &a, &b, &d);
			adj[a].emplace_back(b, d);
			adj[b].emplace_back(a, d);
		}

		for (i = 0; i < t; i++) {
			scanf("%d", &candid[i]);
		}

		sort(candid, candid + t);
		for (i = 0; i < t; i++) {
			int ret1 = 0, ret2=0, idxArr[3][2] = { {s, g}, {g, h}, {h, candid[i]} };

			for (j = 0; j < 3; j++) {
				fill(dist, dist + n + 1, INF);
				ret1 += getDistance(adj, idxArr[j][0], idxArr[j][1]);
			}

			idxArr[0][1] = h, idxArr[1][0] = h, idxArr[1][1] = g, idxArr[2][0] = g;
			for (j = 0; j < 3; j++) {
				fill(dist, dist + n + 1, INF);
				ret2 += getDistance(adj, idxArr[j][0], idxArr[j][1]);
			}

			int ret = ret1 < ret2 ? ret1 : ret2;
			fill(dist, dist + n + 1, INF);
			int tmp = getDistance(adj, s, candid[i]);
			if (ret != tmp) continue;
			printf("%d ", candid[i]);
		}
		printf("\n");
	}
}*/

/*typedef pair<int, int> p;//11657 타임머신
const int INF = 987654321;
int main() {
	int i, j, n, m, a, b, c, dist[501];
	vector<p> adj[501];
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		adj[a].emplace_back(b, c);
	}

	for (i = 1; i <= n; i++) {
		dist[i] = INF;
	}
	dist[1] = 0;
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n; j++) {
			for (auto it : adj[j]) {
				if (dist[j]!=INF&&dist[it.first]>dist[j]+it.second) {
					if (i == n - 1) {
						printf("-1\n");
						return 0;
					}
					dist[it.first] = dist[j] + it.second;
				}
			}
		}
	}
	for (i = 2; i <= n; i++) {
		if (dist[i] == INF) printf("-1\n");
		else printf("%d\n", dist[i]);
	}
}*/

/*typedef pair<int, int> p; //1865 웜홀
const int INF = 987654321;
int i, j, tc, n, m, w, s, e, t, dist[501], visited[501];

bool func(vector<p>* adj, int start) {
	int i, j;
	bool chk = false;
	for (i = 0; i < n; i++) {
		for (j = 1; j <= n; j++) {
			for (auto it : adj[j]) {
				if (dist[j] != INF && dist[it.first] > dist[j] + it.second) {
					if (i == n - 1) {
						chk = true;
						break;
					}
					visited[it.first] = 1;
					dist[it.first] = dist[j] + it.second;
				}
			}
			if (chk) break;
		}
	}
	return chk;
}

int main() {
	scanf("%d", &tc);
	while (tc--) {
		vector<p> adj[501];
		scanf("%d%d%d", &n, &m, &w);

		for (i = 0; i < m; i++) {
			scanf("%d%d%d", &s, &e, &t);
			adj[s].emplace_back(e, t);
			adj[e].emplace_back(s, t);
		}

		for (i = 0; i < w; i++) {
			scanf("%d%d%d", &s, &e, &t);
			adj[s].emplace_back(e, -t);
		}

		fill(visited, visited + n + 1, 0);
		fill(dist, dist + n + 1, INF);
		visited[1] = 1;
		bool ret = func(adj, 1);
		if (!ret) {
			for (i = 1; i <= n; i++) {
				if (!visited[i]) {
					fill(dist, dist + n + 1, INF);
					dist[i] = 0;
					ret = func(adj, i);
					if (ret) break;
				}
			}
		}
		
		if (ret) printf("YES\n");
		else printf("NO\n");
	}
}*/

/*typedef pair<int, int> p; //11404 플로이드
const int INF = 987654321, NIL = -1;
int main() {
	int i, j, k, n, m, a, b, c;
	vector<vector<p>> floyd;
	scanf("%d%d", &n, &m);
	floyd.resize(n + 1);
	for (i = 1; i <= n; i++) {
		floyd[i].emplace_back(0, 0);
		for (j = 1; j <= n; j++) {
			floyd[i].emplace_back(INF, NIL);
			if (i == j) floyd[i][j].first = 0;
		}
	}

	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		floyd[a][b].first = floyd[a][b].first < c ? floyd[a][b].first : c;
		floyd[a][b].second = a;
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			for (k = 1; k <= n; k++) {
				if (floyd[k][j].first > floyd[k][i].first + floyd[i][j].first) {
					floyd[k][j].first = floyd[k][i].first + floyd[i][j].first;
					floyd[k][j].second = floyd[i][j].second;
				}
			}
		}
	}

	for (i = 1; i <=n; i++) {
		for (j = 1; j <= n; j++) {
			if (floyd[i][j].first == INF) printf("0 ");
			else printf("%d ", floyd[i][j].first);
		}
		printf("\n");
	}
}*/

/*typedef pair<int, int> p; //10217 KCM Travel
const int INF = 987654321;

int main() {
	int i, n, m, k, t, u, v, c, d;
	scanf("%d", &t);
	while (t--) {
		vector<pair<int, p>> adj[101];
		priority_queue<pair<int ,p>> pQue;
		int dist[101][10001];
		
		scanf("%d%d%d", &n, &m, &k);
		
		for (i = 1; i <= n; i++) {
			fill(dist[i], dist[i] + 10001, INF);
		}

		for (i = 0; i < k; i++) {
			scanf("%d%d%d%d", &u, &v, &c, &d);
			adj[u].emplace_back(v, make_pair(c, d));
		}

		pQue.emplace(0, make_pair(1, 0));
		dist[1][0] = 0;
		while (!pQue.empty()) {
			int next = pQue.top().second.first;
			int cost = pQue.top().second.second;
			pQue.pop();
			if (cost > m) continue;

			for (auto it : adj[next]) {
				if (cost+it.second.first<=m&&dist[it.first][cost+it.second.first] > dist[next][cost] + it.second.second) {
					dist[it.first][cost+it.second.first] = dist[next][cost] + it.second.second;
					pQue.emplace(-dist[it.first][cost + it.second.first], make_pair(it.first, cost + it.second.first));
				}
			}
		}
		int ret = INF;
		for (i = 1; i <=m; i++) {
			ret = min(ret, dist[n][i]);
		}
		printf(ret == INF ? "Poor KCM\n" : "%d\n", ret);
	}
}*/

/*typedef struct pair<int, int> p; //1956 운동
const int INF = 987654321, NIL = -1;
int main() {
	int i, j, k, v, e, a, b, c;
	vector<vector<p>> floyd;
	scanf("%d%d", &v, &e);
	floyd.resize(v + 1);
	for (i = 1; i <= v; i++) {
		floyd[i].emplace_back(0, 0);
		for (j = 1; j <= v; j++) {
			floyd[i].emplace_back(INF, NIL);
			if (i == j) floyd[i][j].first = 0;
		}
	}
	for (i = 0; i < e; i++) {
		scanf("%d%d%d", &a, &b, &c);
		floyd[a][b].first = min(floyd[a][b].first, c);
		floyd[a][b].second = a;
	}

	for (i = 1; i <= v; i++) {
		for (j = 1; j <= v; j++) {
			for (k = 1; k <= v; k++) {
				if (floyd[k][j].first > floyd[k][i].first + floyd[i][j].first) {
					floyd[k][j].first = floyd[k][i].first + floyd[i][j].first;
					floyd[k][j].second = floyd[i][j].second;
				}
			}
		}
	}

	int ret = INF;
	for (i = 1; i <= v; i++) {
		for (j = 1; j <= v; j++) {
			if (i == j) continue;
			ret = min(ret, floyd[i][j].first + floyd[j][i].first);
		}
	}
	if (ret == INF) printf("-1\n");
	else printf("%d\n", ret);
}*/

////////////////////////////////////////
			/*동적 계획법 3*/
////////////////////////////////////////

/*int main() { //11723 집합
	int i, m, set=0, num;
	char command[7];
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%s", command);
		if (!strcmp(command, "add")) {
			scanf("%d", &num);
			set |= 1 << (num-1);
		}

		else if (command[0] == 'r') {
			scanf("%d", &num);
			set &= ~(1 << (num-1));
		}

		else if (command[0] == 'c') {
			scanf("%d", &num);
			printf(((set >> (num - 1)) & 1) == 1 ? "1\n" : "0\n");
		}

		else if (command[0] == 't') {
			scanf("%d", &num);
			set ^= (1 << (num-1));
		}

		else if (command[0] == 'a') {
			set = (1 << 20) - 1;
		}
		else set = 0;
	}
}*/

/*int n, w[16][16], dp[16][65537];
const int INF = 987654321;
int func(int current, int visited) {
	if (visited == ((1 << n) - 1)){
		if(w[current][0]==0) //마지막 지점에서 처음 지점으로 가는 경로가 없을 수도 있다. 주의!
			return INF;
		return w[current][0];
	}
	int& ret = dp[current][visited];
	if (ret != -1) return ret;
	ret = INF;
	for (int i = 0; i < n; i++) {
		if (((visited>>i)&1)==1 || w[current][i] == 0) continue;
		ret = min(ret, w[current][i] + func(i, visited|(1<<i)));
	}
	
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &w[i][j]);
		}
	}
	int ret = INF;
	for (j = 0; j < n; j++)
		fill(dp[j], dp[j] + 65537, -1);
	printf("%d\n", func(0, 1));
}*/

/*typedef long long ll; //1086 박성원
int n, k;
const int INF = 987654321;
ll arr[1 << 15][101], leng[15], modTen[751], mode[15];
string str[15];

ll func(int cache, int totalLen, int m) {
	if (cache == ((1 << n) - 1)) {
		return m == 0;
	}

	ll& ret = arr[cache][m];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < n; i++) {
		if ((cache & (1 << i)) != 0) continue;
		int tmp = (m + mode[i] * modTen[totalLen]) % k;
		ret += func(cache | (1 << i), totalLen + leng[i], tmp);
	}
	return ret;
}

ll fact(ll n) {
	if (n == 1) return 1;
	return n * fact(n - 1);
}

ll gcd(ll denom, ll num) {
	ll tmp = denom % num;
	if (tmp == 0) return num;
	return gcd(num, tmp);
}

int main() {
	ios::sync_with_stdio(false);
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str[i];
		leng[i] = str[i].length();
	}

	for (i = 0; i < (1 << 15); i++) {
		for (j = 0; j < 101; j++) {
			arr[i][j] = -1;
		}
	}
	cin >> k;

	int tmp = 1;
	for (i = 0; i < 751; i++) {
		modTen[i] = tmp % k;
		tmp = modTen[i] * 10;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < leng[i]; j++) {
			mode[i] += ((str[i][j] - '0') % k * modTen[leng[i] - j - 1]);
			mode[i] %= k;
		}
	}
	ll denom = fact(n);
	ll num = func(0, 0, 0);
	if (num == 0) cout << "0/1" << endl;
	else if (num == denom) cout << "1/1" << endl;
	else {
		ll g = gcd(denom, num);
		cout << num / g << "/" << denom / g << endl;
	}
}*/

/*const int INF = 987654321; //17404 RGB거리 2
int main() {
	int i, j, k, n, arr[1000][3], dp[1001][3];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int ret = INF;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			dp[0][j] = INF;
		}
		dp[0][i] = arr[0][i];

		for (j = 1; j < 1001; j++) {
			for (k = 0; k < 3; k++) {
				dp[j][k] = 0;
			}
		}
	
		for (j = 1; j < n; j++) {
			for (k = 0; k < 3; k++) {
				dp[j][k] = arr[j][k] + min(dp[j - 1][(k + 1) % 3], dp[j - 1][(k + 2) % 3]);
			}
		}
		for (j = 0; j < 3; j++) {
			if (j == i) continue;
			ret = min(ret, dp[n - 1][j]);
		}
	}
	printf("%d\n", ret);
}*/

/*int cache[1001][1001]; //2482 색 상환
const int INF=987654321, DIV=1000000003;
int func(int idx, int num, int n, int k) {
	if (n+1 < k*2) return 0;
	if (k == 0) return 1;
	
	if (k == 1) {
		return n;
	}

	if (num == k) {
		return 1;
	}
	
	if (idx > n-1)
		return 0;

	int& ret = cache[idx][num];
	if (ret != -1)
		return ret%DIV;

	return ret = (func(idx + 1, num, n, k) + func(idx + 2, num + 1, n, k))%DIV;
}

int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 1001; j++) {
			cache[i][j] = -1;
		}
	}
	int a = func(0, 0, n, k)%DIV;
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j < 1001; j++) {
			cache[i][j] = -1;
		}
	}
	int b = func(0, 0, n - 4, k - 2)%DIV;
	printf("%d\n", (DIV+(a - b)) % DIV);
}*/

////////////////////////////////////////
   /*동적 계획법과 최단거리 역추적*/
////////////////////////////////////////

/*int i, n, arr[1000001]; //12852 1로 만들기 2
int main() {

	scanf("%d", &n);
	arr[1] = 0;
	for (i = 1; i < n; i++) {
		if (i + 1 <= n) {
			if (arr[i + 1] == 0)
				arr[i + 1] = arr[i] + 1;
			else arr[i + 1] = min(arr[i + 1], arr[i] + 1);
		}
		if (i * 2 <= n) {
			if (arr[i * 2] == 0)
				arr[i * 2] = arr[i] + 1;
			else arr[i * 2] = min(arr[i * 2], arr[i] + 1);
		}
		if (i * 3 <= n) {
			if (arr[i * 3] == 0)
				arr[i * 3] = arr[i] + 1;
			else arr[i * 3] = min(arr[i * 3], arr[i] + 1);
		}
	}
	printf("%d\n", arr[n]);
	int now = n;
	while (true) {
		if (now == 1) {
			printf("%d", now);
			break;
		}
		else {
			printf("%d ", now);
			if (now - 1 > 0 && arr[now - 1] == arr[now] - 1) {
				now = now - 1;
			}
			else if (now % 2 == 0 && arr[now / 2] == arr[now]-1) {
				now = now / 2;
			}
			else if (now % 3 == 0 && arr[now / 3] == arr[now] - 1) {
				now = now / 3;
			}
		}
	}
}*/

/*int main() { //14002 가장 긴 증가하는 부분 수열 4
	int i, j, n, arr[1001], maxa, pnt;
	pair<int, int> dp[1001];
	vector<int> vec;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		dp[i] = { 1, -1 };
	}
	arr[0] = 0;
	for (i = 2; i <= n; i++) {
		maxa = 0, pnt=-1;
		for (j = i - 1; j > 0; j--) {
			if (arr[i] > arr[j] && dp[j].first > maxa) {
				maxa = dp[j].first;
				pnt = j;
			}
		}
		dp[i] = { maxa+1, pnt };
	}
	
	maxa = 0, pnt = -1;
	for (i = 1; i <= n; i++) {
		if (maxa < dp[i].first) {
			maxa = dp[i].first;
			pnt = i;
		}
	}
	printf("%d\n", maxa);
	vector<int> ret;
	while (pnt!=-1) {
		ret.push_back(arr[pnt]);
		pnt = dp[pnt].second;
	}
	reverse(ret.begin(), ret.end());
	for (auto it : ret) {
		printf("%d ", it);
	}
}*/

/*int i, j, n, arr[1001], dp[1001]; //11055 가장 큰 증가 부분 수열
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	arr[0] = -1, dp[0] = 0, dp[1] = arr[1];
	for (i = 2; i <= n; i++) {
		for (j = i - 1; j > 0; j--) {
			if (arr[i] > arr[j] && dp[j] > dp[i]) dp[i] = dp[j];
		}
		dp[i] += arr[i];
	}
	int maxa = -1;
	for (i = 1; i <= n; i++) {
		if (maxa < dp[i]) maxa = dp[i];
	}
	printf("%d", maxa);
}*/

/*int main() { //11722 가장 긴 감소하는 부분 수열
	int i, n, a;
	scanf("%d", &n);
	vector<int> vec, ret;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		vec.push_back(a);
	}
	int idx = 0;
	for (auto it = vec.end() - 1; it >= vec.begin(); it--) {
		auto iter = lower_bound(ret.begin(), ret.end(), *it);
		if (iter == ret.end()) ret.push_back(*it);
		else *iter = *it;
		if (it == vec.begin()) break;
	}
	printf("%d", ret.size());
}*/

/*int main() { //17238 가장 긴 증가하는 부분 수열 3
	int i, n, arr[1000000];
	scanf("%d", &n);
	vector<int> vec;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		auto it = lower_bound(vec.begin(), vec.end(), arr[i]);
		if (it == vec.end()) vec.push_back(arr[i]);
		else *it = arr[i];
	}
	printf("%d", vec.size());
}*/

/*int main() { //14003 가장 긴 증가하는 부분 수열 3 (어려움)
	int i, j, n, arr[1000000];
	vector<int> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	vector<pair<int, int>> tmp;
	for (i = 0; i < n; i++) {
		auto it = lower_bound(vec.begin(), vec.end(), arr[i]);
		if (it == vec.end()) {
			vec.push_back(arr[i]);
			tmp.emplace_back(vec.size(), arr[i]);
		}
		else {
			*it = arr[i];
			tmp.emplace_back(it - vec.begin()+1, arr[i]);
		}
	}
	int k = vec.size();
	printf("%d\n", k);
	vector<int> ret;
	for (i = tmp.size()-1; i >= 0; i--) {
		//printf("i : %d, %d, %d\n", i, tmp[i].first, tmp[i].second);
		if (tmp[i].first == k) {
			ret.push_back(tmp[i].second);
			k--;
		}
	}
	
	for (auto it = ret.end() - 1; it >= ret.begin(); it--) {
		printf("%d ", *it);
		if (it == ret.begin()) break;
	}
}*/

/*int dp[1001][1001]; //9252 LCS 2
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s1, s2;
	cin >> s1 >> s2;
	int i, j, len1 = s1.length(), len2 = s2.length();
	for (i = 1; i <= len1; i++) {
		for (j = 1; j <= len2; j++) {
			if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[len1][len2] << endl;
	int k = dp[len1][len2];
	if (k == 0) return 0;
	vector<char> ret;
	for (i = len1; i > 0; i--) {
		for (j = len2; j > 0; j--) {
			if (dp[i][j] == k && dp[i - 1][j] == k - 1 && dp[i][j - 1] == k - 1) {
				k--;
				ret.push_back(s1[i - 1]);
				break;
			}
		}
	}

	for (auto it = ret.end() - 1; it >= ret.begin(); it--) {
		cout << *it;
		if (it == ret.begin()) break;
	}
}*/

/*const int INF = 987654321; //13913 숨바꼭질 4
int main() {
	int i, n, k, arr[100001][2];
	scanf("%d%d", &n, &k);
	for (i = 0; i <= 100000; i++) {
		arr[i][0] = INF;
		arr[i][1] = -1;
	}
	queue<pair<int, pair<int, int>>> que;
	que.emplace(n, make_pair(0, -1));
	int now = INF;
	while (!que.empty()) {
		int here = que.front().first, time = que.front().second.first, prev=que.front().second.second;
		//printf("here : %d, time : %d\n", here, time);
		que.pop();
		if (arr[here][0] <= time ||now<=time) continue;
		arr[here][0] = time, arr[here][1] = prev;
		if (here == k) {
			now = time;
		}
		pair<int, int> nxt = { time + 1, here };
		if (here - 1 >= 0) que.emplace(here - 1, nxt);
		if (here + 1 <= 100000) que.emplace(here + 1, nxt);
		if (here * 2 <= 100000) que.emplace(here * 2, nxt);
	}
	printf("%d\n", arr[k][0]);
	vector<int> ret;
	int here = k;
	while (true) {
		ret.push_back(here);
		here = arr[here][1];
		if (here == -1) break;
	}

	for (auto it = ret.end()-1; it >= ret.begin(); it--) {
		printf("%d ", *it);
		if (it == ret.begin()) break;
	}
}*/

/*typedef long long ll; //13305 주유소
int main() {
	int i, n;
	ll length[100000], cost[100000];
	scanf("%d", &n);
	for (i = 0; i < n-1; i++) {
		scanf("%lld", &length[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%lld", &cost[i]);
	}

	ll cur = cost[0], ret = cur * length[0];
	for (i = 1; i < n-1; i++) {
		if (cost[i] < cur) cur = cost[i];
		ret += length[i] * cur;
	}
	printf("%lld", ret);
}*/

/*const int MAX_SIZE = 10000;
typedef struct {
	int dist;
	int fuel;
}element;

class Heap {
private:
	element heap[MAX_SIZE+1];
	int heapSize;
public:
	Heap() {
		heapSize = 0;
	}

	void insertHeap(int d, int val) {
		int idx = ++heapSize;
		while (idx > 1&& heap[idx / 2].fuel < val) {
			heap[idx] = heap[idx/2];
			idx /= 2;
		}
		heap[idx].dist = d;
		heap[idx].fuel = val;
	}

	void insertHeap(element e) {
		int idx = ++heapSize;
		while (idx > 1 && heap[idx / 2].fuel < e.fuel) {
			heap[idx] = heap[idx / 2];
			idx /= 2;
		}
		heap[idx].dist = e.dist;
		heap[idx].fuel = e.fuel;
	}

	element deleteHeap() {
		int parent=1, child=2;
		auto item = heap[1], tmp=heap[heapSize--];
		heap[parent] = tmp;
		while (child <= heapSize) {
			if (child < heapSize && heap[child].fuel < heap[child + 1].fuel) {
				child++;
			}

			if (heap[parent].fuel < heap[child].fuel) {
				heap[parent] = heap[child];
				parent = child;
				child*=2;
			}
			else break;
		}

		heap[parent] = tmp;
		return item;
	}

	int getSize() {
		return heapSize;
	}
	void print() {
		for (int i = 1; i <= heapSize; i++) {
			printf("%d, %d\n", heap[i].dist, heap[i].fuel);
		}
	}
};

int main() {
	int i, n, l, p,	a, b;
	Heap h;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		h.insertHeap(a, b);
	}
	scanf("%d%d", &l, &p);
	if (l <= p) {
		printf("0");
		return 0;
	}
	vector<element> vec;
	int ret = 0, cur=0;
	while (l >= 0) {
		while (true) {
			if (h.getSize() == 0) {
				printf("-1");
				return 0;
			}

			element tmp = h.deleteHeap();
			printf("%d, %d\n", tmp.dist, tmp.fuel);
			if (tmp.dist - cur > p || cur>tmp.dist) vec.push_back(tmp);
			else {
				p -= tmp.dist - cur - tmp.fuel;
				cur = tmp.dist;
				ret++;
				if (!vec.empty()) {
					for (auto it : vec) {
						h.insertHeap(it);
					}
					vec.clear();
				}
				break;
			}
		}
		printf("cur : %d, p : %d\n", cur, p);
		if (cur + p >= l) break;
	}
	printf("%d", ret);
}*/

/*int i, n, l, p, a, b, idx, r; //1826 연료 채우기
pair<int, int> arr[10002];
priority_queue<int> pQue;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		arr[i] = { a, b };
	}
	scanf("%d%d", &l, &p);
	sort(arr, arr + n);
	while (l > p) {
		while (arr[idx].first <= p) {
			if (idx == n) break;
			pQue.push(arr[idx].second);
			idx++;
		}
		if (pQue.empty()) break;
		r++;
		p += pQue.top();
		pQue.pop();
	}
	printf("%d\n", l > p ? -1 : r);
}*/

/*typedef unsigned long long ull; //1422 숫자의 신
bool cmp(int a, int b) {
	ull d1 = 1, d2 = 1;
	while (true) {
		if (a / d1 == 0) break;
		d1 *= 10;
	}

	while (true) {
		if (b / d2 == 0) break;
		d2 *= 10;
	}
	ull t1 = (ull)a * d2 + b, t2 = (ull)b * d1 + a;
	if (t1 > t2) return true;
	else return false;
}
int main() {
	int i, k, n, arr[1000], tmp[1000];
	scanf("%d%d", &k, &n);
	for (i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + k, cmp);
	for (i = 0; i < k; i++) {
		//printf("%d", arr[i]);
		tmp[i] = arr[i];
	}
	sort(arr, arr + k);
	int idx = 0;
	//printf("arr[k-1] : %d\n", arr[k-1]);
	for (i = 0; i < k; i++) {
		if (!cmp(tmp[i], arr[k-1])) {
			idx = i;
			break;
		}
	}
	for (i = 0; i < idx; i++) {
		printf("%d", tmp[i]);
	}
	for (i = 0; i < n - k; i++) {
		printf("%d", arr[k - 1]);
	}
	for (i = idx; i < k; i++) {
		printf("%d", tmp[i]);
	}
}*/

/*int n, l[2000], r[2000], dp[2000][2000]; //10835 카드게임

int func(int leftIdx, int rightIdx) {
	if (leftIdx == n || rightIdx == n) {
		return 0;
	}

	int &ret = dp[leftIdx][rightIdx];
	if (ret != -1) return ret;
	if (l[leftIdx] > r[rightIdx]) {
		ret = max(ret, r[rightIdx] + func(leftIdx, rightIdx + 1));
	}
	ret = max(ret, max(func(leftIdx + 1, rightIdx), func(leftIdx + 1, rightIdx + 1)));
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			dp[i][j] = -1;
		}
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &l[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &r[i]);
	}
	printf("%d", func(0, 0));
}*/

/*int i, j, n, arr[1000], dp[1000], INF=999999; //11060 점프 점프
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		dp[i] = INF;
	}
	dp[0] = 0;
	for (i = 0; i < n; i++) {
		for (j = 1; j <= arr[i]; j++) {
			dp[i + j] = min(dp[i] + 1, dp[i + j]);
		}
	}
	printf("%d", dp[n-1]==INF ? -1 : dp[n-1]);
}*/

/*int main() { //2294 동전 2
	int i, j, n, k, coin[100], dp[10001], INF=9999999;
	scanf("%d%d", &n, &k);

	for (i = 1; i <= k; i++) {
		dp[i] = INF;
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &coin[i]);
		if (coin[i] > k) continue;
		dp[coin[i]] = 1;
	}

	for (i = 1; i <= k; i++) {
		if (dp[i] == 1) continue;
		for (j = 0; j < n; j++) {
			if (i - coin[j] > 0) dp[i] = min(dp[i], dp[i - coin[j]] + 1);
		}
	}

	printf("%d", dp[k] == INF ? -1 : dp[k]);
}*/

/*int t, w, i, j, k, arr[1000], dp[3][1000][31]; //2240 자두나무

int func(int treeNum, int idx, int move) {
	if (idx == t) {
		return 0;
	}
	int& ret = dp[treeNum][idx][move];
	if (ret != -1) return ret;
	ret = 0;
	int add = 0;
	if (arr[idx] == treeNum) add = 1;
	if (move > 0) ret = max(ret, add+func(treeNum % 2 + 1, idx + 1, move - 1));
	ret = max(ret, add+func(treeNum, idx + 1, move));
	return ret;
}

int main() {
	scanf("%d%d", &t, &w);
	for (i = 0; i < t; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= 2; i++) {
		for (j = 0; j < t; j++) {
			for (k = 0; k <= w; k++) {
				dp[i][j][k] = -1;
			}
		}
	}
	printf("%d", max(func(1, 0, w), func(2, 0, w-1)));
}*/

/*int i, j, n, a[4000], b[4000], c[4000], d[4000]; //합이 0인 네 정수
vector<int> ab, cd;
int func(int k) {
	int left = 0, right = cd.size() - 1	;
	while (left<=right) {
		int mid = (left + right) / 2;
		if (cd[mid] > k) right = mid - 1;
		else if (cd[mid] < k) left = mid + 1;
		else return mid;
	}
	return -1;
}

int main() {
	scanf("%d", &n);
	ab.resize(n * n);
	cd.resize(n * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
		scanf("%d", &c[i]);
		scanf("%d", &d[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			ab[n*i+j]=a[i] + b[j];
			cd[n*i+j]=c[i] + d[j];
		}
	}
	sort(cd.begin(), cd.end());
	printf("start\n");
	long long ret = 0;
	for (i = 0; i < n * n; i++) {
		int idx = func(-ab[i]);
		if (idx!=-1) {
			auto it1 = lower_bound(cd.begin(), cd.end(), cd[idx]);
			auto it2 = upper_bound(cd.begin(), cd.end(), cd[idx]);
			ret += it2 - it1;
		}
	}
	printf("%lld", ret);
}*/

/*int n, board[502][502], dp[501][501], nxt[4][2] = { {0, 1}, {1, 0}, {-1, 0}, {0, -1} }; //1937 욕심쟁이 판다

int func(int x, int y) {
	int& ret = dp[x][y], i, j;
	if (ret != -1) return ret;
	ret = 0;
	for (i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX > 0 && nxtX <= n && nxtY > 0 && nxtY <= n && board[x][y] < board[nxtX][nxtY]) {
			ret = max(ret, 1+func(nxtX, nxtY));
		}
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			dp[i][j] = -1;
		}
	}
	int ret = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			ret = max(ret, func(i, j));
		}
	}
	printf("%d", ret+1);
}*/

/*string s; //2011 암호코드
int len, DIV = 1000000, dp[5000];
int func(int idx) {
	if (idx >= len) {
		return 1;
	}
	if (s[idx] - '0' == 0) {
		return 0;
	}
	int& ret = dp[idx];
	if (ret != -1) return ret;
	ret = 0;
	ret = (ret + func(idx + 1));
	if (s[idx] - '0' == 1) {
		if (idx + 1 < len) {
			ret = (ret + func(idx + 2));
		}
	}
	if(s[idx] - '0' == 2){
		if (idx + 1 < len && s[idx+1] - '0'<=6) {
			ret = (ret + func(idx + 2));
		}
	}
	return ret % DIV;
}

int main() {
	int i;
	cin >> s;
	len = s.length();
	for (i = 0; i < len; i++) {
		dp[i] = -1;
	}
	int ret = func(0);
	cout << ret << endl;
}*/

/*const int INF = 987654321; //1916 최소비용 구하기
int adj[1001][1001], dist[1001], visited[1001];
int main() {
	int i, j, n, m, b1, b2, cost, start, end;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			adj[i][j] = INF;
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &b1, &b2, &cost);
		if (adj[b1][b2] > cost) {
			adj[b1][b2] = cost;
		}
	}
	scanf("%d%d", &start, &end);
	for (i = 1; i <= n; i++) dist[i] = INF;
	dist[start] = 0;
	priority_queue<pair<int, int>> pQue;
	pQue.emplace(0, start);
	while (!pQue.empty()) {
		int here = pQue.top().second;
		pQue.pop();
		for (int there = 1; there <= n; there++) {
			if (adj[here][there]!=INF&&dist[here]+adj[here][there]<dist[there]) {
				dist[there] = dist[here] + adj[here][there];
				pQue.emplace(-dist[there], there);
			}
		}
	}

	printf("%d", dist[end]);
}*/

/*int main() { //1009 분산처리
	int t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		int ret = 1, down=a, up=b;
		while (up>1) {
			if (up % 2 == 1) {
				ret =(ret*down)%10;
				up--;
			}
			down = (down * down) % 10;
			up /= 2;
		}
		int k = (ret * down) % 10;
		printf("%d\n", k==0?10 : k);
	}
}*/

/*int main(void) { //1013 Contact
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	scanf("%d", &t);
	while (t--) {
		string s;
		cin >> s;
		regex reg("(100+1+|01)+");
		smatch m;

		if (regex_match(s, m, reg)) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
}*/

/*int n, m, dp[100][2048]; //1014 컨닝
char board[12][12], chk[4][2] = { {-1, -1}, {-1, 1}, {0, 1}, {0, -1} };

int func(int idx, int cache) {
	if (idx >= n * m) {
		return 0;
	}
	int i, j, & ret = dp[idx][cache], x = idx / m + 1, y = idx % m + 1;
	if (ret != -1)
		return ret;
	ret = 0;
	int nx = (idx + 1) / m + 1, ny = (idx + 1) % m + 1;
	if (board[x][y] != 'x' && (y == 1 || !(cache & (1 << m))) && (y == m || !(cache & (1 << (m - 2))))) {
		int copy[12][12], nxtX, nxtY;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				copy[i][j] = board[i][j];
			}
		}
		for (i = 0; i < 4; i++) {
			nxtX = x + chk[i][0], nxtY = y + chk[i][1];
			if (board[nxtX][nxtY] && board[nxtX][nxtY] != 'o') board[nxtX][nxtY] = 'x';
		}
		board[x][y] = 'o';
		int tmpChe = cache;
		cache = (cache << 1) % (1 << (m + 1));
		cache |= 1;
		ret = max(ret, 1 + func(idx + 1, cache));
		cache = tmpChe;
		board[x][y] = '.';
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				board[i][j] = copy[i][j];
			}
		}
	}
	cache = (cache << 1) % (1 << (m + 1));
	ret = max(ret, func(idx + 1, cache));
	return ret;
}
int main() {
	int i, j, c;
	scanf("%d", &c);
	while (c--) {
		scanf("%d%d", &n, &m);
		fgetc(stdin);
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				scanf("%c", &board[i][j]);
			}
			fgetc(stdin);
		}

		for (i = 0; i < n * m; i++) {
			for (j = 0; j < (1 << 11); j++) dp[i][j] = -1;
		}
		printf("%d\n", func(0, 0));
	}
}*/

/*int n, m, ret; //13908 비밀번호
vector<int> result(7);
vector<pair<int, bool>> arr;
int fact(int n) {
	if (n <=1) return 1;
	else return n * fact(n - 1);
}

void check() {
	int i, j, num=0;
	for (i = 0; i < m; i++) {
		arr[i].second = false;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (result[i] == arr[j].first && !arr[j].second) {
				num++;
				arr[j].second = true;
			}
		}
	}
	if (num == m) ret++;
}

void func(int idx) {
	if (idx == n) {
		check();
		return;
	}
	for (int i = 0; i <= 9; i++) {
		result[idx] = i;
		func(idx + 1);
	}
}
int main() {
	int i, tmp;
	scanf("%d%d", &n, &m);

	for (i = 0; i < m; i++) {
		scanf("%d", &tmp);
		arr.emplace_back(tmp, false);
	}
	func(0);
	printf("%d", ret);
}*/

/*vector<int> vec; //1527 금민수의 개수
void dfs(int idx, int obj, int num) {
	if (idx == obj) {
		vec.push_back(num);
		return;
	}
	dfs(idx + 1, obj, num * 10 + 4);
	dfs(idx + 1, obj, num * 10 + 7);
}
int main() {
	int i, a, b;
	scanf("%d%d", &a, &b);
	for (i = 1; i <= 9; i++) {
		dfs(0, i, 0);
	}
	auto start = lower_bound(vec.begin(), vec.end(), a), end=lower_bound(vec.begin(), vec.end(), b);
	printf("%d", end - start);
}*/

/*priority_queue<pair<int, pair<int, int>>> pQue; //1922 네트워크 연결
int parent[1001], depth[1001];

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	parent[b] = a;
	if (depth[a] == depth[b]) depth[a]++;
	return true;
}

int main() {
	int i, n, m, a, b, d;
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &d);
		pQue.emplace(-d, make_pair(a, b));
	}
	for (i = 1; i <= n; i++) {
		parent[i] = i;
		depth[i] = 1;
	}
	int ret = 0;
	while (!pQue.empty()) {
		int dist = pQue.top().first, com1 = pQue.top().second.first, com2 = pQue.top().second.second;
		pQue.pop();
		if (!merge(com1, com2)) continue;
		ret += -dist;
	}
	printf("%d", ret);
}*/

/*const int INF = 987654321; // 5719 거의 최단경로 (메모리 초과)
int n, m, s, d, u, v, p, dist[500], visited[500];
bool del[500][500];
vector<vector<pair<int, int>>> parent, adj;
void dijkstra(int s) {
	int i;
	for (i = 0; i < n; i++) {
		dist[i] = INF;
		visited[i] = 0;
		parent[i].clear();
	}
	dist[s] = 0;
	priority_queue<pair<int, int>> pQue;
	pQue.emplace(0, s);
	while (!pQue.empty()) {
		int here = pQue.top().second;
		pQue.pop();
		visited[here] = 1;
		for (auto it : adj[here]) {
			int nxt = it.first, d = it.second;
			if (visited[nxt] || del[here][nxt]) continue;
			if (dist[here] + d <= dist[nxt]) {
				dist[nxt] = dist[here] + d;
				pQue.emplace(-dist[nxt], nxt);
				parent[nxt].emplace_back(dist[nxt], here);
			}
		}
	}
}

int main() {
	int i, j;
	vector<int> ans;
	while (true) {
		scanf("%d%d", &n, &m);
		if (n == 0) break;
		parent.resize(n);
		adj.resize(n);
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) del[i][j] = false;
			adj[i].clear();
		}
		scanf("%d%d", &s, &d);
		for (i = 0; i < m; i++) {
			scanf("%d%d%d", &u, &v, &p);
			adj[u].emplace_back(v, p);
		}
		dijkstra(s);
		if (dist[d] == INF) {
			printf("-1\n");
			continue;
		}
		for (i = 0; i < n; i++) {
			sort(parent[i].begin(), parent[i].end());
		}

		int len = parent[d].size(), shortest = parent[d][0].first;
		for (i = 0; i < len; i++) {
			if (parent[d][i].first != shortest) break;
			del[parent[d][i].second][d] = true;
			queue<int> tmpQue;
			tmpQue.push(parent[d][i].second);
			while (!tmpQue.empty()) {
				int here = tmpQue.front();
				tmpQue.pop();
				if (here == s) continue;
				int tmpShortest = parent[here][0].first;
				for (auto it : parent[here]) {
					if (it.first != tmpShortest) break;
					del[it.second][here] = true;
					tmpQue.push(it.second);
				}
			}
		}
		dijkstra(s);

		printf("%d\n", dist[d] == INF ? -1 : dist[d]);
	}
}*/


/*int main() { //1613 역사
	int i, j, k, n, m, s, a, b, dist[401][401], INF=987654321;
	scanf("%d%d", &n, &m);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			dist[i][j] = INF;
		}
	}

	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		dist[a][b] = 1;
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	scanf("%d", &s);
	for (i = 0; i < s; i++) {
		scanf("%d%d", &a, &b);
		if (dist[a][b] != INF) printf("-1\n");
		else if (dist[b][a] != INF) printf("1\n");
		else printf("0\n");
	}
}*/

/*int main() { //2252 줄 세우기
	int i, n, m, a, b, in[32001] = { 0, };
	vector<int> adj[32001];
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		in[b]++;
		adj[a].push_back(b);
	}
	queue<int> que;
	for (i = 1; i <= n; i++) {
		if (in[i] == 0) que.push(i);
	}

	while (!que.empty()) {
		int here = que.front();
		que.pop();
		printf("%d ", here);
		for (auto it : adj[here]) {
			in[it]--;
			if (in[it] == 0) que.push(it);
		}
	}
}*/

/*vector<pair<int, int>> adj[10001]; //1197 최소 스패닝 트리
int parent[10001], depth[10001];
int find(int u) {
	if (parent[u] == u) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	parent[b] = a;
	if (depth[a] == depth[b]) depth[a]++;
	return true;
}

int main() {
	int i, v, e, a, b, c;
	scanf("%d%d", &v, &e);
	priority_queue<pair<int, pair<int, int>>> pQue;
	for (i = 1; i <= v; i++) {
		parent[i] = i;
		depth[i] = 1;
	}
	for (i = 0; i < e; i++) {
		scanf("%d%d%d", &a, &b, &c);
		pQue.emplace(-c, make_pair(a, b));
	}
	int ret = 0;
	while (!pQue.empty()) {
		int cost = pQue.top().first, v1 = pQue.top().second.first, v2 = pQue.top().second.second;
		pQue.pop();
		if (merge(v1, v2)) ret-=cost;
	}
	printf("%d", ret);
}*/

/*int parent[100001], depth[100001]; //1647 도시 분할 계획

int find(int u) {
	if (parent[u] == u) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	parent[b] = a;
	if (depth[a] == depth[b]) depth[a]++;
	return true;
}

int main() {
	int i, n, m, a, b, c;
	priority_queue<pair<int, pair<int, int>>> pQue;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		parent[i] = i;
		depth[i] = 1;
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		pQue.emplace(-c, make_pair(a, b));
	}

	int ret = 0, maxa=0;
	while (!pQue.empty()) {
		int cost = -pQue.top().first, v1 = pQue.top().second.first, v2 = pQue.top().second.second;
		pQue.pop();
		if (merge(v1, v2)) {
			ret += cost;
			if (maxa < cost) maxa = cost;
		}
	}
	printf("%d", ret-maxa);
}*/

/*int main() { //14938 서강그라운드
	int i, j, k, n, m, r, a, b, cost, dist[101][101], item[101], INF=987654321;
	scanf("%d%d%d", &n, &m, &r);
	for (i = 1; i <= n; i++) {
		scanf("%d", &item[i]);
	}
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}

	for (i = 0; i < r; i++) {
		scanf("%d%d%d", &a, &b, &cost);
		dist[a][b] = cost;
		dist[b][a] = cost;
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	int ret = 0;
	for (i = 1; i <= n; i++) {
		int tmpRet = 0;
		for (j = 1; j <= n; j++) {
			if (dist[i][j] <= m) tmpRet += item[j];
		}
		if (ret < tmpRet) ret = tmpRet;
	}
	printf("%d", ret);
}*/

/*int sz, arr[100000], dp[100000][5][5], INF = 987654321; //2342 Dance Dance Revolution

int func(int idx, int left, int right) {
	if (left != 0 && left == right) return INF;
  	if (idx == sz) return 0;
	int& ret = dp[idx][left][right];
	if (ret != -1) return ret;
	ret = INF;
	int leftStr, rightStr;
	if (left == 0) leftStr = 2;
	else if ((arr[idx] + 1 == 5 ? 1 : arr[idx] + 1) == left || (arr[idx] - 1 == 0 ? 4 : arr[idx] - 1) == left) leftStr = 3;
	else if (arr[idx] == left) leftStr = 1;
	else leftStr = 4;
	ret = min(ret, leftStr + func(idx+1, arr[idx], right)); //왼쪽발 움직이기
	//printf("idx : %d, arr[idx] : %d, left : %d, str : %d, ret : %d\n", idx, arr[idx], left, leftStr, ret);
	if (right == 0) rightStr = 2;
	else if ((arr[idx] + 1 == 5 ? 1 : arr[idx] + 1) == right || (arr[idx] - 1 == 0 ? 4 : arr[idx] - 1) == right) rightStr = 3;
	else if (arr[idx] == right) rightStr = 1;
	else rightStr = 4;
	ret = min(ret, rightStr + func(idx + 1, left, arr[idx])); //오른쪽발 움직이기
	return ret;
}

int main() {
	int i, j, k, a;
	while (true) {
		scanf("%d", &a);
		if (!a) break;
		arr[sz++] = a;
	}

	for (i = 0; i < sz; i++) {
		for (j = 0; j <= 4; j++) {
			for (k = 0; k <= 4; k++) {
				dp[i][j][k] = -1;
			}
		}
	}
	printf("%d", func(0, 0, 0));
}*/

/*char board[52][52]; //1194 달이 차오른다, 가자.
int n, m, visited[52][52][1<<6], INF = 987654321, nxt[4][2] = { {0, -1}, {0, 1}, {-1, 0}, {1, 0} };

int main() {
	int i, j, k, a, b;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == '0') a = i, b = j;
		}
		fgetc(stdin);
	}

	queue<pair<pair<int, int>, pair<int, int>>>que;
	que.emplace(make_pair(0, 0), make_pair(a, b));
	int ret = INF;
	while (!que.empty()) {
		int move = que.front().first.first,
			key=que.front().first.second,
			x = que.front().second.first,
			y = que.front().second.second;
		que.pop();
		if (visited[x][y][key]) continue;
		if (board[x][y] == '1') {
			ret = min(ret, move);
		}
		visited[x][y][key] = 1;
		for (i = 0; i < 4; i++) {
			int nextX = x + nxt[i][0], nextY = y + nxt[i][1], newKey = key;
			if (nextX <= 0 || nextX > n || nextY <= 0 || nextY > m || board[nextX][nextY] == '#') {
				continue;
			}

			else if (board[nextX][nextY] >= 'A' && board[nextX][nextY] <= 'F') {
				if ((key & (1 << (board[nextX][nextY] - 'A'))) == 0) continue;
			}

			else if (board[nextX][nextY] >= 'a' && board[nextX][nextY] <= 'f') {
				newKey |= (1 << (board[nextX][nextY] - 'a'));
			}

			que.emplace(make_pair(move + 1, newKey), make_pair(nextX, nextY));
		}
	}
	printf("%d", ret==INF ? -1 : ret);
}*/

/*int main() { //16565 N포커
	int i, j, n, dp[53][53], MOD = 10007;
	scanf("%d", &n);
	dp[0][0] = 1;
	for (i = 1; i <= 52; i++) {
		dp[i][0] = 1;
		for (j = 1; j < i; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
		}
		dp[i][i] = 1;
	}
	int ret = 0, k = 1;
	for (i = 1; i * 4 <= n; i++) {
		ret = (MOD+ ret + k * ((dp[13][i] * dp[52 - i * 4][n - i * 4]) % MOD)) % MOD;
		k *= -1;
	}
	printf("%d\n", ret % MOD);
}*/

/*vector<int> adj[10001]; //16562 친구비
int cost[10001], group[10001];
vector<int> vec[10001];
int main() {
	int i, n, m, k, v, w;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 1; i <= n; i++) scanf("%d", &cost[i]);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &v, &w);
		adj[v].push_back(w);
		adj[w].push_back(v);
	}
	int grpIdx = 1;
	queue<int> que;
	for (i = 1; i <= n; i++) {
		if (!group[i]) {
			que.push(i);
			while (!que.empty()) {
				int here = que.front();
				que.pop();
				group[here] = grpIdx;
				for (auto there : adj[here]) {
					if (!group[there]) que.push(there);
				}
			}
			grpIdx++;
		}
	}
	for (i = 1; i <=n; i++) {
		vec[group[i]].push_back(cost[i]);
	}

	int ret = 0;
	for (i = 1; i < grpIdx; i++) {
		sort(vec[i].begin(), vec[i].end());
		ret += vec[i][0];
	}
	if (ret > k) printf("Oh no");
	else printf("%d", ret);
}*/

/*int i, j, n, arr[1000000], dp[5000001];
int main() {
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 5000000; i >= 2; i--) {
		if (dp[i] != 0) continue;
		for (j = 2; j*j <= i; j++) {
			if (!(i % j)) {
				dp[i] = i / j;
				break;
			}
		}
		if (dp[i] == 0) dp[i] = 1;
	}

	for (i = 0; i < n; i++) {
		int here = arr[i];
		while (here != 1) {
			printf("%d ", here/dp[here]);
			here = dp[here];
		}
		printf("\n");
	}
}*/

/*const int MAX = 5000000; //16563 어려운 소인수분해
int n, arr[1000000], dp[MAX+1], d[MAX+1];

int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 2; i*i <= MAX; i++) {
		if (dp[i]) continue;
		int k=i+i;
		d[i] = i;
		while (k <= MAX) {
			if (!dp[k]) {
				dp[k] = 1;
				d[k] = i;
			}
			else if(d[k]==0) d[k] = 1;
			k += i;
		}
	}

	for (i = 0; i < n; i++) {
		int here = arr[i];
		while (here != 1) {
			if (d[here] == 0) d[here] = here;
			printf("%d ", d[here]);
			here /= d[here];
		}
		printf("\n");
	}
}*/

/*int main() { //16504 히오스 프로게이머
	int i, n, k, level[1000000];
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &level[i]);
	}
	sort(level, level + n);

	int ret = 0, num=0;
	for (i = 0; i < n-1; i++) {
		int nxt= (level[i + 1] - level[i]) * (i + 1);
		if (num + nxt > k) {
			ret += (k - num) / (i + 1);
			break;
		}
		else {
			ret = level[i + 1];
			num += nxt;
		}
	}
	printf("%d", ret);
}*/

/*const int MAX = 100000, INF=987654321;
int arr[MAX+1], tree[4*MAX+1], range[4*MAX][2];

int makeTree(int start, int end, int idx) {
	if (start == end) {
		range[idx][0] = range[idx][1] = start;
		return tree[idx] = arr[start];
	}
	int mid = (start + end) / 2;
	range[idx][0] = start, range[idx][1] = end;
	return tree[idx] = makeTree(start, mid, idx * 2) + makeTree(mid+1, end, idx * 2 + 1);
}

int main() {
	int i, j, n, s;
	scanf("%d%d", &n, &s);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	makeTree(1, n, 1);

	int ret = INF;
	for (i = 4 * MAX; i >= 1; i--) {
		if (tree[i] > s) {
			printf("i : %d\n", i);
			ret = min(ret, range[i][1] - range[i][0] + 1);
		}
	}
	printf("%d", ret == INF ? 0 : ret);
}*/

/*const int MAX = 100000, INF=987654321; //1806 부분합
int arr[MAX];
int main() {
	int i, j, n, s, start=0, end=0;
	scanf("%d%d", &n, &s);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int ret=INF, sum = 0, tmpLen=1;
	while (end<n) {
		sum += arr[end];
		if (sum >= s) {
			while (sum >= s) {
				tmpLen--;
				sum -= arr[start++];
			}
			ret = min(ret, tmpLen+1);
			end++;
			tmpLen++;
		}

		else {
			tmpLen++;
			end++;
		}
	}
	printf("%d", ret == INF ? 0 : ret);
}*/

/*vector<string> vec; //12101 1, 2, 3 더하기 2

void func(int n, string s) {
	if (n < 0) return;
	if (n == 0) {
		vec.push_back(s);
		return;
	}
	func(n - 1, s + "+1");
	func(n - 2, s + "+2");
	func(n - 3, s + "+3");
}
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	string s = "";
	func(n, s);
	if (vec.size() < k) cout << -1;
	else cout << vec[k-1].substr(1, vec[k-1].size()-1) << endl;
}*/

/*const int MOD = 1000000009; //15988 1, 2, 3 더하기 3
int dp[1000001];
int main() {
	int i, t, n;
	dp[0] = 1, dp[1]=1, dp[2]=2;
	for (i = 3; i <= 1000000; i++) {
		dp[i] = ((dp[i - 3] + dp[i - 2])%MOD + dp[i - 1]) % MOD;
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
}*/

/*int dp[4][10001]; //15989 1, 2, 3 더하기 4
int func(int prev, int n) {
	if (n <= 0) {
		if (n == 0) return 1;
		else return 0;
	}
	int& ret = dp[prev][n];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = prev; i >= 1; i--) {
		ret += func(i, n - i);
	}
	return ret;
}

int main() {
	int i, j, t, n;
	scanf("%d", &t);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 10001; j++) dp[i][j] = -1;
	}
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", func(3, n));
	}
}*/

/*const int MOD = 1000000009; //15990 1, 2, 3 더하기 5
int dp[4][100001];
int func(int prev, int n) {
	if (n <= 0) {
		if (n == 0) return 1;
		else return 0;
	}
	int& ret = dp[prev][n];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 1; i <= 3; i++) {
		if (i == prev) continue;
		ret += func(i, n - i);
		ret %= MOD;
	}
	return ret;
}

int main() {
	int i, j, t, n;
	scanf("%d", &t);
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 100001; j++) dp[i][j] = -1;
	}
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", func(0, n));
	}
}*/

/*const int MOD = 1000000009; //15991 1, 2, 3 더하기 6
int dp[100001], arr[100001];

int func(int n) {
	if (n <= 3) {
		if (n == 0 || n == 1) return 1;
		else if (n == 2 || n == 3) return 2;
		else return 0;
	}
	int& ret = dp[n];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 1; i <= 3; i++) {
		ret += func(n - 2 * i);
		ret %= MOD;
	}
	return ret;
}

int main() {
	int i, t, n;
	for (i = 0; i < 100001; i++) dp[i] = -1;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", func(n));
	}
}*/

/*const int MOD = 1000000009; //15992 1, 2, 3 더하기 7
int dp[1001][1001];
int func(int n, int m) {
	if (m == 0) {
		if (n == 0) return 1;
		else return 0;
	}
	if (n <= 0) return 0;
	int& ret = dp[n][m];
	if (ret!=-1) return ret;
	ret = 0;
	for (int i = 1; i <= 3; i++) {
		ret += func(n - i, m - 1);
		ret %= MOD;
	}
	return ret;
}
int main() {
	int i, j, t, n, m;
	for (i = 0; i < 1001; i++) {
		for (j = 0; j < 1001; j++) dp[i][j] = -1;
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		printf("%d\n", func(n, m));
	}
}*/

/*const int MOD = 1000000009; //15993 
int main() {
	int i, j, t, n, dp[100001][2];
	dp[1][0] = 0, dp[1][1] = 1, dp[2][0] = 1, dp[2][1] = 1, dp[3][0] = 2, dp[3][1] = 2;
	for (i = 4; i < 100001; i++) {
		for (j = 0; j < 2; j++) {
			int op = (j + 1) % 2;
			dp[i][j] = ((dp[i - 3][op] + dp[i - 2][op]) % MOD + dp[i - 1][op]) % MOD;
		}
	}
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		printf("%d %d\n", dp[n][1], dp[n][0]);
	}
}*/

/*const int MOD = 1000000009; //16195 1, 2, 3 더하기 9
int dp[1001][1001];
int func(int n, int m) {
	if (n<0||m < 0) return 0;
	if (n == 0) return 1;
	int& ret = dp[n][m];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 1; i <= 3; i++) {
		ret += func(n - i, m - 1);
		ret %= MOD;
	}
	return ret;
}
int main() {
	int i, j, t, n, m;
	scanf("%d", &t);
	for (i = 0; i < 1001; i++) {
		for (j = 0; j < 1001; j++) dp[i][j] = -1;
	}
	while (t--) {
		scanf("%d%d", &n, &m);
		printf("%d\n", func(n, m));
	}
}*/

/*const int INF = 987654321; //1175 배달
char board[51][51];
int nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }, visited[51][51][5][2][2];
int main() {
	int i, j, n, m, sx, sy, c1x=-1, c1y, c2x, c2y;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'S') sx = i, sy = j;
			if (board[i][j] == 'C') {
				if (c1x == -1) c1x = i, c1y = j;
				else c2x = i, c2y = j;
			}
		}
		fgetc(stdin);
	}

	queue < pair<pair<int, pair<int, int>>, pair<int, pair<int, int>>>> que; // 움직인 횟수, x, y, 이전 방향, c1 방문 여부, c2 방문 여부
	que.emplace(make_pair(0, make_pair(sx, sy)), make_pair(4, make_pair(0, 0)));
	int ret = INF;
	while (!que.empty()) {
		int moveCount = que.front().first.first,
			curX = que.front().first.second.first,
			curY = que.front().first.second.second,
			prevDir = que.front().second.first,
			c1Count = que.front().second.second.first,
			c2Count = que.front().second.second.second;
		que.pop();
		if (visited[curX][curY][prevDir][c1Count][c2Count]) continue;
		visited[curX][curY][prevDir][c1Count][c2Count] = 1;
		if (c1Count&&c2Count) {
			ret = moveCount;
			break;
		}
		for (i = 0; i < 4; i++) {
			if (i == prevDir) continue;
			int nxtX = curX + nxt[i][0], nxtY = curY + nxt[i][1];
			if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || board[nxtX][nxtY] == '#') continue;
			if (nxtX==c1x&&nxtY==c1y) {
				que.emplace(make_pair(moveCount + 1, make_pair(nxtX, nxtY)), (make_pair(i, make_pair(1, c2Count))));
			}
			else if (nxtX == c2x && nxtY == c2y) {
				que.emplace(make_pair(moveCount + 1, make_pair(nxtX, nxtY)), (make_pair(i, make_pair(c1Count, 1))));
			}
			else {
				que.emplace(make_pair(moveCount + 1, make_pair(nxtX, nxtY)), (make_pair(i, make_pair(c1Count, c2Count))));
			}
		}
	}
	printf("%d", ret==INF ? -1 : ret);
}*/

/*const int INF = 987654321; //1261 알고스팟
int visited[10001], dist[10001], nxt[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
char board[101][101];
vector<pair<int, int>> adj[10001];
int main() {
	int i, j, k, n, m;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%c", &board[i][j]);
		}
		fgetc(stdin);
	}

	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			for (k = 0; k < 4; k++) {
				int nxtX = i + nxt[k][0], nxtY = j + nxt[k][1];
				if (nxtX <= 0 || nxtX > m || nxtY <= 0 || nxtY > n) continue;
				if (board[nxtX][nxtY] == '0') adj[(i - 1) * n + j].emplace_back((nxtX - 1) * n + nxtY, 0);
				else adj[(i - 1) * n + j].emplace_back((nxtX - 1) * n + nxtY, 1);
			}
		}
	}

	for (i = 1; i <= m * n; i++) {
		dist[i] = INF;
	}
	dist[1] = 0;
	priority_queue<pair<int, int>> pQue;
	pQue.emplace(0, 1);
	while (!pQue.empty()) {
		int here=pQue.top().second;
		pQue.pop();
		visited[here] = 1;
		for (auto there : adj[here]) {
			if (visited[there.first]) continue;
			if (dist[there.first] > dist[here] + there.second) {
				dist[there.first] = dist[here] + there.second;
				pQue.emplace(-dist[there.first], there.first);
			}
		}
	}
	printf("%d", dist[n * m]);
}*/

/*char path[50], board[101][101]; //1347 미로 만들기
int nxt[4][2] = { {1, 0}, {0, -1}, {-1 ,0}, {0, 1} };
int main() {
	int i, j, n, x = 50, y = 50, dir = 0, ver=1, hor=1, up=50, down=50, left=50, right=50;
	scanf("%d", &n);
	scanf("%s", path);
	board[x][y] = '.';
	for (i = 0; i < strlen(path); i++) {
		if (path[i] == 'L') dir = (dir + 3) % 4;
		else if (path[i] == 'R') dir = (dir + 1) % 4;
		else{
			x += nxt[dir][0], y += nxt[dir][1];
			if (board[x][y] == 0) {
				if (dir == 0 || dir == 2) {
					ver++;
					up = min(up, x);
					down = max(down, x);
				}
				else {
					hor++;
					left = min(left, y);
					right = max(right, y);
				}
				board[x][y] = '.';
			}
		}
	}
	for (i = up; i <= down; i++) {
		for (j = left; j <= right; j++) {
			if (board[i][j] == 0) board[i][j] = '#';
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}*/

/*const int INF = 987654321; //1600 말이 되고픈 원숭이
int board[201][201], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} },
	horseNxt[8][2] = { {1, 2}, {2, 1}, {1, -2}, {-2 ,1}, {-1, 2}, {2, -1}, {-1, -2}, {-2, -1} },
	dp[201][201][31];
int main() {
	int i, j, k, w, h;
	scanf("%d%d%d", &k, &w, &h);
	for (i = 1; i <= h; i++) {
		for (j = 1; j <= w; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	queue<pair<pair<int, int>, pair<int, int>>> que; // x, y, 말의 움직임 횟수, 이동 횟수
	que.emplace(make_pair(1, 1), make_pair(k, 0));
	int ret = INF;
	while (!que.empty()) {
		int x = que.front().first.first,
			y = que.front().first.second,
			horse = que.front().second.first,
			move = que.front().second.second;
		que.pop();
		if (x == h && y == w) {
			ret = min(ret, move);
		}
		if (dp[x][y][horse]) continue;
		dp[x][y][horse] = 1;
		if (horse > 0) {
			for (i = 0; i < 8; i++) {
				int nxtX = x + horseNxt[i][0], nxtY = y + horseNxt[i][1];
				if (nxtX <= 0 || nxtX > h || nxtY <= 0 || nxtY > w || board[nxtX][nxtY] == 1) continue;
				que.emplace(make_pair(nxtX, nxtY), make_pair(horse - 1, move + 1));
			}
		}
		for (i = 0; i < 4; i++) {
			int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
			if (nxtX <= 0 || nxtX > h || nxtY <= 0 || nxtY > w || board[nxtX][nxtY] == 1) continue;
			que.emplace(make_pair(nxtX, nxtY), make_pair(horse, move + 1));
		}
	}
	printf("%d", ret == INF ? -1 : ret);
}*/

/*typedef struct info{ //1726 로봇
	int xPnt;
	int yPnt;
	int d;
	int moveCount;
}Info;

const int INF = 987654321;
int visited[101][101][4], board[101][101], nxt[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
int main() {
	int i, j, m, n, a, b, dir, objX, objY, objDir;
	scanf("%d%d", &m, &n);
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	scanf("%d%d%d%d%d%d", &a, &b, &dir, &objX, &objY, &objDir);
	queue<Info> que;
	que.push(Info{ a, b, dir-1, 0 });
	int ret = INF;
	while (!que.empty()) {
		int x = que.front().xPnt,
			y = que.front().yPnt,
			direct = que.front().d,
			move = que.front().moveCount;
		que.pop();
		if (x == objX && y == objY && direct == objDir-1) {
			ret = move;
			break;
		}
		if (visited[x][y][direct]) continue;
		visited[x][y][direct] = 1;
		int nxtDir = direct == 0 ? 2 : direct == 1 ? 3 : direct == 2 ? 1 : 0;
		que.emplace(Info{ x, y, nxtDir, move + 1 });
		nxtDir = direct == 0 ? 3 : direct == 1 ? 2 : direct == 2 ? 0 : 1;
		que.emplace(Info{ x, y, nxtDir, move + 1 });

		int nxtX = x, nxtY = y;
		for(i=0; i<3; i++){
			nxtX += nxt[direct][0], nxtY+= nxt[direct][1];
			if (nxtX <= 0 || nxtX > m || nxtY <= 0 || nxtY > n || board[nxtX][nxtY] == 1) break;
			que.emplace(Info{ nxtX, nxtY, direct, move + 1 });
		}
	}
	printf("%d", ret == INF ? -1 : ret);
}*/

/*int visited[51][51][2], nxt[4][2] = { {0, 1}, {1, 0}, {-1, 0}, {0, -1} }; //1938 통나무 옮기기
char board[51][51];
typedef struct wood {
	int xPnt;
	int yPnt;
	int state;
	int moveCnt;
}Wood;

int main() {
	int i, j, n, stk = 0, cx, cy, initState = 0;
	scanf("%d", &n);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'B') {
				if (stk == 1) {
					cx = i, cy = j;
					if (j == 1 || board[i][j - 1] != 'B') initState = 1;
				}
				stk++;
			}
		}
		fgetc(stdin);
	}

	queue <Wood> que;
	que.push(Wood{ cx, cy, initState, 0});
	int ret = 0;
	while (!que.empty()) {
		int x = que.front().xPnt,
			y = que.front().yPnt,
			st = que.front().state,
			move = que.front().moveCnt;
		que.pop();
		if (!st) { //통나무 가로일 때 체크
			if (board[x][y - 1] == 'E' && board[x][y] == 'E' && board[x][y + 1] == 'E') {
				ret = move;
				break;
			}
		}
		else { //세로일 때 체크
			if (board[x - 1][y] == 'E' && board[x][y] == 'E' && board[x + 1][y] == 'E') {
				ret = move;
				break;
			}
		}
		if (visited[x][y][st]) continue;
		visited[x][y][st] = 1;
		if (!st) {//통나무 가로
			for (i = 0; i < 4; i++) {
				int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
				if (nxtX <= 0 || nxtX > n || nxtY <= 1 || nxtY >= n||board[nxtX][nxtY]=='1'||board[nxtX][nxtY+1]=='1'|| board[nxtX][nxtY -1] == '1') continue;
				que.push(Wood{ nxtX, nxtY, st, move + 1 });
			}
			for (i = 0; i < 3; i++) {
				if (x-1<=0||board[x - 1][y - 1 + i] == '1') break;
				if (x+1>n||board[x + 1][y - 1 + i] == '1') break;
			}
			if (i == 3) { //회전 가능
				que.push(Wood{ x, y, (st+ 1) % 2, move + 1 });
			}
		}
		else { //통나무 세로
			for (i = 0; i < 4; i++) {
				int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
				if (nxtX <= 1 || nxtX >= n || nxtY <= 0 || nxtY > n || board[nxtX][nxtY] == '1' || board[nxtX+1][nxtY] == '1' || board[nxtX-1][nxtY] == '1') continue;
				que.push(Wood{ nxtX, nxtY, st, move + 1 });
			}
			for (i = 0; i < 3; i++) {
				if (y-1<=0||board[x - 1+i][y - 1] == '1') break;
				if (y+1>n||board[x - 1+i][y + 1] == '1') break;
			}
			if (i == 3) { //회전 가능
				que.push(Wood{ x, y, (st + 1) % 2, move + 1 });
			}
		}
	}
	printf("%d", ret);
}*/

/*char board[51][51]; //2589 보물섬
int visited[51][51], nxt[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int main() {
	int i, j, k, l, n, m;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) scanf("%c", &board[i][j]);
		fgetc(stdin);
	}

	int tmpDist=0, ret = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (board[i][j] == 'W') continue;
			for (k = 1; k <= n; k++) {
				for (l = 1; l <= m; l++) visited[k][l] = 0;
			}

			queue<pair<pair<int, int>, int >> que;
			que.emplace(make_pair(i, j), 0);
			tmpDist = 0;
			while (!que.empty()) {
				int x = que.front().first.first,
					y = que.front().first.second,
					move = que.front().second;
				que.pop();
				if (visited[x][y]) continue;
				visited[x][y] = 1;
				if (tmpDist < move) tmpDist = move;

				for (int p = 0; p < 4; p++) {
					int nxtX = x + nxt[p][0], nxtY = y + nxt[p][1];
					if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || board[nxtX][nxtY] == 'W') continue;
					que.emplace(make_pair(nxtX, nxtY), move + 1);
				}
			}
			ret = max(ret, tmpDist);
		}
	}
	printf("%d", ret);
}*/

/*char board[51][51]; //2665 미로 만들기
int visited[51][51][2501], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1 ,0} }, INF=987654321;
int main() {
	int i, j, n;
	scanf("%d", &n);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) scanf("%c", &board[i][j]);
		fgetc(stdin);
	}

	queue<pair<int, pair<int, int>>> que;
	que.emplace(0, make_pair(1, 1));
	int ret = INF;
	while (!que.empty()) {
		int wall = que.front().first,
			x = que.front().second.first,
			y = que.front().second.second;
		que.pop();
		if (wall > ret) continue;
		if (x == n && y == n) {
			ret = min(ret, wall);
		}
		if (visited[x][y][wall]) continue;
		visited[x][y][wall] = 1;

		for (i = 0; i < 4; i++) {
			int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
			if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > n) continue;
			if (board[nxtX][nxtY] == '0') que.emplace(wall + 1, make_pair(nxtX, nxtY));
			else que.emplace(wall, make_pair(nxtX, nxtY));
		}
	}
	printf("%d", ret == INF ? 0 : ret);
}*/

/*const int INF = 987654321; //1944 복제 로봇
char board[51][51];
int parent[251], depth[251], visited[51][51], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
vector<pair<int, int>> point;

int find(int u) {
	if (parent[u] == u) return u;
	else return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	parent[b] = a;
	if (depth[a] == depth[b]) depth[a]++;
	return true;
}
int main() {
	int i, j, k, l, n, m, sx, sy;
	priority_queue<pair<int, pair<int, int>>> pQue;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'S' || board[i][j] == 'K') point.emplace_back(i, j);
		}
		fgetc(stdin);
	}

	for (i = 0; i <= m; i++) {
		depth[i] = 1;
		parent[i] = i;
	}

	for (i = 0; i < point.size(); i++) {
		int sX = point[i].first, sY = point[i].second;
		for (j = 0; j < i; j++) {
			for (k = 1; k <= n; k++) {
				for (l = 1; l <= n; l++) visited[k][l] = 0;
			}
			int dX = point[j].first, dY = point[j].second;
			queue<pair<int, pair<int, int>>> que;
			que.emplace(0, make_pair(sX, sY));
			int tmp = 0;
			while (!que.empty()) {
				int move = que.front().first,
					x = que.front().second.first,
					y = que.front().second.second;
				que.pop();
				if (x == dX && y == dY) {
					tmp = move;
					break;
				}
				if (visited[x][y]) continue;
				visited[x][y] = 1;
				for (k = 0; k < 4; k++) {
					int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
					if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > n || board[nxtX][nxtY] == '1') continue;
					que.emplace(move + 1, make_pair(nxtX, nxtY));
				}
			}
			if (tmp) pQue.emplace(-tmp, make_pair(i, j));
		}
	}

	int ret = 0, chk=0;
	while (!pQue.empty()) {
		int cost = -pQue.top().first,
			x = pQue.top().second.first,
			y = pQue.top().second.second;
		pQue.pop();
		if (!merge(x, y)) continue;
		else {
			ret += cost;
			chk++;
		}
	}
	printf("%d", chk != m ? -1 : ret);
}*/

/*int board[51][51], visited[51][51], wVisited[51][51], nxt[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} }; //3055 탈출
int main() {
	int i, j, r, c;
	queue<pair<int, pair<int, int>>> wQue, que;
	scanf("%d%d", &r, &c);
	fgetc(stdin);
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'S') que.emplace(0, make_pair(i, j));
			if (board[i][j] == '*') wQue.emplace(0, make_pair(i, j));
		}
		fgetc(stdin);
	}
	int ret = 0, curMove=0;
	while (!que.empty()) {
		int move = que.front().first,
			x = que.front().second.first,
			y = que.front().second.second;
		que.pop();		
		if (board[x][y]=='D') {
			ret = move;
			break;
		}

		if (visited[x][y]) continue;
		visited[x][y] = 1;
		if (move != curMove) { //물 확장
			int tmp = wQue.front().first;
			while (!wQue.empty()) {
				int time = wQue.front().first,
					curWaterX = wQue.front().second.first,
					curWaterY = wQue.front().second.second;
				if (tmp != time) {
					tmp = time;
					break;
				}
				wQue.pop();

				if (wVisited[curWaterX][curWaterY]) continue;
				wVisited[curWaterX][curWaterY] = 1;
				for (i = 0; i < 4; i++) {
					int nxtX = curWaterX + nxt[i][0], nxtY = curWaterY + nxt[i][1];
					if (nxtX <= 0 || nxtX > r || nxtY <= 0 || nxtY > c || board[nxtX][nxtY] == 'D' || board[nxtX][nxtY] == 'X') continue;
					board[nxtX][nxtY] = '*';
					wQue.emplace(time + 1, make_pair(nxtX, nxtY));
				}
			}
			curMove = move;
		}
		if (board[x][y] == '*') continue;
		for (i = 0; i < 4; i++) {
			int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
			if (nxtX <= 0 || nxtX > r || nxtY <= 0 || nxtY > c || board[nxtX][nxtY] == '*' || board[nxtX][nxtY] == 'X') continue;
			que.emplace(move + 1, make_pair(nxtX, nxtY));
		}
	}
	if (ret == 0) printf("KAKTUS");
	else printf("%d", ret);
}*/

/*int visited[1001][1001], fVisited[1001][1001], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 5427 불
char board[1001][1001];
int main() {
	int i, j, t, w, h;
	scanf("%d", &t);
	while (t--) {
		queue<pair<int, pair<int, int>>> que, fQue;
		scanf("%d%d", &w, &h);
		fgetc(stdin);
		for (i = 1; i <= h; i++) {
			for (j = 1; j <= w; j++) {
				scanf("%c", &board[i][j]);
				if (board[i][j] == '@') que.emplace(0, make_pair(i, j));
				if (board[i][j] == '*') fQue.emplace(0, make_pair(i, j));
				visited[i][j] = 0;
				fVisited[i][j] = 0;
			}
			fgetc(stdin);
		}

		int ret = 0, curMove=0, curFMove=0;
		while (!que.empty()) {
			int move = que.front().first,
				x = que.front().second.first,
				y = que.front().second.second;
			que.pop();
			if (curMove != move) {
				while (!fQue.empty()) {
					int fMove = fQue.front().first,
						fx = fQue.front().second.first,
						fy = fQue.front().second.second;
					if (curFMove != fMove) {
						curFMove = fMove;
						break;
					}
					fQue.pop();			
					if (fVisited[fx][fy]) continue;
					fVisited[fx][fy] = 1;
					for (i = 0; i < 4; i++) {
						int nxtfx = fx + nxt[i][0], nxtfy = fy + nxt[i][1];
						if (nxtfx <= 0 || nxtfx > h || nxtfy <= 0 || nxtfy > w || board[nxtfx][nxtfy] == '#') continue;
						board[nxtfx][nxtfy] = '*';
						fQue.emplace(fMove + 1, make_pair(nxtfx, nxtfy));
					}
				}
				curMove = move;
			}
			if (board[x][y] == '*') continue;
			if (x == 1 || x == h || y == 1 || y == w) {
				ret = move + 1;
				break;
			}
			if (visited[x][y]) continue;
			visited[x][y] = 1;
			for (i = 0; i < 4; i++) {
				int nxtx = x + nxt[i][0], nxty = y + nxt[i][1];
				if (nxtx <= 0 || nxtx > h || nxty <= 0 || nxty > w || board[nxtx][nxty] == '#'||board[nxtx][nxty]=='*') continue;
				que.emplace(move + 1, make_pair(nxtx, nxty));
			}
		}
		if (ret == 0) printf("IMPOSSIBLE\n");
		else printf("%d\n", ret);
	}
}*/

/*char board[11][11]; //13459 구슬 탈출
int visited[11][11][11][11], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1 ,0} };

typedef struct ballInfo {
	int move;
	int rx;
	int ry;
	int bx;
	int by;
}BInfo;
int main() {
	int i, j, n, m, rx, ry, bx, by;
	queue <BInfo> que;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'R') rx = i, ry = j;
			if (board[i][j] == 'B') bx = i, by = j;
		}
		fgetc(stdin);
	}
	que.push(BInfo{ 0, rx, ry, bx, by });

	int ret = 0;
	while (!que.empty()) {
		int move = que.front().move;
		rx = que.front().rx;
		ry = que.front().ry;
		bx = que.front().bx;
		by = que.front().by;
		que.pop();
		if (move > 10) break;
		if (board[bx][by] == 'O') continue;
		if (board[rx][ry] == 'O') {
			ret = 1;
			break;
		}

		if (visited[rx][ry][bx][by]) continue;
		visited[rx][ry][bx][by] = 1;
		for (i = 0; i < 4; i++) {
			int nrx = rx, nry = ry, nbx = bx, nby = by, rchk = 0, bchk = 0;
			while (true) {
				if (board[nrx][nry] == '#') {
					nrx -= nxt[i][0], nry -= nxt[i][1];
					break;
				}
				else if (board[nrx][nry] == 'O') break;
				else if (nbx == nrx && nby == nry) {
					nrx -= nxt[i][0], nry -= nxt[i][1];
					rchk = 1;
					break;
				}
				nrx += nxt[i][0], nry += nxt[i][1];
			}

			while (true) {
				if (board[nbx][nby] == '#') {
					nbx -= nxt[i][0], nby -= nxt[i][1];
					break;
				}
				else if (nbx == nrx && nby == nry) {
					if (board[nrx][nry] != 'O') {
						nbx = nrx - nxt[i][0], nby = nry - nxt[i][1];
					}
					break;
				}
				else if (board[nbx][nby] == 'O') break;
				nbx += nxt[i][0], nby += nxt[i][1];
			}
			if (rchk) nrx = nbx - nxt[i][0], nry = nby - nxt[i][1];
			que.push(BInfo{ move + 1, nrx, nry, nbx, nby });
		}
	}
	printf("%d", ret);
}*/

/*char board[11][11]; //13460 구슬 탈출 2
int visited[11][11][11][11], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1 ,0} };

typedef struct ballInfo {
	int move;
	int rx;
	int ry;
	int bx;
	int by;
}BInfo;
int main() {
	int i, j, n, m, rx, ry, bx, by;
	queue <BInfo> que;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'R') rx = i, ry = j;
			if (board[i][j] == 'B') bx = i, by = j;
		}
		fgetc(stdin);
	}
	que.push(BInfo{ 0, rx, ry, bx, by });

	int ret = 0;
	while (!que.empty()) {
		int move = que.front().move;
		rx = que.front().rx;
		ry = que.front().ry;
		bx = que.front().bx;
		by = que.front().by;
		que.pop();
		if (move > 10) break;
		if (board[bx][by] == 'O') continue;
		if (board[rx][ry] == 'O') {
			ret = move;
			break;
		}

		if (visited[rx][ry][bx][by]) continue;
		visited[rx][ry][bx][by] = 1;
		printf("move : %d, rx : %d, ry : %d, bx : %d, by : %d\n", move, rx, ry, bx, by);
		for (i = 0; i < 4; i++) {
			int nrx = rx, nry = ry, nbx = bx, nby = by, rchk = 0, bchk = 0;
			while (true) {
				if (board[nrx][nry] == '#') {
					nrx -= nxt[i][0], nry -= nxt[i][1];
					break;
				}
				else if (board[nrx][nry] == 'O') break;
				else if (nbx == nrx && nby == nry) {
					nrx -= nxt[i][0], nry -= nxt[i][1];
					rchk = 1;
					break;
				}
				nrx += nxt[i][0], nry += nxt[i][1];
			}

			while (true) {
				if (board[nbx][nby] == '#') {
					nbx -= nxt[i][0], nby -= nxt[i][1];
					break;
				}
				else if (nbx == nrx && nby == nry) {
					if (board[nrx][nry] != 'O') {
						nbx = nrx - nxt[i][0], nby = nry - nxt[i][1];
					}
					break;
				}
				else if (board[nbx][nby] == 'O') break;
				nbx += nxt[i][0], nby += nxt[i][1];
			}
			if (rchk) nrx = nbx - nxt[i][0], nry = nby - nxt[i][1];
			//printf("i : %d, nrx : %d, nry : %d, nbx : %d, nby : %d, rchk : %d\n", i, nrx, nry, nbx, nby, rchk);
			que.push(BInfo{ move + 1, nrx, nry, nbx, nby });
		}
	}
	printf("%d", ret == 0 ? -1 : ret);
}*/

/*int visited[8][8][1<<14], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //1473 미로 탈출 (푸는 중)
vector<vector<char>> board;
typedef struct state {
	int x;
	int y;
	int move;
	int rotate;
	vector<vector<int>> changeState;
	vector<vector<char>> board;
}State;

int main() {
	int i, j, n, m, k;
	scanf("%d%d", &n, &m);
	board.resize(n + 1);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		board[i].push_back(' ');
		for (j = 1; j <= m; j++) {
			scanf("%c", &k);
			board[i].push_back(k);
		}
		fgetc(stdin);
	}

	vector<vector<int>> initState(n+1);
	for (i = 1; i <= n; i++) {
		for (j = 0; j <= m; j++) {
			initState[i].push_back(0);
		}
	}
	queue<State> que;
	que.push(State{ 1, 1, 0, 0, initState, board});
	int ret = 0;
	while (!que.empty()) {
		int x = que.front().x,
			y = que.front().y,
			move = que.front().move,
			rotate = que.front().rotate;
		vector<vector<char>> brd = que.front().board, tmpBoard(n + 1);
		vector<vector<int>> stat = que.front().changeState, tmpState(n + 1);
		que.pop();
		if (x == n && y == m) {
			ret = move;
			break;
		}
		if (visited[x][y][rotate]) continue;
		visited[x][y][rotate] = 1;
		for (i = 1; i <= n; i++) {
			tmpBoard[i].push_back(' ');
			for (j = 1; j <= m; j++) {
				tmpBoard[i].push_back(brd[i][j]);
			}
		}

		for (i = 1; i <= n; i++) {
			for (j = 0; j <= m; j++) {
				tmpState[i].push_back(stat[i][j]);
			}
		}

		for (i = 0; i < 4; i++) {
			int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1], chk=0;
			if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || brd[nxtX][nxtY] == 'B') continue;
			if (!(i % 2)) {
				if (brd[x][y] == 'A') {
					if (brd[nxtX][nxtY] == 'A' || brd[nxtX][nxtY] == 'D') chk = 1;
				}
				else if (brd[x][y] == 'D') {
					if (brd[nxtX][nxtY] == 'A' || brd[nxtX][nxtY] == 'D') chk = 1;
				}
			}
			else {
				if (brd[x][y] == 'A') {
					if (brd[nxtX][nxtY] == 'A' || brd[nxtX][nxtY] == 'C') chk = 1;
				}
				else if (brd[x][y] == 'C') {
					if (brd[nxtX][nxtY] == 'A' || brd[nxtX][nxtY] == 'C') chk = 1;
				}
			}
			if (chk) {
				int r = 0, idx=n;
				for (j = 1; j <= n; j++) {
					if (stat[j][nxtY] == 1) r |= (1 << (j - 1));
				}
				for (j = 1; j <= m; j++) {
					if (j == nxtY) continue;
					if (stat[nxtX][j] == 1) r |= (1 << idx);
					idx++;
				}
				que.push(State{ nxtX, nxtY, move + 1, r, stat, brd });
			}
		}
		for (i = 1; i <= n; i++) {
			char& ch = tmpBoard[i][y];
			if (ch == 'C') ch = 'D';
			else if (ch == 'D') ch = 'C';
			if(ch=='C'||ch=='D') tmpState[i][y] ^= 1;
		}

		for (i = 1; i <= m; i++) {
			char& ch = tmpBoard[x][i];
			if (ch == 'C') ch = 'D';
			else if (ch == 'D') ch = 'C';
			if(ch=='C'||ch=='D') tmpState[x][i] ^= 1;
		}
		int idx=n, r = 0;
		for (i = 1; i <= n; i++) {
			if (tmpState[i][y]==1) r ^= (1 << (i - 1));
		}
		for (i = 1; i <= m; i++) {
			if (i == y) continue;
			if (tmpState[x][i]==1) r ^= (1 << idx);
			idx++;
		}
		que.push(State{ x, y, move + 1, r, tmpState, tmpBoard });
	}
	printf("%d", ret == 0 ? -1 : ret);
}*/

/*char board[51][51]; //1445 일요일 아침의 데이트
int visited[51][51], nxt[4][2] = { {0,1}, {1, 0}, {0, -1}, {-1, 0} };
pair<int, int> dp[51][51];
typedef struct info {
	int x;
	int y;
	int dust;
	int adjDust;
}Info;
int main() {
	int i, j, n, m, INF = 987654321;
	queue<Info> que;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'S') {
				que.push(Info{ i, j, 0, 0 });
			}
			dp[i][j] = { INF, INF };
		}
		fgetc(stdin);
	}

	int rDust=INF, rAdjDust=INF;
	while (!que.empty()) {
		int x = que.front().x,
			y = que.front().y,
			dust = que.front().dust,
			adjDust = que.front().adjDust;
		que.pop();
		if (board[x][y] == 'F') {
			if (rDust > dust) {
				rDust = dust;
				rAdjDust = adjDust;
			}
			else if (rDust == dust && rAdjDust > adjDust) rAdjDust = adjDust;
			continue;
		}
		if (board[x][y]!='S'&&board[x][y] != 'g') {
			for (i = 0; i < 4; i++) {
				int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
				if (board[nxtX][nxtY] == 'g') {
					adjDust++;
					break;
				}
			}
		}
		if (visited[x][y]&&(dp[x][y].first<dust||(dp[x][y].first==dust&&dp[x][y].second<=adjDust))) continue;
		visited[x][y] = 1;
		dp[x][y] = { dust, adjDust };
		for (i = 0; i < 4; i++) {
			int nxtX = x + nxt[i][0], nxtY =y+ nxt[i][1];
			if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m) continue;
			if (board[nxtX][nxtY] == 'g') que.push(Info{ nxtX, nxtY, dust + 1, adjDust });
			else que.push(Info{ nxtX, nxtY, dust, adjDust });
		}
	}
	printf("%d %d\n", rDust, rAdjDust);
}*/

/*int n, m, arr[8], chk[8]; //15654 N과 M(5)

void dfs(int idx, vector<int> vec) {
	if (idx == m) {
		for (auto it : vec){
			if (it == 0) break;
			printf("%d ", it);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		if (chk[i]) continue;
		vec[idx] = arr[i];
		chk[i] = 1;
		dfs(idx + 1, vec);
		chk[i] = 0;
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, vector<int>(n+1));
}*/

/*int n, m, arr[8]; //15655 N과 M(6)

void dfs(int idx, int jdx, vector<int> vec) {
	if (idx == m) {
		for (auto it : vec) {
			if (it == 0) break;
			printf("%d ", it);
		}
		printf("\n");
		return;
	}
	for (int i = jdx+1; i < n; i++) {
		vec[idx] = arr[i];
		dfs(idx + 1, i, vec);
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, -1, vector<int>(n + 1));
}*/

/*int n, m, arr[8]; //15656 N과 M(7)

void dfs(int idx, vector<int> vec) {
	if (idx == m) {
		for (auto it : vec) {
			if (it == 0) break;
			printf("%d ", it);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		vec[idx] = arr[i];
		dfs(idx + 1, vec);
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, vector<int>(n + 1));
}*/

/*int n, m, arr[8]; //15657 N과 M(8)

void dfs(int idx, int jdx, vector<int> vec) {
	if (idx == m) {
		for (auto it : vec) {
			if (it == 0) break;
			printf("%d ", it);
		}
		printf("\n");
		return;
	}
	for (int i = jdx; i < n; i++) {
		vec[idx] = arr[i];
		dfs(idx + 1, i, vec);
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, 0, vector<int>(n + 1));
}*/

/*vector<vector<int>> vec; //15663 N과 M(9)
int n, m, arr[8], visited[8];
vector<string> s;
void dfs(int idx, vector<int> vec) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", vec[i]);
		}
		printf("\n");
		return;
	}
	int before = 0;
	for (int i = 0; i < n; i++) {
		if (before == arr[i]||visited[i]) continue;
		before = arr[i];
		vec[idx] = arr[i];
		visited[i] = 1;
		dfs(idx + 1, vec);
		visited[i] = 0;
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, vector<int>(n + 1));
}*/

/*vector<vector<int>> vec; //15663 N과 M(10)
int n, m, arr[8], visited[8];
set<string> s;

bool cmp(string a, string b) {
	int i = 0, j = 0, aLen = a.length(), bLen = b.length();
	while (true) {
		int tmpA = 0, tmpB = 0;
		while (i < aLen && a[i] != ' ') {
			tmpA *= 10;
			tmpA += a[i++] - '0';
		}

		while (j < bLen && b[j] != ' ') {
			tmpB *= 10;
			tmpB += b[j++] - '0';
		}
		if (tmpA != tmpB) return tmpA < tmpB;
		i++;
		j++;
	}
}
void dfs(int idx, int ldx, string str) {
	if (idx == m) {
		s.insert(str);
		return;
	}
	for (int i = ldx+1; i < n; i++) {
		if (visited[i]) continue;
		string tmp = str;
		tmp += to_string(arr[i]) + " ";
		visited[i] = 1;
		dfs(idx + 1, i, tmp);
		visited[i] = 0;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	string str = "";
	dfs(0, -1, str);
	vector<string> ret;
	for (auto it : s) {
		ret.push_back(it);
	}
	sort(ret.begin(), ret.end(), cmp);
	for (auto it : ret) {
		cout << it << endl;
	}
}*/

/*vector<vector<int>> vec; //15665 N과 M(11)
int n, m, arr[8];
vector<string> s;
void dfs(int idx, vector<int> vec) {
	if (idx == m) {
		for (int i=0; i<m; i++){
			printf("%d ", vec[i]);
		}
		printf("\n");
		return;
	}
	int before = 0;
	for (int i = 0; i < n; i++) {
		if (before == arr[i]) continue;
		before = arr[i];
		vec[idx] = arr[i];
		dfs(idx + 1, vec);
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, vector<int>(n+1));
}*/

/*vector<vector<int>> vec; //15666 N과 M(12)
int n, m, arr[8], visited[8];
vector<string> s;
void dfs(int idx, int ldx, vector<int> vec) {
	if (idx == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", vec[i]);
		}
		printf("\n");
		return;
	}
	int before = 0;
	for (int i = ldx; i < n; i++) {
		if (before == arr[i]||visited[i]) continue;
		before = arr[i];
		vec[idx] = arr[i];
		dfs(idx + 1, i, vec);
	}
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	dfs(0, 0, vector<int>(n + 1));
}*/

/*int main() {
	int n, idx = 1, dp[20];
	char s[20];
	scanf("%d", &n);
	scanf("%s", s);
	dp[0] = s[0] - '0';
	if (n > 1) {
		if (s[1] == '+') dp[1] = (s[0] - '0') + (s[2] -'0');
		if (s[1] == '-') dp[1] = (s[0] - '0') - (s[2] - '0');
		if (s[1] == '*') dp[1] = (s[0] - '0') * (s[2] - '0');
		idx = 2;
		for (int i = 4; i < n; i += 2) {
			int a = s[i - 2]-'0', b = s[i] - '0';
			if (s[i - 1] == '+') {
				if (s[i - 3] == '+') dp[idx] = max(dp[idx - 1] + b, dp[idx - 2] + a + b);
				else if (s[i - 3] == '-') dp[idx] = max(dp[idx - 1] + b, dp[idx - 2] - (a+b));
				else dp[idx] = max(dp[idx - 1] + b, dp[idx - 2] * (a + b));
			}
			else if (s[i - 1] == '-') {
				if (s[i - 3] == '+') dp[idx] = max(dp[idx - 1] - b, dp[idx - 2] + a-b);
				else if (s[i - 3] == '-') dp[idx] = max(dp[idx - 1] - b, dp[idx - 2] - (a-b));
				else dp[idx] = max(dp[idx - 1] - b, dp[idx - 2] * (a-b));
			}
			else {
				if (s[i - 3] == '+') dp[idx] = max(dp[idx - 1] * b, dp[idx - 2] + a*b);
				else if (s[i - 3] == '-') dp[idx] = max(dp[idx - 1] *b, dp[idx - 2] - (a*b));
				else dp[idx] = max(dp[idx - 1] * b, dp[idx - 2] * (a*b));
			}
			idx++;
		}
	}
	for (int i = 0; i < idx; i++) {
		printf("%d ", dp[i]);
	}
	printf("\n");
	printf("%d", dp[idx-1]);
}*/

/*int n; //16637 괄호 추가하기
char s[20];
const int INF = (1 << 31);
int func(int idx, int sidx, vector<pair<int, int>> vec) {
	if (sidx == n+1) {
		int j=1, i = 1, ret=vec[0].first;
		for (j = 1; j < vec.size(); j++) {
			if (vec[j].first == -INF) break;
			if (vec[j-1].second) i += 2; //합침
			if (s[i] == '+') ret += vec[j].first;
			else if (s[i] == '-') ret -= vec[j].first;
			else ret *= vec[j].first;
			i += 2;
		}
		return ret;
	}

	int ret = -INF;
	vec[idx] = { s[sidx] - '0', 0 };
	ret = max(ret, func(idx + 1, sidx + 2, vec));
	if (sidx + 2 < n) {
		if (s[sidx + 1] == '+') vec[idx] = { (s[sidx] - '0') + (s[sidx + 2] - '0'), 1 };
		else if (s[sidx + 1] == '-') vec[idx] = { (s[sidx] - '0') - (s[sidx + 2] - '0'), 1 };
		else vec[idx] = { (s[sidx] - '0') * (s[sidx + 2] - '0'), 1 };
		ret = max(ret, func(idx + 1, sidx + 4, vec));
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &n);
	scanf("%s", s);
	printf("%d", func(0, 0, vector<pair<int, int>>(n / 2 + 1, { -INF, 0 })));
}*/

/*int n, board[17][17], dp[17][17][17][17][3]; //17070 파이프 옮기기 1

int func(int a, int b, int c, int d, int state) { //state 0 : 가로 1 : 세로 2 : 대각선
	if ((a == n && b == n) || (c == n && d == n)) {
		return 1;
	}
	int &ret = dp[a][b][c][d][state];
	if (ret != -1) return ret;
	ret = 0;
	switch (state) {
	case 0: //가로
		if (d + 1 <= n && board[c][d + 1] == 0) {
			ret += func(a, b+1, c, d + 1, state);
		}
		if (d + 1 <= n && c + 1 <= n && board[c][d + 1] == 0 && board[c + 1][d] == 0 && board[c + 1][d + 1] == 0)
			ret += func(a, b + 1, c + 1, d + 1, 2);
		break;
	case 1: //세로
		if (c + 1 <= n && board[c + 1][d] == 0) ret += func(a + 1, b, c + 1, d, state);
		if (d + 1 <= n && c + 1 <= n && board[c][d + 1] == 0 && board[c + 1][d] == 0 && board[c + 1][d + 1] == 0)
			ret += func(a + 1, b, c + 1, d + 1, 2);
		break;
	default:
		if (d + 1 <= n && board[c][d + 1] == 0) {
			ret += func(a + 1, b + 1, c, d + 1, 0);
		}
		if (c + 1 <= n && board[c + 1][d] == 0) ret += func(a + 1, b + 1, c + 1, d, 1);
		if (d + 1 <= n && c + 1 <= n && board[c][d + 1] == 0 && board[c + 1][d] == 0 && board[c + 1][d + 1] == 0)
			ret += func(a + 1, b + 1, c + 1, d + 1, state);
		break;
	}
	return ret;
}
int main() {
	int i, j, k, l, m;
	for(i = 0; i < 17; i++) {
		for (j = 0; j < 17; j++) {
			for (k = 0; k < 17; k++) {
				for (l = 0; l < 17; l++) {
					for (m = 0; m < 3; m++) dp[i][j][k][l][m] = -1;
				}
			}
		}
	}
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) scanf("%d", &board[i][j]);
	}
	printf("%d", func(1, 1, 1, 2, 0));
}*/

/*int n, m, d, board[16][16], cpy[16][16]; //17135 캐슬 디펜스
typedef struct archer {
	int x;
	int y;
	int z;
}Archer;
vector<Archer> vec;

void func(int idx, int ldx, vector<int> tmp) {
	if (idx == 3) {
		vec.push_back(Archer{ tmp[0], tmp[1], tmp[2] });
		return;
	}
	for (int i = ldx + 1; i <= m; i++) {
		tmp[idx] = i;
		func(idx + 1, i, tmp);
	}
}

int nxt[3][2] = { {0, -1}, {1, 0}, {0, 1} };
int main() {
	int i, j, k;
	scanf("%d%d%d", &n, &m, &d);
	for (i = n; i >= 1; i--) {
		for (j = 1; j <= m; j++) scanf("%d", &board[i][j]);
	}
	func(0, 0, vector<int>(3));
	int ret = 0;
	vector<int> tmp(3);
	for (auto it : vec) {
		tmp[0] = it.x, tmp[1] = it.y, tmp[2] = it.z;
		int tmpRet = 0;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) cpy[i][j] = board[i][j];
		}
		while (true) {
			int chk = 0;
			for (i = 1; i <= n; i++) {
				for (j = 1; j <= m; j++) {
					if (cpy[i][j]) chk = 1;
				}
			}
			if (!chk) break;
			for (k = 0; k < 3; k++) {
				queue<pair<int, pair<int, int>>> que;
				que.emplace(1, make_pair(1, tmp[k]));
				while (!que.empty()) {
					int move=que.front().first,
						x = que.front().second.first,
						y = que.front().second.second;
					que.pop();
					if (move>d) break;
					if (cpy[x][y] >= 1) {
						if (cpy[x][y] == 1) tmpRet++;
						cpy[x][y] = 2;
						break;
					}
					for (i = 0; i < 3; i++) {
						int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
						if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m) continue;
						que.emplace(move+1, make_pair(nxtX, nxtY));
					}
				}
			}
			for (i = 1; i < n; i++) {
				for (j = 1; j <= m; j++) {
					if (cpy[i + 1][j] == 2) cpy[i+1][j] = 0;
					cpy[i][j] = cpy[i + 1][j];
				}
			}
			for (j = 1; j <= m; j++) {
				cpy[n][j] = 0;
			}
		}
		
		ret = max(ret, tmpRet);
	}
	printf("%d", ret);
}*/

/*int board[10][10], INF=987654321; //17136 색종이 붙이기

int chk(int x, int y) {
	int i, j;
	if (board[x][y] != 0) {
		if (x + 1 < 10 && y + 1 < 10) {
			for (i = x; i < x + 2; i++) {
				for (j = y; j < y + 2; j++) {
					if (board[i][j] == 0) return 1;
				}
			}
		}
		else return 1;

		if (x + 2 < 10 && y + 2 < 10) {
			for (i = x; i < x + 3; i++) {
				for (j = y; j < y + 3; j++) {
					if (board[i][j] == 0) return 2;
				}
			}
		}
		else return 2;

		if (x + 3 < 10 && y + 3 < 10) {
			for (i = x; i < x + 4; i++) {
				for (j = y; j < y + 4; j++) {
					if (board[i][j] == 0) return 3;
				}
			}
		}
		else return 3;

		if (x + 4 < 10 && y + 4 < 10) {
			for (i = x; i < x + 5; i++) {
				for (j = y; j < y + 5; j++) {
					if (board[i][j] == 0) return 4;
				}
			}
		}
		else return 4;

		return 5;
	}
	return 0;
}
int func(int idx, int one, int two, int three, int four, int five) {
	int i, j, k, p=0, x = idx / 10, y = idx % 10;
	if (idx == 100) {
		for (i = 0; i < 10; i++) {
			for (j = 0; j < 10; j++) {
				if (board[i][j] == 1) {
					return INF;
				}
			}
		}
		return 0;
	}
	int ret=INF;
	p = chk(x, y);
	int arr[5] = { one, two, three, four, five };
	for (i = 0; i < p; i++) {
		if (arr[i] == 0) continue;
		arr[i]--;
		for (j = x; j <= x + i; j++) {
			for (k = y; k <= y + i; k++) {
				board[j][k] = 0;
			}
		}
		ret = min(ret, 1 + func(idx+1, arr[0], arr[1], arr[2], arr[3], arr[4]));
		arr[i]++;
		for (j = x; j <= x + i; j++) {
			for (k = y; k <= y + i; k++) {
				board[j][k] = 1;
			}
		}
	}
	if(p==0) ret = func(idx+1, one ,two, three, four, five);
	return ret;
}
int main() {
	int i, j, k, l, m, n;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) scanf("%d", &board[i][j]);
	}

	int ret = func(0, 5, 5, 5, 5, 5);
	printf("%d\n", ret==INF ? -1 : ret);
}*/

/*int n, visited[9], arr[50][9]; //17281 야구
vector<vector<int>> vec;

void dfs(int idx, vector<int> tmp) {
	if (idx == 9) {
		vec.push_back(tmp);
		return;
	}
	if (idx == 3) dfs(idx + 1, tmp);
	else {
		for (int i = 0; i < 9; i++) {
			if (visited[i]) continue;
			visited[i] = 1;
			tmp[idx] = i + 1;
			dfs(idx + 1, tmp);
			visited[i] = 0;
		}
	}
}

int main() {
	int i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	visited[0] = 1;
	dfs(0, vector<int>(9, 1));
	int inn, cur, idx, run, out, ret=0, tmpRet;
	for (auto it : vec) {
		idx=0, tmpRet=0;
		for (inn = 0; inn < n; inn++) {
			run=0, out = 0;
			while(true){
				cur = it[idx]-1;
				if (arr[inn][cur] == 0) {
					out++;
					if (out == 3) {
						idx = (idx + 1) % 9;
						break;
					}
				}
				else if (arr[inn][cur] == 1) {
					if (run == 0) run = 1;
					else {
						if (run & 4) tmpRet++;
						run <<= 1;
						run += 1;
					}
				}
				else if (arr[inn][cur] == 2) {
					if (run == 0) run = 2;
					else {
						if (run & 2) tmpRet++;
						if (run & 4) tmpRet++;
						run <<= 2;
						run += 2;
					}
				}
				else if(arr[inn][cur]==3){
					if (run == 0) run = 4;
					else {
						if (run & 1) tmpRet++;
						if (run & 2) tmpRet++;
						if (run & 4) tmpRet++;
						run <<= 3;
						run += 4;
					}
				}
				else {
					tmpRet++;
					if (run & 1) tmpRet++;
					if (run & 2) tmpRet++;
					if (run & 4) tmpRet++;
					run = 0;
				}
				run %= 8;
				idx = (idx + 1) % 9;
			}
		}
		ret = max(ret, tmpRet);
	}
	printf("%d", ret);
}*/

/*const int MAX = 999999999; //3954 Brainf**k 인터프리터
int main() {
	int i, t, sm, sc, si;
	scanf("%d", &t);
	while (t--) {
		int arr[100000], arrPnt=0, inputPnt=0;
		char com[4096], input[4096];
		int brac[4096], excuted[4096];
		scanf("%d%d%d", &sm, &sc, &si);
		fill(arr, arr + sm, 0);
		scanf("%s", com);
		scanf("%s", input);
		stack<int> stk;
		for (i = 0; i < sc; i++) {
			if (com[i] == '[') {
				stk.push(i);
			}
			else if (com[i] == ']') {
				brac[i] = stk.top();
				brac[stk.top()] = i;
				stk.pop();
			}
			else brac[i] = 0;
			excuted[i] = 0;
		}

		int ex=0, curBrac=-1;
		for (i = 0; i < sc; i++) {
			if (ex>=50000000) {
				for (int j = 0; j < sc; j++) {
					if (com[j] == '[' && j <= i && i <= brac[j] && excuted[j]==0) {
						curBrac = j;
					}
				}
				printf("Loops %d %d\n", curBrac, brac[curBrac]);
				break;
			}
			switch (com[i]) {
			case '-':
				arr[arrPnt]--;
				if (arr[arrPnt] < 0) arr[arrPnt] = 255;
				break;
			case '+':
				arr[arrPnt]++;
				if (arr[arrPnt] > 255) arr[arrPnt] = 0;
				break;
			case '<':
				arrPnt--;
				if (arrPnt < 0) arrPnt = sm-1;
				break;
			case '>':
				arrPnt++;
				if (arrPnt > sm-1) arrPnt = 0;
				break;
			case '[':
				if (arr[arrPnt] == 0) i = brac[i];
				break;
			case ']':
				if (arr[arrPnt] != 0) {
					i = brac[i];	
				}
				else {
					excuted[i] = 1;
					excuted[brac[i]] = 1;
				}
				break;
			case '.':
				break;
			case ',':
				if (inputPnt == si) arr[arrPnt] = 255;
				else arr[arrPnt] = input[inputPnt++];
				break;
			}
			ex++;
		}
		if (ex < 50000000) printf("Terminates\n");
	}
}*/

/*int n, m, k, board[50][50], tmp[50][50], ro[6][3], visited[6], MAX=999999; //17406 배열 돌리기 4
vector<vector<int>> vec;

void dfs(int idx, vector<int> t) {
	if (idx == k) {
		vec.push_back(t);
		return;
	}
	for (int i = 0; i < k; i++) {
		if (visited[i]) continue;
		t[idx] = i;
		visited[i] = 1;
		dfs(idx + 1, t);
		visited[i] = 0;
	}
}
int main() {
	int i, j;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) scanf("%d", &board[i][j]);
	}

	for (i = 0; i < k; i++) {
		for(j=0; j<3; j++)
			scanf("%d", &ro[i][j]);
	}

	dfs(0, vector<int>(k));
	int ret = MAX;
	for (auto it : vec) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) tmp[i][j] = board[i][j];
		}

		for (auto idx : it) { //회전 수행
			int r = ro[idx][0]-1, c = ro[idx][1]-1, s = ro[idx][2];
			for (i = 1; i <= s; i++) {
				int ur = tmp[r - i][c + i];
				for (j = c + i; j > c - i; j--) { //윗줄
					tmp[r - i][j] = tmp[r - i][j - 1];
				}

				for (j = r - i; j < r + i; j++) { //왼쪽줄
					tmp[j][c - i] = tmp[j + 1][c - i];
				}

				for (j = c - i; j < c + i; j++) { //아랫줄
					tmp[r + i][j] = tmp[r + i][j + 1];
				}

				for (j = r + i; j > r - i + 1; j--) { //오른쪽줄
					tmp[j][c + i] = tmp[j - 1][c + i];
				}

				tmp[r - i + 1][c + i] = ur;
			}
		}

		int p = MAX;
		for (i = 0; i < n; i++) {
			int tmpRet = 0;
			for (j = 0; j < m; j++) {
				tmpRet += tmp[i][j];
			}
			if (p > tmpRet) p = tmpRet;
		}
		if (ret > p) ret = p;
	}
	printf("%d", ret);
}*/

/*int n, population[11], adj[11][11], INF = 987654321, visited[11], ccc[11], MAX=987654321; //17471 게리맨더링
vector<vector<int>> combi;

void dfs(int idx, int lim, vector<int> tmp) {
	if (idx == lim) {
		combi.push_back(tmp);
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (visited[i]) continue;
		tmp[idx] = i;
		visited[i] = 1;
		dfs(idx + 1, lim, tmp);
		visited[i] = 0;
	}
}
int main() {
	int i, j, adjNum, a;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &population[i]);
	}
	for (i = 1; i <= n; i++) {
		scanf("%d", &adjNum);
		for (j = 0; j < adjNum; j++) {
			scanf("%d", &a);
			adj[i][a] = 1;
		}
	}

	for (i = 1; i <= n / 2; i++) {
		fill(visited, visited + n + 1, 0);
		dfs(0, i, vector<int>(i));
	}
	int ret = MAX;
	for (auto it : combi) {
		int here, chk = 0;
		fill(visited, visited + n + 1, 0);
		fill(ccc, ccc + n + 1, 0);
		queue<int> que;
		que.push(it[0]);
		for (auto k : it) {
			ccc[k] = 1;
		}
		while (!que.empty()) {
			here = que.front();
			que.pop();
			visited[here] = 1;
			for (int i = 1; i <= n; i++) {
				if (visited[i]||!ccc[i]) continue;
				if (adj[here][i]) que.push(i);
			}
		}
		for (auto k : it) {
			if (!visited[k]) {
				chk = 1;
				break;
			}
		}
		if (chk) continue;
		for (i = 1; i <= n; i++) {
			if (!visited[i]) {
				que.push(i);
				while (!que.empty()) {
					here = que.front();
					que.pop();
					visited[here] = 2;
					for (j = 1; j <= n; j++) {
						if (visited[j]) continue;
						if (adj[here][j]) que.push(j);
					}
				}
				break;
			}
		}
		for (i = 1; i <= n; i++) {
			if (!visited[i]) {
				chk = 1;
				break;
			}
		}
		if (!chk) {
			int sa = 0, sb = 0;
			for (i = 1; i <= n; i++) {
				if (visited[i] == 1) sa += population[i];
				else sb += population[i];
			}
			ret = min(ret, abs(sa - sb));
		}
	}
	printf("%d", ret==MAX ? -1 : ret);
}*/

/*int parent[11], depth[11], adj[11][11], board[11][11], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }, visited[11][11], INF=987654321; //17472 다리 만들기 2

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	if (depth[a] == depth[b]) depth[a]++;
	parent[b] = a;
	return true;
}

int main() {
	int i, j, k, n, m;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	int idx = 2;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (board[i][j] == 1) {
				queue<pair<int, int>> que;
				que.emplace(i, j);
				while (!que.empty()) {
					int x = que.front().first, y = que.front().second;
					que.pop();
					board[x][y] = idx;
					if (visited[x][y]) continue;
					visited[x][y] = 1;
					for (k = 0; k < 4; k++) {
						int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
						if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || board[nxtX][nxtY] == 0) continue;
						que.emplace(nxtX, nxtY);
					}
				}
				idx++;
			}
		}
	}

	for (i = 1; i < idx - 1; i++) {
		parent[i] = i;
		depth[i] = 1;
		for (j = 1; j < idx - 1; j++) adj[i][j] = INF;
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (board[i][j] != 0) {
				int here = board[i][j], len=0;
				for (int x = i + 1; x <= n; x++) {
					if (board[x][j] == here) break;
					if (board[x][j] != 0) { //다른 섬에 도착
						if(len>1&& adj[here - 1][board[x][j] - 1] > len){
							adj[here - 1][board[x][j] - 1] = len;
							adj[board[x][j] - 1][here - 1] = len;
						}
						break;
					}
					len++;
				}
				len = 0;
				for (int x = i - 1; x > 0; x--) {
					if (board[x][j] == here) break;
					if (board[x][j] != 0) { //다른 섬에 도착
						if (len > 1 && adj[here - 1][board[x][j] - 1] > len) {
							adj[here - 1][board[x][j] - 1] = len;
							adj[board[x][j] - 1][here - 1] = len;
						}
						break;
					}
					len++;
				}
				len = 0;
				for (int y = j + 1; y<=m; y++) {
					if (board[i][y] == here) break;
					if (board[i][y] != 0) { //다른 섬에 도착
						if (len > 1 && adj[here - 1][board[i][y] - 1] > len) {
							adj[here - 1][board[i][y] - 1] = len;
							adj[board[i][y] - 1][here - 1] = len;
						}
						break;
					}
					len++;
				}
				len = 0;
				for (int y = j - 1; y > 0; y--) {
					if (board[i][y] == here) break;
					if (board[i][y] != 0) { //다른 섬에 도착
						if (len > 1 && adj[here - 1][board[i][y] - 1] > len) {
							adj[here - 1][board[i][y] - 1] = len;
							adj[board[i][y] - 1][here - 1] = len;
						}
						break;
					}
					len++;
				}
			}
		}
	}

	priority_queue<pair<int, pair<int, int>>> pQue;
	for (i = 1; i < idx-1; i++) {
		for (j = 1; j < idx-1; j++) {
			if (adj[i][j] != INF) pQue.emplace(-adj[i][j], make_pair(i, j));
		}
	}
	int ret = 0;
	while (!pQue.empty()) {
		int len = pQue.top().first,
			x = pQue.top().second.first,
			y = pQue.top().second.second;
		pQue.pop();
		if (merge(x, y)) {
			ret -= len;
		}
	}

	int p = find(1);
	for (i = 2; i < idx-1; i++) {
		if (p != find(i)) ret = -1;
	}
	printf("%d", ret);
}*/

////////////////////////////////////////
			     /*트리*/
////////////////////////////////////////

/*struct Node { //11725 트리의 부모 찾기
	int val;
	int parent;
	Node* next;
};

int main() {
	int i, n, a, b;
	int parent[100001];
	Node *nd[100001];
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		parent[i] = 0;
		nd[i] = new Node;
		nd[i]->val = i;
		nd[i]->parent = -1;
		nd[i]->next = NULL;
	}

	for (i = 0; i < n-1; i++) {
		scanf("%d%d", &a, &b);
		Node* tmp = nd[a];
		while (tmp->next != NULL) 
			tmp = tmp->next;

		tmp->next = new Node;
		tmp->next->val = b;
		tmp->next->parent = a;
		tmp->next->next = NULL;

		tmp = nd[b];

		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = new Node;
		tmp->next->val = a;
		tmp->next->parent = b;
		tmp->next->next = NULL;
	}
	parent[1] = -1;
	
	queue<int> que;
	que.push(1);
	while (!que.empty()) {
		int curVal = que.front();
		que.pop();
		Node* tmp = nd[curVal]->next;
		
		while (tmp != NULL) {
			curVal = tmp->val;
			if (!parent[curVal]) {
				parent[curVal] = tmp->parent;
				que.push(curVal);
			}
			tmp = tmp->next;
		}
	}

	for (i = 2; i <= n; i++) {
		printf("%d\n", parent[i]);
	}
}*/

//////////////////////////////////////////////////
/*               트리 지름 알고리즘             */
/* 1. 임의의 정점 x에서 가장 먼 정점 y를 찾는다.*/
/* 2. y에서 가장 먼 정점 z를 찾는다.            */
/* 3. y와 z의 거리가 트리의 지름이다.           */
//////////////////////////////////////////////////

/*const int N = 100001; //1167 트리의 지름
vector<pair<int, int>> ad[N]; //node num, dist
int chk[N], dist[N];
int init = 1, maxa;

void max_dist(int d, int idx) {
	chk[idx] = 1;
	int c = 0;
	for (auto p : ad[idx]) {
		int next = p.first, ret = p.second;
		if (!chk[next]) {
			c = 1;
			max_dist(d + ret, next);
		}
	}
	if (!c) {
		if (maxa < d) {
			maxa = d;
			dist[init] = idx;
		}
	}
}

int main() {
	int i, n;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int num, tmp, d;
		scanf("%d", &num);
		while (true) {
			scanf("%d", &tmp);
			if (tmp == -1) break;
			scanf("%d", &d);
			ad[num].push_back(make_pair(tmp, d));
			ad[tmp].push_back(make_pair(num, d));
		}
	}
	max_dist(0, 1);
	init = dist[1];
	for (i = 1; i <= n; i++) {
		chk[i] = 0;
	}
	max_dist(0, init);
	printf("%d", maxa);
}*/

/*vector<pair<int, int>> ad[10001]; //1967 트리의 지름
int check[10001], prime[10001];
int max_dist(int idx) {
	check[idx] = 1;
	int next, w, ret=0, tmp, chk=0;
	for (auto p : ad[idx]) {
		next=p.first;
		tmp=p.second;
		if (!check[next]) {
			tmp += max_dist(next);
			if (ret < tmp) {
				ret = tmp;
				prime[idx] = prime[next];
			}
			tmp -= max_dist(next);
		}
	}
	return ret;
}

int main() {
	int i, n, parent, child, weight;
	scanf("%d", &n);
	for (i = 0; i < n-1; i++) {
		prime[i + 1] = i + 1;
		scanf("%d%d%d", &parent, &child, &weight);
		ad[parent].push_back(make_pair(child, weight));
		ad[child].push_back(make_pair(parent, weight));
	}
	prime[n] = n;
	int dist = max_dist(1);
	memset(check, 0, sizeof(int)*(n+1));
	printf("%d", max_dist(prime[1]));
}*/

/*pair<char, char> tree[26]; //1991 트리 순회
void preorder(int idx){
	if (idx<0) return; // '.'일때 음수
	printf("%c", idx + 'A');
	preorder(tree[idx].first);
	preorder(tree[idx].second);
}

void inorder(int idx) {
	if (idx < 0) return; // '.'일때 음수
	inorder(tree[idx].first);
	printf("%c", idx + 'A');
	inorder(tree[idx].second);
}

void postorder(int idx) {
	if (idx < 0) return; // '.'일때 음수
	postorder(tree[idx].first);
	postorder(tree[idx].second);
	printf("%c", idx + 'A');
}
int main() {
	int i, n;
	scanf("%d", &n);

	char parent, left, right;
	for (i = 0; i < n; i++) {
		scanf(" %c %c %c", &parent, &left, &right);
		tree[parent - 'A'] = make_pair(left-'A', right-'A');
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);
}*/

/*int n, inorder[100000], in_reverse[100000], postorder[100000];

void func(int ins, int ine, int posts, int poste) {
	if (posts > poste||ins>ine) return;
	int i, num=0;
	printf("%d ", postorder[poste]);
	i = in_reverse[postorder[poste]];
	num = i-ins;
	func(ins, i-1, posts, posts+num-1);
	func(i + 1, ine, posts+num, poste-1);
}

int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &inorder[i]);
		in_reverse[inorder[i]] = i;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &postorder[i]);
	}

	func(0, n - 1, 0, n-1);
}*/

/*int preorder[10000]; //5639 이진 검색 트리

void func(int start, int end) {
	if (start > end) return;
	if (start == end) {
		printf("%d\n", preorder[start]);
		return;		
	}
	int idx=start+1, head = preorder[start];
	while (idx<=end&&head > preorder[idx]) idx++;

	func(start+1, idx - 1);
	func(idx, end);
	printf("%d\n", preorder[start]);
}

int main() {
	int i = 0;
	while (scanf("%d", &preorder[i]) != EOF) 
		i++;
	func(0, i - 1);
}*/

////////////////////////////////////////
			 /*유니온 파인드*/
////////////////////////////////////////

/*int * parent, * level; //1717 집합의 표현

int find(int u) {
	if (u == parent[u]) {
		return u;
	}
	return parent[u] = find(parent[u]);
}

void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return;
	if (level[a] < level[b]) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	parent[b] = a;
	if (level[a] == level[b]) level[a]++;
}

void func(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) printf("YES\n");
	else printf("NO\n");
}
int main() {
	int i, n, m, mod, a, b;
	scanf("%d%d", &n, &m);
	parent = new int[n+1];
	level = new int[n+1];
	for (i = 0; i <= n; i++) {
		parent[i] = i;
		level[i] = 1;
	}

	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &mod, &a, &b);
		if (!mod) { //union
			merge(a, b);
		}
		else {//find
			func(a, b);
		}
	}
}*/

/*int parent[201], level[201], path[1000]; //1976 여행가자

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

void merge(int a, int b) {
	a = find(a);
	b = find(b);
	if (a == b) return;
	if (level[a] < level[b]) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	parent[b] = a;
	if (level[a] == level[b]) level[a]++;
}

bool func(int a, int b) {
	if (find(a) == find(b)) return true;
	else return false;
}
int main() {
	int i, j, n, m, a;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		parent[i] = i;
		level[i] = 1;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &a);
			if (a) merge(i, j);
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d", &path[i]);
	}

	for (i = 0; i < m-1; i++) {
		if (!func(path[i], path[i+1])) break;
	}
	if (i == m - 1) printf("YES");
	else printf("NO");
}*/

/*int parent[200001], level[200001], sz[200001]; //4195 친구 네트워크

int find(int u) {
	if (u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
}

void merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) {
		cout << sz[a] << "\n";
		return;
	}
	if (level[a] < level[b]) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	parent[b] = a;
	if (level[a] == level[b]) level[a]++;
	sz[a] += sz[b];
	cout << sz[a] << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i, t, f;
	cin >> t;
	while (t--) {
		cin >> f;
		map<string, int> mp;
		string s1, s2;
		int idx = 1;
		for (i = 0; i < f; i++) {
			cin >> s1 >> s2;
			if (!mp.count(s1)) {
				mp[s1] = idx++;
				parent[mp[s1]] = mp[s1];
				level[mp[s1]] = 1;
				sz[mp[s1]] = 1;
			}

			if (!mp.count(s2)) {
				mp[s2] = idx++;
				parent[mp[s2]] = mp[s2];
				level[mp[s2]] = 1;
				sz[mp[s2]] = 1;
			}
			merge(mp[s1], mp[s2]);
		}
	}
}*/

/*int main() { //10775 공항
	int i, g, p, a[100000];
	scanf("%d%d", &g, &p);
	vector<int> gate;

	for (i = 1; i <= g; i++) {
		gate.push_back(i);
	}
	for (i = 0; i < p; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < p; i++) {
		auto target = lower_bound(gate.begin(), gate.end(), a[i]);
		if (target == gate.end()) target--;
		if (*target > a[i]) {
			if (target == gate.begin()) break;
			else target--;
		}
		gate.erase(target);
	}
	printf("%d\n", i);
}*/
////////////////////////////////////////
			/*네트워크 플로우 2/5*/
////////////////////////////////////////

/*int n, p, capacity[401][401], flow[401][401]; //17472 도시 왕복하기 1

int getFlow(int source, int sink) {
	int totalFlow = 0;
	while (true) {
		vector<int> parent(n+1, -1);
		queue<int> que;
		parent[source] = source;
		que.push(source);
		int here = 1;
		while (!que.empty() && parent[sink] == -1) {
			here = que.front();
			que.pop();
			for (int there = 1; there <= n; there++) {
				if (capacity[here][there] - flow[here][there] > 0 && parent[there] == -1) {
					parent[there] = here;
					que.push(there);
				}
			}
		}
		if (parent[sink] == -1) break;

		int s, amount = 9999999;
		for (s = sink; s!=source; s = parent[s]) {
			amount = min(amount, (capacity[parent[s]][s] - flow[parent[s]][s]));
		}

		for (s = sink; s != source; s = parent[s]) {
			flow[parent[s]][s]+=amount;
			flow[s][parent[s]]-=amount;
		}
		totalFlow += amount;
	}
	return totalFlow;
}

int main() {
	int i, start, end;
	cin >> n >> p;
	for (i = 0; i < p; i++) {
		cin >> start >> end;
		capacity[start][end] = 1;
	}
	cout<<getFlow(1, 2);
}*/

/*const int MAX = 52; //6086 최대 유량 (array 사용)
int n, p, capacity[MAX+1][MAX+1], flow[MAX+1][MAX+1];

int getFlow(int source, int sink) {
	int totalFlow = 0;
	while (true) {
		vector<int> parent(MAX+1, -1);
		queue<int> que;
		parent[source] = source;
		que.push(source);
		int here;
		while (!que.empty() && parent[sink] == -1) {
			here = que.front();
			que.pop();
			for (int there = 1; there <= MAX; there++) {
				if (capacity[here][there] - flow[here][there] > 0 && parent[there] == -1) {
					parent[there] = here;
					que.push(there);
				}
			}
		}
		if (parent[sink] == -1) break;

		int s, amount = 9999999;
		for (s = sink; s != source; s = parent[s]) {
			amount = min(amount, (capacity[parent[s]][s] - flow[parent[s]][s]));
		}

		for (s = sink; s != source; s = parent[s]) {
			flow[parent[s]][s] += amount;
			flow[s][parent[s]] -= amount;
		}
		totalFlow += amount;
	}
	return totalFlow;
}

int ctoi(char obj) {
	if (obj <= 'Z') return obj - 'A';
	return obj - 'a' + 26;
}
int main() {
	int i, cap;
	char start, end;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> start >> end >> cap;
		int here = ctoi(start), there = ctoi(end);
		capacity[here][there] += cap;
		capacity[there][here] += cap;
	}
	cout<<getFlow(0, 25);
}*/

/*const int MAX = 52; //6086 최대 유량 (node간의 link를 linked list를 통해 표현)
const int INF = 987654321;
//int capacity[MAX + 1][MAX + 1];
int capacity[MAX][MAX], flow[MAX][MAX];
vector<int> link[MAX];
int getFlow(int source, int sink) {
	int totalFlow = 0;
	while (true) {
		vector<int> parent(MAX + 1, -1);
		queue<int> que;
		parent[source] = source;
		que.push(source);
		int here;

		while (!que.empty() && parent[sink] == -1) {
			here = que.front();
			que.pop();
			for (auto there : link[here]) {
				if (capacity[here][there]-flow[here][there]> 0 && parent[there] == -1) {
					parent[there] = here;
					que.push(there);
				}
			}
		}

		if (parent[sink] == -1) break;
		int amount = INF;
		for (int s = sink; s != source; s = parent[s]) {
			amount = min(amount, capacity[parent[s]][s] - flow[parent[s]][s]);
		}

		for (int s = sink; s != source; s = parent[s]) {
			flow[parent[s]][s] += amount;
			flow[s][parent[s]] -= amount;
		}

		totalFlow += amount;
	}
	return totalFlow;
}

int ctoi(char obj) {
	if (obj <= 'Z') return obj - 'A';
	return obj - 'a' + 26;
}
int main() {
	int i, n, cap;
	char start, end;
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> start >> end >> cap;
		int here = ctoi(start), there = ctoi(end);
		link[here].push_back(there);
		capacity[here][there] += cap;
		link[there].push_back(here);
		capacity[there][here] += cap;
	}
	cout << getFlow(0, 25);
}*/

/*const int INF = 987654321; //2316 도시 왕복하기 2
int n, p;
int capacity[802][802], flow[802][802];

int getFlow(int source, int sink) {
	int totalFlow = 0;
	while (true) {
		vector<int> parent(2 * n + 1, -1);
		queue<int> que;
		parent[source] = source;
		que.push(source);
		int here;
		while (!que.empty() && parent[sink] == -1) {
			here = que.front();
			que.pop();
			for (int there = 1; there <= 2 * n; there++) {
				if (capacity[here][there] - flow[here][there] > 0 && parent[there] == -1) {
					parent[there] = here;
					que.push(there);
				}
			}
		}
		if (parent[sink] == -1) break;

		int amount = INF;
		for (int s = sink; s != source; s = parent[s]) {
			amount = min(amount, capacity[parent[s]][s] - flow[parent[s]][s]);
		}

		for (int s = sink; s != source; s = parent[s]) {
			flow[parent[s]][s] += amount;
			flow[s][parent[s]] -= amount;
		}
		totalFlow += amount;
	}
	return totalFlow;
}

int main() {
	int i, start, end;
	cin >> n >> p;

	//짝수 번째 노드가 유량을 보내고, 홀수 번째 노드가 유량을 얻는 형식
	for (i = 1; i <= n; i++) {
		capacity[i * 2 - 1][i * 2] = 1;
	}
	for (i = 0; i < p; i++) {
		cin >> start >> end;
		capacity[start * 2][end * 2 - 1] = 1;
		capacity[end * 2][start * 2 - 1] = 1;
	}
	cout<<getFlow(2, 3);
}*/



////////////////////////////////////////
		  /*랜덤 문제*/
////////////////////////////////////////

/*int main() { //2003 수들의 합 2
	int i, n, m, ret=0, prev=0;
	cin >> n >> m;
	int arr[10000] = { 0 };
	int sum = 0;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sum = arr[0];
	i = 0;
	while (i < n) {
		if (sum == m) {
			ret++;
			sum -= arr[prev++];
		}
		else if (sum > m) sum -= arr[prev++];
		else sum += arr[++i];
	}
	cout << ret << endl;
}*/

/*int main() { //3944 나머지 계산
	int t;
	cin >> t;
	
	while (t--) {
		int i, b, sum=0;
		char d[10000000];
		scanf("%d", &b);
		scanf("%s", d);

		for (i = 0; i < strlen(d); i++) {
			sum += d[i] - 48;
		}
		printf("%d\n", sum % (b-1));
	}
}*/

/*const int MAX_NODE = 1000000; //2042 구간 합 구하기
typedef long long ll;
int n;
ll arr[MAX_NODE+1], segTree[4*MAX_NODE+1];
ll makeTree(int left, int right, int node) {
	int mid = (left + right) >> 1;
	if (right == left)
		return segTree[node] = arr[left];
	else
		return segTree[node] = makeTree(left, mid, node * 2) + makeTree(mid + 1, right, node * 2 + 1);
}

void update(int left, int right, int node, int idx, ll diff) {
	printf("diff : %d\n", diff);
	if (idx<left || idx>right) return;
	int mid = (left + right) >> 1;
	segTree[node] += diff;
	if (left == right) return;
	update(left, mid, node * 2, idx, diff);
	update(mid + 1, right, node * 2 + 1, idx, diff);
}

ll sum(int left, int right, int node, int start, int end) {
	if (right<start || left>end) return 0;
	if ((left >= start && right <= end)) {
		printf("left : %d, right : %d, %lld\n", left, right, segTree[node]);
		return segTree[node];
	}
	int mid = (left + right) >> 1;
	return sum(left, mid, node*2, start, end) + sum(mid + 1, right, node * 2 + 1, start, end);
}

int main() {
	int i, m, k, a, b;
	ll c;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 1; i <= n; i++) {
		scanf("%lld", &arr[i]);
	}

	makeTree(1, n, 1);

	for (i = 0; i < m + k; i++) {
		scanf("%d%d%lld", &a, &b, &c);
		if (a == 1) {
			ll diff = c - arr[b];
			arr[b] = c;
			update(1, n, 1, b, diff);
		}

		else {
			printf("%lld\n", sum(1, n, 1, b, c));
		}
	}
}*/

/*const int MAX_NODE = 100000, INF=1000000001; //10868 최솟값
int n, arr[MAX_NODE+1], segTree[4*MAX_NODE+1];

int makeTree(int start, int end, int node) {
	if (start == end) return segTree[node] = arr[start];
	else {
		int mid = (start + end) >> 1;
		return segTree[node] = min(makeTree(start, mid, node * 2), makeTree(mid + 1, end, node * 2 + 1));
	}
}

int findMin(int start, int end, int node, int left, int right) {
	if (right<start || left>end) return INF;
	if (left <= start && right >= end) return segTree[node];
	int mid = (start + end) >> 1;
	return min(findMin(start, mid, node * 2, left, right), findMin(mid + 1, end, node * 2 + 1, left, right));
}

int main() {
	int i, m, a, b;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	makeTree(1, n, 1);
	for (i = 1; i <= m; i++) {
		scanf("%d%d", &a, &b);
		printf("%d\n", findMin(1, n, 1, a, b));
	}
}*/

/*const int MAX_NODE = 100000, INF = 1000000001; //2357 최솟값과 최댓값
int n, arr[MAX_NODE + 1], minSegTree[4 * MAX_NODE + 1], maxSegTree[4 * MAX_NODE + 1];

int makeTree(int start, int end, int node, int mode) {
	if (!mode) {
		if (start == end) return minSegTree[node] = arr[start];
		else {
			int mid = (start + end) >> 1;
			return minSegTree[node] = min(makeTree(start, mid, node * 2, mode), makeTree(mid + 1, end, node * 2 + 1, mode));
		}
	}
	else {
		if (start == end) return maxSegTree[node] = arr[start];
		else {
			int mid = (start + end) >> 1;
			return maxSegTree[node] = max(makeTree(start, mid, node * 2, mode), makeTree(mid + 1, end, node * 2 + 1, mode));
		}
	}
}

int find(int start, int end, int node, int left, int right, int mode) {
	if (!mode) {
		if (right<start || left>end) return INF;
		if (left <= start && right >= end) return minSegTree[node];
		int mid = (start + end) >> 1;
		return min(find(start, mid, node * 2, left, right, mode), find(mid + 1, end, node * 2 + 1, left, right, mode));
	}
	else {
		if (right<start || left>end) return -INF;
		if (left <= start && right >= end) return maxSegTree[node];
		int mid = (start + end) >> 1;
		return max(find(start, mid, node * 2, left, right, mode), find(mid + 1, end, node * 2 + 1, left, right, mode));
	}
}

int main() {
	int i, m, a, b;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	makeTree(1, n, 1, 0);
	makeTree(1, n, 1, 1);
	for (i = 1; i <= m; i++) {
		scanf("%d%d", &a, &b);
		printf("%d %d\n", find(1, n, 1, a, b, 0), find(1, n, 1, a, b, 1));
	}
}*/

/*int main() { //1934 최소공배수
	int i, t, a, b;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &a, &b);
		int ret = 1;
		if (a > b) swap(a, b);
		for (i = 2; i <= a; i++) {
			while (a % i == 0 && b % i == 0) {
				a /= i;
				b /= i;
				ret *= i;
			}
		}
		printf("%d\n", ret * a * b);
	}
}*/

/*int dp[3][3001]; //16561 3의 배수
int func(int idx, int num) {
	if (idx == 3) {
		if (!num&&num % 3 == 0) return 1;
		else return 0;
	}
	int &ret=dp[idx][num];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 3; i <= num; i += 3) {
		ret += func(idx + 1, num - i);
	}
	return ret;
}

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < 3; i++) {
		for (j = 0; j <= n; j++) {
			dp[i][j] = -1;
		}
	}
	printf("%d", func(0, n));
}*/

/*int main() { //11718 그대로 출력하기, 11719 그대로 출력하기 2
	char s[100];
	while (fgets(s, 100, stdin) != NULL) {
		printf("%s", s);
	}
}*/

/*vector<string> word = {"baby", "sukhwan", "tururu", "turu", "very", "cute", "tururu", "turu", "in", "bed", "tururu", "turu", "baby", "sukhwan" }; //15947 아기 석환 뚜루루 뚜루
int main() {
	int i, n;
	cin >> n;
	n--;
	string& tu = word[n % 14];
	if (tu[0] == 't') {
		for (i = 0; i < n / 14; i++) {
			tu.append("ru");
		}
		if (tu.length() >= 12) {
			cout << "tu+ru*" << (tu.length() - 2) / 2;
			return 0;
		}
	}
	cout << tu << endl;
}*/

/*int main() { // 10984 내 학점을 구해줘
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.precision(2); //실수 표현 자리수 고정
	int i, t, n;
	cin >> t;
	while (t--) {
		int c;
		double g, grade = 0, gpa = 0;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> c >> g;
			grade += c;
			gpa += c * g;
		}
		cout << grade << " " << gpa / grade << endl;
	}
}*/

/*int chk[1000]; //17173 배수들의 합
int main() {
	int i, j, n, m, k, ret=0;
	cin >> n>>m;
	for (i = 0; i < m; i++) {
		cin >> k;
		for (j = 1; j <= n; j++) {
			if (!chk[j] && j % k == 0) {
				ret += j;
				chk[j] = 1;
			}
		}
	}
	cout << ret;
}*/

/*char board[100][100]; // 16433 주디와 당근농장
int main() {
	int i, j, n, r, c;
	scanf("%d%d%d", &n, &r, &c);
	char a[2] = { 'v', '.' };
	int idx = 0;
	if ((r + c) % 2) idx=1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c", a[idx]);
			idx = (idx + 1) % 2;
		}
		if(n%2==0) idx = (idx + 1) % 2;
		printf("\n");
	}
}*/

/*int main() { //16212 정열적인 정렬
	int i, n, arr[500000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}*/

/*int main() { //1059 수 2
	int i, l, n, arr[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	scanf("%d", &l);
	if (*(lower_bound(arr, arr + n, l))==l) printf("0");
	else if (*(lower_bound(arr, arr + n, l)) == arr[0]) {
		printf("%d", (arr[0] - l)*l-1);
	}
	else printf("%d", (*lower_bound(arr, arr + n, l)-l)*(l-*(lower_bound(arr, arr+n, l)-1))-1);
}*/

/*typedef long long ll; //1041 주사위
int dice[6];
int two[12][2] = { {0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 2}, {1, 3}, {1, 5}, {2, 4}, {2, 5}, {3, 4}, {3, 5}, {4, 5} };
int three[8][3] = { {0, 1, 2}, {0, 1, 3}, {0, 2, 4}, {0, 3, 4}, {1, 2, 5}, {1, 3, 5}, {2, 4, 5}, {3, 4, 5} };
int main() {
	int i, j;
	ll n, oneMin = 999, twoMin = 999, threeMin = 999;
	scanf("%lld", &n);
	for (i = 0; i < 6; i++) {
		scanf("%d", &dice[i]);
	}
	if (n == 1) {
		int sum = 0;
		priority_queue<int> pQue;
		for (i = 0; i < 6; i++) {
			pQue.push(dice[i]);
		}
		pQue.pop();
		while (!pQue.empty()) {
			sum += pQue.top();
			pQue.pop();
		}
		printf("%d", sum);
		return 0;
	}

	for (i = 0; i < 6; i++) {
		oneMin = min((int)oneMin, dice[i]);
	}

	for (i = 0; i < 12; i++) {
		int tmpSum = 0;
		for (j = 0; j < 2; j++) {
			tmpSum += dice[two[i][j]];
		}
		twoMin = min((int)twoMin, tmpSum);
	}

	for (i = 0; i < 8; i++) {
		int tmpSum = 0;
		for (j = 0; j < 3; j++) {
			tmpSum += dice[three[i][j]];
		}
		threeMin = min((int)threeMin, tmpSum);
	}
	printf("%lld\n", (n - 2) * (n - 2));
	ll sumOne = oneMin * ((n - 2) * (n - 2) + 4 * (n - 1) * (n - 2));
	ll sumTwo = twoMin * (4 * (2 * n - 3));
	ll sumThree = threeMin * 4;
	printf("%lld", sumOne + sumTwo + sumThree);
}*/

/*int main() { //3047 ABC
	int i, arr[3];
	char s[4];
	for (i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%s", s);
	sort(arr, arr + 3);
	for (i = 0; i < 3; i++) {
		printf("%d ", arr[s[i] - 'A']);
	}
}*/

/*typedef long long ll; //1850 최대공약수

ll gca(ll a, ll b) {
	if (a%b == 0) return b;
	else return gca(b, a%b);
}

int main() {
	ll i, a, b, num;
	scanf("%lld%lld", &a, &b);
	if (a < b) swap(a, b);
	num = gca(a, b);
	for (i = 0; i < num; i++) {
		printf("1");
	}
}*/

/*int main() { //10799 쇠막대기
	string s;
	cin >> s;
	int i, len = s.length(), stk = 0, ret=0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			if (i < len - 1 && s[i + 1] != ')') stk++;
			else {
				ret += stk;
				i++;
			}
		}
		else {
			ret++;
			stk--;
		}
	}
	cout << ret;
}*/

/*int n, dp[3][100000]; //9465 스티커

int main() {
	int i, j, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		int board[2][100000];
		for (i = 0; i < 2; i++) {
			for (j = 0; j < n; j++) {
				scanf("%d", &board[i][j]);
			}
		}

		for (i = 0; i < 3; i++) {
			for (j = 0; j < n; j++) dp[i][j] = 0;
		}
		dp[0][0] = board[0][0], dp[1][0] = board[1][0];
		for (j = 1; j < n; j++) {
			for (i = 0; i < 2; i++) {
				dp[i][j] = board[i][j] + max(dp[(i + 1) % 3][j-1], dp[(i + 2) % 3][j-1]);
			}
			dp[2][j]= max(dp[(i + 1) % 3][j - 1], dp[(i + 2) % 3][j - 1]);
		}

		printf("%d\n", max(dp[0][n-1], max(dp[1][n-1], dp[2][n-1])));
	}
}*/

/*int main() { //10815 숫자 카드
	int i, n, m, a;
	scanf("%d", &n);
	vector<int> vec;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &a);
		if (vec[upper_bound(vec.begin(), vec.end(), a)-vec.begin()-1] == a) printf("1 ");
		else printf("0 ");
	}
}*/

/*int main() { //1004 어린 왕자
	int t, x1, y1, x2, y2;
	scanf("%d", &t);
	while (t--) {
		int i, n, ret = 0, cx, cy, r;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d%d%d", &cx, &cy, &r);
			if ((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) < r * r) {
				if ((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) > r * r)
					ret++;
				else continue;
			}
			if ((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) < r * r) ret++;
		}
		printf("%d\n", ret);
	}
}*/

/*int board[300][300], jump[8][2] = { {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {-1, 2} }; //7562 나이트의 이동
int main() {
	int i, j, t, l, x1, y1, x2, y2;
	scanf("%d", &t);
	while (t--) {
		for (i = 0; i < 300; i++) {
			for (j = 0; j < 300; j++) {
				board[i][j] = 0;
			}
		}
		scanf("%d%d%d%d%d", &l, &x1, &y1, &x2, &y2);
		board[x1][y1] = 1;
		queue<pair<pair<int, int>, int>> que;
		que.emplace(make_pair(x1, y1), 0);
		while (!que.empty()) {
			pair<int, int> here = que.front().first;
			int iter = que.front().second;
			if (here.first == x2 && here.second == y2) {
				printf("%d\n", iter);
				break;
			}
			que.pop();
			for (i = 0; i < 8; i++) {
				int x = here.first + jump[i][0], y = here.second + jump[i][1];
				if (x >= 0 && x < l && y >= 0 && y < l && !board[x][y]) {
					que.emplace(make_pair(x, y), iter + 1);
					board[x][y] = 1;
				}
			}
		}
	}
}*/

/*char board[100][100]; //10026 적록색약
int n, chk[100][100], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

int func() {
	int i, j, ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			chk[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (!chk[i][j]) {
				int k, l;
				char color = board[i][j];
				chk[i][j] = 1;
				queue<pair<int, int>> que;
				que.emplace(i, j);
				while (!que.empty()) {
					pair<int, int> here = que.front();
					que.pop();
					for (k = 0; k < 4; k++) {
						int x = here.first + nxt[k][0], y = here.second + nxt[k][1];
						if (x >= 0 && x < n && y >= 0 && y < n && board[x][y] == color && !chk[x][y]) {
							chk[x][y] = 1;
							que.emplace(x, y);
						}
					}
				}
				ret++;
			}
		}
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", board[i]);
	}

	int normal = func();
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (board[i][j] == 'G') board[i][j] = 'R';
		}
	}
	int abnormal = func();
	printf("%d %d", normal, abnormal);
}*/

/*const int INF = 987654321; //1389 케빈 베이컨의 6단계 법칙
int dist[101][101];

int main() {
	int i, j, k, n, m, a, b;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}
	
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		dist[a][b] = 1;
		dist[b][a] = 1;
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (dist[i][j] > dist[i][k] + dist[k][j]) dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	int mina=INF, ret = 0;
	for (i = 1; i <= n; i++) {
		int tmp = 0;
		for (j = 1; j <= n; j++) {
			tmp += dist[i][j];
		}
		if (mina > tmp) {
			mina = tmp;
			ret = i;
		}
	}
	printf("%d", ret);
}*/

/*int main() { //1406 에디터
	int i, m;
	char com, s[100001], ch;
	scanf("%s", s);
	scanf("%d", &m);
	int len = strlen(s);
	stack<char> stk, ret;
	for (i = 0; i < len; i++) {
		stk.push(s[i]);
	}
	fgetc(stdin);
	for (i = 0; i < m; i++) {
		scanf("%c", &com);
		switch (com) {
		case 'L':
			if (!stk.empty()) {
				ret.push(stk.top());
				stk.pop();
			}
			break;
		case 'D':
			if (!ret.empty()) {
				stk.push(ret.top());
				ret.pop();
			}
			break;
		case 'B':
			if(!stk.empty()) stk.pop();
			break;
		case 'P':
			fgetc(stdin);
			scanf("%c", &ch);
			stk.push(ch);
			break;
		}
		fgetc(stdin);
	}
	while (!stk.empty()) {
		ret.push(stk.top());
		stk.pop();
	}
	while (!ret.empty()) {
		printf("%c", ret.top());
		ret.pop();
	}
}*/

/*bool cmp(int a, int b) { //1026 보물
	return a > b;
}
int main() {
	int i, n, a[50], b[50];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}

	sort(a, a + n, cmp);
	sort(b, b + n);
	int ret = 0;
	for (i = 0; i < n; i++) {
		ret += a[i] * b[i];
	}
	printf("%d", ret);
}*/

/*int main() { //10867 중복 빼고 정렬하기
	int i, n, a;
	vector<int> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
	for (auto it : vec) {
		printf("%d ", it);
	}
}*/

/*int arr[5001];
int main() {
	int n, k, idx = 0, iter = 0;
	scanf("%d%d", &n, &k);
	printf("<");
	while (iter != n) {
		int i = 0;
		while (true) {
			if (!arr[idx]) {
				i++;
			}
			if (i == k) {
				if (iter == n - 1) printf("%d>", idx + 1);
				else printf("%d, ", idx+1);
				arr[idx] = 1;
				idx = (idx + 1) % 7;
				break;
			}
			idx = (idx + 1) % 7;
		}
		iter++;
	}
}*/

/*int main() { //1158 요세푸스 문제
	int i, j, n, k;
	scanf("%d%d", &n, &k);
	queue<int> que;
	for (i = 1; i <= n; i++) {
		que.push(i);
	}
	printf("<");
	for (i = 1; i <= n; i++) {
		for (j = 0; j < k-1; j++) {
			que.push(que.front());
			que.pop();
		}
		if (i == n) printf("%d>", que.front());
		else printf("%d, ", que.front());
		que.pop();
	}
}*/

/*void func(int* arr, vector<int> ret, int idx, int num, int n) { //6603 로또
	int i;
	if (num==6) {
		for (i = 0; i < 6; i++) {
			printf("%d ", ret[i]);
		}
		printf("\n");
		return;
	}
	if (idx == n) return;
	vector<int> cp;
	for (i = 0; i < ret.size(); i++) {
		cp.push_back(ret[i]);
	}
	cp.push_back(arr[idx]);
	func(arr, cp, idx + 1, num+1, n);
	func(arr, ret, idx + 1, num, n);
}

int main() {
	int i, n;
	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		else {
			int arr[12];
			for (i = 0; i < n; i++) {
				scanf("%d", &arr[i]);
			}
			func(arr, vector<int>(), 0, 0, n);
			printf("\n");
		}
	}
}*/

/*int n, s, arr[20]; //1182 부분수열의 합
int func(int idx, int sz, int sum) {
	if (idx == n) {
		if (sz > 0 && sum == s) {
			return 1;
		}
		return 0;
	}
	int ret = func(idx + 1, sz, sum) + func(idx + 1, sz+1, sum + arr[idx]);
	return ret;
}

int main() {
	int i;
	scanf("%d%d", &n, &s);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", func(0, 0, 0));
}*/

/*int n, chk; //2661 좋은수열
string ret;
void dfs(int idx, string s) {
	if (chk) return;
	if (idx == n) {
		cout <<s<<endl;
		chk = 1;
		return;
	}
	int len = s.length()+1;
	for (int i = 1; i <= 3; i++) {
		string tmp = s;
		tmp += ('0' + i);
		int c = 0;
		for (int j = 1; j <= len / 2; j++) {
			if (tmp.substr(len-j*2, j) == tmp.substr(len-j, j)) {
				c = 1;
				break;
			}
		}
		if (!c) dfs(idx + 1, tmp);
	}
}

int main() {
	int i;
	cin >> n;
	dfs(1, "1");
}*/

/*int gcd(int a, int b) { //2485 가로수
	if (a % b == 0) return b;
	return gcd(b, a % b);
}
int main() {
	int i, n, arr[100000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	int g = arr[1]-arr[0];
	for (i = 2; i < n; i++) {
		g = gcd(arr[i]-arr[i-1], g);
	}
	int ret = 0;
	for (i = 0; i < n - 1; i++) {
		ret += ((arr[i + 1] - arr[i]) / g-1);
	}
	printf("%d", ret);
}*/

/*int *arr; //1644 소수의 연속합
int main() {
	int i, n;
	vector<int> minor;
	arr = new int[4000001];
	for (i = 0; i < 4000001; i++) {
		arr[i] = 0;
	}
	for (i = 2; i <= 2000; i++) {
		if (arr[i]) continue;
		int idx = i*2;
		while (idx <= 4000000) {
			arr[idx] = 1;
			idx += i;
		}
	}

	for (i = 2; i <= 4000000; i++) {
		if (!arr[i]) minor.push_back(i);
	}
	int len = minor.size();
	scanf("%d", &n);
	int left = 0, right = 0;
	int num = 0, ret = 0;
	while (true) {
		ret += minor[right++];
		if (right>=len||minor[right]>n) {
			while (ret > n) {
				ret -= minor[left++];
			}
			if (ret == n) {
				num++;
			}
			break;
		}
		while (ret > n) {
			ret -= minor[left++];
		}
		if (ret == n) {
			num++;
			ret -= minor[left++];
		}
	}
	printf("%d", num);
}*/

/*int arr[1000001]; //6588 골드바흐의 추측

int main() {
	int i, n;
	for (i = 2; i <= 1000; i++) {
		if (arr[i]) continue;
		int idx = i * 2;
		while (idx <= 1000000) {
			arr[idx] = 1;
			idx += i;
		}
	}
	vector<int> minor;
	for (i = 2; i <= 1000000; i++) {
		if (!arr[i]) minor.push_back(i);
	}

	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		else {
			int left = 0, right = upper_bound(minor.begin(), minor.end(), n)-minor.begin()-1;
			while (true) {
				if (minor[left] + minor[right] > n) {
					right--;
				}
				else if (minor[left] + minor[right] < n) {
					left++;
				}
				else {
					printf("%d = %d + %d\n", n, minor[left], minor[right]);
					break;
				}
			}
		}
	}
}*/

/*int arr[2000001]; //15711 환상의 짝꿍
typedef unsigned long long ull;
int main() {
	int i, t;
	vector<int> minor;
	ull a, b;
	for (i = 2; i <= 1414; i++) {
		if (arr[i]) continue;
		int idx = i * i;
		while(idx<=2000000){
			arr[idx] = 1;
			idx += i;
		}
	}

	for (i = 2; i <= 2000000; i++) {
		if (!arr[i]) minor.push_back(i);
	}

	scanf("%d", &t);
	while (t--) {
		scanf("%lld%lld", &a, &b);
		ull sum = a + b;
		if (sum < 4) printf("NO\n");
		else if (sum & 1) {
			ull m = sum - 2;
			for (i = 0; i < minor.size(); i++) {
				if (minor[i] >= m) {
					printf("YES\n");
					break;
				}
				if (m % minor[i] == 0) {
					printf("NO\n");
					break;
				}
			}
			if (i == minor.size()) printf("YES\n");
		}
		else printf("YES\n");
	}
}*/

/*typedef unsigned long long ull; //1016 제곱 ㄴㄴ수
const int MAX = 1000000;
int arr[MAX+1], check[MAX+1];
vector<ull> primeSquare;
int main() {
	ull i, mina, maxa;
	scanf("%lld%lld", &mina, &maxa);
	ull m = sqrt(maxa);
	for (i = 2; i <= m; i++) {
		if (arr[i] == 1) continue;
		int idx = i * 2;
		while (idx <= m) {
			arr[idx] = 1;
			idx += i;
		}
	}

	for (i = 2; i <= m; i++) {
		if (!arr[i]) primeSquare.push_back(i*i);
	}

	int j, ret = 0;
	for (j = 0; j < primeSquare.size(); j++) {
		ull start = primeSquare[j], tmp = mina;
		if (tmp % start != 0) {
			tmp = (tmp / start + 1) * start;
		}
		while (tmp <= maxa) {
			check[tmp - mina] = 1;
			tmp += start;
		}
	}

	for (i = 0; i <= maxa - mina; i++) {
		if (!check[i]) ret++;
	}
	printf("%d", ret);
}*/

/*const int MAX = 100000; //9466 텀 프로젝트
int arr[MAX+1], parent[MAX+1], level[MAX+1], num[MAX+1];

int find(int u) {
	if (u == parent[u]) return u;
	else return parent[u] = find(parent[u]);
}

int merge(int a, int b) {
	int pa = find(a), pb = find(b);
	if (pa == pb) { //사이클 존재
		int ret = 1, tmp=arr[a];
		while (tmp != a) {
			tmp = arr[tmp];
			ret++;
		}
		return ret;
	}

	if (level[pa] < level[pb]) swap(pa, pb);
	if (level[pa] == level[pb]) level[pa]++;
	parent[pb] = pa;
	return 0;
}
int main() {
	int i, t, n, a;
	scanf("%d", &t);
	while (t--) {
		int ret=0;
		scanf("%d", &n);
		for (i = 1; i <= n; i++) {
			parent[i] = i;
			level[i] = 1;
			num[i]=0;
		}

		for (i = 1; i <= n; i++) {
			scanf("%d", &arr[i]);
		}

		for (i = 1; i <= n; i++) {
			ret += merge(i, arr[i]);
		}
		printf("%d\n", n-ret);
	}
}*/

/*int board[100][100], nxt[4][2] = { {0, 1} , {0, -1}, {1, 0}, {-1, 0} }; //2636 치즈	
int main() {
	int i, j, w, h;
	scanf("%d%d", &h, &w);
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	int tm=0, ret=0, chk;
	while (true) {
		chk = 0;
		int num = 0;
		queue<pair<int, int>> que, meltPnt;
		que.emplace(0, 0);
		while (!que.empty()) {
			pair<int, int> pnt = que.front();
			que.pop();
			int x = pnt.first, y = pnt.second, nx, ny;
			board[x][y] = -1;
			for (i = 0; i < 4; i++) {
				nx = x + nxt[i][0], ny = y + nxt[i][1];
				if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
					if (board[nx][ny] == 0) {
						board[nx][ny] = -1;
						que.emplace(nx, ny);
					}

					else if (board[nx][ny] == 1) { //치즈 겉면
						chk = 1;
						num++;
						board[nx][ny] = -2;
					}
				}
			}
		}
		if (chk == 0) break;
		ret = num;
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				if (board[i][j] == -1|| board[i][j] == -2) board[i][j] = 0;
			}
		}
		tm++;
	}
	printf("%d\n%d\n", tm, ret);
}*/

/*int k, chk[10]; //2529 부등호
char sign[9];
int maxa[10] = { -1, }, mina[10] = { 10, };
void func(int idx, int prev, int *num) {
	if (idx == k+1) {
		//크기 체크
		for (int i = 0; i <= k; i++) {
			if (maxa[i] > num[i]) break;
			if (maxa[i] < num[i]) {
				for (int j = 0; j <= k; j++) {
					maxa[j] = num[j];
				}
				break;
			}
		}

		for (int i = 0; i <= k; i++) {
			if (mina[i] < num[i]) break;
			if (mina[i] > num[i]) {
				for (int j = 0; j <= k; j++) {
					mina[j] = num[j];
				}
				break;
			}
		}
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (sign[idx-1] == '<') {
			if (chk[i] || prev > i) continue;
			chk[i] = 1;
			num[idx] = i;
			func(idx + 1, i, num);
			chk[i] = 0;
		}
		else {
			if (chk[i] || prev < i) continue;
			chk[i] = 1;
			num[idx] = i;
			func(idx + 1, i, num);
			chk[i] = 0;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i;
	cin >> k;
	for (i = 0; i < k; i++) {
		cin >> sign[i];
	}
	for (i = 0; i <= 9; i++) {
		for (int j = 0; j < 10; j++) chk[i] = 0;
		chk[i] = 1;
		int arr[10];
		arr[0] = i;
		func(1, i, arr);
		chk[i] = 0;
	}
	for (i = 0; i <= k; i++) {
		cout << maxa[i];
	}
	cout << endl;
	for (i = 0; i <= k; i++) {
		cout << mina[i];
	}
}*/

/*int board[100][100]; //2583 영역 구하기
int main() {
	int i, j, q, m, n, k, rec[100][4];
	scanf("%d%d%d", &m, &n, &k);
	for (i = 0; i < k; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &rec[i][j]);
		}
	}

	for (i = 0; i < k; i++) {
		for (j = rec[i][0]; j < rec[i][2]; j++) {
			for (q = rec [i][1]; q < rec[i][3]; q++) {
				if(!board[j][q]) board[j][q] = 1;
			}
		}
	}
	priority_queue<int, vector<int>, greater<int>> pQue;
	pair<int, int> start;
	queue<pair<int, int>> que;
	int num=0, nxt[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (board[i][j] == 0) {
				num++;
				board[i][j] = 1;
				start = { i, j };
				que.push(start);
				int wd = 1;
				while (!que.empty()) {
					pair<int, int> here = que.front();
					que.pop();
					int x = here.first, y = here.second, nx, ny;
					for (q = 0; q < 4; q++) {
						nx = x + nxt[q][0], ny = y + nxt[q][1];
						if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] == 0) {
							board[nx][ny] = 1;
							wd++;
							que.emplace(nx, ny);
						}
					}
				}
				pQue.push(wd);
			}
		}
	}	
	printf("%d\n", num);
	while (!pQue.empty()) {
		printf("%d ", pQue.top());
		pQue.pop();
	}
}*/

/*int arr[10000]; //2512 예산
int main() {
	int i, j, n, m, sum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	scanf("%d", &m);
	sort(arr, arr + n);
	if (sum <= m) {
		printf("%d\n", arr[n - 1]);
	}
	else {
		int left = 0, right = 1000000001, border;
		for (i = 0; i < 100; i++) {
			border = (left + right) / 2, sum=0; //상한금
			for (j = 0; j < n; j++) {
				if (arr[j] > border) {
					sum += border;
				}
				else sum += arr[j];
			}
			if (sum < m) left = border + 1;
			else if (sum > m) right = border - 1;
			else break;
		}
		printf("%d", border);
	}
}*/

/*int main() { //1715 카드 정렬하기
	int i, n, ret = 0, card;
	scanf("%d", &n);
	priority_queue<int, vector<int>, greater<int>> pQue;
	for (i = 0; i < n; i++) {
		scanf("%d", &card);
		pQue.push(card);
	}
	if (n == 1) {
		printf("0");
		return 0;
	}
	while (true) {
		int first = pQue.top();
		pQue.pop();
		int second = pQue.top();
		pQue.pop();
		ret += first + second;
		if (pQue.empty()) break;
		pQue.push(first + second);
	}
	printf("%d", ret);
}*/

/*int main() { //푸는중
	int i, n, k, m, v, w;
	vector<int> bag;
	vector<pair<int, int>> jewel;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &m, &v); //Mi, Vi
		jewel.emplace_back(-v, m);
	}
	sort(jewel.begin(), jewel.end());
	for (i = 0; i < k; i++) {
		scanf("%d", &w);
		bag.push_back(w);
	}
	sort(bag.begin(), bag.end());
	for (i = 0; i < k; i++)` {
			lower_bound(bag.begin(), bag.end(), jewel[i].second);
	}
}*/
////////////////////////////////////////
		  /*최소 신장 트리*/
////////////////////////////////////////
/*int n, m; //9372 상근이의 여행
class UnionFind {
private:
	int* parent;
public:
	UnionFind() {
		parent = new int[n+1];
		for (int i = 1; i <= n; i++) {
			parent[i] = i;
		}
	}

	int find(int x) {
		if (x == parent[x]) return x;

		else {
			int p = find(parent[x]);
			parent[x] = p;
			return p;
		}
	}

	void Union(int x, int y) {
		x = find(x);
		y = find(y);
		if(x!=y) parent[y] = x;
	}
};

int main() {
	int t;
	cin >> t;
	while (t--) {
		int i, a, b, ret=0;
		vector<pair<int, int>> vec;
		cin >> n >> m;
		UnionFind uf;
		for (i = 0; i < m; i++) {
			cin >> a >> b;
			vec.push_back(make_pair(a, b));
		}

		for (auto it = vec.begin(); it != vec.end(); it++) {
			if (uf.find(it->first) != uf.find(it->second)) {
				uf.Union(it->first, it->second);
				ret++;
			}
		}
		cout << ret << endl;
	}	
}*/

////////////////////////////////////////
		    /*무작위 문제*/
////////////////////////////////////////

/*int n, cache[121][1 << 12], check[11][11]; //10937 두부 모판 자르기 (비트마스크를 이용한 다음 상태 저장)
char board[11][11];
const int INF = 987654321;

int getVal(char a, char b) {
	int ret;
	if (a > b) {
		char tmp = a;
		a = b;
		b = tmp;
	}

	if (a == 'A') {
		switch (b) {
		case 'A':
			ret = 100;
			break;
		case 'B':
			ret = 70;
			break;
		case 'C':
			ret = 40;
			break;
		default:
			ret = 0;
			break;
		}
	}

	else if (a == 'B') {
		switch (b) {
		case 'B':
			ret = 50;
			break;
		case 'C':
			ret = 30;
			break;
		default:
			ret = 0;
			break;
		}
	}
	else if (a == 'C') {
		switch (b) {
		case 'C':
			ret = 20;
			break;
		default:
			ret = 0;
			break;
		}
	}
	else ret = 0;
	return ret;
}

int bf, bs, divide, last;
int func(int idx, int bit) {
	if (idx >= n * n) return 0;
	int& ret = cache[idx][bit];
	if (ret != -1) return ret;
	ret = 0;
	int x = idx / n, y = idx % n;
	if (x + 1 < n && check[x][y] == 0 && check[x + 1][y] == 0) {
		check[x][y] = 1;
		check[x + 1][y] = 1;
		int next = ((bit + bf + last) << 1) % divide, nx = (idx + 1) / n, ny = (idx + 1) % n;
		if (nx + 1 < n && check[nx + 1][ny] == 1) next++;
		ret = max(ret, getVal(board[x][y], board[x + 1][y]) + func(idx + 1, next));
		check[x + 1][y] = 0;
		check[x][y] = 0;
	}

	if (y + 1 < n && check[x][y] == 0 && check[x][y + 1] == 0) {
		check[x][y] = 1;
		check[x][y + 1] = 1;
		int next = ((bit + bf + bs) << 2) % divide, nx = (idx + 1) / n, ny = (idx + 1) % n;
		if (nx + 1 < n && check[nx + 1][ny] == 1) next += 1;
		if (nx + 1 < n && check[nx + 1][ny - 1] == 1)next += 2;
		ret = max(ret, getVal(board[x][y], board[x][y + 1]) + func(idx + 2, next));
		check[x][y + 1] = 0;
		check[x][y] = 0;
	}

	int next = (bit << 1) % divide, nx = (idx + 1) / n, ny = (idx + 1) % n;
	if (nx + 1 < n && check[nx + 1][ny] == 1) next++;
	ret = max(ret, func(idx + 1, next));
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &n);
	bf = (1 << n), bs = (1 << (n - 1)), divide = (1 << (n + 1)), last = 1;
	for (i = 0; i < n * n; i++) {
		for (j = 0; j < (1 << 12); j++)
			cache[i][j] = -1;
	}
	for (i = 0; i < n; i++) {
		scanf("%s", board[i]);
	}

	printf("%d", func(0, 0));
}*/

/*const int INF = 987654321;
int n, m;
int func(int num, int rx, int ry, int bx, int by, vector<vector<char>> board) {
	if (num >= 10) return INF;
	
	int i, ret = INF;
	if (board[rx - 1][ry] != '#' || board[bx - 1][by] != '#') {
		for (int i = rx-1; i >= 1; i--) {
			if (board[i][ry] == '#') break;
			else if(board[i][ry]=='O')
		}
	}
}

int main() {
	int i, j, rx, ry, bx, by;
	scanf("%d%d", &n, &m);
	vector<vector<char>> board(n);
	for (i = 0; i < n; i++) {
		board[i] = vector<char>(m);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'R') {
				rx = i, ry = j;
			}
			else if (board[i][j] == 'B') {
				bx = i, by = j;
			}
		}
	}
	printf("%d", func(0, rx, ry, bx, by, board));
}*/

/*int cache[10][10][10][10];
int main() {
	int i, j, n, m;
	pair<int, int> r, b;
	scanf("%d%d", &n, &m);
	vector<vector<char>> board(n);
	for (i = 0; i < n; i++) {
		board[i].resize(m);
	}
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'R') {
				r = make_pair(i, j);
			}
			else if (board[i][j] == 'B') {
				b = make_pair(i, j);
			}
		}
	}

	queue<pair<pair<pair<int, int>, pair<int, int>>, int>> que;
	que.emplace(make_pair(r, b), 0);
	int ret = 0;
	while (!que.empty()) {
		pair<int, int> rP = que.front().first.first, bP = que.front().first.second;
		int num = que.front().second, rx = rP.first, ry = rP.second, bx = bP.first, by = bP.second;
		printf("-----cur : %d, %d, %d, %d, %d-----\n", num, rx, ry, bx, by);
		if (board[rx][ry] == 'O') {
			if (board[bx][by] == 'O') {
				ret = -1;
				break;
			}
			//printf("final rx : %d, ry : %d, bx : %d, by : %d\n", rx, ry, bx, by);
			ret = num;
			break;
		}
		que.pop();

		int chk=0, nRx=rx, nRy=ry, nBx=bx, nBy=by;
		//up
		for (i = rx-1; i >= 0; i--) {
			if (board[i][ry]!='.') break;
		}
		if (board[i][ry] == '#') nRx = i + 1;
		else if (board[i][ry] == 'B') chk = 1;
		else if (board[i][ry] == 'O') {
			chk = 2;
			nRx = i;
		}
		for (i = bx - 1; i > 0; i--) {
			if (board[i][by] != '.') break;
		}
		if (board[i][by] == '#') nBx = i + 1;
		else if (board[i][by] == 'R') {
			if (chk == 2) nBx = nRx;
			else nBx = nRx + 1;
		}
		else if (board[i][by] == 'O') {
			nBx = i;
			chk = 3;
		}
		if (bx < rx && chk) {
			if (chk == 3) nRx = nBx;
			else nRx = nBx + 1;
		}
		if ((nRx != rx || nRy != ry || nBx != bx || nBy != by) && !cache[nRx][nRy][nBx][nBy]) {
			cache[nRx][nRy][nBx][nBy] = 1;
			que.push({ {{nRx, nRy}, {nBx, nBy}}, num + 1 });
		}
		printf("Up : %d, %d, %d, %d\n", nRx, nRy, nBx, nBy);

		//down
		chk = 0, nRx = rx, nRy = ry, nBx = bx, nBy = by;
		for (i = rx+1; i < n; i++) {
			if (board[i][ry] != '.') break;
		}
		if (board[i][ry] == '#') nRx = i - 1;
		else if (board[i][ry] == 'B') chk = 1;
		else if (board[i][ry] == 'O') {
			chk = 2;
			nRx = i;
		}

		for (i = bx + 1; i < n; i++) {
			if (board[i][by] != '.') break;
		}
		if (board[i][by] == '#') nBx = i - 1;
		else if (board[i][by] == 'R') {
			if (chk == 2) nBx = nRx;
			else nBx = nRx - 1;
		}
		else if (board[i][by] == 'O') {
			nBx = i;
			chk = 3;
		}
		if (bx > rx && chk) {
			if (chk == 3) nRx = nBx;
			else nRx = nBx - 1;
		}

		if ((nRx != rx || nRy != ry || nBx != bx || nBy != by) && !cache[nRx][nRy][nBx][nBy]) {
			cache[nRx][nRy][nBx][nBy] = 1;
			que.push({ {{nRx, nRy}, {nBx, nBy}}, num + 1 });
		}
		printf("Down : %d, %d, %d, %d\n", nRx, nRy, nBx, nBy);

		//left
		chk = 0, nRx = rx, nRy = ry, nBx = bx, nBy = by;
		for (i = ry - 1; i >=0; i--) {
			if (board[rx][i] != '.') break;
		}
		if (board[rx][i] == '#') nRy = i + 1;
		else if (board[rx][i] == 'B') chk = 1;
		else if (board[rx][i] == 'O') {
			chk = 2;
			nRy = i;
		}

		for (i = by - 1; i >= 0; i--) {
			if (board[bx][i] != '.') break;
		}
		if (board[bx][i] == '#') nBy = i + 1;
		else if (board[bx][i] == 'R') {
			if (chk == 2) {
				nBy = nRy;
			}
			else nBy = nRy + 1;
		}
		else if (board[bx][i] == 'O') {
			chk = 3;
			nBy = i;
		}
		if (by < ry && chk) {
			if (chk==3) nRy = nBy;
			else nRy = nBy + 1;
		}
		if ((nRx!=rx||nRy!=ry||nBx!=bx||nBy!=by)&&!cache[nRx][nRy][nBx][nBy]) {
			cache[nRx][nRy][nBx][nBy] = 1;
			que.push({ {{nRx, nRy}, {nBx, nBy}}, num + 1 });
		}
		printf("Left : %d, %d, %d, %d\n", nRx, nRy, nBx, nBy);

		//right
		chk = 0, nRx = rx, nRy = ry, nBx = bx, nBy = by;
		for (i = ry + 1; i < m; i++) {
			if (board[rx][i] != '.') break;
		}
		if (board[rx][i] == '#') nRy = i - 1;
		else if (board[rx][i] == 'B') chk = 1;
		else if (board[rx][i] == 'O') {
			chk = 2;
			nRy = i;
		}

		for (i = by + 1; i < m; i++) {
			if (board[bx][i] != '.') break;
		}
		//printf("i : %d\n", i);
		if (board[bx][i] == '#') nBy = i - 1;
		else if (board[bx][i] == 'R') {
			if (chk == 2) {
				nBy = nRy;
			}
			else nBy = nRy - 1;
		}
		else if (board[bx][i] == 'O') {
			chk = 3;
			nBy = i;
		}
		if (by > ry && chk) {
			if (chk==3) nRy = nBy;
			else nRy = nBy - 1;
		}
		if ((nRx != rx || nRy != ry || nBx != bx || nBy != by) && !cache[nRx][nRy][nBx][nBy]) {
			cache[nRx][nRy][nBx][nBy] = 1;
			que.push({ {{nRx, nRy}, {nBx, nBy}}, num + 1 });
		}
		printf("Right : %d, %d, %d, %d\n", nRx, nRy, nBx, nBy);
	}
	if (ret == 0) printf("-1");
	else printf("%d", ret);
}*/

/*int main() { //A+B - 6
	int t;
	char k[4];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", k);
		printf("%d\n", k[0] + k[2] - 2 * '0');
	}
}*/

/*string a, b; //A+B - 9
int ret[20000];
int main() {
	int i, chk=1, aidx, bidx, retidx, retlen=0;
	cin >> a >> b;
	if (b[0] == '-') swap(a, b);
	if (a[0] == '-') {//a 음수
		a = &a[1];
		if (b[0] == '-') {//b도 음수
			printf("-");
			b = &b[1];
			aidx = a.length()-1, bidx = b.length()-1, retidx = retlen = max(aidx, bidx)+1;
			while (aidx >= 0 && bidx >= 0) {
				ret[retidx] += a[aidx] + b[bidx] - 2 * '0';
				if (ret[retidx] >= 10) {
					ret[retidx] -= 10;
					ret[retidx - 1]++;
				}
				retidx--;
				aidx--;
				bidx--;
			}
			while (aidx >= 0) {
				ret[retidx] += a[aidx] - '0';
				if (ret[retidx] >= 10) {
					ret[retidx] -= 10;
					ret[retidx - 1]++;
				}
				retidx--;
				aidx--;
			}
			while (bidx >= 0) {
				ret[retidx] += b[bidx] - '0';
				if (ret[retidx] >= 10) {
					ret[retidx] -= 10;
					ret[retidx - 1]++;
				}
				retidx--;
				bidx--;
			}
		}
		else { //b는 양수
			chk = 0;//0일때 위에 있는 수가 음수
			if (a.length() < b.length()) {
				swap(a, b);
				chk = 1;
			}
			else if (a.length() == b.length()) {
				for (i = 0; i < a.length(); i++) {
					if (a[i] > b[i]) break;
					if (a[i] < b[i]) {
						swap(a, b);
						chk = 1;
						break;
					}
				}
			}

			aidx = a.length() - 1, bidx = b.length() - 1, retidx = retlen = max(aidx, bidx) + 1;
			while (aidx >= 0 && bidx >= 0) {
				ret[retidx] += a[aidx]-b[bidx];
				if (ret[retidx] < 0) {
					ret[retidx] += 10;
					ret[retidx - 1]--;
				}
				retidx--;
				aidx--;
				bidx--;
			}
			while (aidx >= 0) {
				ret[retidx] += a[aidx] - '0';
				if (ret[retidx] < 0) {
					ret[retidx] += 10;
					ret[retidx - 1]--;
				}
				retidx--;
				aidx--;
			}
			while (bidx >= 0) {
				ret[retidx] += b[bidx] - '0';
				if (ret[retidx] < 0) {
					ret[retidx] += 10;
					ret[retidx - 1]--;
				}
				retidx--;
				bidx--;
			}
		}
	}

	else {//둘다 양수
		aidx = a.length() - 1, bidx = b.length() - 1, retidx = retlen = max(aidx, bidx) + 1;
		while (aidx >= 0 && bidx >= 0) {
			ret[retidx] += a[aidx] + b[bidx] - 2 * '0';
			if (ret[retidx] >= 10) {
				ret[retidx] -= 10;
				ret[retidx - 1]++;
			}
			retidx--;
			aidx--;
			bidx--;
		}
		while (aidx >= 0) {
			ret[retidx] += a[aidx] - '0';
			if (ret[retidx] >= 10) {
				ret[retidx] -= 10;
				ret[retidx - 1]++;
			}
			retidx--;
			aidx--;
		}
		while (bidx >= 0) {
			ret[retidx] += b[bidx] - '0';
			if (ret[retidx] >= 10) {
				ret[retidx] -= 10;
				ret[retidx - 1]++;
			}
			retidx--;
			bidx--;
		}
	}
	int chk2 = 0;
	if (ret[0] != 0) {
		printf("%d", ret[0]);
		chk2 = 1;
	}

	for (i = 1; i <= retlen; i++) {
		if (ret[i] == 0&&chk2==0) continue;
		if (!chk) {
			printf("-");
			chk = 1;
		}
		printf("%d", ret[i]);
		chk2 = 1;
	}
	if (!chk2) printf("0");
}*/

/*string a, b; //큰 수 A+B
int ret[20000];
int main() {
	int i, aidx, bidx, retidx, retlen = 0;
	cin >> a >> b;
	aidx = a.length() - 1, bidx = b.length() - 1, retidx = retlen = max(aidx, bidx) + 1;
	while (aidx >= 0 && bidx >= 0) {
		ret[retidx] += a[aidx] + b[bidx] - 2 * '0';
		if (ret[retidx] >= 10) {
			ret[retidx] -= 10;
			ret[retidx - 1]++;
		}
		retidx--;
		aidx--;
		bidx--;
	}
	while (aidx >= 0) {
		ret[retidx] += a[aidx] - '0';
		if (ret[retidx] >= 10) {
			ret[retidx] -= 10;
			ret[retidx - 1]++;
		}
		retidx--;
		aidx--;
	}
	while (bidx >= 0) {
		ret[retidx] += b[bidx] - '0';
		if (ret[retidx] >= 10) {
			ret[retidx] -= 10;
			ret[retidx - 1]++;
		}
		retidx--;
		bidx--;
	}

	int chk2 = 0;
	if (ret[0] != 0) {
		cout << ret[0];
		chk2 = 1;
	}

	for (i = 1; i <= retlen; i++) {
		if (ret[i] == 0 && chk2 == 0) continue;
		cout << ret[i];
		chk2 = 1;
	}
	if (!chk2) cout << 0;
}*/

/*int parent[101], depth[101]; //2644 촌수계산
int main() {
	int i, n, a, b, m, x, y;
	scanf("%d%d%d%d", &n, &a, &b, &m);
	for (i = 1; i <= n; i++) {
		parent[i] = i;
		depth[i] = 1;
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d", &x, &y);
		parent[y] = x;
		depth[y] = depth[x] + 1;
	}
	if (depth[a] < depth[b]) swap(a, b);
	int ret = -1, tmpb = 0, t;
	while (true) {
		t = a;
		int tmpa = 0;
		while (parent[t] != t) {
			t = parent[t];
			tmpa++;
			if (t == b) {
				ret = tmpa + tmpb;
				break;
			}
		}

		if (parent[b] == b||ret!=-1) {
			break;
		}
		b = parent[b];
		tmpb++;
	}
	printf("%d", ret);
}*/

/*int visited[1000000]; //5014 스타트링크
int main() {
	int f, s, g, u, d;
	scanf("%d%d%d%d%d", &f, &s, &g, &u, &d);
	queue<pair<int, int>> que;
	que.emplace(0, s);
	int ret = -1;
	while (!que.empty()) {
		int dist = que.front().first,
			here = que.front().second;
		que.pop();

		if (here == g) {
			ret = dist;
			break;
		}
		if (visited[here]) continue;
		visited[here] = 1;
		if (here + u <= f) que.emplace(dist + 1, here + u);
		if (here - d > 0) que.emplace(dist + 1, here - d);
	}
	if (ret == -1) printf("use the stairs");
	else printf("%d", ret);
}*/

/*int board[101][101], cpy[101][101], visited[101][101], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //2468 안전 영역
int main() {
	int h, i, j, n, maxH=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
			if (maxH < board[i][j]) maxH = board[i][j];
		}
	}

	int ret = 0;
	for (h = 0; h <= maxH; h++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (board[i][j] <= h) cpy[i][j] = 0;
				else cpy[i][j] = 1;
				visited[i][j] = 0;
			}
		}
		queue<pair<int, int>> que;
		int tmp = 0;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (!visited[i][j]&&cpy[i][j]==1) {
					tmp++;
					que.emplace(i, j);
					while (!que.empty()) {
						int x = que.front().first,
							y = que.front().second;
						que.pop();
						if (visited[x][y]) continue;
						visited[x][y] = 1;
						for (int k = 0; k < 4; k++) {
							int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
							if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > n||cpy[nxtX][nxtY]==0) continue;
							que.emplace(nxtX, nxtY);
						}
					}
				}
			}
		}
		if (ret < tmp) ret = tmp;
	}
	printf("%d", ret);
}*/

/*int board[301][301], cpy[301][301], visited[301][301], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //2573 빙산
int main() {
	int i, j, n, m;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) scanf("%d", &board[i][j]);
	}
	int ret = 0, tmp=0;
	while (true) {
		int chk = 0;
		queue<pair<int, int>> que;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				visited[i][j] = 0;
			}
		}
		for (i = 1; i <= n; i++) { //BFS
			for (j = 1; j <= m; j++) {
				if (!visited[i][j]&&board[i][j]!=0) {
					chk = 1;
					que.emplace(i, j);
					while (!que.empty()) {
						int x = que.front().first,
							y = que.front().second;
						que.pop();
						if (visited[x][y]) continue;
						visited[x][y] = 1;
						for (int k = 0; k < 4; k++) {
							int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
							if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || board[nxtX][nxtY] == 0) continue;
							que.emplace(nxtX, nxtY);
						}
					}
					break;
				}
			}
			if (j != m + 1) break;
		}
		if (chk == 0) break;
		for (i = 1; i <= n; i++) { //체크
			for (j = 1; j <= m; j++) {
				if (board[i][j] != 0 && visited[i][j] == 0) break;
			}
			if (j != m+1) break;
		}
		if (i != n+1) {
			ret = tmp;
			break;
		}
		//빙산 녹이기
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				cpy[i][j] = 0;
			}
		}
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				if (board[i][j] != 0) {
					for (int k = 0; k < 4; k++) {
						int nxtX = i + nxt[k][0], nxtY = j + nxt[k][1];
						if (board[nxtX][nxtY] == 0) cpy[i][j]--;
					}
				}
			}
		}

		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				board[i][j] = max(0, board[i][j]+cpy[i][j]);
			}
		}
		tmp++;
	}
	printf("%d", ret);
}*/

/*int n, pos[102][2], visited[102]; //9205 맥주 마시면서 걸어가기
int dp[102][21];
int dfs(int idx, int beer) {
	if (beer < 0) return 0;
	if (idx == n+1) {
		return 1;
	}
	int &ret = dp[idx][beer];
	if (ret!=-1) return ret;
	ret = 0;
	beer = 20;
	for (int i = 0; i < n+2; i++) {	
		if (visited[i]) continue;
		int remain = beer - (abs(pos[i][0] - pos[idx][0]) + abs(pos[i][1] - pos[idx][1])) / 50;
		if ((abs(pos[i][0] - pos[idx][0]) + abs(pos[i][1] - pos[idx][1])) % 50) remain--;
		visited[i] = 1;
		ret |= dfs(i, remain);
		visited[i] = 0;
	}
	return ret;
}
int main() {
	int i, j, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < 102; i++) {
			for (j = 0; j < 21; j++) {
				dp[i][j] = -1;
			}
		}
		for (i = 0; i < n+2; i++) {
			scanf("%d%d", &pos[i][0], &pos[i][1]);
		}
		for (i = 0; i < n+2; i++) {
			visited[i] = 0;
		}
		visited[0] = 1;
		if (dfs(0, 20)) printf("happy\n");
		else printf("sad\n");
	}
}*/

/*int INF = 987654321; //1939 중량제한 (다시 풀어보기)
int n, visited[10001];
vector<pair<int, int>> adj[10001];

bool bfs(int x, int y, int limit) {
	fill(visited, visited + n + 1, 0);
	queue<int> que;
	que.push(x);
	while (!que.empty()) {
		int here = que.front();
		que.pop();
		if (here == y) {
			return true;
		}
		//방문 체크
		if (visited[here]) continue;
		visited[here] = 1;
		for (auto it : adj[here]) {
			if (it.second>=limit) {
				que.push(it.first);
			}
		}
	}
	return false;
}
int main() {
	int i, m, a, b, c, x, y, mina = 0, maxa = -1;
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		adj[a].emplace_back(b, c);
		adj[b].emplace_back(a, c);
		if (maxa < c) maxa = c;
	}

	scanf("%d%d", &x, &y);
	int ret = 0;
	while (mina <= maxa) {
		int mid = (mina + maxa) / 2;
		printf("mina : %d, maxa : %d, mid : %d\n", mina, maxa, mid);
		if (bfs(x, y, mid)){
			if (ret < mid) ret = mid;
			mina = mid+1;
		}
		else maxa = mid-1;
		printf("after mina : %d, maxa : %d, mid : %d\n", mina, maxa, mid);
	}
	printf("%d\n", ret);
}*/

/*typedef long long ll; //3079 입국심사
int t[100000];
int main() {
	int i, j, n, m;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &t[i]);
	}
	ll ans = LLONG_MAX, mina = 1, maxa = LLONG_MAX;
	while(mina<=maxa){
		ll cnt=0, mid = mina + (maxa - mina) / 2;
		for (j = 0; j < n; j++) {
			cnt += mid / t[j];
			if (cnt >= m) break;
		}
		if (cnt >= m) {
			if (ans > mid) ans = mid;
			maxa = mid - 1;
		}
		else mina = mid + 1;
	}
	printf("%lld", ans);
}*/

////////////////////////////////////////
		  	 /*이분 탐색*/
////////////////////////////////////////

/*map<string, int> mp; //1620 나는야 포켓몬 마스터 이다솜
map<int, string> mp2;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int i, n, m;
	string s;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		cin >> s;
		mp[s] = i;
		mp2[i] = s;
	}
	for (i = 1; i <= m; i++) {
		cin >> s;
		if (s[0] - '0' <= 9) { //숫자
			cout << mp2[atoi(s.c_str())] << "\n";
		}
		else {//이름
			cout << mp[s] << "\n";
		}
	}
}*/

/*typedef long long ll; //1072 게임
int main() {
	ll x, y, z;
	scanf("%lld%lld", &x, &y);
	z = y*100 / x;
	if (z >=99) printf("-1");
	else {
		ll left = 1, right = INT_MAX, ans=INT_MAX;
		while(left<=right){
			ll mid = left + (right - left) / 2;
			if ((y + mid)*100 / (x + mid) > z) {
				if (ans > mid) ans = mid;
				right = mid - 1;
			}
			else left = mid + 1;
		}
		printf("%lld", ans);
	}
}*/

/*int main() { //3020 개똥벌레
	int i, j, n, h, num, INF = 987654321;
	vector<int> odd, mean;
	scanf("%d%d", &n, &h);
	for (i = 0; i < n; i++) {
		scanf("%d", &num);
		if (i % 2) {//odd
			odd.push_back(num);
		}
		else mean.push_back(num);
	}
	sort(odd.begin(), odd.end());
	sort(mean.begin(), mean.end());
	int ret = INF, retNum = 0;
	for (i = 0; i < h; i++) {
		int oddIdx = odd.end()-upper_bound(odd.begin(), odd.end(), i);
		int meanIdx = mean.end()-upper_bound(mean.begin(), mean.end(), h - i - 1);
		if (oddIdx + meanIdx < ret) {
			ret = oddIdx + meanIdx;
			retNum = 1;
		}
		else if (oddIdx + meanIdx == ret) retNum++;
	}
	printf("%d %d", ret, retNum);
}*/

/*int main() { //2343 기타 레슨
	int i, n, m, len[100000], sum[100000], mina=1, maxa=0, tmpMin=0;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &len[i]);
		if (tmpMin < len[i]) tmpMin = len[i];
		maxa += len[i];
	}

	int ans = 1e10 + 1;
	while (mina <= maxa) {
		int mid = (mina + maxa) / 2, tmpSum=0, num=1, chk=0;
		for (i = 0; i < n; i++) {
			if (tmpSum + len[i] > mid) {
				num++;
				if (num > m) {
					mina = mid + 1;
					chk = 1;
					break;
				}
				tmpSum = 0;
			}
			tmpSum += len[i];
		}
		if (!chk) {
			if (ans > mid) ans = mid;
			maxa = mid - 1;
		}
	}
	printf("%d", tmpMin>ans ? tmpMin : ans);
}*/

/*int main() { //6236 용돈 관리
	int i, n, m, day[100000], mina=1, maxa=1e10+1;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &day[i]);
	}

	int ans = 1e10 + 1;
	while (mina <= maxa) {
		int mid = (mina + maxa) / 2, remain=0, withdrawal=0, chk=0;
		for (i = 0; i < n; i++) {
			if (remain < day[i]) {
				remain = mid;
				withdrawal++;
				if (mid<day[i]||withdrawal > m) {
					chk = 1;
					mina = mid + 1;
					break;
				}
			}
			remain -= day[i];
		}
		if (!chk) {
			if (ans > mid) ans = mid;
			maxa = mid - 1;
		}
	}
	printf("%d", ans);
}*/

/*typedef long long ll; //2792 보석 상자
int main() {
	ll i, n, m, jwel[300000], lim=0, sum=0;
	scanf("%lld%lld", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%lld", &jwel[i]);
		sum += jwel[i];
	}

	sort(jwel, jwel + m);
	lim = jwel[m - 1];
	ll mina = 1, maxa = 1e18, ans=1e18;
	while (mina <= maxa) {
		ll mid = mina + (maxa - mina) / 2;
		if (mid > lim) maxa = mid - 1;
		else {
			int give = 0, chk=0;
			for (i = 0; i < m; i++) {
				give += jwel[i] / mid;
				if (jwel[i] % mid) give++;
				if (give > n) {
					mina = mid + 1;
					chk = 1;
					break;
				}
			}
			if (!chk) {
				if (ans > mid) ans = mid;
				maxa = mid - 1;
			}
		}
	}
	printf("%lld", ans);
}*/
 
/*int main() { //2022 사다리
	double x, y, c, mina=0, maxa=1e10;
	scanf("%lf%lf%lf", &x, &y, &c);
	double ans = 1e10;
	while (mina <= maxa) {
		double mid = (mina + maxa) / 2.0;
		if (mid >= x || mid >= y) {
			maxa = mid - 1e-6;
			continue;
		}
		double sx = sqrt(x * x - mid * mid), sy = sqrt(y * y - mid * mid);
		double height = (sx * sy) / (sx + sy);
		if (c < height) mina = mid+1e-6;
		else if (c > height) {
			if (ans > mid) ans = mid;
			maxa = mid - 1e-6;
		}
	}
	printf("%.3lf", ans);
}*/

/*int main() { //3649 로봇 프로젝트
	int i, t, width, n, block[1000000], visited[1000000];
	while (scanf("%d", &width)!=EOF) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &block[i]);
		}
		fill(visited, visited + n, 0);
		sort(block, block + n);
		int a=-1, b=-1, min=-1;
		for (i = 0; i < n; i++) {
			if (visited[i]) continue;
			visited[i] = 2;
			int bIdx=-1, mina = 0, maxa = n - 1, obj = width * 1e7 - block[i];
			while (mina <= maxa) {
				int mid = (mina + maxa) / 2;
				if (block[mid] < obj) mina = mid + 1;
				else if (block[mid] > obj) maxa = mid - 1;
				else if(block[mid]==obj){
					bIdx = mid;
					break;
				}
			}
			if (bIdx != -1) {
				if (visited[bIdx] == 2 && block[bIdx] != block[bIdx - 1] && block[bIdx] != block[bIdx + 1]) {
					visited[i] = 1;
					continue;
				}
				if (min < abs(block[i] - block[bIdx])) {
					a = block[i], b = block[bIdx];
					min = abs(a - b);
				}
			}
			visited[i] = 1;
		}
		if (a > b) swap(a, b);
		if (a == -1) printf("danger\n");
		else printf("yes %d %d\n", a, b);
	}
}*/

/*typedef long long ll; //11812 K진 트리

int getDepth(ll x, ll k) {
	int lo = 1, hi = 50, ans=51;
	while (lo <= hi) {
		int mid = (lo+hi) / 2;
		if (x <= (pow(k, mid) - 1) / (k - 1)) {
			if (ans > mid) ans = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}
	return ans;
}
int main() {
	ll i, n, k, q, x, y;
	scanf("%lld%lld%lld", &n, &k, &q);
	for (i = 0; i < q; i++) {
		scanf("%lld%lld", &x, &y);
		if (k == 1) printf("%lld\n", abs(x - y));
		else {
			int ret=0, depX = getDepth(x, k), depY = getDepth(y, k);
			if (depX > depY) {
				swap(x, y);
				swap(depX, depY);
			}

			while (depX != depY) {
				y = (y + (k - 2)) / k;
				depY--;
				ret++;
			}

			while (x != y) {
				x = (x + (k - 2)) / k;
				y = (y + (k - 2)) / k;
				depX--;
				depY--;
				ret += 2;
			}
			printf("%d\n", ret);
		}
	}
}*/

/*int main() { //2613 숫자구슬
	int i, n, m, *ball, lo = 1, hi = 30000, mx=0;
	scanf("%d%d", &n, &m);
	ball = new int[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &ball[i]);
		if (mx < ball[i]) mx = ball[i];
	}

	int idx = 0, ans = 987654321, retArr[300], arr[300], maxChk[300];
	while (lo <= hi) {
		int mid = (lo + hi) / 2, sum = 0, grp = 1, chk = 0, tmpMax, grpNum = 0, maxCnt=0;
		idx = 0;
		fill(arr, arr + n, 0);
		for (i = 0; i < n; i++) {
			sum += ball[i];
			grpNum++;
			if (sum + ball[i + 1] == mid) {
				maxCnt++;
				maxChk[idx] = 1;
			}
			if (sum + ball[i + 1] > mid) {
				sum = 0;
				grp++;
				arr[idx++] = grpNum;
				grpNum = 0;
				if (grp > m) {
					chk = 1;
					lo = mid + 1;
					break;
				}
			}
		}
		if (!chk) {
			if (ans > mid) {
				int tSum = 0;
				for (int j = 0; j < idx; j++) tSum += arr[j];
				arr[idx] = n - tSum;
				if (arr[idx] == mid) {
					maxCnt++;
					maxChk[idx]++;
				}
				if (mid == 100) {
					for (int j = 0; j <= idx; j++) {
						printf("%d ", arr[j]);
					}
					printf("\n");
				}
				for (int t = idx; t >= 0; t--) {
					if (idx == m - 1) break;
					if (arr[t] == 1 || (maxCnt == 1 && maxChk[t])) continue;
					arr[t]--;
					for (int k = t + 2; k <= idx + 1; k++) {
						arr[k] = arr[k - 1];
					}
					arr[t + 1] = 1;
					idx++;
				}
				if (idx == m - 1) {
					int sum = 0;
					for (i = 0; i <= idx; i++) {
						retArr[i] = arr[i];
						sum += arr[i];
					}
				}
				ans = mid;
			}
			hi = mid - 1;
		}
	}
	printf("%d\n", mx>ans ? mx : ans);
	for (i = 0; i < m; i++) {
		printf("%d ", retArr[i]);
	}
}*/

/*int main() { // 1024 수열의 합
	int i, j, n, l, sum = 0, chk = 0;
	scanf("%d%d", &n, &l);
	for (i = 1; i < l-1; i++) sum += i;
	for (i = l-1; i <= 100; i++) {
		sum += i;
		if (sum > n) break;
		if ((n-sum) % i) continue;
		else {
			int start = 1 + (n - sum) / i;
			if (i == l - 1 && start != 1) continue;
			if (i == l - 1) printf("0 ");
			for (j = start; j < i + start; j++) {
				printf("%d ", j);
			}
			chk = 1;
			break;
		}
	}
	if (!chk) printf("-1");
}*/

/*int arr[1000], cpy[1000], visited[1000]; //1015 수열 정렬
pair<int, int> tmp[1000];
void qSort(int lo, int hi) {
	if (lo > hi) return;
	int p = lo, q = hi, pivot = arr[(lo + hi) / 2];
	while (p <= q) {
		while (arr[p] < pivot) p++;
		while (arr[q] > pivot) q--;
		if (p <= q) {
			swap(arr[p], arr[q]);
			p++;
			q--;
		}
	}
	qSort(lo, q);
	qSort(p, hi);
}

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		cpy[i] = arr[i];
	}

	qSort(0, n - 1);
	for (i = 0; i < n; i++) {
		tmp[i] = { arr[i], i };
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (visited[j]) continue;
			if (cpy[i] == tmp[j].first) {
				printf("%d ", tmp[j].second);
				visited[j] = 1;
				break;
			}
		}
	}
}*/

/*int board[50][5]; //1022 소용돌이 예쁘게 출력하기
int main() {
	int i, j, r1, c1, r2, c2, w, h, sz;
	scanf("%d%d%d%d", &r1, &c1, &r2, &c2);
	int x = 0, y = 0, val = 1, len = 1, idx = 0, xP = -r1, yP = -c1;
	if (x >= r1 && x <= r2 && y >= c1 && y <= c2) 
		board[x + xP][y + yP] = val;
	val++;

	while (true) {
		//printf("x : %d, y : %d\n", x, y);
		if (x >= 0) {//오 -> 위
			for (i = y + 1; i <= y + len; i++) {//오
				if (i > 5000) break;
				if (x >= r1 && x <= r2 && i >= c1 && i <= c2) {
					board[x + xP][i + yP] = val;
				}
				val++;
			}
			if (i != y + len + 1) break;
			y = i - 1;
			
			for (i = x - 1; i >= x - len; i--) {//위
				if (i < -5000) break;
				if (i >= r1 && i <= r2 && y >= c1 && y <= c2) {
					board[i + xP][y + yP] = val;
				}
				val++;
			}
			if (i != x - len - 1) break;
			x = i + 1;
		}
		else {//왼 -> 아
			for (i = y - 1; i >= y - len; i--) {//왼
				if (i > 5000) break;
				if (x >= r1 && x <= r2 && i >= c1 && i <= c2) board[x + xP][i + yP] = val;
				val++;
			}
			if (i != y - len - 1) break;
			y = i + 1;
			for (i = x + 1; i <= x + len; i++) {//아
				if (i < -5000) break;
				if (i >= r1 && i <= r2 && y >= c1 && y <= c2) board[i + xP][y + yP] = val;
				val++;
			}
			if (i != x + len + 1) break;
			x = i - 1;
		}
		len++;
	}
	int hi = 0, div=1, k=0, p=1;
	for (i = 0; i <= r2-r1; i++) {
		for (j = 0; j <= c2 - c1; j++) {
			if (board[i][j] > hi) hi = board[i][j];
		}
	}
	while (hi / div != 0) {
		k++;
		div *= 10;
	}
	for (i = 0; i <= r2 - r1; i++) {
		for (j = 0; j <= c2 - c1; j++) {
			p = 0, div=1;
			while (board[i][j] / div != 0) {
				p++;
				div *= 10;
			}
			for (int t = 0; t < k-p; t++) printf(" ");
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
}*/

/*int main() { //1032 명령 프롬프트
	int i, j, n;
	string arr[50];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (j = 0; j < arr[0].length(); j++) {
		char tmp = arr[0][j];
		for (i = 1; i < n; i++) {
			if (tmp != arr[i][j]) break;
		}
		if (i != n) cout<<"?";
		else cout << tmp;
	}
}*/

/*int arr[101], visited[101];
vector<int> retVec;
int main() {
	int n, i, ret=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i <= n; i++) {
		if (arr[i] == i) {
			visited[i] = 1;
			ret++;
			retVec.push_back(i);
		}
		else if (visited[i]) continue;
		else {
			int start = i, here = i, nxt=arr[i], l=0;
			while (visited[here] != 1) {
				visited[here] = 1;
				here = nxt;
				nxt = arr[here];
				l++;
			}
			if (arr[nxt] == start) {
				ret += l;
				retVec.push_back(start);
				here = arr[start], nxt = arr[here];
				while (here != start) {
					retVec.push_back(here);
					here = nxt;
					nxt = arr[here];
				}
			}
		}
	}
	sort(retVec.begin(), retVec.end());
	printf("%d\n", ret);
	for (auto it : retVec) printf("%d\n", it);
}*/

/*int arr[101], visited[101]; //2668 숫자고르기 (다시 풀어보기)
vector<int> ans;
void dfs(int start, int here) {
	if (visited[here]) {
		if (start == here) {
			ans.push_back(here);
		}
	}
	else {
		visited[here] = 1;
		dfs(start, arr[here]);
	}
}
int main() {
	int n, i, ret = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= n; i++) {
		dfs(i, i);
		fill(visited, visited + n + 1, 0);
	}
	printf("%d\n", ans.size());
	for (auto it : ans) {
		printf("%d\n", it);
	}
}*/

/*int board[101][101]; //2669 직사각형 네개의 합집합의 면적 구하기
int main() {
	int i, j, k, lx, ly, rx, ry;
	for (i = 0; i < 4; i++) {
		scanf("%d%d%d%d", &lx, &ly, &rx, &ry);
		for (j = lx; j < rx; j++) {
			for (k = ly; k < ry; k++) board[j][k] = 1;
		}
	}
	int ret = 0;
	for (i = 1; i <= 100; i++) {
		for (j = 1; j <= 100; j++) {
			if (board[i][j]) ret++;
		}
	}
	printf("%d", ret);
}*/

/*int num[4], visited[10000]; //2659 십자카드 문제
vector<vector<int>> cand;

void dfs(int idx, vector<int> tmp) {
	if (idx == 4) {
		cand.push_back(tmp);
		return;
	}
	for (int i = 1; i <= 9; i++) {
		tmp[idx] = i;
		dfs(idx + 1, tmp);
	}
}
int main() {
	int i, j, p, q, INF=987654321, clkNum=INF;
	for (i = 0; i < 4; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 4; i++) {
		int tmp = 0, idx=i, k=1000;
		for (j = 0; j < 4; j++) {
			tmp += num[idx] * k;
			idx++;
			idx %= 4;
			k /= 10;
		}
		if (clkNum > tmp) clkNum = tmp;
	}

	dfs(0, vector<int>(4));
	int ret = 0;
	for (auto it : cand) {
		int pp = INF;
		for (i = 0; i < 4; i++) {
			int tmp = 0, idx = i, k = 1000;
			for (j = 0; j < 4; j++) {
				tmp += it[idx] * k;
				idx++;
				idx %= 4;
				k /= 10;
			}
			if (pp > tmp) pp = tmp;
		}
		if (visited[pp]) continue;
		visited[pp] = 1;
		ret++;
		if (pp == clkNum) break;

	}
	printf("%d", ret);
}*/

/*typedef long long ll; //15829 Hashing
int main() {
	int i, j, l, MUL=31, DIV=1234567891;
	string s;
	cin >> l >> s;
	ll ret = 0;
	for (i = 0; i < s.length(); i++) {
		ll r = 1;
		for (j = 0; j < i; j++) {
			r *= MUL;
			r %= DIV;
		}
		ret += (s[i] - 'a' + 1) * r;
		ret %= DIV;
	}
	cout << ret;
}*/

/*int main() { //1259 팰린드롬수
	int num;
	while (true) {
		int i, idx=0, arr[5];
		scanf("%d", &num);
		if (num == 0) break;
		while (num != 0) {
			arr[idx++] = num % 10;
			num /= 10;
		}

		for (i = 0; i < idx / 2; i++) {
			if (arr[i] != arr[idx-1-i]) {
				printf("no\n");
				break;
			}
		}
		if (i == idx / 2) printf("yes\n");
	}
}*/

/*int main() { //17626 Four Squares
	int i, j, k, l, idx=1, n;
	scanf("%d", &n);
	for (i = 1; i <= 225; i++) {
		if (i * i > n) break;
		if (i * i == n) {
			printf("1");
			return 0;
		}
	}

	for (i = 1; i <= 225; i++) {
		for (j = 1; j <= 225; j++) {
			if (i * i + j * j > n) break;
			if (i * i +j*j== n) {
				printf("2");
				return 0;
			}
		}
	}

	for (i = 1; i <= 225; i++) {
		for (j = 1; j <= 225; j++) {
			for (k = 1; k <= 225; k++) {
				if (i * i + j * j + k * k > n) break;
				if (i * i + j * j + k * k == n) {
					printf("3");
					return 0;
				}
			}
		}
	}

	for (i = 1; i <= 225; i++) {
		for (j = 1; j <= 225; j++) {
			for (k = 1; k <= 225; k++) {
				for (l = 1; l <= 225; l++) {
					if (i * i + j * j + k * k + l * l > n) break;
					if (i * i + j * j + k * k + l * l== n) {
						printf("4");
						return 0;
					}
				}
			}
		}
	}
}*/

/*int main() { //2475 검증수
	int i, ret=0, n;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		ret += n * n;
	}
	printf("%d", ret % 10);
}*/

/*int n, m, b, board[500][500]; //18111 마인크래프트
int main() {
	int i, j, k;
	scanf("%d%d%d", &n, &m, &b);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	int ret = 987654321, retH=-1;
	for (i = 0; i <= 256; i++) {
		int tmp = 0, c=b;
		for (j = 0; j < n; j++) {
			for (k = 0; k < m; k++) {
				if (board[j][k] > i) {
					tmp += 2 * (board[j][k] - i);
					c += board[j][k] - i;
				}
			}
		}
		for (j = 0; j < n; j++) {
			for (k = 0; k < m; k++) {
				if (board[j][k] < i) {
					if (c - (i - board[j][k]) < 0) {
						break;
					}
					tmp += (i-board[j][k]);
					c-= i-board[j][k];
				}
			}
			if (k != m) break;
		}
		if (j == n&&ret>=tmp) {//정상 종료
			ret = tmp;
			retH = i;
		}
	}
	printf("%d %d", ret, retH);
}*/

/*int main() { //1764 듣보잡
	int i, n, m;
	string s;
	map<string, int> mp;
	vector<string> vec;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> s;
		mp[s] = 1;
	}

	for (i = 0; i < m; i++) {
		cin >> s;
		if (mp.count(s)) vec.push_back(s);
	}
	sort(vec.begin(), vec.end());
	cout << vec.size() << endl;
	for (auto it : vec) {
		cout << it << endl;
	}
}*/

/*int parent[1001], depth[1001], chk[1001]; //11724 연결 요소의 갯수

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

void merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return;
	if (depth[a] < depth[b]) swap(a, b);
	if (depth[a] == depth[b]) depth[a]++;
	parent[b] = a;
}

int main() {
	int i, n, m, a, b;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		parent[i] = i;
		depth[i] = 1;
	}

	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		merge(a, b);
	}
	set<int> st;
	for (i = 1; i <= n; i++) {
		st.insert(find(parent[i]));
	}
	printf("%d", st.size());
}*/

/*int n, r, c, ret=0, chk=0; //1074 Z

void dnq(int x, int y, int len) {
	if (chk) return;
	if (x + len<r || y + len<c || x>r || y>c) {
		ret += len * len;
		return;
	}
	if (len == 1) {
		if (x == r && y == c) chk = 1;
		else ret++;
		return;
	}
	dnq(x, y, len / 2);
	dnq(x, y + len / 2, len / 2);
	dnq(x + len / 2, y, len / 2);
	dnq(x + len / 2, y + len / 2, len / 2);
}

int main() {
	scanf("%d%d%d", &n, &r, &c);
	dnq(0, 0, pow(2, n));
	printf("%d", ret);
}*/

/*typedef long long ll; //7662 이중 우선순위 큐 (다시 풀어보기)
int visited[1000010];
int main() {
	int i, t, k;
	ll n;
	char op;
	scanf("%d", &t);
	while (t--) {
		int idx = 0;
		scanf("%d", &k);
		priority_queue<pair<ll, int>> maxHeap;
		priority_queue<pair<ll, int>> minHeap;
		for (i = 0; i < k; i++) {
			fgetc(stdin);
			scanf("%c %lld", &op, &n);
			if (op == 'I') {
				visited[++idx] = 0;
				maxHeap.emplace(n, idx);
				minHeap.emplace(-n, idx);
			}
			else{
				while (!maxHeap.empty() && visited[maxHeap.top().second]) maxHeap.pop();
				while (!minHeap.empty() && visited[minHeap.top().second]) minHeap.pop();
				if (!maxHeap.empty()) {
					if (n == 1) {
						visited[maxHeap.top().second] = 1;
						maxHeap.pop();
					}
					else {
						visited[minHeap.top().second] = 1;
						minHeap.pop();
					}
				}
			}
		}
		while (!maxHeap.empty() && visited[maxHeap.top().second]) maxHeap.pop();
		while (!minHeap.empty() && visited[minHeap.top().second]) minHeap.pop();
		if (maxHeap.empty()) printf("EMPTY\n");
		else {
			printf("%lld %lld\n", maxHeap.top().first, -minHeap.top().first);
		}
	}
}*/

/*string dp[101][101]; //2407 조합

string sum(string a, string b) {
	int aidx = a.length(), bidx = b.length(), sumidx = max(aidx, bidx);
	string ret;
	ret.resize(sumidx);
	while (aidx > 0 && bidx > 0) {
		sumidx--;
		aidx--;
		bidx--;
		ret[sumidx] += a[aidx] + b[bidx] - '0';
		if (ret[sumidx] - '0' >= 10) {
			ret[sumidx] -= 10;
			if (sumidx != 0) ret[sumidx - 1] += 1;
			else {
				sumidx = a.length();
				ret.resize(sumidx+1);
				for (int i = sumidx; i > 0; i--) {
					ret[i] = ret[i - 1];
				}
				ret[0] = '1';
			}
		}
	}
	while (aidx > 0) {
		ret[--sumidx] += a[--aidx];
		if (ret[sumidx] - '0' >= 10) {
			ret[sumidx] -= 10;
			if (sumidx != 0) ret[sumidx - 1] += 1;
			else {
				sumidx = max(a.length(), b.length());
				ret.resize(sumidx + 1);
				for (int i = sumidx; i > 0; i--) {
					ret[i] = ret[i - 1];
				}
				ret[0] = '1';
			}
		}
	}
	while (bidx > 0) {
		ret[--sumidx] += b[--bidx];
		if (ret[sumidx] - '0' >= 10) {
			ret[sumidx] -= 10;
			if (sumidx != 0) ret[sumidx - 1] += 1;
			else {
				sumidx = max(a.length(), b.length());
				ret.resize(sumidx + 1);
				for (int i = sumidx; i > 0; i--) {
					ret[i] = ret[i - 1];
				}
				ret[0] = '1';
			}
		}
	}

	return ret;
}
string combi(int n, int m) {
	if (m == 0 || n == 0||m == n) return to_string(1);
	if (m == 1) return to_string(n);
	string& ret = dp[n][m];
	if (ret!="") return ret;
	return ret=sum(combi(n-1, m-1), combi(n-1, m));
}
int main() {
	int n, m;
	cin >> n >> m;
	cout << combi(n, m) << endl;
}*/

/*int n, k, arr[100001]; //13549 숨바꼭질 3

int main() {
	scanf("%d%d", &n, &k);
	queue<pair<int, int>> que;
	que.emplace(n, 0);
	int ret = 0;
	while (!que.empty()) {
		int here = que.front().first,
			move = que.front().second;
		que.pop();
		if (here == k) {
			ret = move;
			break;
		}
		if (arr[here]) continue;
		arr[here] = 1;
		if (here <= 50000) que.emplace(here * 2, move);
		if (here > 0) que.emplace(here - 1, move + 1);
		if (here < 100000) que.emplace(here + 1, move + 1);
	}
	printf("%d", ret);
}*/

/*int main() { //1057 토너먼트
	int n, a, b, round = 1;
	scanf("%d%d%d", &n, &a, &b);
	n--; a--; b--;
	while (n != 1) {
		a /= 2;
		b /= 2;
		if (a == b) {
			printf("%d\n", round);
			break;
		}
		n /= 2;
		round++;
	}
	if (a != b) printf("%d\n", round);
}*/

/*int main() { //1075 나누기
	int i, j, n, f;
	scanf("%d%d", &n, &f);
	n /= 100;
	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			if (!((n*100 + 10 * i + j) % f)) {
				printf("%d%d", i, j);
				return 0;
			}
		}
	}
}*/

/*typedef long long ll; //2166 다각형의 면적 (fabs, ccw) 개역겨움
ll ccw(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3) {
	ll tmp = (x1 * y2 + x2 * y3 + x3 * y1);
	tmp -= (x2 * y1 + x3 * y2 + x1 * y3);
	return tmp;
}

int main() {
	int i, n;
	int pnt[10000][2];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &pnt[i][0], &pnt[i][1]);
	}
	ll ret = 0;
	for (i = 1; i < n - 1; i++) {
		ret += ccw(pnt[0][0], pnt[0][1], pnt[i][0], pnt[i][1], pnt[i + 1][0], pnt[i + 1][1]);
	}
	printf("%.1lf\n", fabs(ret) / 2.0);
}*/

/*int main() { //2467 용액
	int i, j, n, arr[100000], INF=(1<<31)-1, ret=INF, a, b;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		if (ret == 0) break;
		int tmp = INF, tmpa, tmpb;
		if (i != 0 && tmp > abs(arr[i] + arr[i - 1])) {
			tmp = abs(arr[i] + arr[i - 1]);
			tmpa = i - 1;
			tmpb = i;
		}

		if (i != n - 1 && tmp > abs(arr[i] + arr[i + 1])) {
			tmp = abs(arr[i] + arr[i + 1]);
			tmpa = i;
			tmpb = i + 1;
		}

		int mid, lo = 0, hi = n - 1, obj = -arr[i];
		while (lo <= hi) {
			mid = (lo + hi) / 2;
			if (arr[mid] < obj) lo = mid + 1;
			else if (arr[mid] > obj) hi = mid - 1;
			else{
				if (mid != i) {
					ret = 0;
					a = i;
					b = mid;
				}
				break;
			}
		}

		if (ret != 0) {
			if (mid < n - 1 && mid+1!=i && tmp>abs(arr[i] + arr[mid + 1])) {
				tmp = abs(arr[i] + arr[mid + 1]);
				tmpa = min(i, mid+1);
				tmpb = max(i, mid+1);
			}
			if (mid != i&&tmp > abs(arr[i] + arr[mid])) {
				tmp = abs(arr[i] + arr[mid]);
				tmpa = min(i, mid);
				tmpb = max(i, mid);
			}
			if(mid>0 && mid-1 != i && tmp>abs(arr[i]+arr[mid-1])){
				tmp = abs(arr[i] + arr[mid-1]);
				tmpa = min(i, mid-1);
				tmpb = max(i, mid-1);
			}
		}
		if (ret > tmp) {
			ret = tmp;
			a = tmpa;
			b = tmpb;
		}
	}
	printf("%d %d", arr[a], arr[b]);
}*/

/*vector<int> adj[10001]; //2056 작업
int cost[10001], in[10001], tm[10001];
int main() {
	int i, j, n, a;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d%d", &cost[i], &in[i]);
		for (j = 0; j < in[i]; j++) {
			scanf("%d", &a);
			adj[a].push_back(i);
		}
	}

	queue<int> que;
	for (i = 1; i <= n; i++) {
		if (!in[i]) {
			tm[i] = cost[i];
			que.push(i);
		}
	}
	while (!que.empty()) {
		int here = que.front();
		que.pop();
		for (auto it : adj[here]) {
			if (tm[it] < tm[here] + cost[it]) tm[it] = tm[here] + cost[it];
			in[it]--;
			if (in[it] == 0) que.emplace(it);
		}
	}
	int ret = 0;
	for (i = 1; i <= n; i++) {
		if (ret < tm[i]) ret = tm[i];
	}

	printf("%d", ret);
}*/

/*char board[9][9], ret[9][9]; //2239 스도쿠
int chk = 0;
void func(int idx) {
	if (chk) return;
	int i, j;
	if (idx == 81) {
		chk = 1;
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				ret[i][j] = board[i][j];
			}
		}
		return;
	}
	int x = idx / 9, y = idx % 9;
	if (board[x][y] == '0') {
		int used[10];
		fill(used, used + 10, 0);
		for (i = 0; i < 9; i++) {
			int numY = board[x][i] - '0', numX = board[i][y] - '0';
			if (numY != 0 && used[numY] == 0) used[numY] = 1;
			if (numX != 0 && used[numX] == 0) used[numX] = 1;
		}

		for (i = x- x % 3; i < x - x % 3 + 3; i++) {
			for (j = y - y % 3; j < y - y % 3 + 3; j++) {
				int num = board[i][j] - '0';
				if (num&& used[num] == 0) used[num] = 1;
			}
		}

		int innerChk=0;
		for (i = 1; i <= 9; i++) {
			if (!used[i]) {
				innerChk = 1;
				board[x][y] = i +'0';
				func(idx + 1);
				board[x][y] = '0';
			}
		}
		if (!innerChk) return;
	}
	else func(idx + 1);
}
int main() {
	int i, j;
	for (i = 0; i < 9; i++) {
		scanf("%s", board[i]);
	}
	func(0);
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			printf("%c", ret[i][j]);
		}
		printf("\n");
	}
}*/

/*int n, index=0, chk=0; //1174 줄어드는 숫자
string ret;
void func(int len, int lim, int prev, string s) {
	if (index>1000000) {
		return;
	}

	if (len == lim) {
		index++;
		if (index == n) {
			chk = 1;
			ret = s;
		}
		return;
	}

	for (int i = 0; i < prev; i++) {
		func(len + 1, lim, i, s+to_string(i));
	}
}

int main() {
	int len=1;
	cin >> n;
	while (!chk&&index<=1000000) {
		string s = "";
		func(0, len, 10, s);
		len++;
		if (index >= 1023) break;
	}
	if (chk) cout << ret;
	else cout << -1;
}*/

/*char board[6][6];
int visited[6][6], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
int main() {
	int i, j, r, c, k;
	scanf("%d%d%d", &r, &c, &k);
	
	for (i = 1; i <= r; i++) {
		fgetc(stdin);
		for (j = 1; j <= c; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	queue<pair<int, pair<int, int>>> que;
	que.emplace(1, make_pair(r, 1));

	int ret = 0;
	while (!que.empty()) {
		int dist = que.front().first,
			x = que.front().second.first,
			y = que.front().second.second;
		que.pop();
		printf("x : %d, y : %d, dist : %d\n", x, y, dist);
		if (dist == k && x == 1 && y == c) ret++;
		if (visited[x][y]||dist>k) continue;
		visited[x][y] = 1;

		for (i = 0; i < 4; i++) {
			int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
			printf("\ti : %d, nxtX : %d, nxtY : %d\n", i, nxtX, nxtY);
			if (nxtX <= 0 || nxtX > r || nxtY <= 0 || nxtY > c || board[nxtX][nxtY] == 'T') continue;
			que.emplace(dist + 1, make_pair(nxtX, nxtY));
		}
	}
	printf("%d", ret);
}*/

/*int visited[6][6], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }, r, c, k;
char board[6][6];

int dfs(int x, int y, int dist) {
	if (dist == k) {
		if (x == 1 && y == c) return 1;
		else return 0;
	}
	int ret = 0;
	for (int i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX <= 0 || nxtX > r || nxtY <= 0 || nxtY > c || board[nxtX][nxtY] == 'T' || visited[nxtX][nxtY]) continue;
		visited[nxtX][nxtY] = 1;
		ret+=dfs(nxtX, nxtY, dist + 1);
		visited[nxtX][nxtY] = 0;
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d%d", &r, &c, &k);

	for (i = 1; i <= r; i++) {
		fgetc(stdin);
		for (j = 1; j <= c; j++) {
			scanf("%c", &board[i][j]);
		}
	}
	visited[r][1] = 1;
	printf("%d", dfs(r, 1, 1));
}*/

/*typedef long long ll; //2473 세 용액
const ll INF = LLONG_MAX;
int main() {
	int i, j, n;
	ll arr[5000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	sort(arr, arr + n);
	ll ret = INF;
	vector<int> val(3);
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			ll obj = -(arr[i] + arr[j]);
			int mid, start = 0, end = n - 1, chk=0;
			while (start <= end) {
				mid = (start + end) / 2;
				if (arr[mid] < obj) start = mid + 1;
				else if (arr[mid] > obj) end = mid - 1;
				else {
					if (mid != i && mid != j) {
						val[0] = arr[i], val[1] = arr[j], val[2] = arr[mid];
						chk = 1;
					}
					break;
				}
			}
			if (!chk) {
				int tmp = -1;
				if (mid != i && mid != j && abs(arr[i] + arr[mid] + arr[j]) < ret) {
					tmp = mid;
					ret = abs(arr[i] + arr[mid] + arr[j]);
				}
				if (mid > 0 && mid - 1 != i && mid - 1 != j && abs(arr[i] + arr[mid - 1] + arr[j]) < ret) {
					tmp = mid - 1;
					ret = abs(arr[i] + arr[mid - 1] + arr[j]);
				}
				if (mid < n - 1 && mid + 1 != i && mid + 1 != j && abs(arr[i] + arr[mid + 1] + arr[j]) < ret) {
					tmp = mid + 1;
					ret = abs(arr[i] + arr[mid + 1] + arr[j]);
				}
				if (tmp != -1) val[0] = arr[i], val[1] = arr[j], val[2] = arr[tmp];
			}
		}
	}
	sort(val.begin(), val.end());
	for (auto it : val) {
		printf("%d ", it);
	}
}*/

/*int in[1001], adj[1001][1001]; //2623 음악프로그램
int main() {
	int i, j, n, m, order[101][1001];
	scanf("%d%d", &n, &m);
	for (i = 1; i <= m; i++) {
		scanf("%d", &order[i][0]);
		for (j = 1; j <= order[i][0]; j++) {
			scanf("%d", &order[i][j]);
		}

		for (j = 1; j < order[i][0]; j++) {
			if (!adj[order[i][j]][order[i][j + 1]]) {
				adj[order[i][j]][order[i][j + 1]] = 1;
				in[order[i][j + 1]]++;
			}
		}
	}

	queue<int> que;
	vector<int> ret;
	for (i = 1; i <= n; i++) if (!in[i]) que.push(i);
	while (!que.empty()) {
		int here = que.front();
		que.pop();
		ret.push_back(here);
		for (i = 1; i <= n; i++) {
			if (adj[here][i]) {
				in[i]--;
				if (!in[i]) que.push(i);
			}
		}
	}
	if (ret.size() != n) printf("0\n");
	else {
		for (auto it : ret) {
			printf("%d\n", it);
		}
	}
}*/

/*char board[1001][1001]; //16946 벽 부수고 이동하기 4
int idx=1, area[1001][1001], visited[1001][1001], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
vector<int> areaVec;
int main() {
	int i, j, k, n, m;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		fgetc(stdin);
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	areaVec.push_back(-1);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (board[i][j] == '0'&&area[i][j]==0&&!visited[i][j]) {
				queue<pair<int, int>> que;
				int numOfArea = 0;
				que.emplace(i, j);
				while (!que.empty()) {
					int x = que.front().first,
						y = que.front().second;
					que.pop();
					if (visited[x][y]) continue;
					visited[x][y] = 1;
					numOfArea++;
					area[x][y] = idx;
					for (int k = 0; k < 4; k++) {
						int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
						if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || board[nxtX][nxtY] == '1') continue;
						que.emplace(nxtX, nxtY);
					}
				}
				areaVec.push_back(numOfArea);
				idx++;
			}
		}
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			if (board[i][j] == '0') printf("0");
			else {
				int tmp = 1;
				map<int, int> mp;
				for (int k = 0; k < 4; k++) {
					int nxtX = i + nxt[k][0], nxtY = j + nxt[k][1];
					if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || board[nxtX][nxtY] == '1') continue;
					if (mp.count(area[nxtX][nxtY])) continue;
					tmp += areaVec[area[nxtX][nxtY]];
					mp[area[nxtX][nxtY]] = 1;
				}
				printf("%d", tmp%10);
			}
		}
		printf("\n");
	}
}*/

/*int ret, h, w, visited[101][101], hasKey[27], nxt[4][2] = { {0, 1}, {1, 0}, {-1, 0}, {0, -1} }; //9328 열쇠
char board[101][101], have[27];
int bfs(int p, int q) {
	if (board[p][q] != '*') {
		if (board[p][q] >= 'A' && board[p][q] <= 'Z') {
			if (hasKey[board[p][q] - 'A'] == 0) return 0;
			else board[p][q] = '.';
		}
		queue<pair<int, int>> que; //x좌표, y좌표
		que.emplace(p, q);
		while (!que.empty()) {
			int x = que.front().first,
				y = que.front().second;
			que.pop();
			if (visited[x][y]) continue;
			visited[x][y] = 1;
			if (board[x][y] == '$') {
				ret++;
				board[x][y] = '.';
			}
			if (board[x][y] >= 'a' && board[x][y] <= 'z') {
				hasKey[board[x][y] - 'a'] = 1;
				board[x][y] = '.';
				memset(visited, 0, sizeof(visited));
				while (!que.empty()) que.pop();
			}
			for (int k = 0; k < 4; k++) {
				int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
				if (nxtX <= 0 || nxtX > h || nxtY <= 0 || nxtY > w || board[nxtX][nxtY] == '*') continue;
				if (board[nxtX][nxtY] >= 'A' && board[nxtX][nxtY] <= 'Z' && !(hasKey[board[nxtX][nxtY] - 'A'])) continue;
				que.emplace(nxtX, nxtY);
			}
		}
	}
	return ret;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		ret = 0;
		int i, j;
		scanf("%d%d", &h, &w);
		for (i = 1; i <= h; i++) {
			fgetc(stdin);
			for (j = 1; j <= w; j++) {
				scanf("%c", &board[i][j]);
			}
		}
		scanf("%s", have);
		memset(visited, 0, sizeof(visited));
		memset(hasKey, 0, sizeof(hasKey));

		if (have[0] != '0') {
			for (j = 0; j < strlen(have); j++) {
				hasKey[have[j] - 'a'] = 1;
			}
		}
		while (true) {
			int tmp[27];
			for (i = 0; i < 26; i++) {
				tmp[i] = hasKey[i];
			}
			for (i = 1; i <= w; i++) { //위, 아래에서 침입
				bfs(1, i);
				bfs(h, i);
			}

			for (i = 1; i <= h; i++) { //왼쪽, 오른쪽에서 침입
				bfs(i, 1);
				bfs(i, w);
			}
			for (i = 0; i < 26; i++) {
				if (tmp[i] != hasKey[i]) break;
			}
			if (i == 26) break;
		}
		printf("%d\n", ret);
	}
}*/

/*int chk[51]; //1043 거짓말
int main() {
	int i, j, k, n, m, idx, t, pNum, tmp, truth[51], party[51][51];
	map<int, int> pm[51], tm;
	scanf("%d%d%d", &n, &m, &t);
	for (i = 1; i <= t; i++) {
		scanf("%d", &truth[i]);
		tm[truth[i]] = 1;
	}

	for (i = 1; i <= m; i++) {
		scanf("%d", &pNum);
		party[i][0] = pNum;
		for (j = 1; j <= pNum; j++) {
			scanf("%d", &party[i][j]);
			pm[i][party[i][j]] = 1;
		}
	}

	int ret;
	while (true) {
		ret = 0;
		for (i = 1; i <= m; i++) {
			if (chk[i]) {
				ret++;
			}
		}
		int tmp = ret;
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= t; j++) {
				if (!chk[i]&&pm[i].count(truth[j])) { //진실을 말해야 할 때
					chk[i] = 1;
					for (k = 1; k <= party[i][0]; k++) {
						if (!tm.count(party[i][k])) {
							truth[++t] = party[i][k]; //이 파티에 참여한 사람들은 전부 진실을 알게됨.
							tm[party[i][k]] = 1;
						}
					}
					break;
				}
			}
		}
		ret = 0;
		for (i = 1; i <= m; i++) {
			if (chk[i]) ret++;
		}
		if (tmp == ret) break;
	}
	printf("%d\n", m-ret);
}*/

/*int visited[100001]; //12851 숨바꼭질 2
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int num = 0, ret = -1;
	queue<pair<int, int>> que;
	que.emplace(0, n);
	while (!que.empty()) {
		int tm = que.front().first,
			here = que.front().second;
		que.pop();
		visited[here] = 1;
		if (ret != -1 && ret < tm) break;
		if (here == k) {
			ret = tm;
			num++;
		}
		if (here > 0&&!visited[here-1]) que.emplace(tm + 1, here - 1);
		if (here < 100000&&!visited[here+1]) que.emplace(tm + 1, here + 1);
		if (here <= 50000&&!visited[here*2]) que.emplace(tm + 1, here * 2);
	}
	printf("%d\n%d\n", ret, num);
}*/

/*int main() { //16953 A->B
	int a, b;
	scanf("%d%d", &a, &b);
	queue<pair<int, int>> que;
	int ret = -2;
	que.emplace(0, a);
	while (!que.empty()) {
		int step = que.front().first,
			here = que.front().second;
		que.pop();
		if (here == b) {
			ret = step;
			break;
		}
		if (here > b) continue;
		if(here<=500000000) que.emplace(step + 1, here * 2);
		if(here<100000000)que.emplace(step + 1, here * 10 + 1);
	}
	printf("%d", ret + 1);
}*/

/*int arr[2][3], dp1[2][3], dp2[2][3], INF=987654321; //2096 내려가기
int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) scanf("%d", &arr[i%2][j]);
		if (i == 0) {
			for (j = 0; j < 3; j++) {
				dp1[0][j] = arr[0][j];
				dp2[0][j] = arr[0][j];
			}		
		}
		else {
			dp1[i % 2][0] = arr[i % 2][0] + max(dp1[(i-1)%2][0], dp1[(i - 1) % 2][1]);
			dp1[i % 2][1] = arr[i % 2][1] + max(dp1[(i - 1) % 2][0], max(dp1[(i - 1) % 2][1], dp1[(i - 1) % 2][2]));
			dp1[i % 2][2] = arr[i % 2][2] + max(dp1[(i - 1) % 2][1], dp1[(i - 1) % 2][2]);
			dp2[i % 2][0] = arr[i % 2][0] + min(dp2[(i - 1) % 2][0], dp2[(i - 1) % 2][1]);
			dp2[i % 2][1] = arr[i % 2][1] + min(dp2[(i - 1) % 2][0], min(dp2[(i - 1) % 2][1], dp2[(i - 1) % 2][2]));
			dp2[i % 2][2] = arr[i % 2][2] + min(dp2[(i - 1) % 2][1], dp2[(i - 1) % 2][2]);
		}
	}
	int mi = INF, ma = -INF;
	for (i = 0; i < 3; i++) {
		mi = min(mi, dp2[(n - 1)%2][i]);
		ma = max(ma, dp1[(n - 1)%2][i]);
	}
	printf("%d %d", ma, mi);
}*/

/*int n, m, visited[101][101], board[101][101], cpy[101][101], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //2638 치즈

void bfs(int arr[][101]) {
	memset(visited, 0, sizeof(visited));
	queue<pair<int, int>> que;
	que.emplace(1, 1);
	while (!que.empty()) {
		int x = que.front().first,
			y = que.front().second;
		que.pop();
		if (visited[x][y]) continue;
		visited[x][y] = 1;
		if (arr[x][y] == 0) arr[x][y] = 2;
		for (int k = 0; k < 4; k++) {
			int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
			if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > m || arr[nxtX][nxtY] == 1) continue;
			que.emplace(nxtX, nxtY);
		}
	}
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	bfs(board);

	memcpy(cpy, board, sizeof(cpy));
	int tm = 0;
	while (true) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= m; j++) {
				if (board[i][j] == 1) {
					int cnt = 0;
					for (int k = 0; k < 4; k++) {
						int nxtX = i + nxt[k][0], nxtY = j + nxt[k][1];
						if (nxtX > 0 && nxtX <= n && nxtY > 0 && nxtY <= m && board[nxtX][nxtY] == 2) cnt++;
					}
					if (cnt >= 2) cpy[i][j] = 2;
				}
			}
		}
		bfs(cpy);

		for (i = 1; i <= n; i++) { // 치즈 다녹았는지 체크
			for (j = 1; j <= m; j++) {
				if (board[i][j] == 1) break;
			}
			if (j != m + 1) break;
		}
		if (i == n + 1) break;
		memcpy(board, cpy, sizeof(board));
		tm++;
	}
	printf("%d", tm);
}*/

/*int border[10000], chk[10000]; //18119 단어 암기
int main() {
	int i, j, k, n, m, o, visited[26];
	vector<int> word[26];
	char x;
	char arr[10000][1001];
	memset(word, 0, sizeof(word));
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%s", arr[i]);
		memset(visited, 0, sizeof(visited));
		for (j = 0; j < strlen(arr[i]); j++) {
			if (!visited[arr[i][j] - 'a']) {
				word[arr[i][j] - 'a'].push_back(i);
				visited[arr[i][j] - 'a'] = 1;
				border[i]++;
			}
		}
	}
	int num = n;
	memcpy(chk, border, sizeof(chk));
	for (i = 0; i < m; i++) {
		scanf("%d %c", &o, &x);
		if (o == 1) {
			for (auto it : word[x - 'a']) {
				chk[it]--;
				if(chk[it]==border[it]-1) num--;
			}
		}
		else {
			for (auto it : word[x - 'a']) {
				chk[it]++;
				if (chk[it] == border[it]) num++;
			}
		}
		printf("%d\n", num);
	}
}*/

/*const int INF = 987654321; //1238 파티
int n, m, adj[1001][1001], adjr[1001][1001], visited[1001];

vector<int> dijkstra(int adj[][1001], int start) {
	int i;
	vector<int> dist(n+1);
	for (i = 1; i <= n; i++) dist[i] = INF;
	dist[start] = 0;
	memset(visited, 0, sizeof(visited));
	priority_queue<pair<int, int>> pQue;
	pQue.emplace(0, start);
	while (!pQue.empty()) {
		int here = pQue.top().second;
		pQue.pop();
		if (visited[here]) continue;
		visited[here] = 1;
		for (i = 1; i <= n; i++) {
			if (adj[here][i] && dist[i] > dist[here] + adj[here][i]) {
				dist[i] = dist[here] + adj[here][i];
				pQue.emplace(-dist[i], i);
			}
		}
	}
	return dist;
}

int main() {
	int i, j, k, x, a, b, d;
	scanf("%d%d%d", &n, &m, &x);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &d);
		adj[a][b] = d;
		adjr[b][a] = d;
	}

	vector<int> v1 = dijkstra(adj, x);
	vector<int> v2 = dijkstra(adjr, x);
	int ret = 0;
	for (i = 1; i <= n; i++) {
		if (ret < v1[i]+v2[i]) ret = v1[i]+v2[i];
	}
	printf("%d", ret);
}*/

/*const int INF = 987654321; //11779 최소비용 구하기 2
int adj[1001][1001], dist[1001], visited[1001];
vector<int> navi[1001];
int main() {
	int i, j, n, m, a, b, d, start, end;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) adj[i][j] = -1;
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &d);
		if (adj[a][b] == -1 || adj[a][b] > d) adj[a][b] = d;
	}
	scanf("%d%d", &start, &end);
	navi[start].push_back(start);
	for (i = 1; i <= n; i++) dist[i] = INF;
	dist[start] = 0;
	priority_queue<pair<int, int>> pQue;
	pQue.emplace(0, start);
	while (!pQue.empty()) {
		int here = pQue.top().second;
		pQue.pop();
		if (visited[here]) continue;
		visited[here] = 1;
		for (i = 1; i <= n; i++) {
			if (adj[here][i] != -1 && dist[i] > dist[here] + adj[here][i]) {
				dist[i] = dist[here] + adj[here][i];
				pQue.emplace(-dist[i], i);
				navi[i].clear();
				for (auto it : navi[here]) navi[i].push_back(it);
				navi[i].push_back(i);
			}
		}
	}
	printf("%d\n%d\n", dist[end], navi[end].size());
	for (auto it : navi[end]) printf("%d ", it);
}*/

/*const int MAX = 1000001; //1786 찾기 (KMP)
int n, m;
string t, p;
vector<int> getPi() {
	int i, j = 0;
	vector<int> vec(m, 0);
	for (i = 1; i < m; i++) {
		while (j > 0 && p[i] != p[j])
			j = vec[j - 1];
		if (p[i] == p[j]) {
			vec[i] = ++j;
		}
	}
	return vec;
}

vector<int> func(vector<int> pi) {
	int i, j = 0;
	vector<int> ret;
	for (i = 0; i < n; i++) {
		while (j > 0 && t[i] != p[j])
			j = pi[j - 1];
		if (t[i] == p[j]) {
			j++;
			if (j == m) {
				ret.push_back(i-m+2);
			}
		}
	}
	return ret;
}
int main() {
	getline(cin, t);
	getline(cin, p);
	n = t.length(), m = p.length();
	vector<int> pi = getPi();
	vector<int> ret = func(pi);
	cout << ret.size() << endl;
	for (auto it : ret) {
		cout << it << " ";
	}
}*/

/*vector<int> getPi(string str) { //1701 cubeditor
	int i, j = 0, l = str.length();
	vector<int> vec(l, 0);
	for (i = 1; i < l; i++) {
		while (j > 0 && str[i] != str[j])
			j = vec[j - 1];
		if (str[i] == str[j])
			vec[i] = ++j;
	}
	return vec;
}

bool func(string origin, string sub, vector<int> pi) {
	int i, j = 0, ol = origin.length(), sl = sub.length(), s=0;
	bool ret = false;
	for (i = 0; i < ol; i++) {
		while (j > 0 && origin[i] != sub[j])
			j = pi[j - 1];
		if (origin[i] == sub[j]) {
			j++;
			if (j == sl) {
				s++;
				if (s == 2) break;
			}
		}
	}
	if (s >= 2) ret = true;
	return ret;
}

int main() {
	string s;
	cin >> s;
	int i, j, len = s.length();
	for (i = 1; i <= s.length(); i++) {
		int chk = 0;
		for (j = 0; j + i < s.length(); j++) {
			string sub = s.substr(j, i);
			vector<int> pi = getPi(sub);
			if (func(s, sub, pi)) {
				chk = 1;
				break;
			}
		}
		if (!chk) {
			cout << i - 1;
			return 0;
		}
	}
}*/

/*int main() { //1305 광고
	char s[1000001];
	int l;
	scanf("%d", &l);
	scanf("%s", s);
	int i, j = 0;
	vector<int> vec(l);
	for (i = 1; i < l; i++) {
		if (j > 0 && s[i] != s[j])
			j = vec[j - 1];
		if (s[i] == s[j])
			vec[i] = ++j;
	}
	printf("%d", l - vec[l - 1]);
}*/

/*int main() { //4354 문자열 제곱
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (true) {
		string s;
		cin >> s;
		if (s.length() == 1 && s[0] == '.') break;
		int i, j = 0, len=s.length(), top=0, recurLen;
		vector<int> pi(len, 0);
		for (i = 1; i < len; i++) {
			while (j > 0 && s[i] != s[j]) {
				j = pi[j - 1];
			}
			if (s[i] == s[j]) {
				pi[i] = ++j;
			}
		}
		if (len % (len - pi[len - 1])) cout << 1 << endl;
		else cout << len / (len - pi[len - 1]) << endl;
	}
}*/

/*int g(int a, int b) {//a<=b //11585 속타는 저녁 메뉴
	if (a == 0) return b;
	else return g(b%a, a);
}
int main() {
	int i, j=0, n;
	char obj[1000000], current[1000000];
	scanf("%d", &n);
	fgetc(stdin);
	for (i = 0; i < n; i++) {
		if (i != n - 1) scanf("%c ", &obj[i]);
		else scanf("%c", &obj[i]);
	}
	fgetc(stdin);
	for (i = 0; i < n; i++) {
		if (i != n - 1) scanf("%c ", &current[i]);
		else scanf("%c", &current[i]);
	}
	vector<int> pi(n, 0);
	for (i = 1; i < n; i++) {
		while (j > 0 && obj[i] != obj[j])
			j = pi[j - 1];
		if (obj[i] == obj[j]) {
			pi[i] = ++j;
		}
	}

	for (auto it : pi) {
		printf("%d ", it);
	}
	printf("\n");
	int ret;
	if (pi[n - 1] == 0 || n % (n - pi[n - 1])) ret = 1;
	else ret = n / (n - pi[n - 1]);
	int gcd = g(ret, n);
	printf("%d/%d\n", ret / gcd, n / gcd);
}*/

/*int d, MOD=1000000007; //12849 본대 산책
int adj[8][8] = { {0, 1, 1, 0, 0, 0, 0, 0}, {1, 0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 0, 0},
				  {0, 1, 1, 0, 1, 1, 0, 0}, {0, 0, 1, 1, 0, 1 ,0, 1}, {0, 0, 0, 1, 1, 0, 1 ,0},
				  {0, 0, 0, 0, 0, 1, 0, 1}, {0, 0, 0, 0, 1, 0, 1, 0} },
	cache[8][100001];

int dp(int here, int tm) {
	if (tm == d) {
		if (here == 0)
			return 1;
		else return 0;
	}
	int& ret = cache[here][tm];
	if (ret != -1) return ret;
	ret = 0;	
	for (int i = 0; i < 8; i++) {
		if (adj[here][i])
			ret =(ret + dp(i, tm + 1))%MOD;
	}
	return ret%MOD;
}
int main() {
	scanf("%d", &d);
	int i, j, ret = 0;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 100001; j++) cache[i][j] = -1;
	}
	printf("%d\n", dp(0, 0));
}*/

/*double star[101][2]; //4386 별자리 만들기
int parent[101], depth[101];

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	if (depth[a] == depth[b]) depth[a]++;
	parent[b] = a;
	return true;
}

int main() {
	int i, j, n;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%lf%lf", &star[i][0], &star[i][1]);
		parent[i] = i;
		depth[i] = 1;
	}

	vector<pair<double, pair<int, int>>> vec;

	for (i = 1; i < n; i++) {
		for (j = i + 1; j <= n; j++) {
			double dist= sqrt((star[i][0]-star[j][0]) * (star[i][0] - star[j][0]) +
						      (star[i][1]-star[j][1]) * (star[i][1] - star[j][1]));
			vec.emplace_back(dist, make_pair(i, j));
		}
	}
	sort(vec.begin(), vec.end());
	double ret = 0;
	for (auto it : vec) {
		double dist = it.first;
		int x = it.second.first,
			y = it.second.second;	
		if (merge(x, y)) ret += dist;
	}
	printf("%.2lf\n", ret);
}*/

/*int n, INF = 987654321; //1007 벡터 매칭
double func(vector<pair<int, int>> pnt, int idx, int SX, int SY, int prev) {
	if (idx == n / 2) {
		return sqrt(((double)SX * SX) + ((double)SY * SY));
	}
	double ret = INF;
	for (int i = prev + 1; i < n; i++) {
		ret = min(ret, func(pnt, idx+1, SX-2*pnt[i].first, SY-2*pnt[i].second, i));
	}
	return ret;
}

int main() {
	int i, j, t;
	scanf("%d", &t);
	while (t--) {
		int a, b, SX=0, SY=0;
		scanf("%d", &n);
		vector<pair<int, int>> pnt;
		for (i = 0; i < n; i++) {
			scanf("%d%d", &a, &b);
			pnt.emplace_back(a, b);
			SX += a;
			SY += b;
		}

		printf("%lf\n", func(pnt, 0, SX, SY, -1));
	}
}*/

/*int t[501], in[501], adj[501][501], ret[501]; //1516 게임 개발
int main() {
	int i, n, pre;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &t[i]);
		
		scanf("%d", &pre);
		while (pre != -1) {
			adj[pre][i] = 1;
			in[i]++;
			scanf("%d", &pre);
		}
	}
	queue<pair<int, int>> que;
	for (i = 1; i <= n; i++) {
		if (!in[i]) que.emplace(i, t[i]);
	}

	while (!que.empty()) {
		int here = que.front().first,
			tim = que.front().second;
		que.pop();
		ret[here] = tim;
		for (i = 1; i <= n; i++) {
			if (adj[here][i]) {
				in[i]--;
				ret[i] = max(ret[i], tim);
				if (!in[i]) que.emplace(i, ret[i]+t[i]);
			}
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d\n", ret[i]);
	}
}*/

/*int r, c, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //1987 알파벳
char board[21][21];
int dfs(int x, int y, int bit) {
	int i, ret = 1;
	for (i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX <= 0 || nxtX > r || nxtY <= 0 || nxtY > c || bit & (1 << (board[nxtX][nxtY] - 'A'))) continue;
		ret=max(ret, 1+dfs(nxtX, nxtY, bit | (1 << (board[nxtX][nxtY] - 'A'))));
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d", &r, &c);
	for (i = 1; i <= r; i++) {
		fgetc(stdin);
		for (j = 1; j <= c; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	printf("%d", dfs(1, 1, 1 << (board[1][1] - 'A')));
}*/

/*int main() { //2143 두 배열의 합
	int i, j, t, n, m, a[1001], b[1001];
	vector<int> aSum, bSum;
	map<int, int> aMap, bMap;
	scanf("%d%d", &t, &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 1; i <= n; i++) {
		int tSum = 0;
		for (j = i; j <= n; j++) {
			tSum += a[j];
			if (!aMap.count(tSum)) {
				aSum.push_back(tSum);
				aMap[tSum] = 1;
			}
			else aMap[tSum]++;
		}
	}

	scanf("%d", &m);
	for (i = 1; i <= m; i++) {
		scanf("%d", &b[i]);
	}

	for (i = 1; i <= m; i++) {
		int tSum = 0;
		for (j = i; j <= m; j++) {
			tSum += b[j];
			if (!bMap.count(tSum)) {
				bSum.push_back(tSum);
				bMap[tSum] = 1;
			}
			else bMap[tSum]++;
		}
	}
	sort(aSum.begin(), aSum.end());
	sort(bSum.begin(), bSum.end());
	long long ret = 0;
	for (auto it : aSum) {
		int obj = t - it;
		int lo = 0, hi = bSum.size()-1;
		while (lo <= hi) {
			int mid = (lo + hi) / 2;
			if (bSum[mid] > obj) hi = mid - 1;
			else if (bSum[mid] < obj) lo = mid + 1;
			else { // 두 부배열의 합이 t
				ret+=(long long)aMap[it]*bMap[bSum[mid]];
				break;
			}
		}
	}
	printf("%lld", ret);
}*/

/*int aSize[1001], bSize[1001], aCache[1000001], bCache[1000001]; //2632 피자판매
int main() {
	int i, j, t, m, n;
	vector<int> aSum, bSum;
	aSum.push_back(0);
	bSum.push_back(0);
	scanf("%d%d%d", &t, &n, &m);
	for (i = 1; i <= n; i++) {
		scanf("%d", &aSize[i]);
	}

	for (i = 1; i <= m; i++) {
		scanf("%d", &bSize[i]);
	}

	aCache[0] = 1, bCache[0] = 1;
	for (i = 1; i <= n; i++) {
		int tSum = 0;
		for (j = i; j < i+n; j++) {
			if (i != 1 && j == i + n - 1) break;
			int idx = (j-1) % n + 1;
			tSum += aSize[idx];
			if (!aCache[tSum]) {
				aSum.push_back(tSum);
			}
			aCache[tSum]++;
		}	
	}

	for (i = 1; i <= m; i++) {
		int tSum = 0;
		for (j = i; j <i + m; j++) {
			if (i != 1 && j == i + m - 1) break;
			int idx = (j - 1) % m + 1;
			tSum += bSize[idx];
			if (!bCache[tSum]) {
				bSum.push_back(tSum);
			}
			bCache[tSum]++;
		}
	}
	long long ret = 0;
	for (i = 0; i <= t; i++) {
		ret += aCache[i] * bCache[t - i];
	}
	printf("%lld", ret);
}*/

/*bool cmp(pair<int, int> p, pair<int, int> q) { //1202 보석 도둑
	if (p.second == q.second) return p.first > q.first;
	return p.second > q.second;
}

int main() {
	int i, n, k, a, b;
	vector<pair<int, int>> jewel;
	multiset<int> bag;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b); //무게, 가격
		jewel.emplace_back(a, b);
	}

	for (i = 0; i < k; i++) {
		scanf("%d", &a);
		bag.insert(a);
	}

	long long ret = 0;
	sort(jewel.begin(), jewel.end(), cmp);
	for (i = 0; i < n; i++) {
		if (bag.empty()) break;
		auto it = bag.lower_bound(jewel[i].first);
		if (it != bag.end()) {
			ret += (long long)jewel[i].second;
			bag.erase(it);
		}
	}
	printf("%lld", ret);
}*/

/*int n, board[10][10], nxt[4][2] = { {-1, -1}, {-1, 1}, {1, -1}, {1, 1} }; //1799 비숍

int dfs(int x, int y, int num) {
	int i, j;
	if (x == n) {//갯수 체크 리턴
		return num;
	}

	int ret = 0;
	if (board[x][y] == 1) {
		int cpy[10][10];
		memcpy(cpy, board, sizeof(cpy));
		for (i = 0; i < 4; i++) {
			int p = x + nxt[i][0], q = y + nxt[i][1];
			while (p >= 0 && p < n && q >= 0 && q < n) {
				if(board[p][q]==1) board[p][q] = 0;
				p += nxt[i][0], q += nxt[i][1];
			}
		}
		board[x][y] = 2;
		if (y + 2 >= n) {
			x++;
			y = (y + 1) % 2;
		}
		else y += 2;
		ret = max(ret, dfs(x, y, num + 1));
		memcpy(board, cpy, sizeof(board));
	}
	if (board[x][y] == 0) {
		if (y + 2 >= n) {
			x++;
			y = (y + 1) % 2;
		}
		else y += 2;
	}
	ret = max(ret, dfs(x, y, num));
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	if (n == 1) printf("%d", board[0][0]);
	else printf("%d", dfs(0, 0, 0)+dfs(0, 1, 0));
}*/

/*int p[100000]; //2568 전깃줄 - 2 
vector<pair<int, int>> vec;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) a.first < b.first;
	return a.second < b.second;
}

vector<int> backTrace(int idx, int last, vector<int> v) {
	if (last < 0) return v;
	if (p[idx] == last) {
		v.push_back(vec[idx].first);
		return backTrace(idx - 1, last - 1, v);
	}
	else return backTrace(idx - 1, last, v);
}
int main() {
	int i, j, n, a, b;
	vector<int> ret;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		vec.emplace_back(a, b);
		p[i] = -1;
	}

	sort(vec.begin(), vec.end());
	for (i = 0; i < n; i++) {
		auto it = lower_bound(ret.begin(), ret.end(), vec[i].second);
		if (it == ret.end()) {
			p[i] = ret.size();
			ret.push_back(vec[i].second);
		}
		else {
			p[i] = it-ret.begin();
			*it = vec[i].second;
		}
	}

	printf("%d\n", n - ret.size());
	vector<int> lis=backTrace(vec.size() - 1, ret.size()-1, vector<int>());
	reverse(lis.begin(), lis.end());
	vector<int> k;
	for (i = 0, j = 0; j < lis.size(); j++) {
		while (i < vec.size() && vec[i].first != lis[j]) {
			k.push_back(vec[i].first);
			i++;
		}
		i++;
	}
	for (; i < vec.size(); i++) {
		k.push_back(vec[i].first);
	}
	for (auto it : k) {
		printf("%d\n", it);
	}
}*/

/*int main() { //1965 상자넣기
	int i, n, arr[1000];
	vector<int> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++) {
		auto it = lower_bound(vec.begin(), vec.end(), arr[i]);
		if (it == vec.end()) vec.push_back(arr[i]);
		else *it = arr[i];
	}
	printf("%d", vec.size());
}*/

/*int main() { //2352 반도체 설계
	int i, n, a;
	vector<int> vec;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		auto it = lower_bound(vec.begin(), vec.end(), a);
		if (it == vec.end()) vec.push_back(a);
		else *it = a;
	}
	printf("%d", vec.size());
}*/

/*int main() { //1365 꼬인 전깃줄
	int n, i, a;
	vector<int> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		auto it = lower_bound(vec.begin(), vec.end(), a);
		if (it == vec.end()) vec.push_back(a);
		else *it = a;
	}
	printf("%d", n - vec.size());
}*/

/*int main() { //11568 민균이의 계략
	int i, n, a;
	vector<int> vec;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		auto it = lower_bound(vec.begin(), vec.end(), a);
		if (it == vec.end()) vec.push_back(a);
		else *it = a;
	}
	printf("%d", vec.size());
}*/

/*int main() { //3745 오름세
	int i, n, a;
	while (scanf("%d", &n) != EOF) {
		vector<int> vec;
		for (i = 0; i < n; i++) {
			scanf("%d", &a);
			auto it = lower_bound(vec.begin(), vec.end(), a);
			if (it == vec.end()) vec.push_back(a);
			else *it = a;
		}
		printf("%d\n", vec.size());
	}
}*/

/*typedef struct pnt { //2887 행성 터널
	int x;
	int y;
	int z;
}Pnt;

bool cmpX(pair<int, Pnt> a, pair<int, Pnt> b) {
	return a.second.x < b.second.x;
}

bool cmpY(pair<int, Pnt> a, pair<int, Pnt> b) {
	return a.second.y < b.second.y;
}

bool cmpZ(pair<int, Pnt> a, pair<int, Pnt> b) {
	return a.second.z < b.second.z;
}

int parent[100001], depth[100001];

int find(int u) {
	if (parent[u] == u) return u;
	return parent[u] = find(parent[u]);
}

bool merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return false;
	if (depth[a] < depth[b]) swap(a, b);
	if (depth[a] == depth[b]) depth[a]++;
	parent[b] = a;
	return true;
}

int main() {
	int i, n, a, b ,c;
	vector<pair<int, Pnt>> vec;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d%d%d", &a, &b, &c);
		vec.emplace_back(i, Pnt{ a, b, c });
		parent[i] = i;
		depth[i] = 1;
	}
	priority_queue<pair<int, pair<int, int>>> pQue; // dist, x, y
	sort(vec.begin(), vec.end(), cmpX); //x 정렬
	for (i = 0; i < vec.size()-1; i++) {
		int dist = min(abs(vec[i].second.x - vec[i + 1].second.x),
					min(abs(vec[i].second.y - vec[i + 1].second.y), abs(vec[i].second.z - vec[i + 1].second.z)));
		pQue.emplace(-dist, make_pair(vec[i].first, vec[i + 1].first));
	}

	sort(vec.begin(), vec.end(), cmpY); //y 정렬
	for (i = 0; i < vec.size() - 1; i++) {
		int dist = min(abs(vec[i].second.x - vec[i + 1].second.x),
			min(abs(vec[i].second.y - vec[i + 1].second.y), abs(vec[i].second.z - vec[i + 1].second.z)));
		pQue.emplace(-dist, make_pair(vec[i].first, vec[i + 1].first));
	}

	sort(vec.begin(), vec.end(), cmpZ); //z 정렬
	for (i = 0; i < vec.size() - 1; i++) {
		int dist = min(abs(vec[i].second.x - vec[i + 1].second.x),
			min(abs(vec[i].second.y - vec[i + 1].second.y), abs(vec[i].second.z - vec[i + 1].second.z)));
		pQue.emplace(-dist, make_pair(vec[i].first, vec[i + 1].first));
	}

	int ret = 0;
	while (!pQue.empty()) {
		int dist = -pQue.top().first,
			x = pQue.top().second.first,
			y = pQue.top().second.second;
		pQue.pop();
		if (merge(x, y)) ret += dist;
	}
	printf("%d", ret);
}*/

/*int visited[100001][2]; //5214 환승
vector<int> adj[100001], tube[100001];
int main() {
	int i, j, n, k, m, a;
	scanf("%d%d%d", &n, &k, &m);
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= k; j++) {
			scanf("%d", &a);
			tube[i].push_back(a);
			adj[a].push_back(i);
		}
	}

	int ret = -1;
	queue<pair<int, int>> que; // 현재 역 번호, 이동거리
	que.emplace(1, 2);
	while (!que.empty()) {
		int here = que.front().first,
			dist = que.front().second;
		que.pop();
		if (dist % 2 == 0 && here == n) {
			ret = dist / 2;
			break;
		}

		if (visited[here][dist % 2]) continue;
		visited[here][dist % 2] = 1;
		for (auto it : (dist % 2 == 0 ? adj[here] : tube[here])) {
			que.emplace(it, dist + 1);
		}
	}
	printf("%d", ret);
}*/

/*typedef long long ll; //9529 1의 개수 세기 (어려움, 다시 풀어보기)

ll recur(ll n, int msb) {
	if (n <= 1) return n;
	ll tmp = (ll)pow(2, msb), tmpD=n%tmp;
	ll a = msb * (ll)pow(2, msb - 1);
	ll b = tmpD + 1;
	for (int i = msb-1; i >= 0; i--) {
		if (tmpD % (ll)pow(2, i) != tmpD) {
			ll ret=a + b + recur(tmpD, i);
			return ret;
		}
	}
	return a + b;
}
ll sum(ll n) {
	if (n <= 1) return (ll)n;
	for (int i = 55; i > 0; i--) {
		if (n % (ll)pow(2, i) != n) { //최상위 비트 위치 i
			return recur(n, i);
		}
	}
}
int main() {
	ll a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld", sum(b) - sum(a - 1));
}*/

/*int n, m, a, arr[10], ret; //1107 리모컨
const int MAX = 500000;
void func(int count, int num) {
	if (count>6) return;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) func(count + 1, num * 10 + i);
	}
	ret = min(ret, count + abs(n - num));
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	ret = abs(100 - n);
	for (i = 0; i < m; i++) {
		scanf("%d", &a);
		arr[a] = 1;
	}
	for (i = 0; i < 10; i++) {
		if (arr[i] == 0) func(1, i);
	}
	printf("%d", ret);
}*/

/*int main() { //5525 IOIOI
	int i=0, n, m, num=0, ret=0;
	char str[1000001];
	scanf("%d%d", &n, &m);
	scanf("%s", str);
	while (i < m) {
		while (i<m&&str[i] != 'I') i++;
		i++;
		while (i+1<m && str[i] == 'O' && str[i + 1] == 'I') {
			num++;
			i+=2;
		}
		if (num >= n) ret += num + 1 - n;
		num = 0;
	}
	printf("%d\n", ret);
}*/

/*int main() { //6064 카잉 달력
	int t, m, n, x, y;
	scanf("%d", &t);
	while (t--) {
		int arr[40000], ret = -1;
		fill(arr, arr + 40000, 0);
		scanf("%d%d%d%d", &m, &n, &x, &y);
		x--, y--;
		int i = x;
		while (true) {
			int here = i % n;
			if (here == y) {
				ret = i+1;
				break;
			}
			if (arr[here] == 1) break;
			arr[here] = 1;
			i += m;
		}
		printf("%d\n", ret);
	}
}*/

/*char oper[4] = { 'D', 'S', 'L', 'R' };
char* operation(char* numC, char operCase){
	char* ret=new char[5];
	int num = atoi(numC);
	switch (operCase) {
	case 'D':
		sprintf(ret, "%d", (num * 2) % 10000);
		break;
	case 'S':
		sprintf(ret, "%d", num == 0 ? 9999 : num - 1);
		break;
	case 'L':
		ret[0] = numC[1];
		ret[1] = numC[2];
		ret[2] = numC[3];
		ret[3] = numC[0];
		ret[4] = '\0';
		break;
	case 'R':
		ret[0] = numC[3];
		ret[1] = numC[0];
		ret[2] = numC[1];
		ret[3] = numC[2];
		ret[4] = '\0';
		break;
	}
	return ret;
}

char* convert(char* num) {
	char* ret = new char[5];
	int start = 4 - strlen(num);
	for (int i = 0; i < 4; i++) {
		if (i >= start) ret[i] = num[i-start];
		else ret[i] = '0';
	}
	ret[4] = '\0';
	return ret;
}
int main() {
	int t;
	char a[5], b[5];
	scanf("%d", &t);
	while (t--) {
		int chk[10000];
		fill(chk, chk + 10000, 0);
		char* tmp = new char[2], * ret = NULL;
		tmp[0] = ' ', tmp[1]='\0';
		scanf("%s%s", a, b);
		queue<pair<pair<char *, int>, char *>> que;
		que.emplace(make_pair(a, 0), tmp);
		while (!que.empty()) {
			char* here = que.front().first.first;
			int idx = que.front().first.second;
			char* command = que.front().second;
			que.pop();
			if (chk[atoi(here)]) {
				continue;
			}
			chk[atoi(here)] = 1;
			char* cHere;
			for (int i = 0; i < 4; i++) {
				cHere = convert(here);
				char* k = operation(cHere, oper[i]);
				char* newCom = new char[idx + 2];
				strcpy(newCom, command);
				newCom[idx] = oper[i];
				newCom[idx + 1] = '\0';
				if (atoi(k) == atoi(b)) {
					ret = newCom;
					break;
				}
				delete[] cHere;
				que.emplace(make_pair(k, idx + 1), newCom);
			}
			delete[] command;
			if (ret != NULL) break;
		}
		while (!que.empty()) que.pop();
		printf("%s\n", ret);
	}
}*/

/*char oper[4] = { 'D', 'S', 'L', 'R' }; //9019 DSLR
int operation(int num, char operCase) {
	int ret;
	switch (operCase) {
	case 'D':
		ret = (num * 2) % 10000;
		break;
	case 'S':
		ret= num == 0 ? 9999 : num - 1;
		break;
	case 'L':
		ret = (num * 10) % 10000 + num / 1000;
		break;
	case 'R':
		ret = num / 10 + (num % 10) * 1000;
		break;
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, a, b;
	cin >> t;
	while (t--) {
		pair<int, char> chk[10000];
		fill(chk, chk + 10000, make_pair(-1, ' '));
		string tmp = "", ret=" ";
		cin >> a >> b;
		queue<int> que;
		que.push(a);
		while (!que.empty()) {
			int here = que.front(), p=0;
			que.pop();
			for (int i = 0; i < 4; i++) {
				int k = operation(here, oper[i]);
				if (chk[k].first != -1) {
					continue;
				}
				chk[k] = make_pair(here, oper[i]);
				if (k==b) {
					p = 1;
					break;
				}
				que.push(k);
			}
			if(p) break;
		}
		while (!que.empty()) {
			que.pop();
		}
		pair<int, char> here = chk[b];
		vector<char> vec;
		while (here.first != a) {
			vec.push_back(here.second);
			here = chk[here.first];
		}
		vec.push_back(here.second);
		reverse(vec.begin(), vec.end());
		for (char i : vec) {
			cout << i;
		}
		cout << endl;
	}
}*/

/*const int INF = 987654321; //11403 경로 찾기
int main() {
	int i, j, k, n, adj[100][100], dist[100][100];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &adj[i][j]);
			if (adj[i][j] == 1) dist[i][j] = 1;
			else dist[i][j] = INF;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (k = 0; k < n; k++) {
				if (dist[j][i] + dist[i][k] < dist[j][k]) dist[j][k] = dist[j][i] + dist[i][k];
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (dist[i][j] == INF) printf("0 ");
			else printf("1 ");
		}
		printf("\n");
	}
}*/

/*int i, j, arr[40][40]; //17218 비밀번호 만들기
int main() {
	string a, b;
	cin >> a >> b;
	for (i = 0; i < b.length(); i++) {
		arr[0][i] = a[0] == b[i] ? 1 : (arr[0][i - 1] == 1 ? 1 : 0);
	}
	for (i = 1; i < a.length(); i++) {
		arr[i][0] = a[i] == b[0] ? 1 : (arr[i-1][0]==1 ? 1 : 0);
		for (j = 1; j < b.length(); j++) {
			arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
			if (a[i] == b[j]) arr[i][j] = max(arr[i][j], arr[i - 1][j - 1] + 1);
		}
	}

	int x = a.length() - 1, y = b.length() - 1;
	vector<char> vec;
	while (x>=0 && y>=0 && arr[x][y] != 0) {
		int cur = arr[x][y];
		while (arr[x][y - 1] == cur) y--;
		while (arr[x - 1][y] == cur) x--;
		vec.push_back(a[x]);
		x--, y--;
	}
	reverse(vec.begin(), vec.end());
	for (char c : vec) {
		cout << c;
	}
}*/

/*int main() { //17219 비밀번호 찾기
	int i, n, m;
	string site, passwd;
	cin >> n >> m;
	map<string, string> mp;
	for (i = 0; i < n; i++) {
		cin >> site >> passwd;
		mp[site] = passwd;
	}
	for (i = 0; i < m; i++) {
		cin >> site;
		cout << mp[site] << endl;
	}
}*/

/*vector<int> arr, ret;//18870 좌표 압축
int main() {
	unordered_map<int, int> mp;
	int i, n, cnt=0;
	cin >> n;
	ret.resize(n);
	arr.resize(n);
	for (i = 0; i < n; i++) {
		cin >> arr[i];
		ret[i] = arr[i];
	}
	
	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	for (int i : arr) {
		mp[i] = cnt;
		cnt++;
	}

	for (i = 0; i < n; i++) {
		cout << mp[ret[i]] << " ";
	}
}*/

/*int main() { //1988 후위 표기식
	string s, ret="";
	cin >> s;
	stack<char> stk;
	int i;
	for (i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') ret += s[i];
		else if (s[i] == '(') stk.push('(');
		else if (s[i] == ')') {
			while (!stk.empty() && stk.top() != '(') {
				ret += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else if (s[i] == '*' || s[i] == '/') {
			while (!stk.empty() && (stk.top() == '*' || stk.top() == '/')) {
				ret += stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
		else {//덧셈, 뺄셈
			while (!stk.empty() && stk.top() != '(') {
				ret += stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
	}
	while (!stk.empty()) {
		ret += stk.top();
		stk.pop();
	}
	cout << ret;
}*/

/*int arr[1025][1025], sum[1025][1025]; // 구간 합 구하기 5
int main() {
	int i, j, n, m, x1, y1, x2, y2;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i][0]);
		if (i != 0) sum[i][0] = arr[i][0] + sum[i - 1][0];
		else sum[0][0] = arr[0][0];
		for (j = 1; j < n; j++) {
			scanf("%d", &arr[i][j]);
			if (i == 0) sum[0][j] = sum[0][j - 1] + arr[0][j];
			else { //i>1
				sum[i][j] = arr[i][j] + (sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1]);
			}
		}
	}

	for (i = 0; i < m; i++) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		x1--;
		y1--;
		x2--;
		y2--;
		int k1 = x1 == 0 ? 0 : sum[x1 - 1][y2],
			k2 = y1 == 0 ? 0 : sum[x2][y1 - 1],
			k3 = (x1 == 0 || y1 == 0) ? 0 : sum[x1 - 1][y1 - 1];

		printf("%d\n", sum[x2][y2] - (k1+k2-k3));
	}
}*/

/*int bombLen; //9935 문자열 폭발
char s[1000001], bomb[37];
const int STKSIZE = 1000000;
class customStack {
private:
	char stk[STKSIZE + 1];
	int topPt;
public:
	customStack() {
		topPt = -1;
	}

	void push(char val) {
		if (topPt == STKSIZE) {
			return;
		}
		stk[++topPt] = val;
		if (val == bomb[bombLen - 1]) {
			int chk = 1;
			for (int i = topPt - bombLen+1; i <= topPt; i++) {
				if (bomb[i - (topPt - bombLen+1)] != stk[i]) {
					chk = 0;
					break;
				}
			}
			if (chk) { //폭발
				topPt = topPt - bombLen;
			}
		}
	}

	void print() {
		if (topPt == -1) printf("FRULA\n");
		for (int i = 0; i <= topPt; i++) {
			printf("%c", stk[i]);
		}
	}

};

int main() {
	scanf("%s%s", s, bomb);
	bombLen = strlen(bomb);
	customStack cStk;
	for (int i = 0; i < strlen(s); i++) {
		cStk.push(s[i]);
	}
	cStk.print();
}*/

/*const int MAX=2500; //1509 팰린드롬 분할
char str[MAX+1];
int dp[MAX+1][MAX+1], chk[MAX+1];

int main() {
	scanf("%s", str);
	int i, j, len=strlen(str);
	for (i = 1; i <= len; i++) {
		dp[i][i] = 1;
	}
	for (i = 1; i < len; i++) {
		if (str[i-1] == str[i]) dp[i][i + 1] = 1;
	}

	for (i = 3; i < len + 1; i++) {
		for (j = 1; j < i; j++) {
			if (str[i-1] == str[j-1] && dp[j + 1][i - 1] == 1) dp[j][i] = 1;
		}
	}

	chk[0] = 0;
	for (i = 1; i <= len; i++) {
		chk[i] = 2500;
		for (j = 1; j <= i; j++) {
			if (dp[j][i] && chk[i]>chk[j-1] + 1) {
				chk[i] = chk[j-1] + 1;
			}
		}
	}
	printf("%d\n", chk[len]);
}*/

/*const int DIV=10e8; //1562 계단 수
int n, cache[100][10][1 << 10];

int dp(int idx, int prev, int chk) {
	if (idx == n) {
		if (chk == (1 << 10) - 1) {
			return 1;
		}
		else return 0;
	}

	int& ret = cache[idx][prev][chk];
	if (ret != -1) return ret;
	ret = 0;
	if (prev > 0) ret = (ret + dp(idx + 1, prev - 1, chk | (1 << (prev - 1)))) % DIV;
	if (prev < 9) ret = (ret + dp(idx + 1, prev + 1, chk | (1 << (prev + 1)))) % DIV;
	return ret;
}

int main() {
	int i, j, k, ret=0;
	scanf("%d", &n);
	if (n >= 10) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < 10; j++) {
				for (k = 0; k < (1 << 10); k++) {
					cache[i][j][k] = -1;
				}
			}
		}
		for (i = 1; i <= 9; i++) {
			ret = (ret + dp(1, i, 1<<i))%DIV;
		}
	}
	printf("%d", ret);
}*/

/*char board[1000][1000]; // 16724 피리 부는 사나이
int chk[1000][1000], parent[1000001], num=0;

void paint(int i, int j) {
	if (chk[i][j] != 0) {
		if (chk[i][j] < num && parent[num] == num) parent[num] = chk[i][j];
		return;
	}
	chk[i][j] = num;
	switch(board[i][j]) {
	case 'D':
		paint(i + 1, j);
		break;
	case 'U':
		paint(i - 1, j);
		break;
	case 'L':
		paint(i, j - 1);
		break;
	case 'R':
		paint(i, j + 1);
		break;
	}
}

int main() {
	int i, j, n, m, ret=0;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n * m + 1; i++) {
		parent[i] = i;
	}
	for (i = 0; i < n; i++) {
		scanf("%s", board[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (chk[i][j] == 0) {
				num++;
				paint(i, j);
			}
		}
	}

	for (i = 1; i <= num; i++) {
		if (parent[i] == i) ret++;
	}
	printf("%d", ret);
}*/


/*int d, MOD = 1000000007;
int adj[8][8] = { {0, 1, 1, 0, 0, 0, 0, 0}, {1, 0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 0, 0},
				  {0, 1, 1, 0, 1, 1, 0, 0}, {0, 0, 1, 1, 0, 1 ,0, 1}, {0, 0, 0, 1, 1, 0, 1 ,0},
				  {0, 0, 0, 0, 0, 1, 0, 1}, {0, 0, 0, 0, 1, 0, 1, 0} },
	cache[8][100001];

int dp(int here, int tm) {
	if (tm == d) {
		if (here == 0)
			return 1;
		else return 0;
	}
	int& ret = cache[here][tm];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 8; i++) {
		if (adj[here][i])
			ret = (ret + dp(i, tm + 1)) % MOD;
	}
	return ret % MOD;
}
int main() {
	scanf("%d", &d);
	int i, j, ret = 0;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 100001; j++) cache[i][j] = -1;
	}
	printf("%d\n", dp(0, 0));
}*/

/*typedef long long ll; //12850 본대 산책 2
const ll MOD = 1000000007;
ll arr[30][8][8],
init[8][8] = { {0, 1, 1, 0, 0, 0, 0, 0}, {1, 0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 0, 0},
			   {0, 1, 1, 0, 1, 1, 0, 0}, {0 ,0, 1, 1, 0, 1, 1, 0}, {0, 0, 0, 1, 1, 0, 0, 1},
			   {0, 0, 0, 0, 1, 0, 0, 1}, {0, 0, 0, 0, 0, 1, 1, 0} };

ll(*arrMul(ll a[][8], ll b[][8]))[8]{
	ll i, j, k;
	static ll ret[8][8];

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			ret[i][j] = 0;
			for (k = 0; k < 8; k++) {
				ret[i][j] += a[i][k] * b[k][j];
				ret[i][j] % MOD;
			}
		}
	}
	return ret;
}

int func(int d) {
	int i, j, k = 1, pow=0, chk=0;
	ll tmp[8][8];
	while (d != 0) {
		while (true) {
			if (k * 2 > d) break;
			k *= 2;
			pow++;
		}
		d %= k;
		k = 1;
		if (!chk) {
			for (i = 0; i < 8; i++) {
				for (j = 0; j < 8; j++) {
					tmp[i][j] = arr[pow][i][j];
				}
			}
			chk = 1;
		}
		else {
			ll(*ret)[8] = arrMul(tmp, arr[pow]);
			for (i = 0; i < 8; i++) {
				for (j = 0; j < 8; j++) {
					tmp[i][j] = ret[i][j]%MOD;
				}
			}
		}
		pow = 0;	
	}
	return tmp[0][0];
}

int main() {
	int i, j, k, d;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			arr[0][i][j] = init[i][j];
		}
	}

	for (k = 1; k < 30; k++) {
		ll(*tmp)[8] = arrMul(arr[k - 1], arr[k - 1]);
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				arr[k][i][j] = tmp[i][j]%MOD;
			}
		}
	}

	scanf("%d", &d);
	printf("%d ", func(d));
}*/

/*int arr[100001], parent[100001];

int find(int u) {
	if (parent[u] == u) return u;
	else return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
	u = find(u), v = find(v);
	parent[v] = u;
}

int main() {
	int i, j, g, p, ap, ret=0, chk=0;
	scanf("%d%d", &g, &p);
	for (i = 1; i <= g; i++) {
		parent[i] = i;
	}

	for (i = 1; i <= p; i++) {
		scanf("%d", &ap);
		int k = find(ap);
		if (k == 0) break;
		merge(k - 1, k);
		ret++;
	}
	printf("%d", ret);
}*/

/*const int INF = 987654321; // 14939 불 끄기
int board[12][12], tmpBoard[12][12];

char toggle(int x, int y) {
	return (tmpBoard[x][y] + 1) % 2;
}

void chkBoard(int x, int y) {
	tmpBoard[x][y] = toggle(x, y);
	tmpBoard[x + 1][y] = toggle(x + 1, y);
	tmpBoard[x - 1][y] = toggle(x - 1, y);
	tmpBoard[x][y + 1] = toggle(x, y + 1);
	tmpBoard[x][y - 1] = toggle(x, y - 1);
}

int main() {
	int i, j, k, ret=INF, initBit=0;
	char c;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			scanf("%c", &c);
			board[i][j] = (c == '#' ? 0 : 1);
		}
		fgetc(stdin);
	}

	for (k = 0; k < (1 << 10); k++) {
		for (i = 1; i <= 10; i++) {
			for (j = 1; j <= 10; j++) {
				tmpBoard[i][j] = board[i][j];
			}
		}
		int tmp = 0;
		for (i = 1; i <= 10; i++) {
			if (k & (1 << (i-1))) {
				tmp++;
				chkBoard(1, i);
			}
		}
		for (i = 2; i <= 10; i++) {
			for (j = 1; j <= 10; j++) {
				if (tmpBoard[i - 1][j]) {
					tmp++;
					chkBoard(i, j);
				}
			}
		}

		for (i = 1; i <= 10; i++) {
			if (tmpBoard[10][i]) break;
		}
		if (i == 11) ret = min(ret, tmp);
	}
	printf("%d", ret==INF ? -1 : ret);
}*/

/*int card[4000000], parent[4000001]; // 16566 카드 게임

int find(int u) {
	if (parent[u] == u) return u;
	return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
	u = find(u), v = find(v);
	printf("u : %d, v : %d\n", u, v);
	if (u == v) return;
	parent[u] = v;
}

int main() {
	int i, n, m, k, cheol;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i < m; i++) {
		scanf("%d", &card[i]);
	}

	for (i = 1; i <= n; i++) {
		parent[i] = i;
	}
	sort(card, card + m);
	for (i = 0; i < k; i++) {
		scanf("%d", &cheol);
		auto it = upper_bound(card, card + m, cheol);
		auto it2 = lower_bound(card, card + m, find(*it));
		printf("%d\n", find(*it2));
		merge(*it2, *(it2 + 1));
	}
}*/

/*int arr[10], bArr[10]; //1019 책 페이지

void func(int n) {
	if (n <= 9) {
		for (int i = 1; i <= n; i++) {
			arr[i]++;
		}
		return;
	}
	else {
		int cp = n, div=10, digit=1;
		while (cp / div >= 10) {
			div *= 10;
			digit++;
		}
		int ret = cp / div, remain= (cp % div + 1), remainDiv=1, remainDigit=0; // 가장 큰 자릿수 뽑아내기
		arr[ret] += remain; // 가장 큰 자릿수에 나머지 숫자 + 1 만큼 추가
		int nxt = (ret - 1) * div + (div - 1), q = 0;
		while ((remain-1) / remainDiv >= 10) {
			remainDiv *= 10;
			remainDigit++;
		}
		arr[0] += digit; //최상위 자릿수 제외 나머지 전부 0일때 
		if (remain > 10) arr[0] += digit - remainDigit - 1;
		while (q < remainDigit) { // 가장 큰 자릿수를 제외한 나머지 수까지 갈 때 필요한 0의 갯수, 10의 제곱 단위로 끊음.
			arr[0] += 9 * (int)pow(10, q) * (digit- q - 1);
			q++;
		}
		if (remain > (int)pow(10, remainDigit)) {
			if (!remainDigit)
				arr[0] += (digit - q - 1) * (remain - 1);
			else
				arr[0] += (digit - q - 1) * (remain - 1 - (int)pow(10, remainDigit));
		}

		func(nxt);
		func(cp % div);
	}
}

int main() {
	int i, n;
	scanf("%d", &n);
	func(n);
	for (i = 0; i <= 9; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i <= 9; i++) {
		printf("%d ", bArr[i]);
	}
}*/

/*typedef long long ll; //1708 볼록 껍질
typedef struct point {
	ll x;
	ll y;
	ll p;
	ll q;
	point(ll x = 0, ll y = 0) : x(x), y(y), p(1), q(0){}
}Point;

Point p[100000];

bool cmp2(point& p1, point& p2) {
	if (p1.y == p2.y) return p1.x < p2.x;
	return p1.y < p2.y;
}

bool cmp(point& p1, point& p2) {
	if (p1.p * p2.q != p1.q * p2.p) return p1.q * p2.p < p1.p * p2.q;
	if (p1.x != p2.x) return p1.x < p2.x;
	else return p1.y < p2.y;
}

int ccw(point& p1, point& p2, point &p3) {
	ll ret = p1.x * p2.y + p2.x * p3.y + p3.x * p1.y - p1.y * p2.x - p2.y * p3.x - p3.y * p1.x;
	if (ret > 0) return 1;
	if (ret < 0) return -1;
	else return 0;
}	
int main() {
	int i, n;
	stack<int> stk;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld%lld", &p[i].x, &p[i].y);
	}
	sort(p, p + n, cmp2);
	for (i = 1; i < n; i++) {
		p[i].p = p[i].x - p[0].x;
		p[i].q = p[i].y - p[0].y;
	}
	sort(p, p + n, cmp);

	stk.push(0);
	stk.push(1);
	for (i = 2; i < n; i++) {
		while (stk.size() >= 2) {
			int second = stk.top();
			stk.pop();
			int first = stk.top();
			if (ccw(p[first], p[second], p[i]) == 1) { //반시계
				stk.push(second);
				break;
			}
		}

		stk.push(i);
	}
	vector<int> vec;
	int sz = stk.size(), ret=0;
	while (!stk.empty()) {
		vec.push_back(stk.top());
		stk.pop();
	}

	reverse(vec.begin(), vec.end());
	vector<int> chk(vec.size(), 0);
	for (int i = 0; i < sz; i++) {
		if (ccw(p[vec[i]], p[vec[(i + 1)%sz]], p[vec[(i + 2)%sz]]) == 0) {
			chk[i + 1] = 1;
		}
	}

	for (int i = 0; i < chk.size(); i++) {
		if (!chk[i]) ret++;
	}
	printf("%d", ret);
}*/

/*typedef vector<vector<long long>> vvl; // 1533 길의 개수
int n, s, e, t, idx;
const int DIV = 1000003;
char input[11][11];
vvl path(50);
vvl cache[30];

vvl mul(vvl m1, vvl m2) { //행렬곱
	vvl ret(idx);
	int i, j, k;
	for (i = 0; i < idx; i++) {
		ret[i] = vector<long long>(idx, 0);
	}
	for (i = 0; i < idx; i++) {
		for (j = 0; j < idx; j++) {
			int tmp = m1[j][i];
			for (k = 0; k < idx; k++) {
				ret[j][k] += tmp * m2[i][k];
				ret[j][k] %= DIV;
			}
		}
	}
	return ret;
}

vvl func(int n) {
	if (n == 1) return cache[0];
	int idx = 0, cal = 1;
	while (n >= cal) {
		cal *= 2;
		idx++;
	}
	cal /= 2;
	idx--;
	if (n == cal) return cache[idx];
	return mul(cache[idx], func(n - cal));
}
int main() {
	scanf("%d%d%d%d", &n, &s, &e, &t);
	fgetc(stdin);

	int i, j, k;
	for (i = 0; i < 50; i++) {
		path[i] = vector<long long>(50, (long long)0);
	}

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%c", &input[i][j]);
			path[5*(i-1)][5*(j-1)] = (long long)(input[i][j] - '0');
		}
		fgetc(stdin);
		for (k = 4; k > 0; k--) {
			path[5 * (i - 1) + k][5 * (i - 1) + k - 1] = 1;
		}
	}
	idx = 5 * n;
	//전처리 - 가중치 없는 유향그래프로 변경
	for (i = 0; i < 5*n; i+=5) {
		for (j = 0; j < 5*n; j+=5) {
			int here, prev = i;
			if (path[i][j] > 1) { //가중치 2 이상
				path[i][j + path[i][j] - 1] = 1;
				path[i][j] = 0;
			}
		}
	}

	for (i = 0; i < idx; i++) {
		path[i].resize(idx);
	}
	path.resize(idx);
	cache[0] = path;
	for (i = 1; (int)pow(2, i) <= t; i++) {
		cache[i] = mul(cache[i - 1], cache[i - 1]);
	}

	vvl ret = func(t);
	printf("%lld", ret[5*(s-1)][5*(e-1)]);
}*/

/*short arr[5000][5000]; //2672 여러 직사각형의 전체 면적 구하기
int main() {
	int i, j, k, n;
	double a, b, c, d;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
		for (j = (int)(a * 10); j < (int)(a * 10 + c * 10); j++) {
			for (k = (int)(b * 10); k < (int)(b * 10 + d * 10); k++) {
				arr[j / 4][k / 4] |= ((short)1<<(j % 4 * 4 + k % 4));
			}
		}
	}

	int ret = 0;
	for (i = 0; i < 5000; i++) {
		for (j = 0; j < 5000; j++) {
			short tmp = arr[i][j];
			for (k = 0; k < 16; k++) {
				if (tmp & 1) ret++;
				tmp >>= 1;
			}
		}
	}
	if (ret % 100 == 0) printf("%d", ret / 100);
	else printf("%.2lf", (double)ret/100);
}*/

/*struct Node { // 14725 개미굴
	char *name;
	int depth;
	vector<Node*> child;

	Node(const char* n=NULL, int d=1) : depth(d){
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
};

bool cmp(Node* a, Node* b) {
	int len = min(strlen(a->name), strlen(b->name));
	for (int i = 0; i < len; i++) {
		if (a->name[i] != b->name[i]) return a->name[i] < b->name[i];
	}
	return strlen(a->name) < strlen(b->name);
}

class Tree {
private:
	Node *root;

public:
	Tree(Node* root) : root(root){}

	void push(vector<const char*> nameVec) {
		Node* cur = root;
		for (auto n : nameVec) {
			int chk = 0;
			for (auto childNode : cur->child) {
				if (!strcmp(childNode->name, n)) {
					chk = 1;
					cur = childNode;
					break;
				}
			}
			if (!chk) { //경로 없을 경우 새로 생성
				Node* k = new Node(n, cur->depth+1);
				cur->child.push_back(k);
				cur = k;
			}
		}
	}

	void print(Node* here) {
		int depth = here->depth;
		sort(here->child.begin(), here->child.end(), cmp);
		for (auto it : here->child) {
			for (int i = 0; i < (depth-1) * 2; i++) {
				printf("-");
			}
			printf("%s\n", it->name);
			print(it);
		}
	}
};
int main() {
	int i, j, n, k;
	char* name;
	Node* root = new Node("root123456789010293");
	Tree t(root);
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		vector<const char*> vec;
		for (j = 0; j < k; j++) {
			name = new char[16];
			scanf("%s", name);
			vec.push_back(name);
		}
		t.push(vec);
	}
	t.print(root);
}*/

/*int v, e, visited[10001], retIdx; //SCC (코사라주 알고리즘, 메모리 부족)
stack<int> stk;
vector<vector<int>> adj, revAdj, ret;
void dfs(int idx, int mode) {
	vector<vector<int>> vec;
	if (!mode) { //정방향
		visited[idx] = 1;
		vec = adj;
	}
	else { //역방향
		ret[retIdx].push_back(idx);
		visited[idx] = 1;
		vec = revAdj;
	}

	for (auto it : vec[idx]) {
		if (!visited[it]) {
			dfs(it, mode);
			if(!mode) stk.push(idx);
		}
	}
}

bool cmp(vector<int> a, vector<int> b) {
	return a[0] < b[0];
}
int main() {
	int i, j, a, b;
	scanf("%d%d", &v, &e);

	adj.resize(v+1);
	revAdj.resize(v + 1);

	for (i = 0; i < e; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		revAdj[b].push_back(a);
	}

	for (i = 1; i <= v; i++) {
		if(!visited[i]) dfs(i, 0);
	}

	fill(visited, visited + v + 1, 0);
	while (!stk.empty()) {
		int here = stk.top();
		if (!visited[here]) {
			vector<int> vec;
			ret.push_back(vec);
			dfs(here, 1);
			sort(ret[retIdx].begin(), ret[retIdx].end());
			ret[retIdx].push_back(-1);
		}
		stk.pop();
		retIdx++;
	}

	sort(ret.begin(), ret.end(), cmp);
	printf("%d\n", ret.size());
	for (auto it : ret) {
		for (auto i : it) {
			printf("%d ", i);
		}
		printf("\n");
	}
}*/

/*int v, e, c, r, discover[10001], scc[10001]; //2150 Strongly Connected Component (타잔 알고리즘)
vector<vector<int>> adj, res;
stack<int> stk;
int dfs(int idx) {
	stk.push(idx);
	discover[idx] = c++;
	int ret = discover[idx];
	for (auto it : adj[idx]) {
		if (discover[it] == -1) {
			ret = min(ret, dfs(it));
		}
		else if (scc[it] == -1) {
			ret = min(ret, discover[it]);
		}
	}

	if (ret == discover[idx]) {
		vector<int> vec;
		while (1) {
			int h = stk.top();
			stk.pop();
			scc[h] = r;
			vec.push_back(h);
			if (h == idx) break;
		}
		sort(vec.begin(), vec.end());
		vec.push_back(-1);
		res.push_back(vec);
		r++;
	}
	return ret;
}

bool cmp(vector<int> a, vector<int> b) {
	return a[0] < b[0];
}
int main() {
	int i, j, a, b;
	scanf("%d%d", &v, &e);

	adj.resize(v + 1);
	fill(discover, discover + 10001, -1);
	fill(scc, scc + 10001, -1);

	for (i = 0; i < e; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
	}

	for (i = 1; i <= v; i++) {
		if (discover[i]==-1) {
			dfs(i);
		}
	}

	sort(res.begin(), res.end(), cmp);
	printf("%d\n", res.size());
	for (auto it : res) {
		for (auto i : it) {
			printf("%d ", i);
		}
		printf("\n");
	}
}*/

/*typedef long long ll; //3015 오아시스 재결합
int arr[500000];
int main() {
	int i, n;
	ll ret = 0;
	stack<pair<int, ll>> stk;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	stk.emplace(arr[0], 1);
	for (i = 1; i < n; i++) {
		ll dupNum = 1;
		while (!stk.empty()) {
			if (stk.top().first > arr[i]) {
				ret++;
				break;
			}
			else if (stk.top().first < arr[i]) {
				ret+=stk.top().second;
				stk.pop();
			}
			else {
				dupNum+=stk.top().second;
				ret += stk.top().second;
				stk.pop();
			}
		}
		stk.emplace(arr[i], dupNum);
	}
	printf("%lld", ret);
}*/

/*int n, idx=9, chk; //1038 감소하는 수
vector<int> vec(1000000, 0);
void func(int num, int digit, int maxDigit) {
	if (chk) return;
	if (digit == 0) {
		vec[0] = num;
		idx++;
		if (idx == n) {
			vec.resize(maxDigit + 1);
			chk = 1;
		}
		return;
	}
	for (int i = digit-1; i <=num-1; i++) {
		vec[digit] = num; // 현재 숫자 자릿수에 맞춰서 결과에 넣기 (결과는 뒤집어서 출력)
		func(i, digit-1, maxDigit);
		if (chk) return;
	}
	if (digit == maxDigit) {
		if (num < 9) func(num + 1, digit, maxDigit);
		else{
			func(digit + 1, digit + 1, maxDigit + 1);
		}
	}
}
int main() {
	scanf("%d", &n);
	if (n < 10) printf("%d", n);
	else {
		if (n>=1023) printf("-1");
		else {
			func(1, 1, 1);
			for (auto it = vec.end() - 1; it >= vec.begin(); it--) {
				printf("%d", *it);
				if (it == vec.begin()) break;
			}
		}
	}
}*/

/*int main() { //1094 막대기
	int x;
	scanf("%d", &x);
	int ret = 1, bar=64, sub=64;
	while (x != bar) {
		sub /= 2;
		ret++;
		if (bar - sub >= x) {
			bar -= sub;
			ret--;
		}
	}
	printf("%d", ret);
}*/

/*char board[5][5]; //1941 소문난 칠공주 (조합 사용)
vector<vector<int>> com;
bool isConnected;
int num, dfsChk[7];
void combination(int idx, int num, vector<int> vec) {
	if (idx == 7) {
		com.push_back(vec);
		return;
	}
	for (int i = num; i < 25; i++) {
		vec[idx] = i;
		combination(idx + 1, i + 1, vec);
	}
}

bool chk(int a, int b) {
	int ax = a / 5, ay = a % 5, bx = b / 5, by = b % 5;
	if ((ax==bx && (ay-1==by||ay+1==by)) || (ay==by && (ax-1==bx || ax+1==bx))) return true;
	return false;
}

void dfs(int idx, vector<int> vec) {
	if (isConnected) return;
	if (num == 7) {
		isConnected = true;
		return;
	}
	for (int i = 0; i < 7; i++) {
		if (idx != i && !dfsChk[i] && chk(vec[idx], vec[i])) {
			dfsChk[i] = 1;
			num++;
			dfs(i, vec);
		}
	}
}
int main() {
	int i, j, ret=0;
	for (i = 0; i < 5; i++) {
		scanf("%s", board[i]);
		fgetc(stdin);
	}

	combination(0, 0, vector<int>(7));
	for (auto it : com) {
		fill(dfsChk, dfsChk + 7, 0);
		int sNum = 0;
		num = 0;
		for (auto i : it) {
			int x = i / 5, y = i % 5;
			if (board[x][y] == 'S') sNum++;
		}
		if (sNum < 4) continue;
		isConnected = false;
		dfs(0, it);
		if (isConnected) {
			ret++;
		}
	}
	printf("%d", ret);
}*/

/*char board[5][5]; //1941 소문난 칠공주  (DP)
vector<vector<int>> com;
bool chk[1 << 25];
int ret;
int w[4] = { 0, 0, 1, -1 }, h[4] = { 1, -1, 0, 0 };
void dp(int num, int sNum, int cache) {
	if (num == 7) {
		if (sNum > 3) {
			ret++;
		}
		return;
	}

	for (int i = 0; i < 25; i++) {
		if (!(cache & (1 << i))) continue;
		int x = i / 5, y = i % 5;
		for (int j = 0; j < 4; j++) {
			int nx = x + w[j], ny = y + h[j], nIdx = 5 * nx + ny;
			if (nx<0 || nx>4 || ny<0 || ny>4 || (cache & (1 << nIdx)) || chk[cache | (1<<nIdx)]) continue;
			chk[cache | (1 << nIdx)] = true;
			dp(num + 1, sNum + (board[nx][ny] == 'S'), cache | (1 << nIdx));
		}
	}
}
int main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		scanf("%s", board[i]);
		fgetc(stdin);
	}

	for (i = 0; i < 25; i++) {
		dp(1, board[i/5][i%5]=='S', (1<<i));
	}
	printf("%d", ret);
}*/

/*vector<vector<int>> com; //2309 일곱 난쟁이
int arr[9];
void dfs(int idx, int here, vector<int> vec) {
	if (idx == 7) {
		com.push_back(vec);
		return;
	}
	for (int i = here+1; i < 9; i++) {
		vec[idx] = arr[i];
		dfs(idx+1, i, vec);
	}
}
int main() {
	int i;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	dfs(0, -1, vector<int>(7));
	for (auto it : com) {
		int sum = 0;
		for (auto i : it) {
			sum += i;
		}
		if (sum == 100) {
			sort(it.begin(), it.end());
			for (auto i : it) {
				printf("%d\n", i);
			}
			break;
		}
	}
}*/
/*int main() { //2576 홀수 
	int i, a, mina=101, sum=0;
	for (i = 0; i < 7; i++) {
		scanf("%d", &a);
		if (a % 2) {
			mina = mina > a ? a : mina;
			sum += a;
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d\n", sum, mina);
}*/

/*int n; //2622 삼각형 만들기
int func(int init, int idx, int remain) {
	if (idx == 1) {
		return 1;
	}
	int ret = 0;
	for (int i = 1; i <= remain/2; i++) {
		if (init < i || init < remain - i || i>remain-i) continue;
		ret += func(init, idx + 1, remain - i);
	}
	return ret;
}
int main() {
	int i, ret=0;
	scanf("%d", &n);
	for (i = 1; i < (n+1)/2; i++) {
		ret += func(i, 0, n-i);
	}
	printf("%d", ret);
}*/

/*int main() { //2845 파티가 끝나고 난 뒤
	int i, l, p, a;
	scanf("%d%d", &l, &p);
	for (i = 0; i < 5; i++) {
		scanf("%d", &a);
		printf("%d ", a - l * p);
	}
}*/

/*int main() { //3135 라디오
	int i, a, b, n, f, ret;
	scanf("%d%d%d", &a, &b, &n);
	ret = abs(a - b);
	for (i = 0; i < n; i++) {
		scanf("%d", &f);
		if (abs(f - b) < ret) ret = abs(f - b) + 1;
	}
	printf("%d", ret);
}*/

/*const int INF = 987654321; //4485 녹색 옷 입은 애가 젤다지?
int n, board[125][125], chk[125][125], w[4] = { 0, 0, 1, -1 }, h[4] = { 1, -1, 0, 0 };

typedef struct Point {
	int x;
	int y;
}point;
int main() {
	int i, j, k=0;
	while (true) {
		k++;
		scanf("%d", &n);
		if (n == 0) break;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				chk[i][j] = INF;
				scanf("%d", &board[i][j]);
			}
		}
		chk[0][0] = board[0][0];
		queue<pair<point, int>> que;
		que.emplace(point{ 0, 0 }, board[0][0]);
		int ret = INF;
		while (!que.empty()) {
			int x = que.front().first.x, y = que.front().first.y, val=que.front().second;
			que.pop();
			if (val > ret) continue;
			if (x == n - 1 && y == n - 1) {
				ret = val;
				continue;
			}
			for (i = 0; i < 4; i++) {
				int nx = x + w[i], ny = y + h[i];
				if (nx < 0 || nx>n-1 || ny < 0 || ny>n-1 || chk[nx][ny] <= val + board[nx][ny]) continue;
				chk[nx][ny] = val + board[nx][ny];
				que.emplace(point{ nx, ny }, val + board[nx][ny]);
			}
		}
		printf("Problem %d: %d\n", k, ret);
	}
}*/

/*int chk[50][50], board[50][50], num, w, h, a[8] = { 0, 0, 1, -1, 1, 1, -1, -1 }, b[8] = { 1, -1, 0, 0, 1, -1, 1, -1 }; //4963 섬의 개수

void dfs(int x, int y) {
	for (int i = 0; i < 8; i++) {
		int nx = x + a[i], ny = y + b[i];
		if (nx<0 || nx>h - 1 || ny<0 || ny>w - 1||chk[nx][ny]||!board[nx][ny]) continue;
		chk[nx][ny] = 1;
		dfs(nx, ny);
	}
}
int main() {
	int i, j;
	while (true) {
		scanf("%d%d", &w, &h);
		if (w == 0 && h == 0) break;
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				scanf("%d", &board[i][j]);
				chk[i][j] = 0;
			}
		}
		num = 0;
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				if (!chk[i][j]&&board[i][j]) {
					chk[i][j] = 1;
					dfs(i, j);
					num++;
				}
			}
		}
		printf("%d\n", num);
	}
}*/

/*int main() { //4806 줄 세기
	int num=0;
	char tmp[100];
	while (fgets(tmp, 100, stdin)) {
		num++;
	}
	printf("%d", num);
}*/

/*int main() { //5543 상근날드
	int i, tmp=2001, a, ret=0;
	for (i = 0; i < 3; i++) {
		scanf("%d", &a);
		if (tmp > a) tmp = a;
	}
	ret = tmp;
	tmp = 2001;
	for (i = 0; i < 2; i++) {
		scanf("%d", &a);
		if (tmp > a) tmp = a;
	}
	printf("%d", ret + tmp - 50);
}*/

/*double a[10]; // 6376 e 계산

int fact(int i) {
	if (i == 1) return 1;
	return i * fact(i - 1);
}
int main() {
	int i;
	printf("n e\n");
	printf("- -----------\n");
	a[0] = 1;
	for (i = 0; i <= 9; i++) {
		if (i > 0) {
			a[i] = a[i - 1] + (double)1 / fact(i);
		}
		if(i<2) printf("%d %.0lf\n", i, a[i]);
		else if(i==2) printf("%d %.1lf\n", i, a[i]);
		else printf("%d %.9lf\n", i, a[i]);
	}
}*/

/*int i, a, sum; //10039 평균 점수
int main() {
	while (i < 5) {
		scanf("%d", &a);
		sum += a > 40 ? a : 40;
		i++;
	}
	printf("%d", sum / 5);
}*/

/*int main() { //10886 0 = not cute / 1 = cute
	int i, n, a, sum=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("%s", sum > n / 2 ? "Junhee is cute!" : "Junhee is not cute!");
}*/

/*int main() { //11721 열 개씩 끊어 출력하기
	int i;
	char str[101];
	scanf("%s", str);
	for (i = 0; i < strlen(str); i++) {
		printf("%c", str[i]);
		if (i != 0 && !((i+1) % 10)) printf("\n");
	}
}*/

/*enum color{red, yellow, green, brown, blue, pink, black}; //15029 cued in
int ret, arr[7], maxa;
int main() {
	int i, n;
	char input[7];
	scanf("%d", &n);
	map<string, color> mp = { {"red", red}, {"yellow", yellow}, {"green", green}, {"brown", brown},
							  {"blue", blue}, {"pink", pink}, {"black", black} };
	for (i = 0; i < n; i++) {
		scanf("%s", input);
		arr[mp[input]]++;
		if (maxa < mp[input]) maxa = mp[input];
	}

	if (maxa == 0) printf("1");
	else {
		ret = (arr[0] + 1) * (maxa + 1) + arr[0];
		for (i = maxa-1; i > 0; i--) {
			ret += arr[i]*(i+1);
		}
		printf("%d", ret);
	}
}*/

/*int height[300000], sub[300000]; //13164 행복 유치원

int main() {
	int n, k, i, ret=0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &height[i]);
		if (i > 0) sub[i - 1] = height[i] - height[i - 1];
	}
	sort(sub, sub + (n-1));
	for (i = 0; i < n - k; i++) {
		ret += sub[i];
	}
	printf("%d", ret);
}*/

/*int n, m, board[1000][1000], chk[1000][1000]; //11048 이동하기

int dp(int x, int y) {
	if (x > n - 1 || y > m - 1) return -1;
	if (x == n - 1 && y == m - 1) return board[x][y];
	int& ret = chk[x][y];
	if (ret != -1) return ret;
	ret = 0;
	ret += board[x][y] + max(dp(x + 1, y), max(dp(x, y + 1), dp(x + 1, y + 1)));
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
			chk[i][j] = -1;
		}
	}

	int ret = dp(0, 0);
	printf("%d", ret);
}*/

/*const int DIV = 10007; //11057 오르막 수
int n, cache[1000][10];

int dp(int idx, int prev) {
	if (idx == n) return 1;
	int& ret = cache[idx][prev];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = prev; i < 10; i++) {
		ret += dp(idx + 1, i);
		ret %= DIV;
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < 1000; i++) {
		for (j = 0; j < 10; j++) {
			cache[i][j] = -1;
		}
	}
	int ret=dp(0, 0);
	printf("%d", ret);
}*/

/*typedef long long ll; //15903 카드 합체 놀이
int card[1000];
int main() {
	int i, n, m;
	ll ret = 0, c;
	priority_queue<ll, vector<ll>, greater<ll>> pQue;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%lld", &c);
		pQue.push(c);
	}

	for (i = 0; i < m; i++) {
		ll a = pQue.top();
		pQue.pop();
		ll b = pQue.top();
		pQue.pop();
		pQue.push(a + b);
		pQue.push(a + b);
	}
	
	while (!pQue.empty()) {
		ret += pQue.top();
		pQue.pop();
	}
	printf("%lld", ret);
}*/

/*int arr[10]; //16674 2018년을 되돌아보며
int main() {
	int i, n, chk;
	scanf("%d", &n);
	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}

	for (i = 0; i < 10; i++) {
		if (i != 2 && i != 0 && i != 1 && i != 8) {
			if (arr[i]) {
				printf("0");
				return 0;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		if (i != 2 && i != 0 && i != 1 && i != 8) continue;
		if (!arr[i]) {
			printf("1");
			return 0;
		}
	}
	chk = arr[0];
	for (i = 0; i < 10; i++) {
		if (i != 2 && i != 0 && i != 1 && i != 8) continue;
		if (arr[i] != chk) {
			printf("2");
			break;
		}
	}
	if (i == 10) printf("8");
}*/

/*int main() { //17356 욱 제
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%lf", 1/(1+pow(10, ((double)b - a) / 400)));
}*/


/*void func(int start, int end, int num) { //17384 대진표
	if (start == end) {
		if (num == 0) printf(".");
		else printf("#");
		return;
	}

	int mid = end + start>>1, half= end - start + 1>>1;
	if (half >= num) {
		func(start, mid, num);
		func(mid + 1, end, 0);
	}
	else {
		if (half * 3 / 2 >= num) {
			if (half == 1) {
				func(start, mid, 1);
				func(mid + 1, end, 1);
			}
			else {
				func(start, mid, num - (half>>1));
				func(mid + 1, end, half>>1);
			}
		}
		else {
			func(start, mid, half);
			func(mid + 1, end, num-half);
		}
	}
}
int main() {
	int n, maxa=1;
	scanf("%d", &n);
	while (maxa < n) maxa *= 2;
	func(1, maxa, n);
}*/

/*int ret, n, p, k[3], e; //18511 큰 수 구성하기

void dfs(int idx, int num) {
	if (ret < num && n >= num) ret = num;
	if (idx == e) return;

	for (int i = 0; i < p; i++) {
		dfs(idx + 1, num * 10 + k[i]);
	}
}

int main() {
	int i, j;
	scanf("%d%d", &n, &p);
	int tmp = n;
	while (tmp > 0) {
		tmp /= 10;
		e++;
	}
	for (i = 0; i < p; i++) scanf("%d", &k[i]);
	dfs(0, 0);
	printf("%d", ret);
}*/

/*int dir[9][2] = { {0, 0},  {-1, 0}, {-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1} }; //19236 청소년 상어

typedef struct Fish {
	int x;
	int y;
	int direction;
	int alive;

	void rotate() {
		direction++;
		if (direction == 9) direction = 1;
	}

	void move(int nx, int ny) {
		x += nx;
		y += ny;
	}

	void change(Fish& anFish) {
		int tx = x, ty = y;
		x = anFish.x, y = anFish.y;
		anFish.x = tx, anFish.y = ty;
	}

	void toggle() {
		alive = !alive;
	}
}fish;

fish fInfo[18];
int board[4][4];

void chkFishLotation() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			fInfo[board[i][j]].x = i;
			fInfo[board[i][j]].y = j;
		}
	}
}

void move() {
	for (int i = 1; i <= 16; i++) { //물고기 이동
		if (!fInfo[i].alive) continue;

		int x = fInfo[i].x, y = fInfo[i].y;
		int nx = x+dir[fInfo[i].direction][0], ny = y+dir[fInfo[i].direction][1], rotStk = 0;
		while (nx < 0 || nx>3 || ny < 0 || ny>3 || board[nx][ny] == 17) {
			rotStk++;
			fInfo[i].rotate();
			nx =x + dir[fInfo[i].direction][0], ny =y + dir[fInfo[i].direction][1];
			if (rotStk == 8) break; //이동할 곳 없음, 이동 x
		}
		if (rotStk != 8) { //이동
			if (!board[nx][ny]) { //빈공간
				fInfo[i].move(nx, ny);
				board[nx][ny] = i;
				board[x][y] = 0;
			}
			else { //다른 물고기가 있는 공간
				fish &anotherFish = fInfo[board[nx][ny]];
				fInfo[board[x][y]].change(anotherFish);
				int tmp = board[x][y];
				board[x][y] = board[nx][ny];
				board[nx][ny] = tmp;
			}
		}
	}
	chkFishLotation();
}

int dfs(int x, int y, int d) {
	fish tmpFinfo[18];
	for (int i = 0; i < 18; i++) {
		tmpFinfo[i] = fInfo[i];
	}
	move();
	int sx = x + dir[d][0], sy = y + dir[d][1];
	int ret = 0, tmpBoard[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			tmpBoard[i][j] = board[i][j];
		}
	}
	while (sx >= 0 && sx < 4 && sy >= 0 && sy < 4) {
		if (board[sx][sy]) {
			int tmp = board[sx][sy];
			board[sx][sy] = 17;
			board[x][y] = 0;
			fInfo[17].direction = fInfo[tmp].direction;
			fInfo[tmp].toggle();
			ret = max(ret, tmp + dfs(sx, sy, fInfo[tmp].direction));
			fInfo[tmp].toggle();
			fInfo[17].direction = d;
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					board[i][j] = tmpBoard[i][j];
					fInfo[board[i][j]].x = i;
					fInfo[board[i][j]].y = j;
				}
			}
		}
		sx += dir[d][0], sy += dir[d][1];
	}
	for (int i = 0; i < 18; i++) {
		fInfo[i] = tmpFinfo[i];
	}
	return ret;
}
int main() {
	int i, j, n, d;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d%d", &n, &d);
			board[i][j] = n;
			fInfo[n] = { i, j, d, 1 };
		}
	}
	int tmp = board[0][0];
	fInfo[board[0][0]].alive = 0;
	fInfo[17].direction = fInfo[board[0][0]].direction;
	board[0][0] = 17;

	int ret=tmp+dfs(0, 0, fInfo[17].direction);
	printf("%d", ret);
}*/

/*typedef struct Shark { //19237 어른 상어
	int x;
	int y;
	int dir;
	int alive;
}shark;

int n, m, k, priority[401][5][4], nxt[5][2] = { {0, 0}, {-1, 0}, {1, 0}, {0, -1}, {0, 1} },
	nxtPosition[401][3];
pair<int, int> board[20][20];
shark sharkInfo[401];

int main() {
	int i, j, l, a, ret=0;
	scanf("%d%d%d", &n, &m, &k);
	int aliveNum = m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a);
			if (!a) board[i][j] = { 0, 0 };
			else {
				board[i][j] = { a, k };
				sharkInfo[a] = { i, j, 0, 1 };
			}
		}
	}
	for (i = 1; i <= m; i++) {
		scanf("%d", &a);
		sharkInfo[i].dir = a;
	}

	for (i = 1; i <= m; i++) {
		for (j = 1; j <= 4; j++) {
			for (l = 0; l < 4; l++) {
				scanf("%d", &priority[i][j][l]);
			}
		}
	}

	while (ret <= 1000) {
		for (i = 0; i < n; i++) { //좌표 선정
			for (j = 0; j < n; j++) {
				if (board[i][j].second == k) { //상어 있음
					int curShark = board[i][j].first,
						x = i,
						y = j,
						curDir = sharkInfo[curShark].dir,
						nx, ny, chk=0, candX=-1, candY, nxtDir, candDir;

					for (auto it : priority[curShark][curDir]) { //우선순위 체크
						nx = x + nxt[it][0], ny = y + nxt[it][1];
						if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
						if (board[nx][ny].first) {
							if (candX == -1 && board[nx][ny].first == curShark) { //자신의 냄새가 있는 칸
								candX = nx, candY = ny;
								candDir = it;
							}
							continue;
						}
						chk = 1; //빈 공간 있음
						nxtDir = it;
						break;
					}
					if (!chk) { //빈 공간 없음
						nx = candX, ny = candY, nxtDir=candDir;
					}
					nxtPosition[curShark][0] = nx, nxtPosition[curShark][1] = ny, nxtPosition[curShark][2]=nxtDir;
				}
			}
		}

		//옮기기
		for (i = m; i >= 1; i--) {
			if (!sharkInfo[i].alive) continue;
			int nx = nxtPosition[i][0], ny = nxtPosition[i][1], nxtDir=nxtPosition[i][2];
			if (board[nx][ny].first && board[nx][ny].first!=i) {
				sharkInfo[board[nx][ny].first].alive = 0;
				aliveNum--;
			}
			board[nx][ny].first = i;
			board[nx][ny].second = k+1; //밑에서 1만큼 지울거임
			sharkInfo[i].x = nx;
			sharkInfo[i].y = ny;
			sharkInfo[i].dir = nxtDir;
		}
		//냄새 지우기
		for (i = 0; i < n; i++) { 
			for (j = 0; j < n; j++) {
				if (board[i][j].second) {
					board[i][j].second--; //냄새 사라짐
					if (!board[i][j].second) board[i][j].first = 0; //냄새 0 되면 상어 번호 지우기
				}
			}
		}

		ret++;
		if (aliveNum == 1) break;
	}
	if (ret > 1000) printf("-1");
	else printf("%d", ret);
}*/

/*int main() { // 13163 닉네임에 갓 붙이기
	ios::sync_with_stdio(0);
	int i, j, n;
	char name[101][101];
	cin >> n;
	cin.ignore();
	for (i = 1; i <= n; i++) {
		cin.getline(name[i], 101);
	}

	for (i = 1; i <= n; i++) {
		int first = 0;
		for (j = 0; j < strlen(name[i]); j++) {
			if (name[i][j] == ' ') {
				if (!first) {
					cout << "god";
					first = 1;
				}
			}
			else if (first) cout << name[i][j];
		}
		cout << endl;
	}
}*/

/*int n; //18353 병사 배치하기
vector<int> power, ret;
int main() {
	int i;
	cin>>n;
	power.resize(n);
	for (i = 0; i < n; i++) {
		cin>>power[i];
	}
	
	for (i = n - 1; i >= 0; i--) {
		auto it=lower_bound(ret.begin(), ret.end(), power[i]);
		if (it == ret.end()) ret.push_back(power[i]);
		else *it = power[i];
	}

	cout << n - ret.size();
}*/

/*int main() { //
	int t, x, m, i, a, b;
	scanf("%d%d%d", &t, &x, &m);
	int mina = t;
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		mina = min(mina, a/b + (a % b == 0 ? -1 : 0));
	}

	printf("%d", mina<=0 ? 0 : x * (mina + (t - mina) / 2));
}*/

/*const int MAX = 100000; //14427 수열과 쿼리 15
int arr[MAX+1], tree[4 * MAX + 1];

int minIndex(int x, int y) {
	if (arr[x] == arr[y]) return x < y ? x : y;
	return arr[x] < arr[y] ? x : y;
}

int init(int start, int end, int node) {
	if (start == end) return tree[node]=start;
	int mid = start + end >> 1;
	return tree[node] = minIndex(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

int update(int start, int end, int node, int index) {
	if (index<start || index>end || start == end) return tree[node];
	int mid = start + end >> 1;
	return tree[node] = minIndex(update(start, mid, node * 2, index), update(mid + 1, end, node * 2 + 1, index));
}

int main() {
	int i, n, m, c, in, v;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	init(0, n - 1, 1);
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &c);
		if (c == 1) {
			scanf("%d%d", &in, &v);
			arr[in-1] = v;
			update(0, n - 1, 1, in-1);
		}
		else {
			printf("%d\n", tree[1] + 1);
		}
	}
}*/

/*const int MAX = 100000; // 14428 수열과 쿼리 16
int arr[MAX + 1], tree[4 * MAX + 1];

int minIndex(int a, int b) {
	if (a == MAX) return b;
	if (b == MAX) return a;
	if (arr[a] == arr[b]) return a < b ? a : b;
	return arr[a] < arr[b] ? a : b;
}

int init(int start, int end, int node) {
	if (start == end) return tree[node]=start;
	int mid = (start + end) >> 1;
	return tree[node] = minIndex(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

int update(int start, int end, int node, int index) {
	if (index<start || index>end || start == end) return tree[node];
	int mid = (start + end) >> 1;
	return tree[node] = minIndex(update(start, mid, node * 2, index), update(mid + 1, end, node * 2 + 1, index));
}

int find(int start, int end, int node, int i, int j) {
	int mid = (start + end) >> 1;
	if (start == i && end == j) return tree[node];
	if (end < i || j < start) return MAX;
	return minIndex(find(start, mid, node * 2, i, min(j, mid)), find(mid + 1, end, node * 2 + 1, max(mid + 1, i), j));
}

int main() {
	int i, n, m, a, b, c;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	init(0, n - 1, 1);
	scanf("%d", &m);

	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (a == 1) { //update
			arr[b-1] = c;
			update(0, n - 1, 1, b-1);
		}
		else { //find
			printf("%d\n", find(0, n - 1, 1, b-1, c-1) + 1);
		}
	}
}*/

/*const int MAX = 100000, INF=1e9+1; //14438 수열과 쿼리 17
int arr[MAX], tree[4 * MAX + 1];

int init(int start, int end, int node) {
	if (start == end) return tree[node] = arr[start];
	int mid = start + end >> 1;
	return tree[node] = min(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

int update(int start, int end, int node, int index, int obj) {
	if (index < start || end < index) return tree[node];
	if (start == end) {
		if (index == start) return tree[node]=obj;
		return tree[node];
	}
	int mid = start + end >> 1;
	return tree[node] = min(update(start, mid, node * 2, index, obj), update(mid + 1, end, node * 2 + 1, index, obj));
}

int find(int start, int end, int node, int i, int j) {
	int mid = start + end >> 1;
	if (end < i || j < start) return INF;
	if((start==i && end==j) || start==end) return tree[node];
	return min(find(start, mid, node * 2, i, min(j, mid)), find(mid + 1, end, node * 2 + 1, max(i, mid + 1), j));
}

int main() {
	int i, n, m, a, b, c;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	init(0, n - 1, 1);
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (a == 1) { //update
			arr[b - 1] = c;
			update(0, n - 1, 1, b - 1, c);
		}
		else { //find
			printf("%d\n", find(0, n - 1, 1, b-1, c-1));
		}
	}
}*/

/*const int MAX = 100000; //18436 수열과 쿼리 37
pair<int, int> arr[MAX], tree[4 * MAX + 1]; //{홀, 짝}

pair<int, int> pairAdd(pair<int, int> a, pair<int, int> b) {
	return make_pair(a.first + b.first, a.second + b.second);
}
pair<int, int> init(int start, int end, int node) {
	if (start == end) return tree[node] = arr[start];
	int mid = start + end >> 1;
	return tree[node] = pairAdd(init(start, mid, node * 2), init(mid + 1, end, node * 2 + 1));
}

pair<int, int> update(int start, int end, int node, int index, pair<int, int> obj) {
	if (index < start || end < index) return tree[node];
	if (start == end) {
		if (start == index) {
			return tree[node] = obj;
		}
		return tree[node];
	}
	int mid = start + end >> 1;
	return tree[node] = pairAdd(update(start, mid, node * 2, index, obj), update(mid + 1, end, node * 2 + 1, index, obj));
}

pair<int, int> find(int start, int end, int node, int i, int j) {
	if (end < i || j < start) return make_pair(0, 0);
	if (start == end || (start == i && end == j)) return tree[node];
	int mid = start + end >> 1;
	return pairAdd(find(start, mid, node * 2, i, min(mid, j)), find(mid + 1, end, node * 2 + 1, max(i, mid + 1), j));
}
int main() {
	int i, n, m, a, x, y, z;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		arr[i] = a % 2 ? make_pair(1, 0) : make_pair(0, 1);
	}
	init(0, n - 1, 1);
	scanf("%d", &m);

	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &x, &y, &z);
		if (x == 1) { //update
			arr[y - 1] = z % 2 ? make_pair(1, 0) : make_pair(0, 1);
			update(0, n - 1, 1, y - 1, arr[y-1]);
		}

		else { //find
			if (x == 2)
				printf("%d\n", find(0, n - 1, 1, y-1, z-1).second);
			else
				printf("%d\n", find(0, n - 1, 1, y-1, z-1).first);
		}
	}
}*/

/*const int MAX = 100000; //13547 수열과 쿼리 5
int arr[MAX], chk[MAX*10 + 1], ret[MAX], rt, cur;

struct query {
	int lo;
	int hi;
	int n;
} q[MAX];

bool cmp(query a, query b) {
	int x = a.hi / rt, y = b.hi / rt;
	return x == y ? a.lo < b.lo : x < y;
}

void func(int idx, int mode) {
	if (mode) { //true, 더하기
		if (chk[arr[idx]]++ == 0)
			cur++;
	}
	else {//false, 빼기
		if (--chk[arr[idx]] == 0)
			cur--;
	}
}
int main() {
	int i, n, m, l, r;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	rt = (int)sqrt(n);
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &q[i].lo, &q[i].hi);
		q[i].lo--;
		q[i].hi--;
		q[i].n = i;
	}
	sort(q, q + m, cmp);
	int lo = 1, hi = 0;
	for (i = 0; i < m; i++) {
		while (lo < q[i].lo) //lo 증가 -> 빼기
			func(lo++, false);

		while(lo > q[i].lo) //lo 감소 -> 더하기
			func(--lo, true);

		while (hi < q[i].hi) 
			func(++hi, true);

		while (hi > q[i].hi)
			func(hi--, false);

		ret[q[i].n] = cur;
	}

	for (i = 0; i < m; i++) {
		printf("%d\n", ret[i]);
	}
}*/

/*const int MAX = 1000000, MOD=1e9 + 7; //11505 구간 곱 구하기
typedef long long ll;

ll arr[MAX], tree[4 * MAX + 1];

ll init(int start, int end, int node) {
	if (start == end) return tree[node] = arr[start];
	int mid = start + end >> 1;
	return tree[node] = (init(start, mid, node * 2) * init(mid + 1, end, node * 2 + 1)) % MOD;
}

ll update(int start, int end, int node, int index) {
	if (index < start || end < index) return tree[node];
	if (start == end) return tree[node]=arr[index];
	int mid = start + end >> 1;
	return tree[node]= (update(start, mid, node * 2, index) * update(mid + 1, end, node * 2 + 1, index)) % MOD;
}

ll find(int start, int end, int node, int i, int j) {
	if (end < i || j < start) return 1;
	if (start == end || (start == i && end == j)) return tree[node];
	int mid = start + end >> 1;
	return (find(start, mid, node * 2, i, min(j, mid)) * find(mid + 1, end, node * 2 + 1, max(mid+1, i), j)) % MOD;
}

int main() {
	int i, n, m, k, a, b, c;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	init(0, n - 1, 1);

	for (i = 0; i < m + k; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (a == 1) { // update
			arr[b - 1] = c;
			update(0, n - 1, 1, b-1);
		}
		else { //find
			printf("%lld\n", find(0, n - 1, 1, b-1, c-1));
		}
	}
}*/

/*typedef long long ll; //1275 커피숍 2
const int MAX = 100000;
ll arr[MAX], tree[4*MAX+1];

ll init(int start, int end, int node) {
	if (start == end) return tree[node] = arr[start];
	int mid = start + end >> 1;
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

ll find(int start, int end, int node, int i, int j) {
	if (end < i || j < start) return 0;
	if (start == end || (start == i && end == j)) return tree[node];
	int mid = start + end >> 1;
	return find(start, mid, node * 2, i, min(mid, j)) + find(mid + 1, end, node * 2 + 1, max(mid + 1, i), j);
}

ll update(int start, int end, int node, int index) {
	if (end < index || index < start) return tree[node];
	if (start == end) return tree[node] = arr[index];
	int mid = start + end >> 1;
	return tree[node]=update(start, mid, node * 2, index) + update(mid + 1, end, node * 2 + 1, index);
}

int main() {
	int i, n, q, a, b, c, d;
	scanf("%d%d", &n, &q);
	for (i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	init(0, n - 1, 1);
	for (i = 0; i < q; i++) {
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (a > b) swap(a, b);
		printf("%lld\n", find(0, n - 1, 1, a-1, b-1));
		arr[c - 1] = (ll)d;
		update(0, n - 1, 1, c-1);
	}
}*/

/*const int MAX = 500000; // 7578 공장
typedef long long ll;
int num[MAX * 2 + 1];
ll arr[MAX], ret;

void merge(int as, int ae, int bs, int be) {
	int i = as, j = bs, idx=0;
	ll* tmp, rev;
	tmp = new ll[be - as + 1];
	while (i <= ae && j <= be) {
		if (arr[i] < arr[j]) {
			tmp[idx++] = arr[i++];
			ret += rev;
		}
		else {
			tmp[idx++] = arr[j++];
			rev++;
		}
	}
	while (i <= ae) {
		tmp[idx++] = arr[i++];
		ret += rev;
	}
	while (j <= be) tmp[idx++] = arr[j++];

	for (i = as; i <= be; i++) {
		arr[i] = tmp[i - as];
	}
}

void mgSort(int start, int end) {
	if (start == end) return;
	int mid = start + end >> 1;
	mgSort(start, mid);
	mgSort(mid + 1, end);
	merge(start, mid, mid+1, end);
}

int main() {
	int i, n, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		num[k] = i;
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		arr[i] = num[k];
	}
	mgSort(0, n - 1);
	printf("%lld\n", ret);
}*/

/*typedef long long ll; //2268 수들의 합
const int MAX = 1000000;
ll arr[MAX], tree[4 * MAX + 1];

ll modify(int start, int end, int node, int index) {
	if (end < index || index < start) return tree[node];
	if (start == end) {
		if (start == index) return tree[node] = arr[index];
		return tree[node];
	}
	int mid = start + end >> 1;
	return tree[node] = modify(start, mid, node * 2, index) + modify(mid + 1, end, node * 2 + 1, index);
}

ll find(int start, int end, int node, int i, int j) {
	if (end < i || j < start) return 0;
	if (start == end || start == i && end == j) return tree[node];
	int mid = start + end >> 1;
	return find(start, mid, node * 2, i, min(j, mid)) + find(mid + 1, end, node * 2 + 1, max(i, mid + 1), j);
}

int main() {
	int i, n, m, a, b, c;
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (a == 0) { //sum
			if (b > c) swap(b, c);
			printf("%lld\n", find(0, n - 1, 1, b-1, c-1));
		}

		else { //modify
			arr[b - 1] = c;
			modify(0, n - 1, 1, b - 1);
		}
	}
}*/

/*const int MAX = 100000; //5676 음주 코딩

int arr[MAX], tree[4 * MAX + 1];

int init(int start, int end, int node) {
	if (start == end) return tree[node]=arr[start];
	int mid = start + end >> 1;
	return tree[node] = init(start, mid, node * 2) * init(mid + 1, end, node * 2 + 1);
}

int modify(int start, int end, int node, int index) {
	if (end < index || index < start) return tree[node];
	if (start == end) {
		if (start == index) return tree[node] = arr[index];
		return tree[node];
	}
	int mid = start + end >> 1;
	return tree[node]=modify(start, mid, node * 2, index)* modify(mid + 1, end, node * 2 + 1, index);
}

int find(int start, int end, int node, int i, int j) {
	if (end < i || j < start) return 1;
	if (start==end || start == i && end == j) return tree[node];
	int mid = start + end >> 1;
	return find(start, mid, node * 2, i, min(j, mid))* find(mid + 1, end, node * 2 + 1, max(i, mid + 1), j);
}

int main() {
	int i, n, k, p, a, b;
	char com;
	while (scanf("%d%d", &n, &k) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%d", &p);
			if (p > 0) arr[i] = 1;
			else if (p < 0) arr[i] = -1;
			else arr[i] = 0;
		}

		init(0, n - 1, 1);

		for (i = 0; i < k; i++) {
			fgetc(stdin);
			scanf("%c%d%d", &com, &a, &b);
			if (com == 'C') { //modify
				if (b > 0) arr[a - 1] = 1;
				else if (b < 0) arr[a - 1] = -1;
				else arr[a - 1] = 0;
				modify(0, n - 1, 1, a - 1);
			}

			else { //find
				int ret = find(0, n - 1, 1, a - 1, b - 1);
				printf("%c", ret == 0 ? '0' : (ret == 1 ? '+' : '-'));
			}
		}
		printf("\n");
	}
}*/

/*const int MAX = 100000; //k번째 수
int arr[MAX], p, q;
vector<int> tree[4 * MAX + 1];

vector<int> merge(vector<int> a, vector<int> b) {
	if (a.size() == 0) return b;
	if (b.size() == 0) return a;
 	int asz = a.size(), bsz = b.size(), ret=-1;
	vector<int> idx = vector<int>(asz+bsz);
	int l = 0, r = 0, nidx=0;
	while (l < asz && r < bsz) {
		if (a[l] <= b[r])
			idx[nidx++] = a[l++];
		else
			idx[nidx++] = b[r++];
	}

	while (l < asz) idx[nidx++] = a[l++];
	while (r < bsz) idx[nidx++] = b[r++];
	return idx;
}

void init(int start, int end, int node) {
	if (start == end){
		tree[node].push_back(arr[start]);
		return;
	}
	int mid = start + end >> 1;
	init(start, mid, node * 2);
	init(mid + 1, end, node * 2 + 1);
	tree[node]=merge(tree[node * 2], tree[node * 2 + 1]);
}

int get(int start, int end, int node, int i, int j, int x) {
	if (end < i || j < start) return 0;
	if (i <= start && end <= j) return upper_bound(tree[node].begin(), tree[node].end(), x)-tree[node].begin();
	int mid = start + end >> 1;
	return get(start, mid, node * 2, i, j, x) + get(mid + 1, end, node * 2 + 1, i, j, x);
}
int main() {
	int i, j, n, m, a, b, c;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	init(0, n - 1, 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		int l = -1e9, r = 1e9, mid;
		while (l <= r) {
			mid = l + r >> 1;
			if (get(0, n - 1, 1, a - 1, b - 1, mid) < c) l = mid + 1;
			else r = mid - 1;
		}
		printf("%d\n", l);
	}
}*/

/*const int MAX = 100000; //1849 순열
int tree[4*MAX+1], ret[MAX];

int init(int start, int end, int node) {
	if (start == end) return tree[node] = 1;
	int mid = start + end >> 1;
	return tree[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

int query(int start, int end, int node, int obj, int index) {
	if (start == end) return index;
	int mid = start + end >> 1;
	if (obj <= tree[node * 2]) { //왼쪽
		return query(start, mid, node * 2, obj, index);
	}
	return query(mid + 1, end, node * 2 + 1, obj - tree[node*2], index + ((end-start + 2)>>1));
}

int update(int start, int end, int node, int index) {
	if (end < index || index < start) return tree[node];
	if (start == end) {
		if (start == index) return tree[node] = 0;
		return tree[node];
	}
	int mid = start + end >> 1;
	return tree[node] = update(start, mid, node * 2, index) + update(mid + 1, end, node * 2 + 1, index);
}

int main() {
	int i, n, x;
	scanf("%d", &n);
	init(0, n - 1, 1);
	for (i = 0; i < 4 * n; i++) {
		printf("%d ", tree[i]);
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		int q = query(0, n-1, 1, x+1, 0);
		printf("i : %d, q : %d\n", i, q);
		ret[q] = i+1;
		update(0, n - 1, 1, q);
		for (int j = 0; j < 4 * n; j++) {
			printf("%d ", tree[j]);
		}
		printf("\n");
	}

	for (i = 0; i < n; i++) {
		printf("%d\n", ret[i]);
	}
}*/

/*typedef long long ll; //1572 중앙값
const int MAX = 65537;

int n, k, tree[MAX + 1];

void update(int idx, int val) {
	idx++;
	while (idx < MAX + 1) {
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

int find(int idx) {
	idx++;
	int sum = 0;
	while (idx > 0) {
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

ll bisearch() {
	int start = 0, end = MAX, c=(k+1)/2, mid;
	while (start < end) {
		mid = start + end >> 1;
		if (find(mid) < c) start = mid + 1;
		else end = mid;
	}
	return start;
}

vector<int> vec(250000);
int main() {
	int i, a;
	ll ret = 0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
		update(vec[i], 1);

		if (i >= k) {
			update(vec[i - k], -1);
		}
		if (i >= k - 1) ret += bisearch();
	}
	printf("%lld", ret);
}*/

/*int main() { // 1166 선물
	int i=0, n, l, w, h;
	scanf("%d%d%d%d", &n, &l, &w, &h);
	double s = 0, e = 1e9, mid;
	while (i<100) {
		mid = (s + e)/2;
		long long num = (long long)(l/mid) * (long long)(w / mid) * (long long)(h / mid);
		if (num >= n) s = mid;
		else e = mid;
		i++;
	}
	printf("%.10lf", s);
}*/

/*int main() { //1789 수들의 합
	long long s, n=0, sum=0;
	scanf("%lld", &s);
	while (true) {
		sum += ++n;
		if (sum > s) {
			printf("%lld\n", n-1);
			break;
		}
	}
}*/

/*int arr[2000]; // 1253 좋다
int main() {
	int i, j, n, obj, ret = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) continue;
			obj = arr[i] - arr[j];
			int l = 0, r = n, m, k=0, p=n+1;
			while (k<100) {
				m = l + r >> 1;
				if (arr[m] <= obj) {
					p = m;
					l = m + 1;
					if (arr[p] == obj) {
						int tmp = p;
						while (tmp>=0 && (tmp == i || tmp == j)) {
							tmp--;
						}
						if (tmp>=0 && arr[tmp] == obj) {
							p = tmp;
							break;
						}

						tmp = p;
						while (tmp < n && (tmp == i || tmp == j)) {
							tmp++;
						}
						if (tmp<n && arr[tmp] == obj) {
							p = tmp;
							break;
						}
					}
				}
				else if (arr[m] > obj) r = m - 1;
				k++;
			}
			if (p != i && p != j && arr[p]==obj) {
				ret++;
				break;
			}
		}
	}
	printf("%d", ret);
}*/

/*const int MAX = 1000000; // 2776 암기왕
int main() {
	int i, n, m, t, k;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		vector<int> vec(n);
		for (i = 0; i < n; i++) {
			scanf("%d", &vec[i]);
		}
		sort(vec.begin(), vec.end());
		scanf("%d", &m);
		for (i = 0; i < m; i++) {
			scanf("%d", &k);
			int l = 0, r = n, mid, chk=0;
			while (l < r) {
				mid = l + r >> 1;
				if (vec[mid] < k) l = mid + 1;
				else if (vec[mid] > k) r = mid;
				else{
					chk = 1;
					break;
				}
			}
			printf("%d\n", chk);
		}
	}
}*/

/*int main() { //2470 두 용액
	int i, n, retl=-1, retr=-1, mina=1e9 * 2 + 1;
	scanf("%d", &n);
	vector<int> vec(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	sort(vec.begin(), vec.end());

	for (i = 0; i < n-1; i++) {
		int l = i + 1, r = n-1, m, obj=-vec[i], chk=0;
		while (l <= r) {
			m = l + r >> 1;
			if (vec[m] < obj) l = m + 1;
			else if (vec[m] > obj) r = m - 1;
			else {
				if (i != m) {
					retl = vec[i], retr = obj;
					chk = 1;
				}
				break;
			}
		}
		if (!chk) {
			if (i!=m && mina > abs(vec[i] + vec[m])) {
				mina = abs(vec[i] + vec[m]);
				retl = vec[i], retr = vec[m];
			}

			if (m > 0 && i!=m-1 && mina > abs(vec[i] + vec[m - 1])) {
				mina = abs(vec[i] + vec[m - 1]);
				retl = vec[i], retr = vec[m - 1];
			}

			if (m < n - 1 && i != m+1 && mina > abs(vec[i] + vec[m + 1])) {
				mina = abs(vec[i] + vec[m + 1]);
				retl = vec[i], retr = vec[m + 1];
			}
		}
		else break;
	}
	printf("%d %d", retl, retr);
}*/

/*const int MAX = 100000;
int place[MAX];

int main() {
	int i, m, n, k, a, b, ret=0;
	scanf("%d%d%d", &m, &n, &k);
	for (i = 0; i < m; i++) {
		scanf("%d", &place[i]);
	}

	sort(place, place + m);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		if (b > k) continue;
		int l = 0, r = m-1, mid, left=a+b-k, right=a-b+k;
		while (l < r) {
			mid = l + r >> 1;
			if (place[mid] < left) l = mid + 1;
			else r = mid;
		}

		if (place[l] == left) {
			ret++;
		}
		else if (place[l] > left) {
			if (place[l] <= right) ret++;
		}
	}
	printf("%d", ret);
}*/

/*int main() { //7795 먹을 것인가 먹힐 것인가
	int i, t, n, m, k;
	scanf("%d", &t);
	while (t--) {
		int arr[20000], ret=0;
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		sort(arr, arr + n);
		for (i = 0; i < m; i++) {
			scanf("%d", &k);
			int l=0, r=n-1, mid;
			while (l < r) {
				mid = l + r >> 1;
				if (arr[mid] <= k) l = mid + 1;
				else r = mid;
			}
			if (arr[l] == k) ret += n-1-l;
			else if(arr[l]>k) ret += n-l;
		}
		printf("%d\n", ret);
	}
}*/

/*const int MAX = 300000; //1756 피자 굽기

int oven[MAX], dough[MAX];
int main() {
	int i, d, n;
	scanf("%d%d", &d, &n);
	for (i = 0; i < d; i++) {
		scanf("%d", &oven[i]);
		if (i > 0 && oven[i - 1] < oven[i]) oven[i] = oven[i - 1];
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &dough[i]);
	}
	int ovenPt = d - 1, doughPt = 0;
	while (true) {
		if (oven[ovenPt] >= dough[doughPt]) {
			doughPt++;
			if (doughPt == n) {
				printf("%d", ovenPt + 1);
				break;
			}
		}
		ovenPt--;
		if (ovenPt == -1) {
			printf("0");
			break;
		}
	}
}*/

/*char str[53]; // 14468 소가 길을 건너간 이유 2

int main() {
	int i, j, ret=0;
	scanf("%s", str);
	pair<int, int> arr[26];
	for (int i = 0; i < 52; i++) {
		int idx = str[i] - 'A';
		if (arr[idx].first == 0) arr[idx].first = i + 1;
		else arr[idx].second = i + 1;
	}

	for (i = 0; i < 26; i++) {
		for (j = 0; j < 26; j++) {
			if (arr[i].first < arr[j].first && arr[j].first < arr[i].second && arr[i].second < arr[j].second) {
				ret++;
			}
		}
	}
	printf("%d", ret);
}*/

/*int arr[100001];
int main() {
	int i, n, k, a, b;
	scanf("%d%d%d", &n, &k, &b);
	for (i = 0; i < b; i++) {
		scanf("%d", &a);
		arr[a] = 1;
	}

	int l = 0, r = b, m, chk=0;
	while (l < r) {
		m = l + r >> 1;
		printf("l : %d, r : %d, m : %d\n", l, r, m);
		int sum = 0;
		for (i = 0; i < k; i++) {
			sum += arr[i];
		}
		printf("init sum : %d\n", sum);
		if (sum <= m) chk = 1;
		else {
			for (i = 1; i + k < n; i++) {
				sum = sum - arr[i - 1] + arr[i + k - 1];
				printf("i : %d, sum : %d\n", i, sum);
				if (sum <= m) {
					chk = 1;
					break;
				}
			}
		}

		if (!chk) l = m + 1;
		else r = m;
	}
	printf("%d", l);
}*/

/*int arr[100001]; // 14465 소가 길을 건너간 이유 5
int main() {
	int i, n, k, a, b, sum=0, ret=10e9;
	scanf("%d%d%d", &n, &k, &b);
	for (i = 0; i < b; i++) {
		scanf("%d", &a);
		arr[a-1] = 1;
	}
	for (i = 0; i < k; i++) {
		sum += arr[i];
	}
	if (ret > sum) ret = sum;
	printf("sum : %d\n", sum);
	for (i = 1; i + k <= n; i++) {
		sum = sum - arr[i - 1] + arr[i + k - 1];
		if (ret > sum) ret = sum;
	}
	printf("%d", ret);
}*/

/*int main() { //1477 휴게소 세우기
	int i, n, m, k, a, arr[100], sub[102];
	scanf("%d%d%d", &n, &m, &k);

	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n);
	sub[0] = arr[0];
	for (i = 1; i < n; i++) {
		sub[i] = arr[i] - arr[i - 1];
	}
	sub[n] = k - arr[n - 1];
	sort(sub, sub + n + 1);
	int l = 0, r = k, mid;
	while (l < r) {
		mid = l + r >> 1;
		int sum = 0;
		for (i = 0; i <= n; i++) {
			sum += (sub[i]-1) / mid;
		}
		if (sum > m) l = mid + 1;
		else r = mid;
	}
	printf("%d", l);
}*/

/*typedef long long ll; // 11561 징검다리
int main() {
	int i, t;
	ll n;
	scanf("%d", &t);
	while (t--) {
		scanf("%lld", &n);
		ll l = 1, r = 10e9, m, ret=1;
		while (l < r) {
			m = (l + r)>>1;
			if (m * (m + 1) / 2 <= n) {
				ret = m;
				l = m + 1;
			}
			else r = m;
		}
		printf("%lld\n", ret);
	}
}*/

/*int main() { //13702 이상한 술집
	int i, n, k, arr[10000];
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int l = 0, r = (1 << 31)-1, m, ret;
	while (l < r) {
		m = l + r >> 1;
		int sum = 0;
		for (i = 0; i < n; i++) {
			sum += arr[i] / m;
		}
		if (sum >= k) {
			ret = m;
			l = m + 1;
		}
		else r = m;
	}
	printf("%d", ret);
}*/

/*int main() { //2550 전구
	int i, n, arr[10001], light[10001], lightR[10001], index[10001];
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= n; i++) {
		scanf("%d", &light[i]);
		lightR[light[i]] = i;
	}

	vector<int> vec;
	int maxa = 0;
	for (i = 1; i <= n; i++) {
		arr[i] = lightR[arr[i]];
		auto it = lower_bound(vec.begin(), vec.end(), arr[i]);
		if (it == vec.end()) {
			//printf("i : %d, arr[i] : %d, push\n", i, arr[i]);
			vec.push_back(arr[i]);
			index[i] = vec.size();
		}
		else {
			*it = arr[i];
			index[i] = it - vec.begin() + 1;
		}
		if (index[i] > maxa) maxa = index[i];
	}

	vector<int> ret;
	int idx = maxa;
	i = n;
	while (i>0 && idx > 0) {
		if (idx == index[i]) {
			ret.push_back(light[arr[i]]);
			idx--;
		}
		i--;
	}

	sort(ret.begin(), ret.end());
	printf("%d\n", vec.size());
	for (auto it : ret) {
		printf("%d ", it);
	}
}*/

/*const int MAX = 100000; //1776 어두운 굴다리
int main() {
	int i, j, n, m, pos[MAX+1], dist[MAX+1];
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &pos[i]);
		if (i == 0) dist[0] = pos[i];
		else dist[i] = pos[i] - pos[i - 1];
	}
	dist[m] = n - pos[m-1];
	int maxa = dist[0];
	for (i = 1; i <= m; i++) {
		if (i == m && dist[i] > maxa) maxa = dist[i];
		else if (i!=m && (dist[i]+1) / 2 > maxa) maxa = (dist[i] + 1) / 2;
	}
	printf("%d", maxa);
}*/

/*const int MAX = 1000000; //16401 과자 나눠주기
int main() {
	int i, m, n, cookie[MAX];
	scanf("%d%d", &m, &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &cookie[i]);
	}

	int l = 1, r = 1e9, mid, ret=0;
	while (l < r) {
		mid = l + r >> 1;
		int sum = 0;
		for (i = 0; i < n; i++) {
			sum += cookie[i] / mid;
			if (sum >= m) break;
		}
		if (sum >= m) {
			ret = mid;
			l = mid + 1;
		}
		else r = mid;
	}
	printf("%d", ret);
}*/

/*typedef long long ll; // 14627 파닭파닭
int main() {
	ll i, s, c, arr[1000000], sum=0;
	scanf("%lld%lld", &s, &c);
	for (i = 0; i < s; i++) {
		scanf("%lld", &arr[i]);
		sum += arr[i];
	}

	ll l = 1, r = 2e9, m, ret=0;
	while (l < r) {
		m = l + r >> 1;
		ll sum = 0;
		for (i = 0; i < s; i++) {
			sum += arr[i] / m;
		}
		if (sum >= c) {
			ret = m;
			l = m + 1;
		}
		else r = m;
	}

	printf("%lld", sum-ret*c);
}*/

/*int cnt[1001]; // 14919 분포표 만들기
int main() {
	int m, idx=0, i, k=1;
	double arr[1000000];
	scanf("%d", &m);
	while (scanf("%lf", &arr[idx]) != EOF) idx++;
	sort(arr, arr + idx);
	for (i = 0; i < idx; i++) {
		while (k * (double)1 / m <= arr[i]) k++;
		cnt[k]++;
	}

	for (i = 1; i <= m; i++) {
		printf("%d ", cnt[i]);
	}
}*/

/*typedef long long ll; //17245 서버실

int main() {
	ll i, j, n, arr[1000][1000], ret, half = 0;
	scanf("%lld", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%lld", &arr[i][j]);
			half += arr[i][j];
		}
	}

	half=(half+1)/2;
	printf("half : %lld\n", half);
	ll l = 0, r = 1e9, m;
	while (l < r) {
		m = l + r >> 1;
		ll sum = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				sum += min(m, arr[i][j]);
			}
		}
		printf("l : %lld, r : %lld, m : %lld, sum : %lld\n", l, r, m, sum);
		if (half <= sum) r = m;
		else l = m + 1;
	}
	printf("%lld", r);
}*/

/*typedef long long ll; // 9753 짝 곱
int prime[100001];
int main() {
	int i, t, k;
	prime[1] = 1;
	for (i = 2; i < sqrt(100000); i++) {
		if (prime[i]) continue;
		int t = i * 2;
		while (t <= 100000) {
			prime[t] = 1;
			t += i;
		}
	}

	vector<int> vec, mul;
	for (i = 2; i <= 100000; i++) {
		if (!prime[i]) vec.push_back(i);
	}

	scanf("%d", &t);
	while (t--) {
		scanf("%d", &k);
		int mina = 2e9;
		for (auto it : vec) {
			if (it > mina) break;
			int l = 0, r = vec.size()-1, m;
			while (l < r) {
				m = l + r >> 1;
				//printf("l : %d, r : %d, m : %d\n", l, r, m);
				if (it * (ll)vec[m] < (ll)k) l = m + 1;
				else r = m;
			}
			if (it == vec[l]) l++;
			if (mina > it * vec[l]) mina = it * vec[l];
		}
		printf("%d\n", mina);
	}
}*/

/*typedef long long ll; //15810 풍선 공장
int arr[1000000];
int main() {
	int i, n, m;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	ll l = 0, r = 1e15, mid;
	while (l < r) {
		mid = l + r >> 1;
		ll sum = 0;
		for (i = 0; i < n; i++) {
			sum += mid / arr[i];
		}
		if (sum < m) l = mid + 1;
		else r = mid;
	}
	printf("%lld", l);
}*/

/*typedef long long ll; //17451 평행 우주
int main() {
	int i, n, arr[300000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	ll ret = arr[n - 1];
	for (i = n - 1; i > 0; i--) {
		ret = arr[i - 1] * ceil((double)ret / arr[i - 1]);
	}
	printf("%lld", ret);
}*/


/*int main() { //17393 다이나믹 롤러
	int i, n;
	scanf("%d", &n);
	vector<long long> a(n), b(n);
	for (i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%lld", &b[i]);
	}

	for (i = 0; i < n; i++) {
		printf("%lld ", upper_bound(b.begin() + i+1, b.end(), a[i])-b.begin()-i-1);
	}
}*/

/*int main() { //11687 팩토리얼 0의 개수
	int i, j, m;
	scanf("%d", &m);
	int l = 0, r = 5 * m, mid, ret=-1;
	while (l <= r) {
		mid = l + r >> 1;
		int sum = 0;
		for (j = 1; j <= 12; j++) sum += mid / pow(5, j);
		if (sum <= m) {
			if (sum == m) ret = mid;
			l = mid + 1;
		}
		else r = mid-1;
	}
	printf("%d", ret==-1 ? ret : 5*(ret/5));
}*/

/*int n, c, weight[5000]; //18114 블랙 프라이데이
int bisearch(int select, int a, int b) {
	int l = 0, r = n-1, m, obj=c-select, ret=0;
	while (l <= r) {
		m = l + r >> 1;
		if (weight[m] < obj) l = m + 1;
		else if (weight[m] > obj) r = m - 1;
		else {
			if(m!=a && m!=b) ret = 1;
			break;
		}
	}
	return ret;
}

int main() {
	int i, j, ret=0;
	scanf("%d%d", &n, &c);
	for (i = 0; i < n; i++) {
		scanf("%d", &weight[i]);
		if (weight[i] == c) ret = 1;
	}
	sort(weight, weight + n);
	if (!ret) {
		for (i = 0; i < n; i++) {
			ret = bisearch(weight[i], i, -1);
			if (ret == 1) break;
			for (j = i+1; j < n; j++) {
				if (weight[i] + weight[j] >= c) break;
				ret = bisearch(weight[i] + weight[j], i, j);
				if (ret == 1) break;
			}
			if (ret == 1) break;
		}
	}
	printf("%d", ret);
}*/

/*int main() { //4030 포켓볼
	int a, b, idx = 1;
	while (true) {
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0) break;
		int start = ceil(sqrt(a)), ret = 0;
		for (int i = start; i * i < b; i++) {
			if (i * i == a || i * i == b)continue;
			int l = 0, r = 4e4, mid, obj = i * i - 1;
			while (l <= r) {
				mid = l + r >> 1;
				int tri = mid * (mid + 1) / 2;
				if (tri < obj) l = mid + 1;
				else if (tri > obj) r = mid - 1;
				else {
					ret++;
					break;
				}
			}
		}
		printf("Case %d: %d\n", idx, ret);
		idx++;
	}
}*/

/*typedef long long ll; //17503 맥주 축제
int main() {
	ll i, n, m, k, a, b;
	scanf("%lld%lld%lld", &n, &m, &k);
	vector<pair<ll, ll>> beer(k);
	for (i = 0; i < k; i++) {
		scanf("%lld%lld", &a, &b);
		beer[i] = { a, b };
	}

	sort(beer.begin(), beer.end());
	ll l = 0, r = (ll)1 << 32, mid, ret = -1;
	while (l < r) {
		mid = l + r >> 1;
		ll sum = 0, num = 0;
		for (i = k - 1; i >= 0; i--) {
			if (beer[i].second > mid) continue;
			sum += beer[i].first;
			num++;
			if (num == n) break;
		}
		if (num != n || sum < m) {
			l = mid + 1;
		}
		else {
			ret = mid;
			r = mid;
		}
	}
	printf("%lld", ret);
}*/

/*vector<pair<int, int>> vec; //2539 모자이크
int func(int sz) {
	if (sz == 0) return 0;
	int i = 0, j = 0, sum = 1, tmp=0;
	while (j < vec.size()) {
		if (vec[j].first - vec[i].first + 1 > sz) {
			i = j;
			sum++;
			printf("sz : %d, i : %d, j : %d, sum : %d\n", sz, i, j, sum);
		}
		else {
			j++;
		}
	}
	return sum;
}

int main() {
	int w, h, n, a, i, p, q, maxa=-1;
	scanf("%d%d%d%d", &h, &w, &n, &a);
	vec.resize(a);
	for (i = 0; i < a; i++) {
		scanf("%d%d", &p, &q);
		vec[i] = { q, p };
		if (maxa < p) maxa = p;
	}

	sort(vec.begin(), vec.end());
	int l = maxa, r = 1000000, m, ret=1;
	while (l < r) {
		m = l + r >> 1;
		if (func(m) > n) l = m + 1;
		else {
			ret = m;
			r = m;
		}
	}
	printf("%d", ret);
}*/

/*int main() { //3066 브리징 시그널
	int t, n, i, a;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		vector<int> lis;
		for (i = 0; i < n; i++) {
			scanf("%d", &a);
			auto it = lower_bound(lis.begin(), lis.end(), a);
			if (it != lis.end()) * it = a;
			else lis.push_back(a);
		}
		printf("%d\n", lis.size());
	}
}*/

/*int n, m, card[100000], canPacked[100000], cache[100000], chk[500001]; // 15823 카드 팩 구매하기

int dp(int idx, int num, int sz) {
	if (idx >= sz) return 0;
	int& ret = cache[idx];
	if (ret != -1) return ret;
	if (canPacked[idx] == 1) {
		ret = max(1 + dp(idx + num, num, sz), dp(idx + 1, num, sz));
	}
	else ret = dp(idx + 1, num, sz);
	return ret;
}

int func(int num) { //num : 팩 하나에 들어가는 카드의 양
	int i = 0, j=0, stk=0, idx=0, dup=0;
	for (i = 0; i < n; i++) { //sliding window
		chk[card[i]]++;
		if (chk[card[i]] == 2) dup++;
		if (i >= num) { // 맨 뒤 원소 지우기
			chk[card[i - num]]--;
			if (chk[card[i - num]] == 1) dup--;
		}
		if (i >= num - 1) { //이때부터 중복 체크
			if (dup == 0) canPacked[idx++] = 1;
			else canPacked[idx++] = 0;
		}
	}

	for (i = 0; i < idx; i++) {
		cache[i] = -1;
	}
	int ret = dp(0, num, idx);
	return ret;
}

int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &card[i]);
	}

	int l = 1, r =n, mid, ret=0;
	while (l <= r) {
		for (i = 0; i <= 500000; i++) chk[i] = 0;
		mid = l + r >> 1;
		int k = func(mid);
		if (k >= m) {
			ret = mid;
			l = mid + 1;
		}
		else r = mid-1;
	}
	printf("%d", ret);
}*/

/*int main() { //6068 시간 관리하기
	int i, n, a, b;
	scanf("%d", &n);
	vector<pair<int, int>> vec(n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		vec[i] = { b, a };
	}
	sort(vec.begin(), vec.end());

	int l = 0, r = 1e6, m, ret = -1;
	while (l < r) {
		m = l + r >> 1;
		int here=m, chk = 1;
		for (auto it : vec) {
			if (here + it.second > it.first) {
				chk = 0;
				break;
			}
			here += it.second;
		}
		if (chk) {
			ret = m;
			l = m + 1;
		}
		else r = m;
	}
	printf("%d", ret);
}*/

/*int main() { //18113 그르다 김가놈
	int i, n, k, m, kb[1000000];
	scanf("%d%d%d", &n, &k, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &kb[i]);
		if (kb[i] >= 2 * k) kb[i] -= 2 * k;
		else if (kb[i] > k) kb[i] -= k;
		else kb[i] = 0;
	}

	int l = 1, r = 1e9, mid, ret=-1;
	while (l < r) {
		mid = l + r >> 1;
		int sum = 0;
		for (i = 0; i < n; i++) {
			if (!kb[i]) continue;
			sum += kb[i] / mid;
		}
		if (sum >= m) {
			ret = mid;
			l = mid + 1;
		}
		else r = mid;
	}
	printf("%d", ret);
}*/

/*const int MAX = 1e6 + 1; //17124 두 개의 배열
int main() {
	int t, n, m, i, a[MAX], b[MAX];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 1; i <= m; i++) {
			scanf("%d", &b[i]);
		}

		sort(b+1, b + m + 1);
		long long sum = 0;
		for (i = 1; i <= n; i++) {
			int l = 1, r = m, mid, ret=1;
			while (l <= r) {
				mid = l + r >> 1;
				printf("l : %d, r : %d, mid : %d\n", l, r, mid);
				if (b[mid] <= a[i]) {
					ret = mid;
					l = mid + 1;
				}
				else r = mid-1;
			}
			l = ret;
			int k = abs(a[i] - b[l]), add=b[l];
			if (l > 1 && abs(a[i] - b[l - 1]) <= k) { //k와 동일할 경우 더 작은것으로 변경
				k = abs(a[i] - b[l - 1]);
				add = b[l - 1];
			}
			if (l < m && abs(a[i] - b[l + 1]) < k) {
				k = abs(a[i] - b[l + 1]);
				add = b[l + 1];
			}
			sum += add;
		}
		printf("%lld\n", sum);
	}
}*/

/*const int INF = -1; // 13905 세부
vector<vector<pair<int, int>>> adj;
vector<int> visited;
int main() {
	int i, n, m, a, b, c, s, e;
	scanf("%d%d%d%d", &n, &m, &s, &e);
	adj.resize(n + 1);
	visited.resize(n + 1);
	for (i = 1; i <= m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		adj[a].emplace_back(b, c);
		adj[b].emplace_back(a, c);
	}

	int l = 1, r = 1e6, mid, ret=0;
	while (l <= r) {
		mid = l + r >> 1;
		queue<int> que;
		que.push(s);
		fill(visited.begin(), visited.end(), 0);
		visited[s] = 1;
		while (!que.empty()) {
			int here = que.front();
			que.pop();
			for (auto it : adj[here]) {
				int there = it.first, limit = it.second;
				if (visited[there] || limit<mid) continue;
				visited[there] = 1;
				que.push(there);
			}
		}

		if (visited[e]) {
			ret = mid;
			l = mid + 1;
		}
		else r = mid-1;
	}
	printf("%d", r);
}*/

/*int main() { //13397 구간 나누기 2
	int i, n, m, arr[5000];
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int l = 0, r = 10000, mid;
	while (l < r) {
		mid = l + r >> 1;
		int mina = arr[0], maxa = arr[0], interval=1;
		for (i = 1; i < n; i++) {
			if (arr[i] < mina) mina = arr[i];
			if (arr[i] > maxa) maxa = arr[i];
			if (maxa - mina > mid) {
				interval++;
				maxa = arr[i];
				mina = arr[i];
			}
		}
		if (interval > m) l = mid + 1;
		else r = mid;
	}
	printf("%d", l);
}*/

/*int main() { //9007 카누 선수
	int i, j, t, k, n;
	vector<vector<int>> student(4), sum(2);
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &k, &n);
		for (i = 0; i < 4; i++) {
			student[i] = vector<int>(n);
			for (j = 0; j < n; j++) {
				scanf("%d", &student[i][j]);
			}
		}

		for (i = 0; i < 2; i++) {
			sum[i] = vector<int>(n * n);
		}
		int idx = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				sum[0][idx] = student[0][i] + student[1][j];
				sum[1][idx++] = student[2][i] + student[3][j];
			}
		}

		sort(sum[1].begin(), sum[1].end());
		int ret = 0, diff = 1e9;
		for (i = 0; i < idx; i++) {
			int l = 0, r = idx - 1, mid, obj = k - sum[0][i], p = 0;
			while (l <= r) {
				mid = l + r >> 1;
				if (sum[1][mid] <= obj) {
					p = mid;
					l = mid + 1;
				}
				else r = mid - 1;
			}
			if (p > 0 && abs(k - (sum[0][i] + sum[1][p])) > abs(k - (sum[0][i] + sum[1][p - 1]))) p--;
			if (p<idx - 1 && abs(k - (sum[0][i] + sum[1][p])) > abs(k - (sum[0][i] + sum[1][p + 1]))) p++;
			if (diff > abs(k - (sum[0][i] + sum[1][p])) || (diff == abs(k - (sum[0][i] + sum[1][p])) && ret > sum[0][i] + sum[1][p])) {
				diff = abs(k - (sum[0][i] + sum[1][p]));
				ret = sum[0][i] + sum[1][p];
			}
		}
		printf("%d\n", ret);
	}
}*/

/*const long double PI = 3.1415926535897; //14786 Ax+Bsin(x)=C ②

long double getRadian(long double p) {
	return p * PI / 180;
}

long double func(int a, int b, long double x) {
	return a * x + b * sin(x);
}
int main() {
	int a, b, c, iter=0;
	scanf("%d%d%d", &a, &b, &c);

	long double l = 0, r = 1e5, mid, nxt=1;
	while (iter < 100) {
		mid = (l + r) / 2;
		if (func(a, b, mid) < c) l = mid + nxt;
		else r = mid;
		nxt /= 2;
		iter++;
	}
	printf("%.9Lf", l);
}*/

/*#include <iostream> // 13705 Ax+Bsin(x)=C (boost library)
#include <iomanip>
#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace std;
using boost::multiprecision::cpp_dec_float_50;

cpp_dec_float_50 func(int a, int b, cpp_dec_float_50 x) {
	return a * x + b * sin(x);
}

int main() {
	int a, b, c, iter = 0;
	cin >> a >> b >> c;
	cpp_dec_float_50 l = 0, r = 1e5, mid, nxt = 1;
	while (iter < 100) {
		mid = (l + r) / 2;
		if (func(a, b, mid) < c) {
			l = mid + nxt;
		}
		else r = mid;
		nxt /= 2;
		iter++;
	}
	cout << fixed;
	cout << "ret : " << setprecision(6) << l << endl;
	return 0;
}*/

/*int main() { //2866 문자열 잘라내기
	int i, j, a, b;
	char str[1000][1001], vertical[1000][1001];
	scanf("%d%d", &a, &b);
	for (i = 0; i < a; i++) {
		scanf("%s", &str[i]);
	}

	for (i = 0; i < b; i++) {
		for (j = 0; j < a; j++) {
			vertical[i][j] = str[j][i];
		}
		vertical[i][a] = '\0';
	}

	int l = 0, r = a - 1, mid, ret=0;
	while (l <= r) {
		mid = l + r >> 1;
		int chk = 0;
		for (i = 0; i < b; i++) {
			for (j = i + 1; j < b; j++) {
				if (!strcmp(vertical[i] + mid, vertical[j] + mid)) {
					chk = 1;
					break;
				}
			}
		}
		if (!chk) {
			ret = mid;
			l = mid + 1;
		}
		else r = mid-1;
	}
	printf("%d", ret);
}*/

/*int main() { // 9253 스페셜 저지
	string a, b, c;
	int i, chk = 0, idx = 0;
	cin >> a >> b >> c;
	for (i = 0; i < a.length(); i++) {
		if (a.substr(i, c.length()) == c) {
			chk++;
			break;
		}
	}

	if (chk) {
		for (i = 0; i < b.length(); i++) {
			if (b.substr(i, c.length()) == c) {
				chk++;
				break;
			}
		}
	}
	printf(chk==2 ? "YES" : "NO");
}*/

/*int main() { //13711 LCS 4
	int i, n, x, a[100000], tmp[100000], b[100000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		tmp[x-1] = i;
	}

	for (i = 0; i < n; i++) {
		b[i] = tmp[a[i] - 1];
	}

	vector<int> vec;
	for (i = 0; i < n; i++) {
		auto it = lower_bound(vec.begin(), vec.end(), b[i]);
		if (it == vec.end()) vec.push_back(b[i]);
		else *it = b[i];
	}
	printf("%d", vec.size());
}*/

/*int main() { //12014 주식
	int i, t, n, k, a, m;
	scanf("%d", &t);
	m = t;
	while (t--) {
		scanf("%d%d", &n, &k);
		vector<int> vec;
		for (i = 0; i < n; i++) {
			scanf("%d", &a);
			auto it = lower_bound(vec.begin(), vec.end(), a);
			if (it == vec.end()) vec.push_back(a);
			else *it = a;
		}
		printf("size : %d\n", vec.size());
		printf("Case #%d\n%d\n", m - t, vec.size() >= k ? 1 : 0);
	}
}*/

/*int main() { //6209 제자리 멀리뛰기
	int i, d, n, m;
	scanf("%d%d%d", &d, &n, &m);
	if (n == 0) {
		printf("%d", d);
		return 0;
	}
	vector<int> vec(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	sort(vec.begin(), vec.end());
	int l = 1, r = d - vec[n - 1], mid, ret=1;
	while (l <= r) {
		mid = l + r >> 1;
		int here = 0, num=0, chk=0;
		for (i = 0; i < n; i++) {
			if (here + mid <= vec[i]) {
				if (here + mid == vec[i]) chk = 1;
				here = vec[i];
				num++;
			}
		}
		printf("l : %d, r : %d, mid : %d, num : %d, chk : %d\n", l, r, mid, num, chk);
		if (num >= n - m) {
			if(chk) ret = mid;
			l = mid + 1;
		}
		else r = mid-1;
	}
	printf("%d", ret);
}*/

/*typedef long long ll; //2819 상근이의 로봇
int main() {
	int i, n, m;
	scanf("%d%d", &n, &m);
	vector<int> pntX(n), pntY(n);
	vector<char> cmd(m);
	pair<int, int> here = { 0, 0 };
	for (i = 0; i < n; i++) {
		scanf("%d%d", &pntX[i], &pntY[i]);
	}

	sort(pntX.begin(), pntX.end());
	sort(pntY.begin(), pntY.end());

	fgetc(stdin);
	for (i = 0; i < m; i++) {
		scanf("%c", &cmd[i]);
	}

	ll sum = 0;
	for (i = 0; i < n; i++) {
		sum += (abs(pntX[i]) + abs(pntY[i]));
	}

	for (i = 0; i < m; i++) {
		int l = 0, r = n - 1, mid;
		if (cmd[i] == 'S') { //북
			if (n == 1) sum = abs(here.first - pntX[0]) + abs(here.second + 1 - pntY[0]);
			else {
				while (l <= r) {
					mid = l + r >> 1;
					if (pntY[mid] <= here.second) l = mid + 1;
					else r = mid - 1;
				}
				sum += (2 * l - n);
			}
			here.second++;
		}
		else if (cmd[i] == 'J') { //남
			if (n == 1) sum = abs(here.first - pntX[0]) + abs(here.second - 1 - pntY[0]);
			else {
				while (l <= r) {
					mid = l + r >> 1;
					if (pntY[mid] < here.second) l = mid + 1;
					else r = mid - 1;
				}
				sum += (n - 2 * l);
			}
			here.second--;
		}
		else if (cmd[i] == 'I') { //동
			if (n == 1) sum = abs(here.first + 1 - pntX[0]) + abs(here.second - pntY[0]);
			else {
				while (l <= r) {
					mid = l + r >> 1;
					if (pntX[mid] <= here.first) l = mid + 1;
					else r = mid - 1;
				}
				sum += (2 * l - n);
			}
			here.first++;
		}
		else { //서
			if (n == 1) sum = abs(here.first - 1 - pntX[0]) + abs(here.second - pntY[0]);
			else {
				while (l <= r) {
					mid = l + r >> 1;
					if (pntX[mid] < here.first) l = mid + 1;
					else r = mid - 1;
				}
				sum += (n - 2 * l);
			}
			here.first--;
		}
		printf("%lld\n", sum);
	}
}*/

/*typedef long long ll; // 1637 날카로운 눈

int func(int a, int b, int c) { //a : start,  b : end,  c : interval
	if (a > b) return 0;
	return (b - a) / c + 1;
}

int main() {
	int i, n;
	ll arr[20000][3];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld%lld%lld", &arr[i][0], &arr[i][1], &arr[i][2]);
	}

	ll l = 1, r = ((ll)1 << 31) - 1, mid, ret=-1;
	while (l <= r) {
		mid = l + r >> 1;
		ll sum = 0;
		for (i = 0; i < n; i++) {
			sum += func(arr[i][0], min(mid, arr[i][1]), arr[i][2]);
		}
		if (sum && sum % 2 == 0) l = mid + 1;
		else {
			if(mid) ret = mid;
			r = mid - 1;
		}
	}
	if (ret==-1) printf("NOTHING");
	else {
		ll num = 0;
		for (i = 0; i < n; i++) {
			if (ret < arr[i][0] || ret > arr[i][1]) continue;
			if (!((ret - arr[i][0]) % arr[i][2])) num++;
		}
		printf("%lld %lld", ret, num);
	}
}*/

/*typedef struct Node { // 1068 트리
	vector<int> child;
}node;
int main() {
	int i, n, a, root, del;
	scanf("%d", &n);
	vector<node> ndVec(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == -1) root = i;
		else ndVec[a].child.push_back(i);
	}
	scanf("%d", &del);
	int ret = 0, here=root;
	queue<int> que;
	que.push(root);
	while (!que.empty()) {
		int here = que.front();
		que.pop();
		if (here == del) continue;
		vector<int>& child = ndVec[here].child;
		if (child.size() == 0) ret++;
		if (child.size() == 1 && child[0] == del) ret++;
		for (auto it : child)
			que.push(it);
	}
	printf("%d", ret);
}*/

/*typedef struct node { //1325 효율적인 해킹
	vector<int> child;
}Node;

int main() {
	int i, n, m, a, b;
	scanf("%d%d", &n, &m);
	vector<Node> vec(n + 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		vec[b].child.push_back(a);
	}

	vector<int> ret, visited(n+1);
	int maxa = -1;
	for (i = 1; i <= n; i++) {
		fill(visited.begin(), visited.end(), 0);
		int root = i;
		queue<int> que;
		que.push(root);
		int num = 0;
		visited[i] = 1;
		while (!que.empty()) {
			int here = que.front();
			que.pop();
			num++;
			for (auto it : vec[here].child) {
				if (visited[it]) continue;
				visited[it] = 1;
				que.push(it);
			}
		}

		if (num == maxa) {
			ret.push_back(i);
		}
		else if (num > maxa) {
			ret.clear();
			ret.push_back(i);
			maxa = num;
		}
	}
	sort(ret.begin(), ret.end());
	for (auto it : ret) {
		printf("%d ", it);
	}
}*/

/*int board[5][5], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //2210 숫자판 점프
vector<int> ret;
void dfs(int x, int y, int num, int mv) {
	if (mv == 5) {
		ret.push_back(num);
		return;
	}
	for (int i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX < 0 || nxtX > 4 || nxtY < 0 || nxtY>4) continue;
		dfs(nxtX, nxtY, 10 * num + board[nxtX][nxtY], mv + 1);
	}
}
int main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	for (i = 0; i < 25; i++) {
		int x=i/5, y=i%5;
		dfs(x, y, board[x][y], 0);
	}
	sort(ret.begin(), ret.end());
	ret.erase(unique(ret.begin(), ret.end()), ret.end());
	printf("%d", ret.size());
}*/

/*typedef struct Node {
	int parentNum;
	vector<int> parent, child;
	Node() : parentNum(0) {}
}node;

vector<int> visited;
vector<node> vec;
int dfs(int idx) {
	if (vec[idx].parent.size() == 0) return 0;
	if (vec[idx].parentNum) return vec[idx].parentNum;
	for (auto it : vec[idx].parent) {
		printf("idx : %d, it : %d\n", idx, it);
		vec[idx].parentNum+= 1 + dfs(it);
	}
	return vec[idx].parentNum;
}
int main() {
	int i, n, m, a, b, ret=0;
	scanf("%d%d", &n, &m);
	vec.resize(n + 1);
	visited.resize(n + 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		vec[a].child.push_back(b);
		vec[b].parent.push_back(a);
	}

	fill(visited.begin(), visited.end(), 0);
	for (i = 1; i <= n; i++) {
		dfs(i);
	}

	for (i = 1; i <= n; i++) {
		printf("%d\n", vec[i].parentNum);
	}
	fill(visited.begin(), visited.end(), 0);
	queue<int> que;
	for (i = 1; i <= n; i++) {
		if (vec[i].parentNum) continue;
		visited[i] = 1;
		que.push(i);
		while (!que.empty()) {
			int here = que.front();
			printf("here : %d\n", here);
			que.pop();
			if (vec[here].child.size() + vec[here].parentNum == n - 1) ret++;
			printf("sum : %d\n", vec[here].child.size() + vec[here].parentNum);
			for (auto it : vec[here].child) {
				if (visited[it]) continue;
				visited[it] = 1;
				que.push(it);
			}
		}
	}
	printf("%d", ret);
}*/

/*const int INF = 1e9; // 2458 키 순서
int arr[501][501];
int main() {
	int i, j, k, n, m, a, b;
	scanf("%d%d", &n, &m);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			arr[i][j] = INF;
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		arr[a][b] = 1;
	}


	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (arr[i][k] && arr[k][j] && arr[i][k] + arr[k][j] < arr[i][j]) arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}
	
	int ret = 0;
	for (i = 1; i <= n; i++) {
		vector<int> chk(n + 1, 0);
		for (j = 1; j <= n; j++) {
			if (arr[i][j]!=INF || arr[j][i]!=INF) chk[j] = 1;
		}
		sort(chk.begin(), chk.end());
		if (chk[2]) ret++;
	}
	printf("%d", ret);
}*/

/*vector<vector<int>> adj; //13023 ABCDE
vector<int> visited;

int dfs(int idx, int num) {
	if (num == 5) return 1;
	int ret = 0;
	for (auto it : adj[idx]) {
		if (visited[it]) continue;
		visited[it] = 1;
		ret += dfs(it, num + 1);
		visited[it] = 0;
	}
	return ret;
}

int main() {
	int i, n, m, a, b;
	scanf("%d%d", &n, &m);
	adj.resize(n);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	visited.resize(n);
	for (i = 0; i < n; i++) {
		fill(visited.begin(), visited.end(), 0);
		visited[i] = 1;
		int k = dfs(i, 1);
		if (k) {
			printf("1");
			return 0;
		}
	}
	printf("0");
}*/

/*int r, c, board[100][100], visited[100][100], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 1743 음식물 피하기

int dfs(int x, int y) {
	int i, num=1;
	for (i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX<0 || nxtX>r - 1 || nxtY<0 || nxtY>c - 1 || !board[nxtX][nxtY] || visited[nxtX][nxtY]) continue;
		visited[nxtX][nxtY] = 1;
		num += dfs(nxtX, nxtY);
	}
	return num;
}
int main() {
	int i, j, k, a, b;
	scanf("%d%d%d", &r, &c, &k);
	for (i = 0; i < k; i++) {
		scanf("%d%d", &a, &b);
		board[a-1][b-1] = 1;
	}

	int maxa = 0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			if (board[i][j] && !visited[i][j]) {
				visited[i][j] = 1;
				maxa = max(maxa, dfs(i, j));
			}
		}
	}
	printf("%d", maxa);
}*/

/*int n, m, paper[500][500], visited[500][500], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //1926 그림

int dfs(int x, int y) {
	int i, num=1;
	for (i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX<0 || nxtX>n - 1 || nxtY<0 || nxtY>m - 1 || !paper[nxtX][nxtY] || visited[nxtX][nxtY]) continue;
		visited[nxtX][nxtY] = 1;
		num += dfs(nxtX, nxtY);
	}
	return num;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &paper[i][j]);
		}
	}

	int idx = 0, maxa=0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (!visited[i][j] && paper[i][j]) {
				visited[i][j] = 1;
				maxa = max(maxa, dfs(i, j));
				idx++;
			}
		}
	}
	printf("%d\n%d\n", idx, maxa);
}*/

/*const int MAX = 1e8; //2023 신기한 소수
int n, arr[4] = { 2, 3, 5, 7 };

bool chkPrime(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (!(num % i)) return false;
	}
	return true;
}

void dfs(int cur, int num) {
	if (num == n) {
		printf("%d\n", cur);
		return;
	}
	for (int i = 0; i <= 9; i++) {
		int tmp = cur * 10 + i;
		if (chkPrime(tmp)) dfs(tmp, num + 1);
	}
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < 4; i++) {
		dfs(arr[i], 1);
	}
}*/

/*int n, proc[4], board[29][29], nxt[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} }; //1405 미친 로봇

double dfs(int x, int y, int num, double p) {
	if (num == n) return p;
	double ret = 0;
	for (int i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (board[nxtX][nxtY]) continue;
		board[nxtX][nxtY] = 1;
		ret += dfs(nxtX, nxtY, num + 1, p * ((double)proc[i] / 100));
		board[nxtX][nxtY] = 0;
	}
	return ret;
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < 4; i++) {
		scanf("%d", &proc[i]);
	}
	board[14][14] = 1;
	printf("%.9lf\n", dfs(14, 14, 0, 1));
}*/

/*char board[10000][500]; // 3109 빵집
int visited[10000][500];
int chk=0, r, c, nxt[3][2] = { {-1, 1}, {0, 1}, {1, 1} };
void dfs(int x, int y) {
	if (y == c - 1) {
		chk = 1;
		return;
	}
	int ret = 0;
	for (int i = 0; i < 3; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX<0 || nxtX > r - 1 || nxtY > c - 1 || visited[nxtX][nxtY] || board[nxtX][nxtY] == 'x') continue;
		visited[nxtX][nxtY] = 1;
		dfs(nxtX, nxtY);
		if (chk) break;
	}
}
int main() {
	int i, j;
	scanf("%d%d", &r, &c);
	for (i = 0; i < r; i++) {
		fgetc(stdin);
		for (j = 0; j < c; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	int ret = 0;
	for (i = 0; i < r; i++) {
		visited[i][0] = 1;
		chk = 0;
		dfs(i, 0);
		ret += chk;
	}

	printf("%d\n", ret);
}*/

/*typedef struct Point { // 10216 Count Circle Groups
	int x;
	int y;
	int range;
}point;
vector<int> parent, depth;

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
	u = find(u), v = find(v);
	if (u == v) return;
	if (depth[u] < depth[v]) swap(u, v);
	if (depth[u] == depth[v]) depth[u]++;
	parent[v] = u;
}

int dist(int a, int b, int c, int d) {
	return (a - b) * (a - b) + (c - d) * (c - d);
}
int main() {
	int i, j, t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		parent.resize(n + 1);
		depth.resize(n + 1);
		vector<point> vec(n+1);
		fill(parent.begin(), parent.end(), 0);
		fill(depth.begin(), depth.end(), 1);
		for (i = 1; i <= n; i++) {
			scanf("%d%d%d", &vec[i].x, &vec[i].y, &vec[i].range);
			parent[i] = i;
			depth[i] = 1;
		}

		for (i = 1; i <= n; i++) {
			for (j = i+1; j <= n; j++) {
				if (dist(vec[i].x, vec[j].x, vec[i].y, vec[j].y) <= (vec[i].range + vec[j].range) * (vec[i].range + vec[j].range)) merge(i, j);
			}
		}
		for (i = 1; i <= n; i++) {
			parent[i] = find(parent[i]);
		}
		sort(parent.begin(), parent.end());
		int num = 1, here = parent[1];
		for (i = 1; i <= n; i++) {
			if (here != parent[i]) {
				here = parent[i];
				num++;
			}
		}
		printf("%d\n", num);
	}
}*/

/*int n, board[50][50], chk[50][50];

void dfs(int people, int here, int num) {
	if (num == 2) return;
	for (int i = 0; i < n; i++) {
		if (i == people) continue;
		if (board[here][i]) {
			chk[people][i] = 1;
			dfs(people, i, num + 1);
		}
	}
}
int main() {
	int i, j;
	char c;
	scanf("%d", &n);
	fgetc(stdin);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%c", &c);
			if (c == 'N') board[i][j] = 0;
			else board[i][j] = 1;
		}
		fgetc(stdin);
	}

	for (i = 0; i < n; i++) {
		dfs(i, i, 0);
	}

	int maxa = 0;
	for (i = 0; i < n; i++) {
		int num = 0;
		for (j = 0; j < n; j++) {
			if (i == j) continue;
			if (chk[i][j]) num++;
		}
		if (maxa < num) maxa = num;
	}
	printf("%d", maxa);
}*/

/*const int INF = 1e9; // 2617 구슬 찾기
int adj[100][100];
int main() {
	int i, j, k, n, m, a, b;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			adj[i][j] = INF;
		}
	}

	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		adj[a][b] = 1;
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (adj[i][k] + adj[k][j] < adj[i][j]) adj[i][j] = adj[i][k] + adj[k][j];
			}
		}
	}

	int ret = 0;
	for (i = 1; i <= n; i++) {
		int rNum = 0, cNum=0;
		for (j = 1; j <= n; j++) {
			if (adj[i][j]!=INF) rNum++;
			if (adj[j][i]!=INF) cNum++;
		}
		if (rNum > n / 2 || cNum > n / 2) {
			ret++;
		}
	}
	printf("%d", ret);
}*/

/*int n, m, num, board[50][50], mirror[50][50], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 17141 연구소 2
vector<pair<int, int>> vec;
vector<vector<int>> k;

void dfs(int idx, int here, vector<int> v) {
	if (idx == m) {
		k.push_back(v);
		return;
	}
	for (int i = here + 1; i < num; i++) {
		v[idx] = i;
		dfs(idx + 1, i, v);
	}
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j] == 2) {
				vec.emplace_back(i, j);
				num++;
			}
		}
	}

	dfs(0, -1, vector<int>(m));
	int mina = 1e9;
	for (auto it : k) {
		queue<pair<pair<int, int>, int>> que;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				mirror[i][j] = board[i][j];
			}
		}
		for (auto i : it) {
			int x = vec[i].first, y = vec[i].second;
			mirror[x][y] = 3;
			que.emplace(make_pair(x, y), 0);
		}

		int tmp = -1;
		while (!que.empty()) {
			int hereX = que.front().first.first,
				hereY = que.front().first.second,
				sec = que.front().second;
			if (tmp < sec) tmp = sec;
			que.pop();
			for (i = 0; i < 4; i++) {
				int nxtX = hereX + nxt[i][0], nxtY = hereY + nxt[i][1];
				if (nxtX<0 || nxtX > n - 1 || nxtY<0 || nxtY>n - 1 || mirror[nxtX][nxtY]%2) continue;
				mirror[nxtX][nxtY] = 3;
				que.emplace(make_pair(nxtX, nxtY), sec + 1);
			}
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (!mirror[i][j]) {
					tmp = 1e9;
					break;
				}
			}
		}
		if (mina > tmp) mina = tmp;
	}
	printf("%d", mina == 1e9 ? -1 : mina);
}*/

/*int n, arr[2][1000]; // 4256 트리

void dfs(int start, int end, int dStart) {
	if (start > end || start>=n) return;
	if (start == end) {
		printf("%d ", arr[0][start]);
		return;
	}
	int i, obj = arr[0][start], nxtE = start + 1, pos;
	for (i = dStart; i < n; i++) {
		if (arr[1][i] == obj) {
			pos = i;
			break;
		}
	}

	for (i = dStart; i < pos; i++) {
		if (arr[1][i] == obj) break;
		nxtE++;
	}
	dfs(start + 1, nxtE-1, dStart);
	dfs(nxtE, end, pos+1);
	dfs(start, start, 0);
}
int main() {
	int i, j, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < 2; i++) {
			for (j = 0; j < n; j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		dfs(0, n - 1, 0);
		printf("\n");
	}
}*/

/*const int INF = 1e9; //1103 게임
int n, m, board[50][50], cache[50][50], visited[50][50], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

int dp(int x, int y) {
	if (x<0 || x>n - 1 || y<0 || y>m - 1 || board[x][y] == 0) return 0;
	int dist = board[x][y];
	int& ret = cache[x][y];
	if (visited[x][y]) return INF;
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0] * dist, nxtY = y + nxt[i][1] * dist;
		visited[x][y] = 1;
		ret = max(ret, 1+dp(nxtX, nxtY));
		visited[x][y] = 0;
	}
	return ret;
}
int main() {
	int i, j;
	char k;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &k);
			if (k == 'H') board[i][j] = 0;
			else board[i][j] = k - '0';
			cache[i][j] = -1;
		}
	}

	int ret=dp(0, 0);
	printf("%d", ret>=INF ? -1 : ret);
}*/

/*int n, board[10][10], price[10][10], pnt[5][2] = { {0, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //14620 꽃길
int toggle(int x, int y) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		board[x + pnt[i][0]][y + pnt[i][1]] = !board[x + pnt[i][0]][y + pnt[i][1]];
		sum += price[x + pnt[i][0]][y + pnt[i][1]];
	}
	return sum;
}

bool chk(int x, int y) {
	for (int i = 0; i < 5; i++) {
		if (board[x + pnt[i][0]][y + pnt[i][1]]) return false;
	}
	return true;
}

int dfs(int idx) {
	if (idx == 3) return 0;
	int i, j;
	int ret = 1e9;
	for (i = 1; i < n - 1; i++) {
		for(j = 1; j < n - 1; j++) {
			if (chk(i, j)) {
				int money=toggle(i, j);
				ret=min(ret, money + dfs(idx + 1));
				toggle(i, j);
			}
		}
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &price[i][j]);
		}
	}
	printf("%d", dfs(0));
}*/

/*int n, m, board[1000][1000], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 13565 침투

void dfs(int x, int y) {
	board[x][y] = 2;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx < 0 || nx > n - 1 || ny < 0 || ny > m - 1 || board[nx][ny]) continue;
		dfs(nx, ny);
	}
}
int main() {
	int i, j;
	char c;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &c);
			board[i][j] = c - '0';
		}
	}

	for (i = 0; i < m; i++) {
		if(!board[0][i]) dfs(0, i);
	}	

	int chk = 0;
	for (i = 0; i < m; i++) {
		if (board[n - 1][i]==2) {
			chk = 1;
			break;
		}
	}
	printf(chk ? "YES" : "NO");
}*/

/*int p=1, n, m, visited[50][50], cnt[50][50], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 16929 two dots
char board[50][50];

bool dfs(int x, int y, int count) {
	if (visited[x][y]) {
		if (count-cnt[x][y]>=3) {
			return true;
		}
		return false;
	}
	cnt[x][y] = count;
	visited[x][y] = p;
	bool ret = false;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx>n - 1 || ny<0 || ny> m - 1 || board[x][y]!=board[nx][ny]) continue;
		ret|=dfs(nx, ny, count+1);
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	bool ret = false;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < n; l++) {
					cnt[k][l] = 0;
				}
			}
			if (!visited[i][j]) {
				ret|=dfs(i, j, 0);
				p++;
			}
			if (ret) break;
		}
		if (ret) break;
	}

	printf(ret ? "Yes" : "No");
}*/

/*vector<vector<int>> adj; //15900 나무 탈출
int visited[500001];
int dfs(int here, int depth) {
	int ret = 0, chk=0;
	for (auto it : adj[here]) {
		if (visited[it]) continue;
		visited[it] = 1;
		ret += dfs(it, depth + 1);
		chk = 1;
	}
	if (!chk) return depth;
	return ret;
}
int main() {
	int i, n, a, b;
	scanf("%d", &n);
	adj.resize(n + 1);
	for (i = 1; i < n; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	visited[1] = 1;
	int ret = dfs(1, 0);
	printf(ret % 2 ? "Yes" : "No");
}*/

/*char board[100][100]; // 1303 전쟁 - 전투
int cnt=0, n, m, visited[100][100], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
void dfs(int x, int y, char obj) {
	visited[x][y] = 1;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx>n - 1 || ny<0 || ny>m - 1 || visited[nx][ny] || board[nx][ny]!=obj) continue;
		dfs(nx, ny, obj);
	}
}
int main() {
	int i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	int a = 0, b = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (!visited[i][j]) {
				cnt = 0;
				dfs(i, j, board[i][j]);
				printf("i : %d, j : %d, cnt : %d\n", i, j, cnt);
				if (board[i][j] == 'W') a += cnt * cnt;
				else b += cnt * cnt;
			}
		}
	}
	printf("%d %d", a, b);
}*/

/*int n, m, board[250][250], nxt[8][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {-1, -1}, {-1, 1}, {1, 1}, {1, -1} }; // 14716 현수막

void dfs(int x, int y) {
	board[x][y] = 0;
	for (int i = 0; i < 8; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx > m - 1 || ny<0 || ny > n - 1 || !board[nx][ny]) continue;
		dfs(nx, ny);
	}
}

int main() {
	int i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	int cnt = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (board[i][j] == 1) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}*/

/*const int INF = 1e8; //16988 Baaaaaaaaaduk2 (Easy)
int n, m, board[20][20], visited[20][20], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

int dfs2(int x, int y) {
	if (!board[x][y]) return INF;
	visited[x][y] = 1;
	int ret = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx< 0 || nx>n-1 || ny<0 || ny>m-1 || board[nx][ny]==1 || visited[nx][ny]) continue;
		ret += dfs2(nx, ny);
	}
	return ret;
}
int dfs(int idx, int cnt) {
	int i, j, x = idx / m, y = idx % m, ret = 0;
	if (cnt == 2) { //체크
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				visited[i][j] = 0;
			}
		}
		int tSum = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (visited[i][j]) continue;
				if (board[i][j] == 2) {
					int tmp = dfs2(i, j);
					if(tmp<1e8) tSum += tmp;
				}
			}
		}
		return tSum;
	}
	if (idx >= n * m) return 0;
	if (!board[x][y]) {
		board[x][y] = 1;
		ret = max(ret, dfs(idx + 1, cnt + 1));
		board[x][y] = 0;
	}
	ret=max(ret, dfs(idx + 1, cnt));
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	int ret = dfs(0, 0);
	printf("%d", ret);
}*/

/*int len, n, m, k, board[100][100], cache[100][100][81], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //2186 문자판
char word[81];

int dp(int x, int y, int idx) {
	int i, j;
	if (idx == len) return 1;
	int& ret = cache[x][y][idx];
	if (ret != -1) return ret;
	ret = 0;
	for (i = 0; i < 4; i++) {
		for (j = 1; j <= k; j++) {
			int nx = x + nxt[i][0]*j, ny = y + nxt[i][1]*j;
			if (nx<0 || nx>n - 1 || ny<0 || ny>m - 1) break;
			if (board[nx][ny] == word[idx]) ret += dp(nx, ny, idx + 1);
		}
	}
	return ret;
}
int main() {
	int i, j, p;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}
	scanf("%s", word);
	len = strlen(word);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			for (p = 0; p <= len; p++) {
				cache[i][j][p] = -1;
			}
		}
	}
	int ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (board[i][j] == word[0]) ret += dp(i, j, 1);
		}
	}
	printf("%d", ret);
}*/

/*vector<vector<int>> adj; // 16947 서울 지하철 2호선
int chk[3001], visited[3001], isCycle[3001], dist[3001];

int dfs(int idx, int prev) {
	if (visited[idx]) return idx;
	if (chk[idx]) return 0;
	visited[idx] = 1;
	chk[idx] = 1;
	int ret = 0;
	for (auto it : adj[idx]) {
		if (it == prev) continue;
		ret += dfs(it, idx);
	}
	visited[idx] = 0;
	if (ret > 0) {
		isCycle[idx] = 1;
		if (ret == idx) ret = 0;
	}
	return ret;
}

int dfs2(int idx, int prev) {
	if (isCycle[idx]) return 0;
	int ret = 1e9;
	chk[idx] = 1;
	for (auto it : adj[idx]) {
		if (it == prev || chk[it]) continue;
		ret = min(ret, 1 + dfs2(it, idx));
	}
	chk[idx] = 0;
	return dist[idx] = ret;
}

int main() {
	int i, j, n, a, b;
	scanf("%d", &n);
	adj.resize(n + 1);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	dfs(1, 0);

	for (i = 1; i <= n; i++) {
		if (isCycle[i]) printf("0 ");
		else if (!dist[i] || dist[i] == 1e9) {
			fill(chk, chk + n + 1, 0);
			int k = dfs2(i, 0);
			printf("%d ", k);
		}
		else printf("%d ", dist[i]);
	}
}*/

/*vector<vector<int>> adj; // 15681 트리와 쿼리
vector<int> sub;

int dfs(int here, int prev) {
	sub[here] = 0;
	for (auto it : adj[here]) {
		if (it == prev) continue;
		sub[here] += 1 + dfs(it, here);
	}
	return sub[here];
}

int main() {
	int i, n, r, q, a, b;
	scanf("%d%d%d", &n, &r, &q);
	adj.resize(n + 1);
	sub.resize(n + 1);
	for (i = 0; i < n-1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	dfs(r, -1);
	for (i = 0; i < q; i++) {
		scanf("%d", &a);
		printf("%d\n", sub[a] + 1);
	}
}*/

/*int n, adj[16][16], visited[16], mem[16][10][(1<<15) - 1]; // 1029 그림 교환

int dp(int idx, int border, int cache) {
	int &ret = mem[idx][border][cache];
	if (ret) return ret;
	ret = 1;
	for (int i = 1; i <= n; i++) {
		if (visited[i] || cache & (1<<i-1)) continue;
		if (adj[idx][i] >= border) ret = max(ret, 1 + dp(i, adj[idx][i], cache | (1<<i-1)));
	}
	return ret;
}

int main() {
	int i, j;
	char c;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		fgetc(stdin);
		for (j = 1; j <= n; j++) {
			scanf("%c", &c);
			adj[i][j] = c - '0';
		}
	}

	printf("%d", dp(1, 0, 1));
}*/

/*vector<vector<int>> adj; // 4803 트리
vector<int> chk, visited;

int dfs(int here, int prev) {
	printf("here : %d, prev : %d\n", here, prev);
	if (visited[here]) return 1;
	if (chk[here]) return 0;
	visited[here] = 1;
	chk[here] = 1;
	int ret = 0;
	for (auto it : adj[here]) {
		printf("it : %d\n", it);
		if (it == prev) continue;
		ret += dfs(it, here);
	}
	visited[here] = 0;
	return ret;
}

int main() {
	int i, n, m, a, b, idx = 1;
	while (true) {
		scanf("%d%d", &n, &m);
		if (n == 0) break;
		adj.resize(n + 1);
		chk.resize(n + 1);
		visited.resize(n + 1);
		fill(chk.begin(), chk.end(), 0);
		fill(visited.begin(), visited.end(), 0);
		for (i = 1; i <= n; i++) {
			adj[i].clear();
		}
		for (i = 0; i < m; i++) {
			scanf("%d%d", &a, &b);
			adj[a].push_back(b);
			adj[b].push_back(a);
		}

		int tmp, ret = 0;
		for (i = 1; i <= n; i++) {
			if (!chk[i]) {
				tmp = dfs(i, -1);
				if (!tmp) ret++;
			}
		}
		printf("Case %d: ", idx++);
		if (!ret) printf("No trees.\n");
		else if (ret == 1) printf("There is one tree.\n");
		else printf("A forest of %d trees.\n", ret);
	}
}*/

/*char board[50][50]; // 2842 집배원 한상덕
int ret=1e8, num = 0, n, a, b, height[50][50], nxt[8][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
vector<int> vec;

int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < n; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'P') {
				a = i, b = j;
			}
			else if (board[i][j] == 'K') {
				num++;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &height[i][j]);
			vec.push_back(height[i][j]);
		}
	}

	sort(vec.begin(), vec.end());

	int left = 0, right = 0;
	while (left <= right && left>=0 && right<n*n) {
		queue<pair<int, int>> que;
		vector<vector<int>> visited(n);
		for (i = 0; i < n; i++) {
			visited[i] = vector<int>(n, 0);
		}
		if (vec[left] <= height[a][b] && height[a][b] <= vec[right]) {
			que.emplace(a, b);
		}

		int kCnt = 0;
		while (!que.empty()) {
			int hx = que.front().first, hy = que.front().second;
			que.pop();
			if (visited[hx][hy]) continue;
			if (board[hx][hy] == 'K') kCnt++;
			visited[hx][hy] = 1;
			for (i = 0; i < 8; i++) {
				int nx = hx + nxt[i][0], ny = hy + nxt[i][1];
				if (nx<0 || nx>n - 1 || ny<0 || ny>n - 1 || vec[left]>height[nx][ny] || vec[right]<height[nx][ny]) continue;
				que.emplace(nx, ny);
			}
		}
		if (kCnt == num) {
			ret = min(ret, vec[right] - vec[left]);
			left++;
		}
		else right++;
	}
	printf("%d", ret);
}*/

/*vector<vector<int>> vec; // 16964 DFS 스페셜 저지
vector<int> input;
int n, idx = 0;

void dfs(int k) {
	if (k != input[idx]) return;
	idx++;
	if (!vec[k].size()) return;
	while (true) {
		if (idx >= n) return;
		auto it = find(vec[k].begin(), vec[k].end(), input[idx]);
		if (it == vec[k].end()) break;
		dfs(*it);
	}
}
int main() {
	int i, a, b;
	scanf("%d", &n);
	vec.resize(n + 1);
	for (i = 0; i < n-1; i++) {
		scanf("%d%d", &a, &b);
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		input.push_back(a);
	}
	dfs(1);
	printf(idx == n ? "1" : "0");
}*/

/*vector<vector<int>> adj; // 14267 내리 칭찬
vector<long long> score, ret;

void dfs(int idx, int val) {
	ret[idx] += val;
	for (auto it : adj[idx]) {
		dfs(it, score[it]+val);
	}
}

int main() {
	int i, n, m, a, b;
	scanf("%d%d", &n, &m);
	adj.resize(n + 1);
	ret.resize(n + 1);
	score.resize(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a);
		if (a != -1) adj[a].push_back(i);
		ret[i] = 0;
		score[i] = 0;
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		score[a] += b;
	}

	dfs(1, 0);
	for (i = 1; i <= n; i++) {
		printf("%lld ", ret[i]);
	}
}*/

/*int idx=1, sz, n, m, board[1000][1000], siz[500001], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //16932 모양 만들기

void dfs(int x, int y) {
	board[x][y] = idx;
	sz++;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx > n - 1 || ny<0 || ny>m - 1 || board[nx][ny] != -1) continue;
		dfs(nx, ny);
	}
}

int main() {
	int i, j, k;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j]) board[i][j] = -1;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (board[i][j]==-1) {
				sz = 0;
				dfs(i, j);
				siz[idx] = sz;
				idx++;
			}
		}
	}

	int ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (!board[i][j]) {
				vector<int> vec;
				int sum = 0;
				for (k = 0; k < 4; k++) {
					int nx = i + nxt[k][0], ny = j + nxt[k][1];
					if (board[nx][ny] && find(vec.begin(), vec.end(), board[nx][ny])==vec.end()) {
						sum += siz[board[nx][ny]];
						vec.push_back(board[nx][ny]);
					}
				}
				if (ret < sum + 1) ret = sum + 1;
			}
		}
	}
	printf("%d", ret);
}*/

/*typedef struct Node { //16437 양 구출 작전
	int species;
	long long num;
	int parent;
	int hs;
	vector<int> child;
	Node() : species(0), num(0), parent(0), hs(0) {}
	Node(int s, int n, int p=-1) : species(s), num(n), parent(p), hs(0) {}
}node;

vector<node> vec;
int main() {
	int i, n, a, b;
	char c;
	scanf("%d", &n);
	vec.resize(n + 1);
	for (i = 2; i <= n; i++) {
		fgetc(stdin);
		scanf("%c%d%d", &c, &a, &b);
		vec[i].species = c == 'S' ? 0 : 1;
		vec[i].num = c=='S' ? a : -a;
		vec[i].parent = b;
		vec[b].child.push_back(i);
		vec[b].hs++;
	}

	queue<int> que;
	for (i = 1; i <= n; i++) {
		if (!vec[i].hs) {
			que.push(i);
		}
	}
	while (!que.empty()) {
		int here = que.front(), parent=vec[here].parent;
		long long num = vec[here].num, *pNum = &(vec[parent].num);
		que.pop();
		if (num>=0) *pNum += num;
		vec[parent].hs--;
		if (vec[parent].hs == 0) que.push(parent);
	}

	printf("%lld", vec[1].num);
}*/

/*int n, m, visited[500][500]; //17090 미로 탈출하기
char board[500][500];

int dfs(int x, int y) {
	if (x<0 || x>n - 1 || y<0 || y>m - 1) return 1;
	if (visited[x][y] != -1) return visited[x][y];
	int& ret = visited[x][y];
	ret = 0;
	int nxtX=x, nxtY=y;
	switch (board[x][y]) {
	case 'U':
		nxtX--;
		break;
	case 'D':
		nxtX++;
		break;
	case 'R':
		nxtY++;
		break;
	case 'L':
		nxtY--;
		break;
	}
	ret = dfs(nxtX, nxtY);
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
			visited[i][j] = -1;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (visited[i][j] == -1) dfs(i, j);
		}
	}

	int ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (visited[i][j]) ret++;
		}
	}
	printf("%d", ret);
}*/

/*int n, board[1001][1001]; //1199 오일러 회로

void dfs(int idx) {
	for (int i = 1; i <= n; i++) {
		if (board[idx][i]) {
			board[idx][i]--;
			board[i][idx]--;
			dfs(i);
		}
	}
	printf("%d ", idx);
}
int main() {
	int i, j, chk=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int tmp = 0;
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
			tmp += board[i][j];
		}
		if (tmp % 2) chk = 1;
	}
	if (chk) {
		printf("-1");
		return 0;
	}
	dfs(1);
}*/

/*int ret, n, board[100][100], nxt[6][2] = { {-1, 0}, {-1, 1}, {1, 1}, {1, 0},  {1, -1}, {-1, -1}}; // 17370 육각형 속의 개미

void dfs(int x, int y, int num, int prev) {
	if (board[x][y] == 1) {
		if (num == n) ret++;
		return;
	}
	if (num == n) return;
	int right = (prev + 1) % 6, left = (prev + 5) % 6;
	board[x][y] = 1;
	dfs(x + nxt[right][0], y + nxt[right][1], num + 1, right);
	dfs(x + nxt[left][0], y + nxt[left][1], num + 1, left);
	board[x][y] = 0;
}
int main() {
	scanf("%d", &n);
	board[50][50] = 1;
	dfs(49, 50, 0, 0);
	printf("%d", ret);
}*/

/*int n, m, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 11123 양 한마리... 양 두마리...(DFS)
char board[100][100];
void dfs(int x, int y) {
	board[x][y] = '.';
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx>n - 1 || ny<0 || ny>m - 1 || board[nx][ny] == '.') continue;
		dfs(nx, ny);
	}
}
int main() {
	int t;
	queue<pair<int, int>> que;
	scanf("%d", &t);
	while (t--) {
		int i, j;
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++) {
			fgetc(stdin);
			for (j = 0; j < m; j++) {
				scanf("%c", &board[i][j]);
			}
		}

		int ret = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (board[i][j] == '#') {
					dfs(i, j);
					ret++;
				}
			}
		}
		printf("%d\n", ret);
	}
}*/

/*char board[100][100]; //1123 양 한마리... 양 두마리... (BFS)
int main() {
	int t, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
	queue<pair<int, int>> que;
	scanf("%d", &t);
	while (t--) {
		int i, j, n, m;
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++) {
			fgetc(stdin);
			for (j = 0; j < m; j++) {
				scanf("%c", &board[i][j]);
			}
		}

		int ret = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (board[i][j] == '#') {
					ret++;
					que.emplace(i, j);
					while (!que.empty()) {
						int x = que.front().first, y = que.front().second;
						que.pop();
						if (board[x][y] == '.') continue;
						board[x][y] = '.';
						for (int k = 0; k < 4; k++) {
							int nx = x + nxt[k][0], ny = y + nxt[k][1];
							if (nx<0 || nx>n - 1 || ny<0 || ny>m - 1) continue;
							que.emplace(nx, ny);
						}
					}
				}
			}
		}
		printf("%d\n", ret);
	}
}*/

/*int n, w, num; //17073 나무 위의 빗물
double sum;
vector<vector<int>> adj;

void dfs(int idx, int parent, double proc) {
	if (adj[idx].size()==1) {
		num++;
		sum += proc * (double)w;
		return;
	}
	int sz = adj[idx].size();
	for (auto it : adj[idx]) {
		if (it == parent) continue;
		dfs(it, idx, proc / ((double)sz-1));
	}
}
int main() {
	int i, u, v;
	scanf("%d%d", &n, &w);
	adj.resize(n + 1);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	adj[1].push_back(-1);
	dfs(1, -1, (double)1);
	printf("%lf", sum / num);
}*/

/*int test(int k) { // 14715 전생했더니 슬라임 연구자였던 건에 대하여 (Easy)
	int div = 2, ret = 0, init = k;
	while (div <= init/2) {
		while (!(k % div)) {
			k /= div;
			ret++;
		}
		div++;
	}
	return ret;
}

int main() {
	int k;
	scanf("%d", &k);
	int i = 1, r = 0, t = test(k);
	while (i < t) {
		i *= 2;
		r++;
	}
	printf("%d", r);
}*/

/*int r, c, board[500][500], dir[500][500], ret[500][500], cache[500][500], nxt[8][2] = { {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0 ,-1}, {-1, -1} }; // 16957 체스판 위의 공
int dp(int x, int y) {
	if (dir[x][y] == -1) {
		ret[x][y]++;
		return x*c+y;
	}
	int& re = cache[x][y];
	if (re != -1) {
		ret[re / c][re % c]++;
		return re;
	}
	re=dp(x + nxt[dir[x][y]][0], y + nxt[dir[x][y]][1]);
	return re;
}
int main() {
	int i, j, k;
	scanf("%d%d", &r, &c);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			int cur=board[i][j], d = -1;
			for (k = 0; k < 8; k++) {
				int nx = i + nxt[k][0], ny = j + nxt[k][1];
				if (nx<0 || nx>r - 1 || ny<0 || ny>c - 1) continue;
				if (cur > board[nx][ny]) {
					d = k;
					cur = board[nx][ny];
				}
			}
			dir[i][j] = d;
			cache[i][j] = -1;
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			dp(i, j);
		}
	}

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%d ", ret[i][j]);
		}
		printf("\n");
	}
}*/

/*int n, m, nxt[8][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1} }; // 4677 Old Deposits
char board[100][100];

void dfs(int x, int y) {
	board[x][y] = '*';
	for (int i = 0; i < 8; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx>m - 1 || ny<0 || ny>n - 1 || board[nx][ny] == '*') continue;
		dfs(nx, ny);
	}
}

int main() {
	int i, j;
	while (true) {
		scanf("%d%d", &m, &n);
		if (m == 0) break;
		for (i = 0; i < m; i++) {
			fgetc(stdin);
			for (j = 0; j < n; j++) {
				scanf("%c", &board[i][j]);
			}
		}

		int ret = 0;
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				if (board[i][j] == '@') {
					dfs(i, j);
					ret++;
				}
			}
		}
		printf("%d\n", ret);
	}
}*/

/*char str[1001]; // 15886 내 선물을 받아줘 2
int chk[1001], idx = 1, ret=0;

void dfs(int i) {
	if (chk[i] == idx) {
		ret++;
		return;
	}
	else if (chk[i]) return;
	chk[i] = idx;
	if (str[i] == 'W') dfs(i - 1);
	else dfs(i + 1);
}
int main() {
	int i, n;
	scanf("%d", &n);
	scanf("%s", str);
	for (i = 0; i < n; i++) {
		if (!chk[i]) {
			dfs(i);
			idx++;
		}
	}
	printf("%d", ret);
}*/

/*int n, ret = 0, board[64][64]; // 16174 점프왕 쩰리(Large)
void dfs(int x, int y) {
	if (x<0 || x>n - 1 || y<0 || y>n - 1 || board[x][y] == -2) return;
	if (board[x][y] == -1) {
		ret++;
		return;
	}
	int jmp = board[x][y];
	board[x][y] = -2;
	dfs(x - jmp, y);
	dfs(x + jmp, y);
	dfs(x, y - jmp);
	dfs(x, y + jmp);
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	dfs(0, 0);
	printf(ret ? "HaruHaru" : "Hing");
}*/

/*vector<vector<int>> vec, rev; //17616 등수 찾기
vector<int> visited;

int dfs(int here, int mode) {
	visited[here] = 1;
	int ret = 1;
	for (auto it : (mode ? vec[here] : rev[here])) {
		if (visited[it]) continue;
		ret += dfs(it, mode);
	}
	return ret;
}
int main() {
	int i, n, m, x, a, b, lo=0, hi;
	scanf("%d%d%d", &n, &m, &x);
	hi = n + 1;
	vec.resize(n + 1);
	rev.resize(n + 1);
	visited.resize(n + 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		vec[a].push_back(b);
		rev[b].push_back(a);
	}
	fill(visited.begin(), visited.end(), 0);
	lo+=dfs(x, 0);
	fill(visited.begin(), visited.end(), 0);
	hi-=dfs(x, 1);
	printf("%d %d", lo, hi);
}*/

/*vector<vector<int>> vec; //16432 떡장수와 호랑이
vector<int> retV;
int n, m, ret=0, visited[1000][9];
void dfs(int idx, int here) {
	if (idx == n) {
		ret = 1;
		return;
	}
	if (visited[idx][here]) return;
	visited[idx][here] = 1;
	for (auto it : vec[idx]) {
		if (it == here) continue;
		dfs(idx + 1, it);
		if (ret) {
			retV.push_back(it);
			return;
		}
	}
}
int main() {
	int i, j, a;
	scanf("%d", &n);
	vec.resize(n + 1);
	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		for (j = 0; j < m; j++) {
			scanf("%d", &a);
			vec[i].push_back(a);
		}
	}
		
	dfs(0, -1);
	if (!ret) {
		printf("-1");
		return 0;
	}
	reverse(retV.begin(), retV.end());
	for (auto it : retV) {
		printf("%d\n", it);
	}
}*/

/*int n, idx, board[100][10], visited[100][10]; // 16768 Mooyo Mooyo

int dfs(int x, int y, int val) {
	if (x<0 || x>n-1 || y<0 || y>9 || visited[x][y] || board[x][y]!=val) return 0;
	visited[x][y] = idx;
	int ret = 1;
	ret += dfs(x + 1, y, val) + dfs(x - 1, y, val) + dfs(x, y + 1, val) + dfs(x, y - 1, val);
	return ret;
}

void erase(int x, int y, int val) {
	if (x<0 || x>n - 1 || y < 0 || y>9 || board[x][y] != val) return;
	board[x][y] = 0;
	erase(x + 1, y, val); 
	erase(x - 1, y, val);
	erase(x, y + 1, val);
	erase(x, y - 1, val);
}

int main() {
	int i, j, k;
	char c;
	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < 10; j++) {
			scanf("%c", &c);
			board[i][j] = c - '0';
		}
	}

	while (true) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < 10; j++) {
				visited[i][j] = 0;
			}
		}

		idx = 1;
		for (i = 0; i < n; i++) {
			for (j = 0; j < 10; j++) {
				if (board[i][j] && !visited[i][j]) {
					int num = dfs(i, j, board[i][j]);
					if (num >= k) {
						erase(i, j, board[i][j]);
						idx++;
					}
				}
			}
		}

		if (idx == 1) break;
		for (i = 0; i < 10; i++) {
			int there = n - 1;
			for (j = n - 1; j >= 0; j--) {
				int here = j;
				while (here>=0 && board[here][i] == 0) here--;
				if (here == j) {
					there--;
					continue;
				}
				if (here == -1) break;
				while (board[here][i] != 0) {
					board[there--][i] = board[here][i];
					board[here--][i] = 0;
				}
				j = here + 1;
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < 10; j++) {
			printf("%d", board[i][j]);
		}
		printf("\n");
	}
}*/

/*int ret=0, idx=1, n, m, visited[1000][1000]; //15559 내 선물을 받아줘
char board[1000][1000];

void dfs(int x, int y) {
	if (visited[x][y] == idx) {
		ret++;
		return;
	}
	else if(visited[x][y]) return;
	visited[x][y] = idx;
	switch (board[x][y]) {
	case 'N':
		dfs(x - 1, y);
		break;
	case 'S':
		dfs(x + 1, y);
		break;
	case 'W':
		dfs(x, y - 1);
		break;
	case 'E':
		dfs(x, y + 1);
		break;
	}
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (!visited[i][j]) {
				dfs(i, j);
				idx++;
			}
		}
	}
	printf("%d", ret);
}*/

/*const int sz = 4001; 2233 사과나무 (LCA)
char arr[sz];
int chk=0, idx=0, rot=0, n, zero[sz], one[sz], parent[2001], level[2001];
vector<int> ret;

int main() {
	int i, p=0, x, y;
	stack<char> stk;
	scanf("%d", &n);
	fgetc(stdin);
	for (i = 1; i <= 2 * n; i++) {
		scanf("%c", &arr[i]);
	}

	scanf("%d%d", &x, &y);
	stk.push(p++);
	for (i = 1; i <= 2 * n; i++) {
		int t = stk.top();
		if (arr[i] == '0') {//내려가기
			parent[p] = t;
			level[p] = level[t] + 1;
			zero[i] = p;
			stk.push(p++);
		}
		else {
			stk.pop();
			one[i] = t;
		}
	}
	if (arr[x] == '0') x = zero[x];
	else x = one[x];
	if (arr[y] == '0') y = zero[y];
	else y = one[y];
	if (level[x] > level[y]) {
		while (level[x] > level[y]) x = parent[x];
	}

	if (level[x] < level[y]) {
		while (level[x] < level[y]) y = parent[y];
	}

	while (x != y) {
		x = parent[x];
		y = parent[y];
	}

	for (i = 1; i <= 2 * n; i++) {
		if (zero[i] == x) {
			printf("%d ", i);
			break;
		}
	}

	for (i = 1; i <= 2 * n; i++) {
		if (one[i] == y) {
			printf("%d", i);
			break;
		}
	}
}*/

/*int n, m; // 14615 Defend the CTP!!!
vector<vector<int>> vec, rev;
vector<int> oneToAny, anyToHole;
void dfs(int here) {
	if (oneToAny[here]) return;
	oneToAny[here] = 1;
	for (auto it : vec[here]) {
		dfs(it);
	}
}

void dfs2(int here) {
	if (anyToHole[here]) return;
	anyToHole[here] = 1;
	for (auto it : rev[here]) {
		dfs2(it);
	}
}
int main() {
	int i, a, b, t;
	scanf("%d%d", &n, &m);
	vec.resize(n + 1);
	rev.resize(n + 1);
	oneToAny.resize(n + 1);
	anyToHole.resize(n + 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		vec[a].push_back(b);
		rev[b].push_back(a);
	}
	scanf("%d", &t);
	fill(oneToAny.begin(), oneToAny.end(), 0);
	fill(anyToHole.begin(), anyToHole.end(), 0);
	dfs(1);
	dfs2(n);
	for (i = 0; i < t; i++) {
		scanf("%d", &a);
		int can = oneToAny[a] + anyToHole[a];
		if (can==2) printf("Defend the CTP\n");
		else printf("Destroyed the CTP\n");
	}
}*/

/*int n; // 17199 Milk Factory
int arr[101][101];
int visited[101];

void dfs(int idx) {
	visited[idx] = 1;
	for (int i = 1; i <= n; i++) {
		if (i == idx) continue;
		if (arr[idx][i]) dfs(i);
	}
}
int main() {
	int i, j, a, b;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &a, &b);
		arr[b][a] = 1;
	}
	for (i = 1; i <= n; i++) {
		fill(visited, visited + n + 1, 0);
		dfs(i);
		int chk = 0;
		for (j = 1; j <= n; j++) {
			if (!visited[j]) {
				chk = 1;
				break;
			}
		}
		if (!chk) {
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
}*/

/*char board[100][100]; //6186 Best Grass
int n, m;

void dfs(int x, int y) {
	if (x<0 || x>n - 1 || y<0 || y>m - 1 || board[x][y] == '.') return;
	board[x][y] = '.';
	dfs(x - 1, y);
	dfs(x + 1, y);
	dfs(x, y - 1);
	dfs(x, y + 1);
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	int ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (board[i][j] == '#') {
				dfs(i, j);
				ret++;
			}
		}
	}
	printf("%d", ret);
}*/

/*int nxt[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} }; //3709 레이저빔은 어디로
int main() {
	int i, j, t;
	scanf("%d", &t);
	while (t--) {
		int a, b;
		int n, r;
		scanf("%d%d", &n, &r);
		bool board[52][52], visited[52][52][4];
		for (i = 0; i <= n + 1; i++) {
			for(j=0; j<=n+1; j++){
				board[i][j] = false;
				for (int k = 0; k < 4; k++) {
					visited[i][j][k] = false;
				}
			}
		}
		for (i = 0; i < r; i++) {
			scanf("%d%d", &a, &b);
			board[a][b] = true;
		}
		scanf("%d%d", &a, &b);
		int hereX = a, hereY = b, dir=0;
		if (hereX == 0) dir = 2;
		else if (hereX == n+1) dir = 0;
		else if (hereY == 0) dir = 1;
		else dir = 3;
		while (true) {
			hereX += nxt[dir][0];
			hereY += nxt[dir][1];
			if (board[hereX][hereY] && visited[hereX][hereY][dir]) {
				printf("0 0\n");
				break;
			}
			if(board[hereX][hereY]) visited[hereX][hereY][dir] = true;
			if (hereX == 0 || hereX == n + 1 || hereY == 0 || hereY == n + 1) {
				printf("%d %d\n", hereX, hereY);
				break;
			}
			if (board[hereX][hereY]) dir = (dir + 1) % 4;
		}
	}
}*/

/*typedef struct ice { // 17025 Icy Perimeter
	int area;
	int perimeter;
}Ice;
char board[1000][1000];
int visited[1000][1000], n, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

Ice dfs(int x, int y) {
	visited[x][y] = 1;
	int i, p = 4, stk=0;
	for (i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx>=0 && nx<n && ny>=0 && ny<n && board[nx][ny] == '#' && visited[nx][ny]) stk++;
	}
	p -= stk * 2;
	Ice ret = { 1, p };
	for (i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx>n - 1 || ny<0 || ny>n - 1 || visited[nx][ny] || board[nx][ny]=='.') continue;
		Ice tmp = dfs(nx, ny);
		ret = { ret.area + tmp.area, ret.perimeter + tmp.perimeter };
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < n; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	Ice ret = { 0, 0 };
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (!visited[i][j] && board[i][j]=='#') {
				Ice c = dfs(i, j);
				if (ret.area < c.area || (ret.area == c.area && ret.perimeter > c.perimeter)) ret = c;
			}
		}
	}
	printf("%d %d", ret.area, ret.perimeter);
}*/

/*bool visited[3][3]; //10429 QUENTO
char board[3][3];
int n, m, chk = 0, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

vector<pair<int, int>> ret;
void dfs(int x, int y, int idx, int val, char oper) {
	if (idx == (m-1) * 2) {
		if (val == n) {
			chk = 1;
			ret.emplace_back(x, y);
		}
		return;
	}
	visited[x][y] = true;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1], tmp=val;
		if (nx < 0 || nx >= 3 || ny < 0 || ny >= 3 || visited[nx][ny]) continue;
		if (idx % 2) {
			if (oper == '+') tmp += board[nx][ny]-'0';
			else tmp -= board[nx][ny]-'0';
		}
		else oper = board[nx][ny];
		dfs(nx, ny, idx + 1, tmp, oper);
		if (chk) {
			ret.emplace_back(x, y);
			return;
		}
	}
	visited[x][y] = false;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < 3; i++) {
		scanf("%s", board[i]);
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if ((i + j) % 2 == 0) {
				dfs(i, j, 0, board[i][j]-'0', ' ');
				if (ret.size()) {
					printf("1\n");
					reverse(ret.begin(), ret.end());
					for (auto it : ret) {
						printf("%d %d\n", it.first, it.second);
					}
					return 0;
				}
			}
		}
	}
	printf("0");
}*/

/*typedef long long ll; // 2132 나무 위의 벌레
const ll INF = (ll)1 << 32;
int u=1, v, r, n, fruit[10001];
vector<vector<int>> adj;
vector<ll> dist;

void dfs(int idx, int d) {
	dist[idx] = d;
	if (d > r || (d == r && idx < u)) {
		u = idx;
		r = d;
	}
	for (auto it : adj[idx]) {
		if (dist[it] != INF) continue;
		dfs(it, d + fruit[it]);
	}
}

int main() {
	int i, a, b;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &fruit[i]);
	}
	adj.resize(n + 1);
	dist.resize(n + 1);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	fill(dist.begin(), dist.end(), INF);
	dfs(1, 0);
	v = u;
	r = 0;
	fill(dist.begin(), dist.end(), INF);
	dfs(u, 0);
	printf("%d %d", fruit[v] + (int)dist[u], u < v ? u : v);
}*/

/*int r, c, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 15240 Paint bucket
char board[1000][1000];

void dfs(int x, int y, char chg, char val) {
	board[x][y] = val;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx<0 || nx>r - 1 || ny<0 || ny>c - 1 || board[nx][ny]!=chg) continue;
		dfs(nx, ny, chg, val);
	}
}
int main() {
	int i, j, x, y, z;
	scanf("%d%d", &r, &c);
	for (i = 0; i < r; i++) {
		fgetc(stdin);
		for (j = 0; j < c; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	scanf("%d%d%d", &x, &y, &z);
	dfs(x, y, board[x][y], z + '0');	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}*/

/*int n, m; //15092 Sheba's Amoebas
char board[100][100];

void dfs(int x, int y) {
	if (x<0 || x>n - 1 || y<0 || y>m - 1 || board[x][y] == '.') return;
	board[x][y] = '.';
	dfs(x - 1, y);
	dfs(x + 1, y);
	dfs(x, y - 1);
	dfs(x, y + 1);
	dfs(x - 1, y - 1);
	dfs(x - 1, y + 1);
	dfs(x + 1, y - 1);
	dfs(x + 1, y + 1);
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	int ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (board[i][j] == '#') {
				dfs(i, j);
				ret++;
			}
		}
	}
	printf("%d", ret);
}*/

/*const int MOD = 1e9 + 7; //10748 Cow Hopscotch

int r, c, k, board[100][100], cache[100][100];

int dp(int x, int y, int val) {
	if (x == r - 1 && y == c - 1) return 1;
	int i, j, & ret = cache[x][y];
	if (ret != -1) return ret;
	ret = 0;
	for (i = x+1; i < r; i++) {
		for (j = y+1; j < c; j++) {
			if (board[i][j] == val) continue;
			ret+=dp(i, j, board[i][j]);
			ret %= MOD;
		}
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d%d", &r, &c, &k);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cache[i][j] = -1;
			scanf("%d", &board[i][j]);
		}
	}
	printf("%d", dp(0, 0, board[0][0]));
}*/

/*int chk=0, num[3][2], ret[3][2]; // 2599 짝 정하기
int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < 3; i++) {
		scanf("%d%d", &num[i][0], &num[i][1]);
	}

	for (i = 0; i <= num[0][0]; i++) {
		int ax = i;
		int ay = num[0][0] - i;
		int bx = n - ax - num[2][0] - num[2][1];
		int by = num[1][0] - bx;
		int cx = num[0][1] - bx;
		int cy = num[2][0] - cx;
		if (ax >= 0 && ay >= 0 && bx >= 0 && by >= 0 && cx >= 0 && cy >= 0) {
			printf("1\n");
			printf("%d %d\n", ax, ay);
			printf("%d %d\n", bx, by);
			printf("%d %d\n", cx, cy);
			return 0;
		}
	}
	printf("0");
}*/

/*int chk, n, m, color[1000001]; //	15511 League of Overwatch at Moloco (Hard)
vector<vector<int>> adj;
void dfs(int idx, int c) {
	if (chk) return;
	if (color[idx]) {
		if(color[idx]!=c) chk = 1;
		return;
	}
	color[idx] = c;
	for (auto it : adj[idx]) {
		dfs(it, c%2 + 1);
	}
}
int main() {
	int i, a, b, st = -1;
	scanf("%d%d", &n, &m);
	adj.resize(n + 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		if (i == 0) st = a;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	
	dfs(st, 1);
	if (chk) printf("IMPOSSIBLE");
	else printf("POSSIBLE");
}*/

/*const int INF = 1e9; //14657 준오는 최종인재야!!
int u, v, num, maxa, n, t;
vector<vector<pair<int, int>>> adj;
vector<int> dist;
void dfs(int idx, int n, int val) {
	if (num < n || (num==n && val < maxa)) {
		maxa = val;
		num = n;
		u = idx;
	}
	dist[idx] = val;
	for (auto it : adj[idx]) {
		if (dist[it.first] != INF) continue;
		dfs(it.first, n+1, val + it.second);
	}
}
int main() {
	int i, a, b, c;
	scanf("%d%d", &n, &t);
	adj.resize(n + 1);
	dist.resize(n + 1);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d%d", &a, &b, &c);
		adj[a].emplace_back(b, c);
		adj[b].emplace_back(a, c);
	}
	fill(dist.begin(), dist.end(), INF);
	dfs(1, 0, 0);
	v = u;
	maxa = 0;
	num = 0;
	fill(dist.begin(), dist.end(), INF);
	dfs(u, 0, 0);
	printf("%d\n", (maxa - 1) / t + 1);
}*/

/*int init, ret, n, m, visited[26], parent[26], arrested[26]; // 17220 마약수사대
vector<vector<int>> adj;

void dfs(int idx) {
	if (visited[idx] || arrested[idx]) return;
	ret++;
	for (auto it : adj[idx]) {
		dfs(it);
	}
}
int main() {
	int i, k, p, q;
	char a, b;

	scanf("%d%d", &n, &m);
	adj.resize(n + 1);
	for (i = 0; i < m; i++) {
		fgetc(stdin);
		scanf("%c %c", &a, &b);
		adj[a - 'A'].push_back(b - 'A');
		parent[b - 'A']++;
	}

	scanf("%d", &k);
	for (i = 0; i < k; i++) {
		fgetc(stdin);
		scanf("%c", &a);
		arrested[a - 'A'] = 1;
	}
	for (i = 0; i < n; i++) {
		if (!parent[i] && !arrested[i]) {
			init++;
			dfs(i);
		}
	}
	printf("%d", ret - init);
}*/

/*int tmp, n, visited[2001], cp[2001]; //17209 새내기와 헌내기
char board[2001][2001];

void dfs(int idx, int val) {
	if (visited[idx]) return;
	if (val) tmp++;
	visited[idx] = 1;
	for (int i = 1; i <= n; i++) {
		if (board[idx][i]=='0') continue;
		dfs(i, (val + 1) % 2);
	}
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		fgetc(stdin);
		for (j = 1; j <= n; j++) {
			scanf("%c", &board[i][j]);
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			board[i][j] = board[i][j]=='1' || board[j][i]=='1' ? '1' : '0';
		}
	}

	int ret = 0;
	for (i = 1; i <= n; i++) {
		if (!visited[i]) {
			for (j = 1; j <= n; j++) {
				cp[j] = visited[j];
			}
			tmp = 0;
			dfs(i, 0);
			int u = tmp;
			for (j = 1; j <= n; j++) {
				visited[j] = cp[j];
			}
			tmp = 0;
			dfs(i, 1);
			int v = tmp;
			ret += u>v ? u : v;
		}
	}
	printf("%d", ret);
}*/

/*int r, c, board[1000][1000]; //6080 Bad Grass

void dfs(int i, int j) {
	if (i<0 || i>r-1 || j<0 || j>c-1 || !board[i][j]) return;
	board[i][j] = 0;
	dfs(i + 1, j);
	dfs(i, j + 1);
	dfs(i - 1, j);
	dfs(i, j - 1);
	dfs(i - 1, j - 1);
	dfs(i - 1, j + 1);
	dfs(i + 1, j - 1);
	dfs(i + 1, j + 1);
}

int main() {
	int i, j, ret=0;
	scanf("%d%d", &r, &c);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			if (board[i][j]) {
				ret++;
				dfs(i, j);
			}
		}
	}
	printf("%d", ret);
}*/

/*vector<int> visited(26, 0); // 14641 Secret Chamber at Mount Rushmore
vector<vector<int>> adj(26);
int main() {
	int i, j, n, m;
	char a, b;
	string p, q;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> a >> b;
		adj[a - 'a'].push_back(b - 'a');
	}
	for (i = 0; i < m; i++) {
		cin >> p >> q;
		if (p.length() != q.length()) {
			cout << "no" << endl;
			continue;
		}
		for (j = 0; j < p.length(); j++) {
			if (p[j] == q[j]) continue;
			fill(visited.begin(), visited.end(), 0);
			queue<int> que;
			int chk = 0;
			que.push(p[j] - 'a');
			while (!que.empty()) {
				int here = que.front();
				que.pop();
				if (here + 'a' == q[j]) {
					chk = 1;
					break;
				}
				visited[here] = 1;
				for (auto k : adj[here]) {
					if (!visited[k]) que.push(k);
				}
			}
			if (!chk) {
				cout << "no" << endl;
				break;
			}
		}
		if (j == p.length()) cout << "yes" << endl;
	}
}*/

/*int n, a[10]; // 9646 다이어그램과 태블로
int k;
long long func() {
	long long num = 1, den = 1;
	for (int i = 0; i + 1 < n; ++i) for (int j = i + 1; j < n; ++j) {
		num *= a[i] - a[j] + j - i;
		den *= j - i;
	}
	return num / den;
}

int main() {
	while (scanf("%d", &k) == 1) {
		for (int i = 0; i < k; ++i) scanf("%d", &a[i]);
		for (int i = k; i < 10; i++) {
			a[i] = 0;
		}
		scanf("%d", &n);
		printf("%lld\n", func());
	}
	return 0;
}*/

/*char board[10][10]; //9540 Draughts
int nxt[4][2] = { {1, 1}, {1, -1}, {-1, 1}, {-1, -1} };
int dfs(int x, int y, int initx, int inity) {
	if (x == -1) return 0;
	int i, ret = 0;
	for (i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1], dnx = x + 2 * nxt[i][0], dny = y + 2 * nxt[i][1];
		if (nx < 0 || nx>9 || ny < 0 || ny>9 || board[nx][ny] != 'B'||
			dnx<0 ||dnx>9 || dny<0 ||dny>9 || board[dnx][dny]=='B' || (board[dnx][dny]=='W' && (initx!=dnx || inity!=dny))) continue;
		board[nx][ny] = '.';
		ret=max(ret, 1 + dfs(dnx, dny, initx, inity));
		board[nx][ny] = 'B';
	}
	return ret;
}
int main() {
	int i, j, t, a=-1, b=-1;
	scanf("%d", &t);
	while (t--) {
		vector<pair<int, int>> vec;
		for (i = 0; i < 10; i++) {
			scanf("%s", board[i]);
			for (j = 0; j < 10; j++) {
				if (board[i][j] == 'W') {
					vec.emplace_back(i, j);
				}
			}
		}

		printf("\n");
		int ret = 0;
		if (vec.size() == 0) {
			printf("0\n");
			continue;
		}
		for (auto it : vec)
			ret = max(ret, dfs(it.first, it.second, it.first, it.second));
		printf("%d\n", ret);
	}
}*/

/*int n, m;
vector<vector<int>> adj;
vector<int> cache, visited;

int dfs(int idx) {
	int& ret = cache[idx];
	if (ret != -1) return ret;
	ret = 0;
	visited[idx] = 1;
	for (auto it : adj[idx]) {
		if (visited[it]) continue;
		ret += 1 + dfs(it);
	}
	visited[idx] = 0;
	return ret;
}
int main() {
	int i, t, a, b;
	scanf("%d", &t);
	while (t--) {
		adj.clear();
		cache.clear();
		visited.clear();
		scanf("%d%d", &n, &m);
		adj.resize(n + 1);
		cache.resize(n + 1);
		visited.resize(n + 1);
		fill(visited.begin(), visited.end(), 0);
		for (i = 0; i < m; i++) {
			scanf("%d%d", &a, &b);
			adj[a].push_back(b);
		}
		int ret = 0;
		for (i = 1; i <= n; i++) {
			fill(cache.begin(), cache.end(), -1);
			ret += dfs(i);
		}
		printf("%d\n", ret);
	}
}*/

/*int main() { // 7827 Transitive Closure
	int i, t, a, b, n, m;
	scanf("%d", &t);
	while (t--) {
		vector<vector<int>> adj;
		vector<int> cache, visited;
		scanf("%d%d", &n, &m);
		adj.resize(n + 1);
		cache.resize(n + 1);
		visited.resize(n + 1);
		for (i = 0; i < m; i++) {
			scanf("%d%d", &a, &b);
			adj[a].push_back(b);
		}
		int ret = 0;
		queue<int> que;
		for (i = 1; i <= n; i++) {
			fill(visited.begin(), visited.end(), 0);
			que.push(i);
			visited[i] = 1;
			while (!que.empty()) {
				int here = que.front();
				que.pop();
				for (auto it : adj[here]) {
					if (visited[it]) continue;
					visited[it] = 1;
					que.push(it);
					ret++;
				}
			}
		}
		printf("%d\n", ret);
	}
}*/

/*vector<vector<int>> adj(26); // 14907 프로젝트 스케줄링
int ret[26], in[26], exist[26];
int main() {
	int i, j, k, tm[26];
	char c, str[100];
	vector<char*> vec(3);

	int idx = 0;
	for (i = 0; i < 26; i++) {
		in[i] = 0;
	}
	while (fgets(str, 100, stdin) != NULL) {
		vec[0] = strtok(str, " ");
		for (i = 1; i < 3; i++) {
			vec[i] = strtok(NULL, " ");
		}
		char here = vec[0][0];
		if (!exist[here - 'A']) exist[here - 'A'] = 1;
		tm[here - 'A'] = atoi(vec[1]);
		ret[here - 'A'] = tm[here - 'A'];
		if (vec[2] != NULL) {
			for (i = 0; i < strlen(vec[2]) - 1; i++) {
				adj[vec[2][i] - 'A'].push_back(here - 'A');
				in[here - 'A']++;
			}
		}
		idx++;
	}

	queue<pair<int, int>> que;
	for (i = 0; i < 26; i++) {
		if (exist[i] && in[i] == 0) {
			que.emplace(i, tm[i]);
		}
	}

	while (!que.empty()) {
		int here = que.front().first, spent = que.front().second;
		que.pop();
		for (auto it : adj[here]) {
			ret[it] = max(ret[it], spent + tm[it]);
			if (--in[it] == 0) que.emplace(it, ret[it]);
		}
	}
	int r = 0;
	for (i = 0; i < 26; i++) {
		r = max(r, ret[i]);
	}
	printf("%d", r);
}*/

/*string str1, str2; // 2376 트리 완성하기 (못품)
vector<vector<int>> adj;
int here, idx = 1;
void dfs(int now, string str) {
	if (here == str.length()) return;
	while (here<str.length() && str[here] == '0') {
		adj[now].push_back(++idx);
		here++;
		dfs(idx, str);
	}
	if (here < str.length() && str[here] == '1') {
		here++;
	}
	return;
}


int main() {
	int i, j, t;
	cin >> t;
	while (t--) {
		here = 0, idx = 1;
		cin >> str1 >> str2;
		if (str1.length() != str2.length()) {
			printf("0\n");
			continue;
		}
		adj.resize(str1.length() / 2 + 2, vector<int>());
		for (i = 1; i < adj.size(); i++) {
			adj[i].clear();
		}
		dfs(1, str1);
		vector<vector<int>> cp(adj);
		here = 0, idx = 1;
		for (i = 1; i < adj.size(); i++) {
			adj[i].clear();
		}
		dfs(1, str2);

		for (i = 1; i < adj.size(); i++) {
			printf("i : %d ", i);
			for (j = 0; j < adj[i].size(); j++) {
				printf("adj %d ", adj[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for (i = 1; i < cp.size(); i++) {
			printf("i : %d ", i);
			for (j = 0; j < cp[i].size(); j++) {
				printf("%d ", cp[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		int chk = 1;
		for (i = 1; i < adj.size(); i++) {
			if (cp[i].size() != adj[i].size()) {
				chk = 0;
				break;
			}
		}
		printf("%d\n", chk);
	}
}*/

/*int m, n; // 16390 Sheba's Amoebas
char board[100][100];

void dfs(int x, int y) {
	if (x<0 || x>m - 1 || y<0 || y>n - 1 || board[x][y] == '.') return;
	board[x][y] = '.';
	dfs(x + 1, y);
	dfs(x - 1, y);
	dfs(x, y + 1);
	dfs(x, y - 1);
	dfs(x + 1, y + 1);
	dfs(x + 1, y - 1);
	dfs(x - 1, y + 1);
	dfs(x - 1, y - 1);
}

int main() {
	int i, j;
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++) {
		fgetc(stdin);
		for (j = 0; j < n; j++) {
			scanf("%c", &board[i][j]);
		}
	}

	int ret = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (board[i][j] == '#') {
				ret++;
				dfs(i, j);
			}
		}
	}
	printf("%d", ret);
}*/

/*int h, n, m, nxt[2][6][2] = { {{-1, 0}, {0, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}}, {{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {0, -1}}}; // 16294 Bee Problem
char board[1000][1000];

int dfs(int x, int y) {
	if (x<0 || x>n - 1 || y<0 || y>m - 1 || board[x][y] == '#') return 0;
	board[x][y] = '#';
	int ret = 1;
	for (int i = 0; i < 6; i++) {
		int nx = x + nxt[x % 2][i][0], ny = y + nxt[x % 2][i][1];
		ret += dfs(nx, ny);
	}
	return ret;
}
int main() {
	int i, j;
	char tmp[2001], q;
	scanf("%d%d%d", &h, &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		int idx = 0;
		while (idx != m) {
			scanf("%c", &q);
			if (q != ' ') {
				board[i][idx++] = q;
			}
		}
	}
	if (h == 0) {
		printf("0");
		return 0;
	}
	int sz, ret = 0;
	vector<int> vec;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (board[i][j] == '.') {
				vec.push_back(dfs(i, j));
			}
		}
	}
	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
	for (auto it : vec) {
		ret++;
		if (h <= it) break;
		h -= it;
	}
	printf("%d", ret);
}*/

/*vector<string> vec;
int main() {
	string str;
	int idx = 0;
	while (true) {
		cin >> str;
		if (str[0] == '0') break;
		vec.push_back(str);
	}
	cout << "{";
	for (auto it : vec) {
		cout << "\"" << it << "\", ";
		idx++;
	}
	cout << "}, "<<idx<<endl;
}*/

/*typedef struct trie { // 13502 단어퍼즐 2
	bool here;
	trie* child[26];
	trie() : here(false) {
		for (int i = 0; i < 26; i++) {
			child[i] = NULL;
		}
	}
}Trie;
char word[24830][50] = { "AARGH", "AARON", "ABABA", "ABACK", "ABANDON", "ABANDONED", "ABANDONING", "ABANDONMENT", "ABATEMENT", "ABBERLEY", "ABBEY", "ABBOT", "ABBOTT", "ABBREVIATED", "ABBREVIATIONS", "ABC", "ABDEL", "ABDICATION", "ABDOMEN", "ABDOMINAL", "ABDUCTED", "ABDUCTION", "ABDUL", "ABDULLAH", "ABEL", "ABERDEEN", "ABERRATION", "ABERYSTWYTH", "ABIDE", "ABIDING", "ABILITIES", "ABILITY", "ABINGDON", "ABJECT", "ABLAZE", "ABLE", "ABNORMAL", "ABNORMALITIES", "ABNORMALITY", "ABNORMALLY", "ABOARD", "ABODE", "ABOLISH", "ABOLISHED", "ABOLISHING", "ABOLITION", "ABOLITIONISTS", "ABORIGINAL", "ABORTION", "ABORTIONS", "ABORTIVE", "ABOUND", "ABOUT", "ABOVE", "ABRAHAM", "ABRASIVE", "ABREAST", "ABROAD", "ABRUPT", "ABRUPTLY", "ABSENCE", "ABSENCES", "ABSENT", "ABSENTEE", "ABSENTEEISM", "ABSENTLY", "ABSOLUTE", "ABSOLUTELY", "ABSORB", "ABSORBED", "ABSORBING", "ABSORBS", "ABSORPTION", "ABSTENTIONS", "ABSTINENCE", "ABSTRACT", "ABSTRACTION", "ABSTRACTIONS", "ABSTRACTS", "ABSURD", "ABSURDITY", "ABSURDLY", "ABUNDANCE", "ABUNDANT", "ABUNDANTLY", "ABUSE", "ABUSED", "ABUSES", "ABUSING", "ABUSIVE", "ABYSS", "ACADEMIC", "ACADEMICALLY", "ACADEMICS", "ACADEMY", "ACCELERATE", "ACCELERATED", "ACCELERATING", "ACCELERATION", "ACCELERATOR", "ACCENT", "ACCENTS", "ACCENTUATED", "ACCEPT", "ACCEPTABILITY", "ACCEPTABLE", "ACCEPTANCE", "ACCEPTED", "ACCEPTING", "ACCEPTS", "ACCESS", "ACCESSED", "ACCESSIBILITY", "ACCESSIBLE", "ACCESSING", "ACCESSION", "ACCESSORIES", "ACCIDENT", "ACCIDENTAL", "ACCIDENTALLY", "ACCIDENTS", "ACCLAIM", "ACCOLADE", "ACCOMMODATE", "ACCOMMODATED", "ACCOMMODATING", "ACCOMMODATION", "ACCOMPANIED", "ACCOMPANIES", "ACCOMPANIMENT", "ACCOMPANY", "ACCOMPANYING", "ACCOMPLICE", "ACCOMPLISH", "ACCOMPLISHED", "ACCOMPLISHMENT", "ACCORD", "ACCORDED", "ACCORDINGLY", "ACCORDS", "ACCOUNT", "ACCOUNTABILITY", "ACCOUNTABLE", "ACCOUNTANCY", "ACCOUNTANT", "ACCOUNTANTS", "ACCOUNTED", "ACCOUNTING", "ACCOUNTS", "ACCREDITATION", "ACCRETION", "ACCRUALS", "ACCRUE", "ACCRUING", "ACCUMULATE", "ACCUMULATED", "ACCUMULATING", "ACCUMULATION", "ACCUMULATOR", "ACCURACY", "ACCURATE", "ACCURATELY", "ACCUSATION", "ACCUSATIONS", "ACCUSE", "ACCUSED", "ACCUSES", "ACCUSING", "ACCUSINGLY", "ACCUSTOMED", "ACE", "ACES", "ACET", "ACETATE", "ACETIC", "ACHE", "ACHED", "ACHES", "ACHESON", "ACHIEVABLE", "ACHIEVE", "ACHIEVED", "ACHIEVEMENT", "ACHIEVEMENTS", "ACHIEVES", "ACHIEVING", "ACHILLES", "ACHING", "ACID", "ACIDIC", "ACIDIFICATION", "ACIDITY", "ACIDS", "ACKNOWLEDGE", "ACKNOWLEDGED", "ACKNOWLEDGEMENT", "ACKNOWLEDGES", "ACKNOWLEDGING", "ACNE", "ACOUSTIC", "ACOUSTICS", "ACQUAINTANCE", "ACQUAINTANCES", "ACQUAINTED", "ACQUIESCENCE", "ACQUIRE", "ACQUIRED", "ACQUIRER", "ACQUIRES", "ACQUIRING", "ACQUISITION", "ACQUISITIONS", "ACQUITTAL", "ACQUITTED", "ACRE", "ACREAGE", "ACRES", "ACRID", "ACRIMONIOUS", "ACROSS", "ACRYLIC", "ACT", "ACTED", "ACTING", "ACTION", "ACTIONS", "ACTIVATE", "ACTIVATED", "ACTIVATING", "ACTIVATION", "ACTIVATOR", "ACTIVE", "ACTIVELY", "ACTIVISM", "ACTIVIST", "ACTIVISTS", "ACTIVITIES", "ACTIVITY", "ACTON", "ACTOR", "ACTORS", "ACTRESS", "ACTRESSES", "ACTS", "ACTUAL", "ACTUALITY", "ACTUALLY", "ACTUARIAL", "ACTUARIES", "ACTUARY", "ACUMEN", "ACUPUNCTURE", "ACUTE", "ACUTELY", "ADAGE", "ADAM", "ADAMANT", "ADAMS", "ADAPT", "ADAPTABILITY", "ADAPTABLE", "ADAPTATION", "ADAPTATIONS", "ADAPTED", "ADAPTING", "ADAPTIVE", "ADAPTOR", "ADD", "ADDED", "ADDICT", "ADDICTED", "ADDICTION", "ADDICTIVE", "ADDICTS", "ADDING", "ADDIS", "ADDISON", "ADDITION", "ADDITIONAL", "ADDITIONALLY", "ADDITIONS", "ADDITIVE", "ADDITIVES", "ADDRESS", "ADDRESSED", "ADDRESSEE", "ADDRESSES", "ADDRESSING", "ADDS", "ADELAIDE", "ADELE", "ADEN", "ADENAUER", "ADENOCARCINOMA", "ADENOMAS", "ADEPT", "ADEQUACY", "ADEQUATE", "ADEQUATELY", "ADHERE", "ADHERED", "ADHERENCE", "ADHERENTS", "ADHERING", "ADHESION", "ADHESIVE", "ADJACENT", "ADJECTIVE", "ADJECTIVES", "ADJOINING", "ADJOURNED", "ADJOURNMENT", "ADJUDICATION", "ADJUNCT", "ADJUST", "ADJUSTABLE", "ADJUSTED", "ADJUSTING", "ADJUSTMENT", "ADJUSTMENTS", "ADJUTANT", "ADMIN", "ADMINISTER", "ADMINISTERED", "ADMINISTERING", "ADMINISTRATION", "ADMINISTRATIONS", "ADMINISTRATIVE", "ADMINISTRATOR", "ADMINISTRATORS", "ADMIRABLE", "ADMIRABLY", "ADMIRAL", "ADMIRALTY", "ADMIRATION", "ADMIRE", "ADMIRED", "ADMIRER", "ADMIRERS", "ADMIRING", "ADMISSIBLE", "ADMISSION", "ADMISSIONS", "ADMIT", "ADMITS", "ADMITTED", "ADMITTEDLY", "ADMITTING", "ADO", "ADOBE", "ADOLESCENCE", "ADOLESCENT", "ADOLESCENTS", "ADOLF", "ADOPT", "ADOPTED", "ADOPTING", "ADOPTION", "ADOPTIVE", "ADOPTS", "ADORATION", "ADORE", "ADORED", "ADORNO", "ADRENALIN", "ADRIAN", "ADRIATIC", "ADRIFT", "ADULATION", "ADULT", "ADULTERY", "ADULTHOOD", "ADULTS", "ADVANCE", "ADVANCED", "ADVANCEMENT", "ADVANCES", "ADVANCING", "ADVANTAGE", "ADVANTAGEOUS", "ADVANTAGES", "ADVENT", "ADVENTURE", "ADVENTURER", "ADVENTURERS", "ADVENTURES", "ADVENTUROUS", "ADVERSARIAL", "ADVERSARIES", "ADVERSARY", "ADVERSE", "ADVERSELY", "ADVERSITY", "ADVERT", "ADVERTISE", "ADVERTISED", "ADVERTISEMENT", "ADVERTISEMENTS", "ADVERTISERS", "ADVERTISING", "ADVERTS", "ADVICE", "ADVISABLE", "ADVISE", "ADVISED", "ADVISER", "ADVISERS", "ADVISES", "ADVISING", "ADVISOR", "ADVISORS", "ADVISORY", "ADVOCACY", "ADVOCATE", "ADVOCATED", "ADVOCATES", "ADVOCATING", "AEGEAN", "AEGIS", "AERIAL", "AEROBIC", "AEROBICS", "AERODROME", "AERODYNAMIC", "AEROPLANE", "AEROPLANES", "AEROSOL", "AEROSPACE", "AESTHETIC", "AESTHETICALLY", "AESTHETICS", "AETIOLOGY", "AFAR", "AFFABLE", "AFFAIR", "AFFAIRS", "AFFECT", "AFFECTED", "AFFECTING", "AFFECTION", "AFFECTIONATE", "AFFECTIONATELY", "AFFECTIONS", "AFFECTIVE", "AFFECTS", "AFFIDAVIT", "AFFILIATION", "AFFILIATIONS", "AFFINITIES", "AFFINITY", "AFFIRM", "AFFIRMATION", "AFFIRMATIVE", "AFFIRMED", "AFFLICTED", "AFFLICTION", "AFFLUENCE", "AFFLUENT", "AFFORD", "AFFORDABLE", "AFFORDED", "AFFORDS", "AFFRONT", "AFGHAN", "AFGHANISTAN", "AFIELD", "AFLOAT", "AFOOT", "AFOREMENTIONED", "AFRAID", "AFRESH", "AFRICA", "AFRICAN", "AFRICANS", "AFTER", "AFTERMATH", "AFTERNOON", "AFTERNOONS", "AFTERTHOUGHT", "AFTERWARDS", "AGAIN", "AGAINST", "AGATHA", "AGE", "AGED", "AGEING", "AGEISM", "AGENCIES", "AGENCY", "AGENDA", "AGENDAS", "AGENT", "AGENTS", "AGES", "AGGIE", "AGGRAVATED", "AGGRAVATION", "AGGREGATE", "AGGREGATES", "AGGREGATION", "AGGRESSION", "AGGRESSIVE", "AGGRESSIVELY", "AGGRESSOR", "AGGRIEVED", "AGHAST", "AGILE", "AGILITY", "AGITATION", "AGNES", "AGNEW", "AGO", "AGONY", "AGRARIAN", "AGREE", "AGREEABLE", "AGREED", "AGREEING", "AGREEMENT", "AGREEMENTS", "AGREES", "AGRICULTURAL", "AGRICULTURE", "AGRIPPA", "AHA", "AHEAD", "AHMAD", "AHMED", "AID", "AIDE", "AIDED", "AIDES", "AIDS", "AILMENTS", "AIM", "AIMED", "AIMING", "AIMLESSLY", "AIMS", "AIR", "AIRBORNE", "AIRBUS", "AIRCRAFT", "AIRDRIE", "AIRES", "AIRFIELD", "AIRFIELDS", "AIRFRAME", "AIRING", "AIRLINE", "AIRLINER", "AIRLINES", "AIRMEN", "AIRPORT", "AIRPORTS", "AIRS", "AIRSPACE", "AIRWAY", "AIRWAYS", "AIRY", "AISLE", "AISLES", "AITKEN", "AJAR", "AKIN", "ALABAMA", "ALAIN", "ALAN", "ALARM", "ALARMED", "ALARMING", "ALARMINGLY", "ALARMS", "ALAS", "ALASKA", "ALASTAIR", "ALBANIA", "ALBANIAN", "ALBANIANS", "ALBANS", "ALBANY", "ALBEIT", "ALBERT", "ALBERTO", "ALBION", "ALBUM", "ALBUMIN", "ALBUMS", "ALCOHOL", "ALCOHOLIC", "ALCOHOLICS", "ALCOHOLISM", "ALCOVE", "ALDERSHOT", "ALDINGTON", "ALDRIDGE", "ALE", "ALEC", "ALERT", "ALERTED", "ALEX", "ALEXANDER", "ALEXANDRA", "ALEXANDRIA", "ALEXEI", "ALFRED", "ALGAE", "ALGEBRA", "ALGEBRAIC", "ALGERIA", "ALGERIAN", "ALGIERS", "ALGORITHM", "ALGORITHMS", "ALIAS", "ALIBI", "ALICE", "ALIDA", "ALIEN", "ALIENATE", "ALIENATED", "ALIENATION", "ALIENS", "ALIGHT", "ALIGNED", "ALIGNMENT", "ALIGNMENTS", "ALIKE", "ALISON", "ALISTAIR", "ALIVE", "ALIX", "ALKALI", "ALKALINE", "ALL", "ALLAN", "ALLAY", "ALLEGATION", "ALLEGATIONS", "ALLEGED", "ALLEGEDLY", "ALLEGES", "ALLEGIANCE", "ALLEGIANCES", "ALLEGING", "ALLEGORY", "ALLEN", "ALLERGIC", "ALLERGIES", "ALLERGY", "ALLEVIATE", "ALLEY", "ALLEYS", "ALLEYWAY", "ALLEYWAYS", "ALLIANCE", "ALLIANCES", "ALLIED", "ALLIES", "ALLISON", "ALLOCATE", "ALLOCATED", "ALLOCATING", "ALLOCATION", "ALLOCATIONS", "ALLOTMENT", "ALLOTMENTS", "ALLOTTED", "ALLOW", "ALLOWABLE", "ALLOWANCE", "ALLOWANCES", "ALLOWED", "ALLOWING", "ALLOWS", "ALLOY", "ALLOYS", "ALLUSION", "ALLUSIONS", "ALLY", "ALMA", "ALMIGHTY", "ALMOND", "ALMONDS", "ALMOST", "ALOFT", "ALONE", "ALONG", "ALONGSIDE", "ALOOF", "ALOUD", "ALPHA", "ALPHABET", "ALPHABETICAL", "ALPINE", "ALPS", "ALREADY", "ALRESFORD", "ALRIGHT", "ALSO", "ALTAR", "ALTER", "ALTERATION", "ALTERATIONS", "ALTERED", "ALTERING", "ALTERNATE", "ALTERNATELY", "ALTERNATING", "ALTERNATION", "ALTERNATIVE", "ALTERNATIVELY", "ALTERNATIVES", "ALTERS", "ALTHOUGH", "ALTHUSSER", "ALTITUDE", "ALTITUDES", "ALTOGETHER", "ALTON", "ALTRUISM", "ALTRUISTIC", "ALUMINIUM", "ALUMNI", "ALWAYS", "ALYSSIA", "ALZHEIMER", "AMALGAM", "AMALGAMATED", "AMALGAMATION", "AMANDA", "AMARANTH", "AMATEUR", "AMATEURS", "AMAZED", "AMAZEMENT", "AMAZING", "AMAZINGLY", "AMAZON", "AMAZONIAN", "AMBASSADOR", "AMBASSADORS", "AMBER", "AMBIENCE", "AMBIGUITIES", "AMBIGUITY", "AMBIGUOUS", "AMBIT", "AMBITION", "AMBITIONS", "AMBITIOUS", "AMBIVALENCE", "AMBIVALENT", "AMBROSE", "AMBULANCE", "AMBULANCES", "AMBULATORY", "AMBUSH", "AMDAHL", "AMELIA", "AMEN", "AMENABLE", "AMEND", "AMENDED", "AMENDING", "AMENDMENT", "AMENDMENTS", "AMENDS", "AMENITIES", "AMENITY", "AMERICA", "AMERICAN", "AMERICANS", "AMERICAS", "AMERSHAM", "AMES", "AMIABLE", "AMIABLY", "AMICABLE", "AMID", "AMIDST", "AMINO", "AMIS", "AMISS", "AMMAN", "AMMONIA", "AMMONIUM", "AMMUNITION", "AMNESIA", "AMNESTY", "AMONG", "AMONGST", "AMOROUS", "AMORPHOUS", "AMOS", "AMOUNT", "AMOUNTED", "AMOUNTING", "AMOUNTS", "AMPHIBIANS", "AMPHITHEATRE", "AMPLE", "AMPLIFICATION", "AMPLIFIED", "AMPLIFIER", "AMPLIFIERS", "AMPLITUDE", "AMPLY", "AMPS", "AMSTERDAM", "AMSTRAD", "AMUSE", "AMUSED", "AMUSEMENT", "AMUSING", "AMY", "ANA", "ANABELLE", "ANACHRONISM", "ANACHRONISTIC", "ANAEMIA", "ANAEROBIC", "ANAESTHESIA", "ANAESTHETIC", "ANAL", "ANALOGIES", "ANALOGOUS", "ANALOGUE", "ANALOGUES", "ANALOGY", "ANALYSE", "ANALYSED", "ANALYSER", "ANALYSES", "ANALYSING", "ANALYSIS", "ANALYST", "ANALYSTS", "ANALYTIC", "ANALYTICAL", "ANARCHIC", "ANARCHIST", "ANARCHY", "ANATHEMA", "ANATOLY", "ANATOMICAL", "ANATOMY", "ANCESTOR", "ANCESTORS", "ANCESTRAL", "ANCESTRY", "ANCHOR", "ANCHORED", "ANCIENT", "ANCILLARY", "AND", "ANDERSEN", "ANDERSON", "ANDES", "ANDRE", "ANDREA", "ANDREAS", "ANDREI", "ANDREW", "ANDREWS", "ANDROIDS", "ANDRUS", "ANDY", "ANECDOTAL", "ANECDOTE", "ANECDOTES", "ANEW", "ANFIELD", "ANGALO", "ANGEL", "ANGELA", "ANGELES", "ANGELICA", "ANGELS", "ANGER", "ANGERED", "ANGIE", "ANGINA", "ANGLE", "ANGLED", "ANGLER", "ANGLERS", "ANGLES", "ANGLESEY", "ANGLIA", "ANGLIAN", "ANGLICAN", "ANGLICANS", "ANGLING", "ANGOLA", "ANGRILY", "ANGRY", "ANGUISH", "ANGUISHED", "ANGULAR", "ANGUS", "ANGY", "ANIMAL", "ANIMALS", "ANIMATED", "ANIMATION", "ANIMOSITY", "ANITA", "ANJOU", "ANKARA", "ANKLE", "ANKLES", "ANNA", "ANNABEL", "ANNALS", "ANNAN", "ANNE", "ANNEXATION", "ANNEXE", "ANNIE", "ANNIHILATION", "ANNIVERSARY", "ANNOUNCE", "ANNOUNCED", "ANNOUNCEMENT", "ANNOUNCEMENTS", "ANNOUNCES", "ANNOUNCING", "ANNOY", "ANNOYANCE", "ANNOYED", "ANNOYING", "ANNOYS", "ANNUAL", "ANNUALLY", "ANNUITY", "ANOMALIES", "ANOMALOUS", "ANOMALY", "ANONYMITY", "ANONYMOUS", "ANONYMOUSLY", "ANORAK", "ANOREXIA", "ANOREXIC", "ANOTHER", "ANSELM", "ANSWER", "ANSWERABLE", "ANSWERED", "ANSWERING", "ANSWERS", "ANT", "ANTAGONISM", "ANTAGONIST", "ANTAGONISTIC", "ANTAGONISTS", "ANTARCTIC", "ANTARCTICA", "ANTECEDENTS", "ANTENATAL", "ANTENNAE", "ANTERIOR", "ANTHEA", "ANTHEM", "ANTHOLOGY", "ANTHONY", "ANTHROPOLOGICAL", "ANTHROPOLOGIST", "ANTHROPOLOGISTS", "ANTHROPOLOGY", "ANTI", "ANTIBIOTIC", "ANTIBIOTICS", "ANTIBODIES", "ANTIBODY", "ANTICIPATE", "ANTICIPATED", "ANTICIPATES", "ANTICIPATING", "ANTICIPATION", "ANTICS", "ANTIDOTE", "ANTIGEN", "ANTIGENS", "ANTIGUA", "ANTIPATHY", "ANTIQUE", "ANTIQUES", "ANTIQUITIES", "ANTIQUITY", "ANTISLAVERY", "ANTITHESIS", "ANTLERS", "ANTOINE", "ANTOINETTE", "ANTON", "ANTONIA", "ANTONIO", "ANTONY", "ANTRAL", "ANTRIM", "ANTRUM", "ANTS", "ANTWERP", "ANUS", "ANXIETIES", "ANXIETY", "ANXIOUS", "ANXIOUSLY", "ANY", "ANYBODY", "ANYHOW", "ANYMORE", "ANYONE", "ANYTHING", "ANYTIME", "ANYWAY", "ANYWHERE", "AOUN", "APACE", "APART", "APARTHEID", "APARTMENT", "APARTMENTS", "APATHY", "APE", "APERTURE", "APES", "APEX", "APHASIA", "APHIDS", "APICAL", "APIECE", "APOCALYPTIC", "APOLLO", "APOLOGETIC", "APOLOGETICALLY", "APOLOGIES", "APOLOGISE", "APOLOGISED", "APOLOGIZE", "APOLOGY", "APOSTLE", "APOSTLES", "APOSTOLIC", "APOTHECARY", "APPALLED", "APPALLING", "APPALLINGLY", "APPARATUS", "APPARENT", "APPARENTLY", "APPARITION", "APPEAL", "APPEALED", "APPEALING", "APPEALS", "APPEAR", "APPEARANCE", "APPEARANCES", "APPEARED", "APPEARING", "APPEARS", "APPEASE", "APPELLANT", "APPELLANTS", "APPENDICES", "APPENDIX", "APPETITE", "APPETITES", "APPLAUD", "APPLAUDED", "APPLAUSE", "APPLE", "APPLEBY", "APPLES", "APPLIANCE", "APPLIANCES", "APPLICABILITY", "APPLICABLE", "APPLICANT", "APPLICANTS", "APPLICATION", "APPLICATIONS", "APPLIED", "APPLIES", "APPLY", "APPLYING", "APPOINT", "APPOINTED", "APPOINTEES", "APPOINTING", "APPOINTMENT", "APPOINTMENTS", "APPOINTS", "APPRAISAL", "APPRAISALS", "APPRECIABLE", "APPRECIABLY", "APPRECIATE", "APPRECIATED", "APPRECIATES", "APPRECIATING", "APPRECIATION", "APPRECIATIVE", "APPRECIATIVELY", "APPREHENSION", "APPREHENSIVE", "APPREHENSIVELY", "APPRENTICE", "APPRENTICED", "APPRENTICES", "APPRENTICESHIP", "APPROACH", "APPROACHED", "APPROACHES", "APPROACHING", "APPROPRIATE", "APPROPRIATED", "APPROPRIATELY", "APPROPRIATENESS", "APPROPRIATION", "APPROVAL", "APPROVALS", "APPROVE", "APPROVED", "APPROVES", "APPROVING", "APPROVINGLY", "APPROX", "APPROXIMATE", "APPROXIMATELY", "APPROXIMATION", "APRICOT", "APRIL", "APRON", "APSE", "APT", "APTITUDE", "APTLY", "AQUARIUM", "AQUATIC", "AQUEOUS", "AQUINO", "AQUITAINE", "ARAB", "ARABIA", "ARABIAN", "ARABIC", "ARABLE", "ARABS", "ARAFAT", "ARAMINTA", "ARBITER", "ARBITRAGE", "ARBITRARILY", "ARBITRARY", "ARBITRATION", "ARBITRATOR", "ARBITRATORS", "ARBROATH", "ARC", "ARCADE", "ARCH", "ARCHAEOLOGICAL", "ARCHAEOLOGIST", "ARCHAEOLOGISTS", "ARCHAEOLOGY", "ARCHAIC", "ARCHBISHOP", "ARCHBISHOPS", "ARCHDEACON", "ARCHED", "ARCHER", "ARCHERS", "ARCHES", "ARCHETYPAL", "ARCHIBALD", "ARCHIE", "ARCHIPELAGO", "ARCHITECT", "ARCHITECTS", "ARCHITECTURAL", "ARCHITECTURE", "ARCHITECTURES", "ARCHIVE", "ARCHIVES", "ARCHWAY", "ARCS", "ARCTIC", "ARDEN", "ARDENT", "ARDS", "ARDUOUS", "ARE", "AREA", "AREAS", "ARENA", "ARENAS", "ARGENTINA", "ARGENTINE", "ARGENTINIAN", "ARGOS", "ARGUABLE", "ARGUABLY", "ARGUE", "ARGUED", "ARGUES", "ARGUING", "ARGUMENT", "ARGUMENTATIVE", "ARGUMENTS", "ARGYLE", "ARGYLL", "ARIA", "ARIAS", "ARID", "ARIEL", "ARIES", "ARISE", "ARISEN", "ARISES", "ARISING", "ARISTOCRACY", "ARISTOCRAT", "ARISTOCRATIC", "ARISTOCRATS", "ARISTOS", "ARISTOTLE", "ARITHMETIC", "ARIZONA", "ARK", "ARKANSAS", "ARM", "ARMAGH", "ARMAMENTS", "ARMCHAIR", "ARMCHAIRS", "ARMED", "ARMENIA", "ARMENIAN", "ARMIES", "ARMITAGE", "ARMOUR", "ARMOURED", "ARMOURY", "ARMPITS", "ARMS", "ARMSTRONG", "ARMY", "ARNIE", "ARNOLD", "AROMA", "AROMATHERAPY", "AROMATIC", "AROSE", "AROUND", "AROUSAL", "AROUSE", "AROUSED", "ARRANGE", "ARRANGED", "ARRANGEMENT", "ARRANGEMENTS", "ARRANGES", "ARRANGING", "ARRAY", "ARRAYS", "ARREARS", "ARREST", "ARRESTED", "ARRESTING", "ARRESTS", "ARRIVAL", "ARRIVALS", "ARRIVE", "ARRIVED", "ARRIVES", "ARRIVING", "ARROGANCE", "ARROGANT", "ARROW", "ARROWS", "ARSE", "ARSENAL", "ARSENIC", "ARSON", "ART", "ARTAI", "ARTEFACT", "ARTEFACTS", "ARTEMIS", "ARTERIAL", "ARTERIES", "ARTERY", "ARTHRITIS", "ARTHUR", "ARTICLE", "ARTICLES", "ARTICULATE", "ARTICULATED", "ARTICULATION", "ARTIFICIAL", "ARTIFICIALLY", "ARTILLERY", "ARTISAN", "ARTISANS", "ARTIST", "ARTISTIC", "ARTISTS", "ARTS", "ARTWORK", "ARUNDEL", "ASBESTOS", "ASCENDANCY", "ASCENDING", "ASCENT", "ASCERTAIN", "ASCERTAINED", "ASCII", "ASCITES", "ASCOT", "ASCRIBED", "ASDA", "ASH", "ASHAMED", "ASHDOWN", "ASHES", "ASHFORD", "ASHLEY", "ASHORE", "ASHTON", "ASHTRAY", "ASHWORTH", "ASIA", "ASIAN", "ASIANS", "ASIATIC", "ASIDE", "ASK", "ASKED", "ASKING", "ASKS", "ASLEEP", "ASPECT", "ASPECTS", "ASPIRATION", "ASPIRATIONS", "ASPIRE", "ASPIRIN", "ASPIRING", "ASQUITH", "ASSAILANT", "ASSASSIN", "ASSASSINATED", "ASSASSINATION", "ASSASSINS", "ASSAULT", "ASSAULTED", "ASSAULTING", "ASSAULTS", "ASSAY", "ASSAYS", "ASSEMBLAGE", "ASSEMBLAGES", "ASSEMBLE", "ASSEMBLED", "ASSEMBLIES", "ASSEMBLING", "ASSEMBLY", "ASSENT", "ASSERT", "ASSERTED", "ASSERTING", "ASSERTION", "ASSERTIONS", "ASSERTIVE", "ASSERTIVENESS", "ASSERTS", "ASSESS", "ASSESSED", "ASSESSES", "ASSESSING", "ASSESSMENT", "ASSESSMENTS", "ASSESSOR", "ASSESSORS", "ASSET", "ASSETS", "ASSIDUOUSLY", "ASSIGN", "ASSIGNED", "ASSIGNEE", "ASSIGNING", "ASSIGNMENT", "ASSIGNMENTS", "ASSIGNS", "ASSIMILATE", "ASSIMILATED", "ASSIMILATION", "ASSIST", "ASSISTANCE", "ASSISTANT", "ASSISTANTS", "ASSISTED", "ASSISTING", "ASSISTS", "ASSOCIATE", "ASSOCIATED", "ASSOCIATES", "ASSOCIATION", "ASSOCIATIONS", "ASSOCIATIVE", "ASSORTED", "ASSORTMENT", "ASSUME", "ASSUMED", "ASSUMES", "ASSUMING", "ASSUMPTION", "ASSUMPTIONS", "ASSURANCE", "ASSURANCES", "ASSURE", "ASSURED", "ASSURES", "ASSURING", "ASTHMA", "ASTON", "ASTONISHED", "ASTONISHING", "ASTONISHINGLY", "ASTONISHMENT", "ASTRA", "ASTRAY", "ASTRIDE", "ASTROLOGY", "ASTRONOMER", "ASTRONOMERS", "ASTRONOMICAL", "ASTRONOMY", "ASTUTE", "ASYLUM", "ASYLUMS", "ASYMMETRIC", "ASYMMETRICAL", "ASYMMETRY", "ASYMPTOMATIC", "ASYNCHRONOUS", "ATE", "ATHEIST", "ATHELSTAN", "ATHENIAN", "ATHENIANS", "ATHENS", "ATHERTON", "ATHLETE", "ATHLETES", "ATHLETIC", "ATHLETICO", "ATHLETICS", "ATKINS", "ATKINSON", "ATLANTA", "ATLANTIC", "ATLAS", "ATMOSPHERE", "ATMOSPHERIC", "ATOM", "ATOMIC", "ATOMS", "ATONEMENT", "ATOP", "ATROCIOUS", "ATROCITIES", "ATROCITY", "ATROPHY", "ATTACH", "ATTACHED", "ATTACHES", "ATTACHING", "ATTACHMENT", "ATTACHMENTS", "ATTACK", "ATTACKED", "ATTACKER", "ATTACKERS", "ATTACKING", "ATTACKS", "ATTAIN", "ATTAINABLE", "ATTAINED", "ATTAINING", "ATTAINMENT", "ATTEMPT", "ATTEMPTED", "ATTEMPTING", "ATTEMPTS", "ATTEND", "ATTENDANCE", "ATTENDANCES", "ATTENDANT", "ATTENDANTS", "ATTENDED", "ATTENDING", "ATTENDS", "ATTENTION", "ATTENTIONS", "ATTENTIVE", "ATTENTIVELY", "ATTENUATION", "ATTIC", "ATTIRE", "ATTITUDE", "ATTITUDES", "ATTITUDINAL", "ATTLEE", "ATTORNEY", "ATTRACT", "ATTRACTED", "ATTRACTING", "ATTRACTION", "ATTRACTIONS", "ATTRACTIVE", "ATTRACTIVELY", "ATTRACTIVENESS", "ATTRACTS", "ATTRIBUTABLE", "ATTRIBUTE", "ATTRIBUTED", "ATTRIBUTES", "ATTRIBUTING", "ATTRIBUTION", "ATYPICAL", "AUBREY", "AUCKLAND", "AUCTION", "AUCTIONED", "AUCTIONEER", "AUCTIONEERS", "AUCTIONS", "AUDACITY", "AUDI", "AUDIBLE", "AUDIENCE", "AUDIENCES", "AUDIO", "AUDIT", "AUDITED", "AUDITING", "AUDITION", "AUDITOR", "AUDITORIUM", "AUDITORS", "AUDITORY", "AUDITS", "AUDREY", "AUGMENT", "AUGMENTED", "AUGUST", "AUGUSTA", "AUGUSTE", "AUGUSTINE", "AUGUSTUS", "AUNG", "AUNT", "AUNTIE", "AUNTS", "AUNTY", "AURA", "AURORA", "AUSPICES", "AUSSIE", "AUSTEN", "AUSTERE", "AUSTERITY", "AUSTIN", "AUSTRALASIA", "AUSTRALIA", "AUSTRALIAN", "AUSTRALIANS", "AUSTRIA", "AUSTRIAN", "AUTHENTIC", "AUTHENTICITY", "AUTHOR", "AUTHORISATION", "AUTHORISE", "AUTHORISED", "AUTHORITARIAN", "AUTHORITATIVE", "AUTHORITIES", "AUTHORITY", "AUTHORIZATION", "AUTHORIZED", "AUTHORS", "AUTHORSHIP", "AUTO", "AUTOBIOGRAPHICAL", "AUTOBIOGRAPHY", "AUTOCRACY", "AUTOCRATIC", "AUTOGRAPH", "AUTOIMMUNE", "AUTOMATED", "AUTOMATIC", "AUTOMATICALLY", "AUTOMATION", "AUTOMOBILE", "AUTOMOTIVE", "AUTONOMIC", "AUTONOMOUS", "AUTONOMY", "AUTOPSY", "AUTUMN", "AUVERGNE", "AUXILIARIES", "AUXILIARY", "AVAIL", "AVAILABILITY", "AVAILABLE", "AVALANCHE", "AVENUE", "AVENUES", "AVERAGE", "AVERAGED", "AVERAGES", "AVERAGING", "AVERSE", "AVERSION", "AVERT", "AVERTED", "AVERY", "AVIATION", "AVID", "AVIDLY", "AVIV", "AVOID", "AVOIDABLE", "AVOIDANCE", "AVOIDED", "AVOIDING", "AVOIDS", "AVON", "AWAIT", "AWAITED", "AWAITING", "AWAITS", "AWAKE", "AWAKENED", "AWAKENING", "AWARD", "AWARDED", "AWARDS", "AWARE", "AWARENESS", "AWASH", "AWAY", "AWE", "AWESOME", "AWFUL", "AWFULLY", "AWKWARD", "AWKWARDLY", "AWOKE", "AWRY", "AXE", "AXED", "AXES", "AXIAL", "AXIS", "AXLE", "AYATOLLAH", "AYCLIFFE", "AYE", "AYLESBURY", "AYRESOME", "AYRSHIRE", "AYRTON", "AZERBAIJAN", "AZIZ", "BABE", "BABERTON", "BABIES", "BABY", "BABYLON", "BACH", "BACHELOR", "BACK", "BACKBENCH", "BACKBENCHERS", "BACKBONE", "BACKDROP", "BACKED", "BACKERS", "BACKGROUND", "BACKGROUNDS", "BACKING", "BACKLASH", "BACKLOG", "BACKS", "BACKSIDE", "BACKSTAGE", "BACKUP", "BACKWARD", "BACKWARDS", "BACKYARD", "BACON", "BACTERIA", "BACTERIAL", "BACTERIUM", "BAD", "BADGE", "BADGER", "BADGERS", "BADGES", "BADLY", "BADMINTON", "BAFFLED", "BAG", "BAGGAGE", "BAGGY", "BAGHDAD", "BAGS", "BAHAMAS", "BAHRAIN", "BAIL", "BAILEY", "BAILIFF", "BAILIFFS", "BAIRD", "BAIT", "BAKE", "BAKED", "BAKER", "BAKERS", "BAKERY", "BAKING", "BALANCE", "BALANCED", "BALANCES", "BALANCING", "BALCONIES", "BALCONY", "BALD", "BALDERSDALE", "BALDING", "BALDWIN", "BALES", "BALFOUR", "BALKANS", "BALL", "BALLAD", "BALLADS", "BALLAST", "BALLESTEROS", "BALLET", "BALLETS", "BALLIOL", "BALLISTIC", "BALLOON", "BALLOONS", "BALLOT", "BALLOTS", "BALLROOM", "BALLS", "BALLYMENA", "BALMORAL", "BALTIC", "BALTIMORE", "BAMBOO", "BAN", "BANAL", "BANANA", "BANANAS", "BANBRIDGE", "BANBURY", "BAND", "BANDA", "BANDAGE", "BANDAGES", "BANDITS", "BANDS", "BANDWAGON", "BANG", "BANGED", "BANGING", "BANGKOK", "BANGLADESH", "BANGOR", "BANISH", "BANISHED", "BANK", "BANKER", "BANKERS", "BANKING", "BANKRUPT", "BANKRUPTCY", "BANKS", "BANNED", "BANNER", "BANNERS", "BANNING", "BANQUET", "BANS", "BANTER", "BAPTISM", "BAPTIST", "BAPTIZED", "BAR", "BARBADOS", "BARBARA", "BARBARIANS", "BARBARIC", "BARBARISM", "BARBAROSSA", "BARBECUE", "BARBED", "BARBER", "BARBS", "BARCELONA", "BARCLAY", "BARCLAYS", "BARE", "BAREFOOT", "BARELY", "BARGAIN", "BARGAINING", "BARGAINS", "BARGE", "BARGES", "BARIUM", "BARK", "BARKED", "BARKER", "BARKING", "BARLASTON", "BARLEY", "BARLOW", "BARMAID", "BARMAN", "BARMY", "BARN", "BARNARD", "BARNES", "BARNET", "BARNETT", "BARNEY", "BARNS", "BARNSLEY", "BAROMETER", "BARON", "BARONESS", "BARONET", "BARONS", "BAROQUE", "BARR", "BARRACKS", "BARRAGE", "BARRATT", "BARRED", "BARREL", "BARRELS", "BARREN", "BARRETT", "BARRICADES", "BARRIE", "BARRIER", "BARRIERS", "BARRISTER", "BARRISTERS", "BARROW", "BARRY", "BARS", "BART", "BARTH", "BARTHES", "BARTHOLOMEW", "BARTLETT", "BARTON", "BASAL", "BASE", "BASEBALL", "BASED", "BASELINE", "BASEMENT", "BASES", "BASH", "BASIC", "BASICALLY", "BASICS", "BASIL", "BASILDON", "BASILICA", "BASIN", "BASING", "BASINGSTOKE", "BASINS", "BASIS", "BASKET", "BASKETBALL", "BASKETS", "BASQUE", "BASS", "BASSES", "BASSETT", "BASSIST", "BASTARD", "BASTARDS", "BASTION", "BAT", "BATCH", "BATCHES", "BATES", "BATH", "BATHED", "BATHING", "BATHROOM", "BATHROOMS", "BATHS", "BATHSHEBA", "BATON", "BATS", "BATSMAN", "BATSMEN", "BATTALION", "BATTALIONS", "BATTEN", "BATTERED", "BATTERIES", "BATTERSEA", "BATTERY", "BATTING", "BATTLE", "BATTLED", "BATTLEFIELD", "BATTLEMENTS", "BATTLES", "BATTLING", "BATTY", "BAVARIA", "BAVARIAN", "BAXTER", "BAY", "BAYS", "BAZAAR", "BCCI", "BEACH", "BEACHES", "BEACON", "BEAD", "BEADS", "BEAK", "BEAKER", "BEAM", "BEAMED", "BEAMING", "BEAMS", "BEAN", "BEANS", "BEAR", "BEARABLE", "BEARD", "BEARDED", "BEARDS", "BEARER", "BEARERS", "BEARING", "BEARINGS", "BEARS", "BEAST", "BEASTLY", "BEASTS", "BEAT", "BEATEN", "BEATING", "BEATINGS", "BEATLES", "BEATON", "BEATRICE", "BEATRIX", "BEATS", "BEATTIE", "BEATTY", "BEAUMONT", "BEAUTIES", "BEAUTIFUL", "BEAUTIFULLY", "BEAUTY", "BEAVERBROOK", "BEAVIS", "BECAME", "BECAUSE", "BECCARIA", "BECK", "BECKENHAM", "BECKER", "BECKETT", "BECKONED", "BECKY", "BECOME", "BECOMES", "BECOMING", "BED", "BEDCLOTHES", "BEDDING", "BEDE", "BEDFORD", "BEDFORDSHIRE", "BEDROCK", "BEDROOM", "BEDROOMS", "BEDS", "BEDSIDE", "BEDTIME", "BEE", "BEECH", "BEECHAM", "BEEF", "BEEN", "BEER", "BEERS", "BEES", "BEETHOVEN", "BEETLE", "BEETLES", "BEFORE", "BEFOREHAND", "BEG", "BEGAN", "BEGGAR", "BEGGARS", "BEGGED", "BEGGING", "BEGIN", "BEGINNER", "BEGINNERS", "BEGINNING", "BEGINNINGS", "BEGINS", "BEGS", "BEGUN", "BEHALF", "BEHAVE", "BEHAVED", "BEHAVES", "BEHAVING", "BEHAVIOUR", "BEHAVIOURAL", "BEHAVIOURS", "BEHEST", "BEHIND", "BEIGE", "BEIJING", "BEING", "BEINGS", "BEIRUT", "BELATED", "BELATEDLY", "BELEAGUERED", "BELFAST", "BELGIAN", "BELGIUM", "BELGRADE", "BELIEF", "BELIEFS", "BELIEVE", "BELIEVED", "BELIEVER", "BELIEVERS", "BELIEVES", "BELIEVING", "BELINDA", "BELL", "BELLA", "BELLE", "BELLIES", "BELLOWED", "BELLS", "BELLY", "BELMONT", "BELONG", "BELONGED", "BELONGING", "BELONGINGS", "BELONGS", "BELOVED", "BELOW", "BELT", "BELTS", "BELVILLE", "BEMUSED", "BEN", "BENCH", "BENCHES", "BENCHMARK", "BEND", "BENDING", "BENDS", "BENEATH", "BENEDICT", "BENEDICTA", "BENEFACTOR", "BENEFACTORS", "BENEFICIAL", "BENEFICIARIES", "BENEFICIARY", "BENEFIT", "BENEFITED", "BENEFITING", "BENEFITS", "BENEVOLENCE", "BENEVOLENT", "BENGAL", "BENIGN", "BENIN", "BENJAMIN", "BENN", "BENNETT", "BENNY", "BENSON", "BENT", "BENTHAM", "BENTLEY", "BENTON", "BENZENE", "BEQUEST", "BEQUESTS", "BEREAVED", "BEREAVEMENT", "BEREFT", "BERESFORD", "BERG", "BERGER", "BERKELEY", "BERKS", "BERKSHIRE", "BERLIN", "BERMUDA", "BERNARD", "BERNHARD", "BERNICE", "BERNIE", "BERNSTEIN", "BERRIES", "BERRY", "BERT", "BERTH", "BERTHA", "BERTIE", "BERTRAND", "BERWICK", "BERYL", "BESET", "BESIDE", "BESIDES", "BESIEGED", "BESSIE", "BEST", "BET", "BETA", "BETH", "BETHLEHEM", "BETRAY", "BETRAYAL", "BETRAYED", "BETRAYING", "BETS", "BETSY", "BETTER", "BETTING", "BETTY", "BETWEEN", "BEUNO", "BEVAN", "BEVERIDGE", "BEVERLEY", "BEVERLY", "BEVIN", "BEWARE", "BEWILDERED", "BEWILDERMENT", "BEYOND", "BFGF", "BIAS", "BIASED", "BIASES", "BIBLE", "BIBLES", "BIBLICAL", "BIBLIOGRAPHIC", "BIBLIOGRAPHICAL", "BIBLIOGRAPHIES", "BIBLIOGRAPHY", "BICARBONATE", "BICESTER", "BICKER", "BICYCLE", "BICYCLES", "BID", "BIDDER", "BIDDERS", "BIDDING", "BIDDY", "BIDS", "BIFF", "BIG", "BIGGER", "BIGGEST", "BIGWIG", "BIKE", "BIKES", "BIKINI", "BILATERAL", "BILBAO", "BILE", "BILIARY", "BILINGUAL", "BILL", "BILLED", "BILLIE", "BILLINGHAM", "BILLION", "BILLIONS", "BILLS", "BILLY", "BIN", "BINARY", "BIND", "BINDER", "BINDING", "BINDINGS", "BINDS", "BINGHAM", "BINGO", "BINOCULAR", "BINOCULARS", "BINS", "BIOCHEMICAL", "BIOCHEMISTRY", "BIOGRAPHER", "BIOGRAPHICAL", "BIOGRAPHIES", "BIOGRAPHY", "BIOLOGICAL", "BIOLOGICALLY", "BIOLOGIST", "BIOLOGISTS", "BIOLOGY", "BIOMASS", "BIOPSIES", "BIOPSY", "BIOTECHNOLOGY", "BIRCH", "BIRD", "BIRDIE", "BIRDIES", "BIRDS", "BIRK", "BIRKENHEAD", "BIRMINGHAM", "BIRT", "BIRTH", "BIRTHDAY", "BIRTHDAYS", "BIRTHPLACE", "BIRTHS", "BISCUIT", "BISCUITS", "BISHOP", "BISHOPRIC", "BISHOPS", "BIT", "BITCH", "BITE", "BITES", "BITING", "BITS", "BITTEN", "BITTER", "BITTERLY", "BITTERNESS", "BIZARRE", "BLACK", "BLACKBIRD", "BLACKBOARD", "BLACKBURN", "BLACKENED", "BLACKFRIARS", "BLACKMAIL", "BLACKNESS", "BLACKOUT", "BLACKPOOL", "BLACKS", "BLACKSMITH", "BLACKWELL", "BLADDER", "BLADE", "BLADES", "BLAH", "BLAIR", "BLAKE", "BLAKEY", "BLAME", "BLAMED", "BLAMES", "BLAMING", "BLANC", "BLANCHE", "BLAND", "BLANDFORD", "BLANDLY", "BLANK", "BLANKET", "BLANKETS", "BLANKLY", "BLANKS", "BLASPHEMY", "BLAST", "BLASTED", "BLASTING", "BLATANT", "BLATANTLY", "BLAZE", "BLAZED", "BLAZER", "BLAZING", "BLEACH", "BLEAK", "BLEAKLY", "BLEED", "BLEEDING", "BLEND", "BLENDING", "BLENHEIM", "BLESS", "BLESSED", "BLESSING", "BLESSINGS", "BLETCHLEY", "BLEW", "BLIGHT", "BLIMEY", "BLIND", "BLINDED", "BLINDLY", "BLINDNESS", "BLINDS", "BLINKED", "BLISS", "BLISSFUL", "BLISSFULLY", "BLISTERS", "BLITHELY", "BLITZ", "BLIZZARD", "BLOB", "BLOC", "BLOCK", "BLOCKADE", "BLOCKAGE", "BLOCKBUSTER", "BLOCKED", "BLOCKING", "BLOCKS", "BLOCS", "BLOKE", "BLOKES", "BLOND", "BLONDE", "BLONDEL", "BLOOD", "BLOODSHED", "BLOODSTAINED", "BLOODSTREAM", "BLOODY", "BLOOM", "BLOOMING", "BLOOMS", "BLOOMSBURY", "BLOSSOM", "BLOT", "BLOUSE", "BLOW", "BLOWING", "BLOWN", "BLOWS", "BLUE", "BLUEPRINT", "BLUES", "BLUFF", "BLUNDER", "BLUNT", "BLUNTLY", "BLUR", "BLURRED", "BLURTED", "BLUSH", "BLUSHED", "BLUSHING", "BLYTH", "BNFL", "BOAR", "BOARD", "BOARDED", "BOARDERS", "BOARDING", "BOARDROOM", "BOARDS", "BOAST", "BOASTED", "BOASTING", "BOASTS", "BOAT", "BOATS", "BOB", "BOBBIE", "BOBBING", "BOBBY", "BODICE", "BODIE", "BODIES", "BODILY", "BODO", "BODY", "BODYGUARD", "BODYGUARDS", "BOEING", "BOER", "BOG", "BOGEY", "BOGIES", "BOGS", "BOGUS", "BOHEMIA", "BOHEMIAN", "BOIL", "BOILED", "BOILER", "BOILERS", "BOILING", "BOISTEROUS", "BOLD", "BOLDER", "BOLDLY", "BOLDWOOD", "BOLIVIA", "BOLIVIAN", "BOLLOCKS", "BOLOGNA", "BOLSHEVIK", "BOLSHEVIKS", "BOLSTER", "BOLT", "BOLTED", "BOLTON", "BOLTS", "BOMB", "BOMBARDED", "BOMBARDMENT", "BOMBAY", "BOMBED", "BOMBER", "BOMBERS", "BOMBING", "BOMBINGS", "BOMBS", "BONANZA", "BONAR", "BOND", "BONDAGE", "BONDS", "BONE", "BONES", "BONFIRE", "BONFIRES", "BONINGTON", "BONN", "BONNET", "BONNIE", "BONUS", "BONUSES", "BONY", "BOOK", "BOOKCASE", "BOOKED", "BOOKER", "BOOKIES", "BOOKING", "BOOKINGS", "BOOKLET", "BOOKLETS", "BOOKMAKERS", "BOOKS", "BOOKSELLER", "BOOKSELLERS", "BOOKSHOP", "BOOKSHOPS", "BOOM", "BOOMED", "BOOMING", "BOON", "BOOST", "BOOSTED", "BOOSTER", "BOOSTING", "BOOT", "BOOTH", "BOOTHS", "BOOTLE", "BOOTS", "BOOTY", "BOOZE", "BORDEAUX", "BORDER", "BORDERING", "BORDERLINE", "BORDERS", "BORE", "BORED", "BOREDOM", "BOREHOLE", "BOREHOLES", "BORING", "BORIS", "BORLAND", "BORN", "BORNE", "BORO", "BOROUGH", "BOROUGHS", "BORROW", "BORROWED", "BORROWER", "BORROWERS", "BORROWING", "BORROWINGS", "BOSNIA", "BOSNIAN", "BOSOM", "BOSS", "BOSSES", "BOSSY", "BOSTON", "BOSWELL", "BOTANIC", "BOTANICAL", "BOTANIST", "BOTANY", "BOTH", "BOTHA", "BOTHAM", "BOTHER", "BOTHERED", "BOTHERING", "BOTHERS", "BOTHWELL", "BOTSWANA", "BOTTLE", "BOTTLED", "BOTTLES", "BOTTOM", "BOTTOMLEY", "BOTTOMS", "BOUGHT", "BOULDER", "BOULDERS", "BOULOGNE", "BOUNCE", "BOUNCED", "BOUNCER", "BOUNCING", "BOUNCY", "BOUND", "BOUNDARIES", "BOUNDARY", "BOUNDED", "BOUNDS", "BOUNTY", "BOUQUET", "BOURDIEU", "BOURGEOIS", "BOURGEOISIE", "BOURNE", "BOURNEMOUTH", "BOUT", "BOUTIQUE", "BOUTS", "BOVINE", "BOW", "BOWE", "BOWED", "BOWEL", "BOWELS", "BOWEN", "BOWES", "BOWIE", "BOWING", "BOWL", "BOWLED", "BOWLER", "BOWLERS", "BOWLES", "BOWLING", "BOWLS", "BOWS", "BOX", "BOXER", "BOXERS", "BOXES", "BOXING", "BOY", "BOYCOTT", "BOYD", "BOYFRIEND", "BOYFRIENDS", "BOYHOOD", "BOYISH", "BOYLE", "BOYS", "BRA", "BRACE", "BRACED", "BRACELET", "BRACELETS", "BRACES", "BRACING", "BRACKEN", "BRACKET", "BRACKETS", "BRACKISH", "BRACKNELL", "BRAD", "BRADBURY", "BRADFORD", "BRADLEY", "BRADSHAW", "BRADY", "BRAGG", "BRAHMS", "BRAID", "BRAIN", "BRAINCHILD", "BRAINS", "BRAINTREE", "BRAITHWAITE", "BRAKE", "BRAKES", "BRAMBLES", "BRAMPTON", "BRAN", "BRANCH", "BRANCHES", "BRAND", "BRANDED", "BRANDISHING", "BRANDO", "BRANDON", "BRANDS", "BRANDT", "BRANDY", "BRANSON", "BRAQUE", "BRAS", "BRASH", "BRASS", "BRAVADO", "BRAVE", "BRAVELY", "BRAVERY", "BRAWL", "BRAY", "BRAZIL", "BRAZILIAN", "BREACH", "BREACHED", "BREACHES", "BREAD", "BREADTH", "BREAK", "BREAKAGE", "BREAKAWAY", "BREAKDOWN", "BREAKDOWNS", "BREAKERS", "BREAKFAST", "BREAKFASTS", "BREAKING", "BREAKS", "BREAKTHROUGH", "BREAM", "BREAST", "BREASTS", "BREATH", "BREATHE", "BREATHED", "BREATHING", "BREATHLESS", "BREATHLESSLY", "BREATHS", "BREATHTAKING", "BRECON", "BRED", "BREECHES", "BREED", "BREEDER", "BREEDERS", "BREEDING", "BREEDS", "BREEZE", "BREMEN", "BRENDA", "BRENDAN", "BRENNAN", "BRENT", "BRENTFORD", "BRETHREN", "BRETT", "BREVITY", "BREW", "BREWER", "BREWERIES", "BREWERS", "BREWERY", "BREWING", "BREZHNEV", "BRIAN", "BRIANT", "BRIBE", "BRIBERY", "BRIBES", "BRICK", "BRICKS", "BRICKWORK", "BRIDAL", "BRIDE", "BRIDEGROOM", "BRIDES", "BRIDESMAID", "BRIDESMAIDS", "BRIDGE", "BRIDGEND", "BRIDGES", "BRIDGET", "BRIDLE", "BRIEF", "BRIEFCASE", "BRIEFED", "BRIEFING", "BRIEFINGS", "BRIEFLY", "BRIEFS", "BRIGADE", "BRIGADIER", "BRIGGS", "BRIGHT", "BRIGHTEN", "BRIGHTER", "BRIGHTEST", "BRIGHTLY", "BRIGHTNESS", "BRIGHTON", "BRILLIANCE", "BRILLIANT", "BRILLIANTLY", "BRIM", "BRIMMING", "BRINE", "BRING", "BRINGING", "BRINGS", "BRINK", "BRISBANE", "BRISK", "BRISKLY", "BRISTOL", "BRITAIN", "BRITANNIA", "BRITISH", "BRITON", "BRITONS", "BRITS", "BRITTANY", "BRITTEN", "BRITTLE", "BRIXTON", "BROAD", "BROADCAST", "BROADCASTER", "BROADCASTERS", "BROADCASTING", "BROADCASTS", "BROADEN", "BROADENED", "BROADENING", "BROADER", "BROADEST", "BROADLY", "BROADWAY", "BROCCOLI", "BROCHURE", "BROCHURES", "BROKE", "BROKEN", "BROKER", "BROKERS", "BROMLEY", "BROMPTON", "BROMWICH", "BRONCHITIS", "BRONZE", "BRONZES", "BROOCH", "BROOCHES", "BROOD", "BROODING", "BROOK", "BROOKE", "BROOKLANDS", "BROOKLYN", "BROOKS", "BROOM", "BROS", "BROTH", "BROTHEL", "BROTHER", "BROTHERHOOD", "BROTHERS", "BROUGH", "BROUGHT", "BROUGHTON", "BROW", "BROWN", "BROWNE", "BROWNIE", "BROWNIES", "BROWNING", "BROWNLOW", "BROWS", "BROWSE", "BROWSING", "BRUCE", "BRUGES", "BRUISE", "BRUISED", "BRUISES", "BRUNEI", "BRUNEL", "BRUNO", "BRUNSWICK", "BRUNT", "BRUSH", "BRUSHED", "BRUSHES", "BRUSHING", "BRUSQUE", "BRUSQUELY", "BRUSSELS", "BRUTAL", "BRUTALITY", "BRUTALLY", "BRUTE", "BRUTUS", "BRYAN", "BRYCE", "BRYN", "BRYONY", "BUBBLE", "BUBBLES", "BUBBLING", "BUBBLY", "BUCHAN", "BUCHANAN", "BUCHAREST", "BUCK", "BUCKET", "BUCKETS", "BUCKINGHAM", "BUCKINGHAMSHIRE", "BUCKLE", "BUCKLEY", "BUCKS", "BUD", "BUDAPEST", "BUDDHISM", "BUDDHIST", "BUDDING", "BUDDY", "BUDGE", "BUDGET", "BUDGETARY", "BUDGETING", "BUDGETS", "BUDS", "BUENOS", "BUFFALO", "BUFFER", "BUFFERS", "BUFFET", "BUG", "BUGGER", "BUGGERS", "BUGGY", "BUGS", "BUILD", "BUILDER", "BUILDERS", "BUILDING", "BUILDINGS", "BUILDS", "BUILT", "BUKHARIN", "BULB", "BULBS", "BULGARIA", "BULGARIAN", "BULGE", "BULGING", "BULIMIA", "BULK", "BULKY", "BULL", "BULLET", "BULLETIN", "BULLETINS", "BULLETS", "BULLIED", "BULLION", "BULLS", "BULLY", "BULLYING", "BUM", "BUMP", "BUMPED", "BUMPER", "BUMPING", "BUMPS", "BUMPY", "BUN", "BUNCH", "BUNCHES", "BUNDESBANK", "BUNDESTAG", "BUNDLE", "BUNDLED", "BUNDLES", "BUNGALOW", "BUNGALOWS", "BUNK", "BUNKER", "BUNKERS", "BUNNY", "BUNS", "BUOYANCY", "BUOYANT", "BURDEN", "BURDENED", "BURDENS", "BUREAU", "BUREAUCRACIES", "BUREAUCRACY", "BUREAUCRATIC", "BUREAUCRATS", "BUREAUX", "BURFORD", "BURGER", "BURGERS", "BURGESS", "BURGH", "BURGLAR", "BURGLARIES", "BURGLARS", "BURGLARY", "BURGUNDY", "BURIAL", "BURIALS", "BURIED", "BURKE", "BURLINGTON", "BURMA", "BURMESE", "BURN", "BURNED", "BURNER", "BURNETT", "BURNHAM", "BURNING", "BURNLEY", "BURNS", "BURNT", "BURR", "BURROW", "BURROWS", "BURST", "BURSTING", "BURSTS", "BURT", "BURTON", "BURUN", "BURY", "BURYING", "BUS", "BUSES", "BUSH", "BUSHES", "BUSHY", "BUSIED", "BUSIER", "BUSIEST", "BUSILY", "BUSINESS", "BUSINESSES", "BUSINESSLIKE", "BUSINESSMAN", "BUSINESSMEN", "BUST", "BUSTLE", "BUSTLED", "BUSY", "BUT", "BUTCHER", "BUTCHERS", "BUTLER", "BUTT", "BUTTER", "BUTTERFLIES", "BUTTERFLY", "BUTTERWORTH", "BUTTOCKS", "BUTTON", "BUTTONS", "BUTTRESS", "BUXTON", "BUY", "BUYER", "BUYERS", "BUYING", "BUYOUT", "BUYS", "BUZZ", "BUZZARD", "BUZZING", "BYE", "BYGONE", "BYPASS", "BYRD", "BYRNE", "BYRON", "BYTE", "BYTES", "BYZANTINE", "CAB", "CABARET", "CABBAGE", "CABBAGES", "CABIN", "CABINET", "CABINETS", "CABINS", "CABLE", "CABLES", "CACHE", "CAD", "CADBURY", "CADDIE", "CADET", "CADETS", "CADFAEL", "CADMIUM", "CADRES", "CAERNARFON", "CAESAR", "CAESAREAN", "CAFE", "CAFES", "CAFETERIA", "CAGE", "CAGES", "CAIN", "CAINE", "CAIRN", "CAIRNS", "CAIRO", "CAITHNESS", "CAKE", "CAKES", "CALAIS", "CALAMITY", "CALCITE", "CALCIUM", "CALCULATE", "CALCULATED", "CALCULATES", "CALCULATING", "CALCULATION", "CALCULATIONS", "CALCULATOR", "CALCULATORS", "CALCULUS", "CALCUTTA", "CALDER", "CALDWELL", "CALEDONIAN", "CALENDAR", "CALENDARS", "CALF", "CALIBRATION", "CALIBRE", "CALIFORNIA", "CALIFORNIAN", "CALL", "CALLAGHAN", "CALLED", "CALLER", "CALLERS", "CALLING", "CALLOUS", "CALLS", "CALM", "CALMED", "CALMER", "CALMING", "CALMLY", "CALORIE", "CALORIES", "CALVES", "CALVIN", "CAM", "CAMARADERIE", "CAMBERWELL", "CAMBODIA", "CAMBODIAN", "CAMBRIAN", "CAMBRIDGE", "CAMBRIDGESHIRE", "CAMCORDER", "CAMDEN", "CAME", "CAMEL", "CAMELS", "CAMERA", "CAMERAMAN", "CAMERAS", "CAMERON", "CAMEROON", "CAMILLA", "CAMILLE", "CAMOUFLAGE", "CAMP", "CAMPAIGN", "CAMPAIGNED", "CAMPAIGNER", "CAMPAIGNERS", "CAMPAIGNING", "CAMPAIGNS", "CAMPBELL", "CAMPING", "CAMPS", "CAMPSITE", "CAMPUS", "CAN", "CANADA", "CANADIAN", "CANADIANS", "CANAL", "CANALS", "CANARIES", "CANARY", "CANBERRA", "CANCEL", "CANCELLATION", "CANCELLED", "CANCELLING", "CANCER", "CANCERS", "CANDID", "CANDIDACY", "CANDIDATE", "CANDIDATES", "CANDLE", "CANDLELIGHT", "CANDLES", "CANDY", "CANE", "CANES", "CANINE", "CANNABIS", "CANNED", "CANNES", "CANNON", "CANNONS", "CANNY", "CANOE", "CANOEING", "CANOES", "CANON", "CANONICAL", "CANONS", "CANOPY", "CANS", "CANTEEN", "CANTERBURY", "CANTONA", "CANVAS", "CANVASES", "CANYON", "CAP", "CAPABILITIES", "CAPABILITY", "CAPABLE", "CAPACITANCE", "CAPACITIES", "CAPACITOR", "CAPACITY", "CAPE", "CAPEL", "CAPITAL", "CAPITALISATION", "CAPITALISE", "CAPITALISM", "CAPITALIST", "CAPITALISTS", "CAPITALS", "CAPITATION", "CAPPED", "CAPPING", "CAPRI", "CAPRICIOUS", "CAPRICORN", "CAPS", "CAPSULE", "CAPSULES", "CAPT", "CAPTAIN", "CAPTAINCY", "CAPTAINS", "CAPTION", "CAPTIONS", "CAPTIVE", "CAPTIVES", "CAPTIVITY", "CAPTURE", "CAPTURED", "CAPTURES", "CAPTURING", "CAR", "CARA", "CARACAS", "CARAT", "CARAVAN", "CARAVANS", "CARBOHYDRATE", "CARBOHYDRATES", "CARBON", "CARBONATE", "CARBONATES", "CARBONIFEROUS", "CARCASS", "CARCINOMA", "CARCINOMAS", "CARD", "CARDBOARD", "CARDIAC", "CARDIFF", "CARDIGAN", "CARDINAL", "CARDINALS", "CARDIOVASCULAR", "CARDS", "CARE", "CARED", "CAREER", "CAREERS", "CAREFREE", "CAREFUL", "CAREFULLY", "CARELESS", "CARELESSLY", "CARELESSNESS", "CARER", "CARERS", "CARES", "CARESS", "CARESSED", "CARESSING", "CARETAKER", "CAREW", "CAREY", "CARGO", "CARGOES", "CARIBBEAN", "CARICATURE", "CARING", "CARL", "CARLA", "CARLING", "CARLISLE", "CARLO", "CARLOS", "CARLTON", "CARMEL", "CARMEN", "CARMICHAEL", "CARNAGE", "CARNATIONS", "CARNIVAL", "CARNIVORES", "CARO", "CAROL", "CAROLE", "CAROLINA", "CAROLINE", "CAROLINGIAN", "CAROLYN", "CARP", "CARPENTER", "CARPENTERS", "CARPET", "CARPETS", "CARR", "CARRIAGE", "CARRIAGES", "CARRIAGEWAY", "CARRICK", "CARRIE", "CARRIED", "CARRIER", "CARRIERS", "CARRIES", "CARRINGTON", "CARROLL", "CARROT", "CARROTS", "CARRY", "CARRYING", "CARS", "CARSON", "CART", "CARTEL", "CARTELS", "CARTER", "CARTESIAN", "CARTON", "CARTONS", "CARTOON", "CARTOONS", "CARTRIDGE", "CARTRIDGES", "CARTS", "CARVE", "CARVED", "CARVING", "CARVINGS", "CASA", "CASCADE", "CASE", "CASES", "CASEY", "CASH", "CASHIER", "CASHMERE", "CASING", "CASINO", "CASKET", "CASPAR", "CASSEROLE", "CASSETTE", "CASSETTES", "CASSIE", "CAST", "CASTE", "CASTER", "CASTILE", "CASTING", "CASTLE", "CASTLEFORD", "CASTLES", "CASTRO", "CASTS", "CASUAL", "CASUALLY", "CASUALTIES", "CASUALTY", "CAT", "CATALOGUE", "CATALOGUES", "CATALONIA", "CATALYST", "CATALYSTS", "CATALYTIC", "CATAPULT", "CATASTROPHE", "CATASTROPHIC", "CATCH", "CATCHES", "CATCHING", "CATCHMENT", "CATEGORICAL", "CATEGORICALLY", "CATEGORIES", "CATEGORISED", "CATEGORY", "CATER", "CATERED", "CATERER", "CATERERS", "CATERING", "CATERPILLAR", "CATERPILLARS", "CATERS", "CATFISH", "CATHEDRAL", "CATHEDRALS", "CATHERINE", "CATHETER", "CATHOLIC", "CATHOLICISM", "CATHOLICS", "CATHY", "CATS", "CATTERICK", "CATTLE", "CATWALK", "CAUCASUS", "CAUGHT", "CAULDRON", "CAUSAL", "CAUSALITY", "CAUSATION", "CAUSE", "CAUSED", "CAUSES", "CAUSEWAY", "CAUSING", "CAUSTIC", "CAUTION", "CAUTIONED", "CAUTIOUS", "CAUTIOUSLY", "CAVALIER", "CAVALRY", "CAVE", "CAVEAT", "CAVENDISH", "CAVERN", "CAVERNOUS", "CAVES", "CAVITIES", "CAVITY", "CDNA", "CEASE", "CEASED", "CEASEFIRE", "CEASELESS", "CEASES", "CEASING", "CEAUSESCU", "CECIL", "CECILIA", "CEDAR", "CEDRIC", "CEGB", "CEILING", "CEILINGS", "CELEBRATE", "CELEBRATED", "CELEBRATES", "CELEBRATING", "CELEBRATION", "CELEBRATIONS", "CELEBRATORY", "CELEBRITIES", "CELEBRITY", "CELERY", "CELESTIAL", "CELIA", "CELIBACY", "CELL", "CELLAR", "CELLARS", "CELLO", "CELLS", "CELLULAR", "CELLULITE", "CELLULOSE", "CELTIC", "CELTS", "CEMENT", "CEMETERIES", "CEMETERY", "CENSORSHIP", "CENSURE", "CENSUS", "CENTENARY", "CENTER", "CENTIMETRE", "CENTIMETRES", "CENTRAL", "CENTRALISATION", "CENTRALISED", "CENTRALITY", "CENTRALIZATION", "CENTRALIZED", "CENTRALLY", "CENTRE", "CENTRED", "CENTREPIECE", "CENTRES", "CENTRIST", "CENTS", "CENTURIES", "CENTURY", "CERAMIC", "CERAMICS", "CEREAL", "CEREALS", "CEREBRAL", "CEREMONIAL", "CEREMONIES", "CEREMONY", "CERT", "CERTAIN", "CERTAINLY", "CERTAINTIES", "CERTAINTY", "CERTIFICATE", "CERTIFICATES", "CERTIFICATION", "CERTIFIED", "CERVICAL", "CESSATION", "CETACEANS", "CEYLON", "CFCS", "CHAD", "CHADWICK", "CHAGRIN", "CHAIN", "CHAINS", "CHAIR", "CHAIRED", "CHAIRMAN", "CHAIRMANSHIP", "CHAIRMEN", "CHAIRPERSON", "CHAIRS", "CHALET", "CHALK", "CHALKER", "CHALLENGE", "CHALLENGED", "CHALLENGER", "CHALLENGERS", "CHALLENGES", "CHALLENGING", "CHALMERS", "CHAMBER", "CHAMBERLAIN", "CHAMBERS", "CHAMPAGNE", "CHAMPION", "CHAMPIONS", "CHAMPIONSHIP", "CHAMPIONSHIPS", "CHAN", "CHANCE", "CHANCEL", "CHANCELLOR", "CHANCERY", "CHANCES", "CHANDELIERS", "CHANDLER", "CHANG", "CHANGE", "CHANGED", "CHANGEOVER", "CHANGES", "CHANGEZ", "CHANGING", "CHANNEL", "CHANNELLED", "CHANNELS", "CHANT", "CHANTED", "CHANTING", "CHANTS", "CHAOS", "CHAOTIC", "CHAP", "CHAPEL", "CHAPELS", "CHAPLAIN", "CHAPLIN", "CHAPMAN", "CHAPS", "CHAPTER", "CHAPTERS", "CHARACTER", "CHARACTERISATION", "CHARACTERISE", "CHARACTERISED", "CHARACTERISES", "CHARACTERISTIC", "CHARACTERISTICALLY", "CHARACTERISTICS", "CHARACTERIZATION", "CHARACTERIZE", "CHARACTERIZED", "CHARACTERIZES", "CHARACTERS", "CHARADE", "CHARCOAL", "CHARGE", "CHARGEABLE", "CHARGED", "CHARGES", "CHARGING", "CHARING", "CHARIOT", "CHARISMA", "CHARISMATIC", "CHARITABLE", "CHARITIES", "CHARITY", "CHARLEMAGNE", "CHARLES", "CHARLEY", "CHARLIE", "CHARLOTTE", "CHARLTON", "CHARM", "CHARMING", "CHARMS", "CHARRED", "CHART", "CHARTER", "CHARTERED", "CHARTERS", "CHARTS", "CHASE", "CHASED", "CHASING", "CHASM", "CHASSIS", "CHASTE", "CHASTITY", "CHAT", "CHATEAU", "CHATHAM", "CHATICHAI", "CHATTED", "CHATTER", "CHATTERTON", "CHATTING", "CHAUCER", "CHAUFFEUR", "CHEAP", "CHEAPER", "CHEAPEST", "CHEAPLY", "CHEAT", "CHEATED", "CHEATING", "CHECK", "CHECKED", "CHECKING", "CHECKLIST", "CHECKS", "CHEEK", "CHEEKBONES", "CHEEKS", "CHEEKY", "CHEER", "CHEERED", "CHEERFUL", "CHEERFULLY", "CHEERFULNESS", "CHEERING", "CHEERIO", "CHEERS", "CHEERY", "CHEESE", "CHEESES", "CHEF", "CHEFS", "CHELMSFORD", "CHELSEA", "CHELTENHAM", "CHEMICAL", "CHEMICALLY", "CHEMICALS", "CHEMIST", "CHEMISTRY", "CHEMISTS", "CHEMOTHERAPY", "CHEN", "CHENEY", "CHEPSTOW", "CHEQUE", "CHEQUES", "CHERISHED", "CHERNOBYL", "CHERRIES", "CHERRY", "CHERYL", "CHESARYNTH", "CHESHIRE", "CHESS", "CHEST", "CHESTER", "CHESTERFIELD", "CHESTNUT", "CHESTNUTS", "CHESTS", "CHEW", "CHEWED", "CHEWING", "CHI", "CHIANG", "CHIC", "CHICAGO", "CHICHESTER", "CHICK", "CHICKEN", "CHICKENS", "CHICKS", "CHIEF", "CHIEFLY", "CHIEFS", "CHIFFON", "CHILD", "CHILDBIRTH", "CHILDCARE", "CHILDEBERT", "CHILDHOOD", "CHILDISH", "CHILDLESS", "CHILDLIKE", "CHILDREN", "CHILE", "CHILEAN", "CHILL", "CHILLED", "CHILLI", "CHILLY", "CHIMNEY", "CHIMNEYS", "CHIMPANZEE", "CHIMPANZEES", "CHIN", "CHINA", "CHINESE", "CHIP", "CHIPPED", "CHIPPING", "CHIPS", "CHISEL", "CHISWICK", "CHIVALRY", "CHLORIDE", "CHLORINE", "CHOCOLATE", "CHOCOLATES", "CHOICE", "CHOICES", "CHOIR", "CHOIRS", "CHOKE", "CHOKED", "CHOKING", "CHOLANGITIS", "CHOLECYSTECTOMY", "CHOLERA", "CHOLESTEROL", "CHOMSKY", "CHOOSE", "CHOOSES", "CHOOSING", "CHOP", "CHOPIN", "CHOPPED", "CHOPPING", "CHOPS", "CHORAL", "CHORD", "CHORDS", "CHORE", "CHOREOGRAPHER", "CHOREOGRAPHERS", "CHOREOGRAPHY", "CHORES", "CHORLEY", "CHORUS", "CHOSE", "CHOSEN", "CHRIS", "CHRISSIE", "CHRISSY", "CHRIST", "CHRISTABEL", "CHRISTCHURCH", "CHRISTENDOM", "CHRISTIAN", "CHRISTIANITY", "CHRISTIANS", "CHRISTIE", "CHRISTINA", "CHRISTINE", "CHRISTMAS", "CHRISTOPHER", "CHROMATIC", "CHROMATOGRAPHY", "CHROME", "CHROMOSOMAL", "CHROMOSOME", "CHROMOSOMES", "CHRONIC", "CHRONICALLY", "CHRONICLE", "CHRONICLER", "CHRONICLES", "CHRONOLOGICAL", "CHRONOLOGY", "CHUB", "CHUBBY", "CHUCK", "CHUCKLE", "CHUCKLED", "CHUM", "CHUNG", "CHUNK", "CHUNKS", "CHUNKY", "CHURCH", "CHURCHES", "CHURCHILL", "CHURCHMEN", "CHURCHYARD", "CHURNING", "CHUTE", "CICHLIDS", "CIDER", "CIGAR", "CIGARETTE", "CIGARETTES", "CIGARS", "CINDERELLA", "CINDY", "CINEMA", "CINEMAS", "CINEMATIC", "CINNAMON", "CIRCA", "CIRCLE", "CIRCLED", "CIRCLES", "CIRCLING", "CIRCUIT", "CIRCUITRY", "CIRCUITS", "CIRCULAR", "CIRCULARS", "CIRCULATE", "CIRCULATED", "CIRCULATING", "CIRCULATION", "CIRCUMCISION", "CIRCUMFERENCE", "CIRCUMSTANCE", "CIRCUMSTANCES", "CIRCUMSTANTIAL", "CIRCUMVENT", "CIRCUS", "CIRENCESTER", "CIRRHOSIS", "CISSIE", "CISTERN", "CITADEL", "CITALIA", "CITATION", "CITATIONS", "CITE", "CITED", "CITES", "CITIES", "CITING", "CITIZEN", "CITIZENS", "CITIZENSHIP", "CITRUS", "CITY", "CIVIC", "CIVIL", "CIVILIAN", "CIVILIANS", "CIVILISATION", "CIVILISED", "CIVILIZATION", "CIVILIZATIONS", "CIVILIZED", "CLACTON", "CLAD", "CLADDING", "CLAIM", "CLAIMANT", "CLAIMANTS", "CLAIMED", "CLAIMING", "CLAIMS", "CLAIRE", "CLAMBERED", "CLAMOUR", "CLAMP", "CLAMPED", "CLAN", "CLANDESTINE", "CLANS", "CLAPHAM", "CLAPPED", "CLAPPING", "CLAPTON", "CLARA", "CLARE", "CLARENCE", "CLARET", "CLARIFICATION", "CLARIFIED", "CLARIFY", "CLARIFYING", "CLARINET", "CLARISSA", "CLARITY", "CLARK", "CLARKE", "CLARKSON", "CLASH", "CLASHED", "CLASHES", "CLASPED", "CLASPING", "CLASS", "CLASSED", "CLASSES", "CLASSIC", "CLASSICAL", "CLASSICALLY", "CLASSICS", "CLASSIFICATION", "CLASSIFICATIONS", "CLASSIFIED", "CLASSIFY", "CLASSLESS", "CLASSMATES", "CLASSROOM", "CLASSROOMS", "CLASSY", "CLATTER", "CLATTERED", "CLAUDE", "CLAUDEL", "CLAUDIA", "CLAUS", "CLAUSE", "CLAUSES", "CLAUSTROPHOBIC", "CLAW", "CLAWS", "CLAY", "CLAYS", "CLAYTON", "CLEAN", "CLEANED", "CLEANER", "CLEANERS", "CLEANING", "CLEANLINESS", "CLEANLY", "CLEANS", "CLEAR", "CLEARANCE", "CLEARED", "CLEARER", "CLEAREST", "CLEARING", "CLEARLY", "CLEARS", "CLEAVAGE", "CLEGG", "CLEMENT", "CLEMENTS", "CLENCHED", "CLEO", "CLEOPATRA", "CLERGY", "CLERGYMAN", "CLERGYMEN", "CLERIC", "CLERICAL", "CLERICS", "CLERK", "CLERKS", "CLEVELAND", "CLEVER", "CLEVERLY", "CLICK", "CLICKED", "CLICKING", "CLIENT", "CLIENTELE", "CLIENTS", "CLIFF", "CLIFFORD", "CLIFFS", "CLIFTON", "CLIMATE", "CLIMATES", "CLIMATIC", "CLIMAX", "CLIMB", "CLIMBED", "CLIMBER", "CLIMBERS", "CLIMBING", "CLIMBS", "CLINCH", "CLINCHED", "CLING", "CLINGING", "CLINIC", "CLINICAL", "CLINICALLY", "CLINICIANS", "CLINICS", "CLINT", "CLINTON", "CLIP", "CLIPBOARD", "CLIPPED", "CLIPS", "CLIVE", "CLOAK", "CLOAKROOM", "CLOCK", "CLOCKED", "CLOCKS", "CLOCKWISE", "CLOCKWORK", "CLONE", "CLONES", "CLOSE", "CLOSED", "CLOSELY", "CLOSENESS", "CLOSER", "CLOSES", "CLOSEST", "CLOSET", "CLOSING", "CLOSURE", "CLOSURES", "CLOTH", "CLOTHES", "CLOTHING", "CLOTHS", "CLOUD", "CLOUDS", "CLOUDY", "CLOUGH", "CLOUT", "CLOVE", "CLOVER", "CLOVES", "CLOVIS", "CLOWES", "CLOWN", "CLOWNS", "CLUB", "CLUBHOUSE", "CLUBS", "CLUE", "CLUES", "CLUMP", "CLUMPS", "CLUMSILY", "CLUMSY", "CLUNG", "CLUSTER", "CLUSTERS", "CLUTCH", "CLUTCHED", "CLUTCHES", "CLUTCHING", "CLUTTER", "CLWYD", "CLYDE", "CNAA", "CNUT", "COACH", "COACHES", "COACHING", "COAL", "COALFIELD", "COALFIELDS", "COALITION", "COALITIONS", "COALS", "COARSE", "COAST", "COASTAL", "COASTGUARD", "COASTLINE", "COASTS", "COAT", "COATED", "COATES", "COATING", "COATINGS", "COATS", "COB", "COBALT", "COBBLED", "COBBLES", "COBOL", "COBWEBS", "COCA", "COCAINE", "COCK", "COCKED", "COCKNEY", "COCKPIT", "COCKTAIL", "COCKY", "COCOA", "COCONUT", "COD", "CODE", "CODED", "CODES", "CODING", "COEFFICIENT", "COEFFICIENTS", "COELIAC", "COERCION", "COERCIVE", "COFFEE", "COFFERS", "COFFIN", "COFFINS", "COGNAC", "COGNITION", "COGNITIVE", "COHABITATION", "COHEN", "COHERENCE", "COHERENT", "COHESION", "COHESIVE", "COHORT", "COHORTS", "COIL", "COILS", "COIN", "COINAGE", "COINCIDE", "COINCIDED", "COINCIDENCE", "COINCIDENTAL", "COINCIDENTALLY", "COINCIDES", "COINCIDING", "COINED", "COINS", "COKE", "COL", "COLA", "COLCHESTER", "COLD", "COLDER", "COLDEST", "COLDLY", "COLDNESS", "COLDS", "COLE", "COLEMAN", "COLERAINE", "COLERIDGE", "COLI", "COLIC", "COLIN", "COLITIS", "COLLABORATE", "COLLABORATING", "COLLABORATION", "COLLABORATIVE", "COLLABORATORS", "COLLAGE", "COLLAGEN", "COLLAPSE", "COLLAPSED", "COLLAPSING", "COLLAR", "COLLARS", "COLLATERAL", "COLLEAGUE", "COLLEAGUES", "COLLECT", "COLLECTED", "COLLECTING", "COLLECTION", "COLLECTIONS", "COLLECTIVE", "COLLECTIVELY", "COLLECTIVISM", "COLLECTOR", "COLLECTORS", "COLLECTS", "COLLEGE", "COLLEGES", "COLLEGIATE", "COLLIDED", "COLLIE", "COLLIER", "COLLIERIES", "COLLIERY", "COLLINS", "COLLISION", "COLLISIONS", "COLLOQUIAL", "COLLOR", "COLLUSION", "COLOGNE", "COLOMBIA", "COLOMBIAN", "COLOMBO", "COLON", "COLONEL", "COLONIAL", "COLONIALISM", "COLONIC", "COLONIES", "COLONISATION", "COLONISTS", "COLONOSCOPY", "COLONY", "COLOR", "COLORADO", "COLORATION", "COLORECTAL", "COLOSSAL", "COLOUR", "COLOURED", "COLOURFUL", "COLOURING", "COLOURLESS", "COLOURS", "COLT", "COLTS", "COLUMBIA", "COLUMBUS", "COLUMN", "COLUMNIST", "COLUMNS", "COLWYN", "COMA", "COMB", "COMBAT", "COMBATIVE", "COMBINATION", "COMBINATIONS", "COMBINE", "COMBINED", "COMBINES", "COMBINING", "COMBO", "COMBUSTION", "COME", "COMEBACK", "COMEDIAN", "COMEDIANS", "COMEDIES", "COMEDY", "COMER", "COMES", "COMET", "COMFORT", "COMFORTABLE", "COMFORTABLY", "COMFORTED", "COMFORTING", "COMFORTS", "COMFY", "COMIC", "COMICAL", "COMICS", "COMING", "COMMA", "COMMAND", "COMMANDED", "COMMANDER", "COMMANDERS", "COMMANDING", "COMMANDMENTS", "COMMANDO", "COMMANDOS", "COMMANDS", "COMMAS", "COMMEMORATE", "COMMEMORATING", "COMMEMORATION", "COMMEMORATIVE", "COMMENCE", "COMMENCED", "COMMENCEMENT", "COMMENCES", "COMMENCING", "COMMEND", "COMMENDABLE", "COMMENDED", "COMMENSURATE", "COMMENT", "COMMENTARIES", "COMMENTARY", "COMMENTATOR", "COMMENTATORS", "COMMENTED", "COMMENTING", "COMMENTS", "COMMERCE", "COMMERCIAL", "COMMERCIALLY", "COMMERCIALS", "COMMISSION", "COMMISSIONED", "COMMISSIONER", "COMMISSIONERS", "COMMISSIONING", "COMMISSIONS", "COMMIT", "COMMITMENT", "COMMITMENTS", "COMMITS", "COMMITTAL", "COMMITTED", "COMMITTEE", "COMMITTEES", "COMMITTING", "COMMODITIES", "COMMODITY", "COMMON", "COMMONERS", "COMMONEST", "COMMONLY", "COMMONPLACE", "COMMONS", "COMMONSENSE", "COMMONWEALTH", "COMMOTION", "COMMUNAL", "COMMUNE", "COMMUNES", "COMMUNICATE", "COMMUNICATED", "COMMUNICATES", "COMMUNICATING", "COMMUNICATION", "COMMUNICATIONS", "COMMUNICATIVE", "COMMUNICATOR", "COMMUNICATORS", "COMMUNION", "COMMUNISM", "COMMUNIST", "COMMUNISTS", "COMMUNITIES", "COMMUNITY", "COMMUTER", "COMMUTERS", "COMPACT", "COMPACTS", "COMPANIES", "COMPANION", "COMPANIONS", "COMPANIONSHIP", "COMPANY", "COMPAQ", "COMPARABILITY", "COMPARABLE", "COMPARATIVE", "COMPARATIVELY", "COMPARE", "COMPARED", "COMPARES", "COMPARING", "COMPARISON", "COMPARISONS", "COMPARTMENT", "COMPARTMENTS", "COMPASS", "COMPASSION", "COMPASSIONATE", "COMPATIBILITY", "COMPATIBLE", "COMPEL", "COMPELLED", "COMPELLING", "COMPENSATE", "COMPENSATED", "COMPENSATION", "COMPENSATORY", "COMPETE", "COMPETED", "COMPETENCE", "COMPETENCES", "COMPETENT", "COMPETING", "COMPETITION", "COMPETITIONS", "COMPETITIVE", "COMPETITIVELY", "COMPETITIVENESS", "COMPETITOR", "COMPETITORS", "COMPILATION", "COMPILE", "COMPILED", "COMPILER", "COMPILERS", "COMPILING", "COMPLACENCY", "COMPLACENT", "COMPLAIN", "COMPLAINED", "COMPLAINING", "COMPLAINS", "COMPLAINT", "COMPLAINTS", "COMPLEMENT", "COMPLEMENTARY", "COMPLEMENTED", "COMPLETE", "COMPLETED", "COMPLETELY", "COMPLETENESS", "COMPLETES", "COMPLETING", "COMPLETION", "COMPLEX", "COMPLEXES", "COMPLEXION", "COMPLEXITIES", "COMPLEXITY", "COMPLIANCE", "COMPLICATE", "COMPLICATED", "COMPLICATION", "COMPLICATIONS", "COMPLICITY", "COMPLIED", "COMPLIES", "COMPLIMENT", "COMPLIMENTARY", "COMPLIMENTS", "COMPLY", "COMPLYING", "COMPONENT", "COMPONENTS", "COMPOSE", "COMPOSED", "COMPOSER", "COMPOSERS", "COMPOSING", "COMPOSITE", "COMPOSITION", "COMPOSITIONAL", "COMPOSITIONS", "COMPOSITORS", "COMPOST", "COMPOSURE", "COMPOUND", "COMPOUNDED", "COMPOUNDS", "COMPREHEND", "COMPREHENSIBLE", "COMPREHENSION", "COMPREHENSIVE", "COMPREHENSIVELY", "COMPRESSED", "COMPRESSION", "COMPRISE", "COMPRISED", "COMPRISES", "COMPRISING", "COMPROMISE", "COMPROMISED", "COMPROMISES", "COMPTON", "COMPULSION", "COMPULSIVE", "COMPULSORILY", "COMPULSORY", "COMPUTATION", "COMPUTATIONAL", "COMPUTED", "COMPUTER", "COMPUTERISED", "COMPUTERIZED", "COMPUTERS", "COMPUTING", "COMRADE", "COMRADES", "CON", "CONCAVE", "CONCEAL", "CONCEALED", "CONCEALING", "CONCEALS", "CONCEDE", "CONCEDED", "CONCEDES", "CONCEDING", "CONCEIVABLE", "CONCEIVABLY", "CONCEIVE", "CONCEIVED", "CONCENTRATE", "CONCENTRATED", "CONCENTRATES", "CONCENTRATING", "CONCENTRATION", "CONCENTRATIONS", "CONCENTRIC", "CONCEPT", "CONCEPTION", "CONCEPTIONS", "CONCEPTS", "CONCEPTUAL", "CONCEPTUALLY", "CONCERN", "CONCERNED", "CONCERNING", "CONCERNS", "CONCERT", "CONCERTED", "CONCERTO", "CONCERTOS", "CONCERTS", "CONCESSION", "CONCESSIONARY", "CONCESSIONS", "CONCHIS", "CONCILIATION", "CONCILIATORY", "CONCISE", "CONCLUDE", "CONCLUDED", "CONCLUDES", "CONCLUDING", "CONCLUSION", "CONCLUSIONS", "CONCLUSIVE", "CONCLUSIVELY", "CONCOMITANT", "CONCORDE", "CONCOURSE", "CONCRETE", "CONCURRENT", "CONCURRENTLY", "CONDEMN", "CONDEMNATION", "CONDEMNED", "CONDEMNING", "CONDEMNS", "CONDENSATION", "CONDENSED", "CONDITION", "CONDITIONAL", "CONDITIONED", "CONDITIONER", "CONDITIONING", "CONDITIONS", "CONDOM", "CONDOMS", "CONDUCIVE", "CONDUCT", "CONDUCTED", "CONDUCTING", "CONDUCTIVITY", "CONDUCTOR", "CONDUCTORS", "CONDUCTS", "CONDUIT", "CONE", "CONES", "CONFECTIONERY", "CONFEDERATION", "CONFER", "CONFERENCE", "CONFERENCES", "CONFERRED", "CONFERRING", "CONFERS", "CONFESS", "CONFESSED", "CONFESSES", "CONFESSION", "CONFESSIONS", "CONFIDE", "CONFIDED", "CONFIDENCE", "CONFIDENT", "CONFIDENTIAL", "CONFIDENTIALITY", "CONFIDENTLY", "CONFIGURATION", "CONFIGURATIONS", "CONFINE", "CONFINED", "CONFINEMENT", "CONFINES", "CONFINING", "CONFIRM", "CONFIRMATION", "CONFIRMED", "CONFIRMING", "CONFIRMS", "CONFISCATION", "CONFLICT", "CONFLICTING", "CONFLICTS", "CONFORM", "CONFORMATION", "CONFORMING", "CONFORMITY", "CONFORMS", "CONFRONT", "CONFRONTATION", "CONFRONTATIONS", "CONFRONTED", "CONFRONTING", "CONFRONTS", "CONFUSE", "CONFUSED", "CONFUSING", "CONFUSION", "CONFUSIONS", "CONGENIAL", "CONGENITAL", "CONGESTION", "CONGLOMERATE", "CONGLOMERATES", "CONGO", "CONGRATULATE", "CONGRATULATED", "CONGRATULATING", "CONGRATULATIONS", "CONGREGATION", "CONGREGATIONAL", "CONGREGATIONS", "CONGRESS", "CONGRESSIONAL", "CONICAL", "CONIFERS", "CONISTON", "CONJECTURE", "CONJUNCTION", "CONJURE", "CONJURED", "CONNECT", "CONNECTED", "CONNECTICUT", "CONNECTING", "CONNECTION", "CONNECTIONS", "CONNECTIVITY", "CONNECTOR", "CONNECTS", "CONNELL", "CONNELLY", "CONNIE", "CONNOISSEUR", "CONNOLLY", "CONNON", "CONNOR", "CONNORS", "CONNOTATION", "CONNOTATIONS", "CONQUER", "CONQUERED", "CONQUEROR", "CONQUEST", "CONQUESTS", "CONRAD", "CONS", "CONSCIENCE", "CONSCIENCES", "CONSCIENTIOUS", "CONSCIENTIOUSLY", "CONSCIOUS", "CONSCIOUSLY", "CONSCIOUSNESS", "CONSCRIPTION", "CONSCRIPTS", "CONSECRATION", "CONSECUTIVE", "CONSENSUAL", "CONSENSUS", "CONSENT", "CONSENTED", "CONSENTS", "CONSEQUENCE", "CONSEQUENCES", "CONSEQUENT", "CONSEQUENTIAL", "CONSEQUENTLY", "CONSERVANCY", "CONSERVATION", "CONSERVATIONISTS", "CONSERVATISM", "CONSERVATIVE", "CONSERVATIVES", "CONSERVATORY", "CONSERVE", "CONSIDER", "CONSIDERABLE", "CONSIDERABLY", "CONSIDERATE", "CONSIDERATION", "CONSIDERATIONS", "CONSIDERED", "CONSIDERING", "CONSIDERS", "CONSIGNED", "CONSIGNMENT", "CONSIST", "CONSISTED", "CONSISTENCY", "CONSISTENT", "CONSISTENTLY", "CONSISTING", "CONSISTS", "CONSOLATION", "CONSOLE", "CONSOLIDATE", "CONSOLIDATED", "CONSOLIDATING", "CONSOLIDATION", "CONSONANTS", "CONSORT", "CONSORTIUM", "CONSPICUOUS", "CONSPICUOUSLY", "CONSPIRACY", "CONSPIRATORIAL", "CONSPIRATORS", "CONSPIRING", "CONSTABLE", "CONSTABLES", "CONSTANCE", "CONSTANT", "CONSTANTINE", "CONSTANTINOPLE", "CONSTANTLY", "CONSTANTS", "CONSTANZA", "CONSTELLATION", "CONSTERNATION", "CONSTIPATION", "CONSTITUENCIES", "CONSTITUENCY", "CONSTITUENT", "CONSTITUENTS", "CONSTITUTE", "CONSTITUTED", "CONSTITUTES", "CONSTITUTING", "CONSTITUTION", "CONSTITUTIONAL", "CONSTITUTIONALLY", "CONSTITUTIONS", "CONSTITUTIVE", "CONSTRAIN", "CONSTRAINED", "CONSTRAINT", "CONSTRAINTS", "CONSTRUCT", "CONSTRUCTED", "CONSTRUCTING", "CONSTRUCTION", "CONSTRUCTIONS", "CONSTRUCTIVE", "CONSTRUCTIVELY", "CONSTRUCTS", "CONSTRUED", "CONSUL", "CONSULAR", "CONSULATE", "CONSULT", "CONSULTANCIES", "CONSULTANCY", "CONSULTANT", "CONSULTANTS", "CONSULTATION", "CONSULTATIONS", "CONSULTATIVE", "CONSULTED", "CONSULTING", "CONSUME", "CONSUMED", "CONSUMER", "CONSUMERISM", "CONSUMERS", "CONSUMING", "CONSUMPTION", "CONTACT", "CONTACTED", "CONTACTING", "CONTACTS", "CONTAGIOUS", "CONTAIN", "CONTAINED", "CONTAINER", "CONTAINERS", "CONTAINING", "CONTAINMENT", "CONTAINS", "CONTAMINATED", "CONTAMINATION", "CONTEMPLATE", "CONTEMPLATED", "CONTEMPLATING", "CONTEMPLATION", "CONTEMPLATIVE", "CONTEMPORARIES", "CONTEMPORARY", "CONTEMPT", "CONTEMPTUOUS", "CONTEMPTUOUSLY", "CONTEND", "CONTENDED", "CONTENDER", "CONTENDERS", "CONTENDS", "CONTENT", "CONTENTED", "CONTENTEDLY", "CONTENTION", "CONTENTIOUS", "CONTENTMENT", "CONTENTS", "CONTEST", "CONTESTANTS", "CONTESTED", "CONTESTING", "CONTESTS", "CONTEXT", "CONTEXTS", "CONTEXTUAL", "CONTIGUOUS", "CONTINENT", "CONTINENTAL", "CONTINENTS", "CONTINGENCIES", "CONTINGENCY", "CONTINGENT", "CONTINUAL", "CONTINUALLY", "CONTINUANCE", "CONTINUATION", "CONTINUE", "CONTINUED", "CONTINUES", "CONTINUING", "CONTINUITY", "CONTINUOUS", "CONTINUOUSLY", "CONTINUUM", "CONTOUR", "CONTOURS", "CONTRA", "CONTRACEPTION", "CONTRACEPTIVE", "CONTRACEPTIVES", "CONTRACT", "CONTRACTED", "CONTRACTING", "CONTRACTION", "CONTRACTIONS", "CONTRACTOR", "CONTRACTORS", "CONTRACTS", "CONTRACTUAL", "CONTRADICT", "CONTRADICTED", "CONTRADICTION", "CONTRADICTIONS", "CONTRADICTORY", "CONTRARY", "CONTRAS", "CONTRAST", "CONTRASTED", "CONTRASTING", "CONTRASTS", "CONTRAVENTION", "CONTRIBUTE", "CONTRIBUTED", "CONTRIBUTES", "CONTRIBUTING", "CONTRIBUTION", "CONTRIBUTIONS", "CONTRIBUTOR", "CONTRIBUTORS", "CONTRIBUTORY", "CONTRIVED", "CONTROL", "CONTROLLABLE", "CONTROLLED", "CONTROLLER", "CONTROLLERS", "CONTROLLING", "CONTROLS", "CONTROVERSIAL", "CONTROVERSIES", "CONTROVERSY", "CONURBATIONS", "CONVECTION", "CONVENE", "CONVENED", "CONVENER", "CONVENIENCE", "CONVENIENT", "CONVENIENTLY", "CONVENOR", "CONVENT", "CONVENTION", "CONVENTIONAL", "CONVENTIONALLY", "CONVENTIONS", "CONVERGENCE", "CONVERSATION", "CONVERSATIONAL", "CONVERSATIONS", "CONVERSELY", "CONVERSION", "CONVERSIONS", "CONVERT", "CONVERTED", "CONVERTER", "CONVERTERS", "CONVERTIBLE", "CONVERTING", "CONVERTS", "CONVEX", "CONVEY", "CONVEYANCE", "CONVEYANCER", "CONVEYED", "CONVEYING", "CONVEYOR", "CONVEYS", "CONVICT", "CONVICTED", "CONVICTION", "CONVICTIONS", "CONVINCE", "CONVINCED", "CONVINCING", "CONVINCINGLY", "CONVOCATION", "CONVOY", "CONVOYS", "CONVULSIONS", "CONWAY", "COOK", "COOKE", "COOKED", "COOKER", "COOKERS", "COOKERY", "COOKING", "COOKS", "COOL", "COOLED", "COOLER", "COOLING", "COOLLY", "COOLNESS", "COONEY", "COOPER", "COOPERATE", "COOPERATION", "COOPERATIVE", "COOPERS", "COORDINATE", "COORDINATED", "COORDINATES", "COORDINATION", "COORDINATOR", "COORDINATORS", "COP", "COPE", "COPED", "COPENHAGEN", "COPERNICAN", "COPIED", "COPIES", "COPING", "COPIOUS", "COPPER", "COPPERS", "COPS", "COPY", "COPYING", "COPYRIGHT", "CORAL", "CORALS", "CORBETT", "CORBY", "CORD", "CORDIAL", "CORDLESS", "CORDON", "CORDS", "CORDUROY", "CORES", "CORINTH", "CORINTHIAN", "CORINTHIANS", "CORK", "CORN", "CORNELIUS", "CORNELL", "CORNER", "CORNERS", "CORNERSTONE", "CORNFLAKES", "CORNISH", "CORNWALL", "COROLLARY", "CORONARY", "CORONATION", "CORONER", "CORP", "CORPORAL", "CORPORATE", "CORPORATION", "CORPORATIONS", "CORPORATISM", "CORPORATIST", "CORPS", "CORPSE", "CORPSES", "CORPUS", "CORRECT", "CORRECTED", "CORRECTING", "CORRECTION", "CORRECTIONS", "CORRECTIVE", "CORRECTLY", "CORRECTNESS", "CORRELATE", "CORRELATED", "CORRELATION", "CORRELATIONS", "CORRESPOND", "CORRESPONDENCE", "CORRESPONDENT", "CORRESPONDENTS", "CORRESPONDING", "CORRESPONDINGLY", "CORRESPONDS", "CORRIDOR", "CORRIDORS", "CORROSION", "CORROSIVE", "CORRUGATED", "CORRUPT", "CORRUPTION", "CORTEX", "CORTICAL", "COS", "COSE", "COSMETIC", "COSMETICS", "COSMIC", "COSMO", "COSMOLOGICAL", "COSMOLOGY", "COSMOPOLITAN", "COSMOS", "COSSACKS", "COST", "COSTA", "COSTING", "COSTINGS", "COSTLY", "COSTS", "COSTUME", "COSTUMES", "COSY", "COT", "COTSWOLD", "COTSWOLDS", "COTTAGE", "COTTAGES", "COTTON", "COUCH", "COUCHED", "COUGH", "COUGHED", "COUGHING", "COULD", "COUN", "COUNCIL", "COUNCILLOR", "COUNCILLORS", "COUNCILS", "COUNSEL", "COUNSELLING", "COUNSELLOR", "COUNSELLORS", "COUNT", "COUNTED", "COUNTENANCE", "COUNTER", "COUNTERACT", "COUNTERED", "COUNTERPART", "COUNTERPARTS", "COUNTERS", "COUNTESS", "COUNTIES", "COUNTING", "COUNTLESS", "COUNTRIES", "COUNTRY", "COUNTRYMEN", "COUNTRYSIDE", "COUNTS", "COUNTY", "COUP", "COUPLE", "COUPLED", "COUPLES", "COUPLING", "COUPON", "COUPONS", "COURAGE", "COURAGEOUS", "COURIER", "COURSE", "COURSES", "COURSEWORK", "COURT", "COURTAULDS", "COURTEOUS", "COURTEOUSLY", "COURTESY", "COURTIERS", "COURTLY", "COURTNEY", "COURTROOM", "COURTS", "COURTSHIP", "COURTYARD", "COURTYARDS", "COUSIN", "COUSINS", "COVE", "COVENANT", "COVENANTS", "COVENT", "COVENTRY", "COVER", "COVERAGE", "COVERED", "COVERING", "COVERS", "COVERT", "COVETED", "COW", "COWARD", "COWARDICE", "COWARDLY", "COWBOY", "COWBOYS", "COWLEY", "COWS", "COX", "COY", "CPRW", "CPSU", "CRAB", "CRABS", "CRACK", "CRACKDOWN", "CRACKED", "CRACKER", "CRACKERS", "CRACKING", "CRACKLING", "CRACKS", "CRADLE", "CRADLED", "CRAFT", "CRAFTS", "CRAFTSMAN", "CRAFTSMANSHIP", "CRAFTSMEN", "CRAFTY", "CRAG", "CRAGGY", "CRAGS", "CRAIG", "CRAMLINGTON", "CRAMMED", "CRAMPED", "CRANE", "CRANES", "CRANSTON", "CRAP", "CRASH", "CRASHED", "CRASHING", "CRASS", "CRATE", "CRATER", "CRATERS", "CRATES", "CRAVEN", "CRAWFORD", "CRAWL", "CRAWLED", "CRAWLEY", "CRAWLING", "CRAY", "CRAYONS", "CRAZE", "CRAZY", "CREAM", "CREAMS", "CREAMY", "CREASE", "CREATE", "CREATED", "CREATES", "CREATING", "CREATION", "CREATIONS", "CREATIVE", "CREATIVELY", "CREATIVITY", "CREATOR", "CREATORS", "CREATURE", "CREATURES", "CREB", "CRECHE", "CREDENCE", "CREDENTIALS", "CREDIBILITY", "CREDIBLE", "CREDIT", "CREDITABLE", "CREDITED", "CREDITOR", "CREDITORS", "CREDITS", "CREED", "CREEK", "CREEP", "CREEPING", "CREGGAN", "CREMATION", "CREMATORIUM", "CREOLE", "CREPT", "CRESCENDO", "CRESCENT", "CREST", "CRESTS", "CRETACEOUS", "CRETE", "CREW", "CREWE", "CREWS", "CRICKET", "CRICKETER", "CRICKETERS", "CRIED", "CRIES", "CRILLY", "CRIM", "CRIME", "CRIMEAN", "CRIMES", "CRIMINAL", "CRIMINALITY", "CRIMINALS", "CRIMINOLOGY", "CRIMSON", "CRIPPLED", "CRIPPS", "CRISES", "CRISIS", "CRISP", "CRISPLY", "CRISPS", "CRITERIA", "CRITERION", "CRITIC", "CRITICAL", "CRITICALLY", "CRITICISE", "CRITICISED", "CRITICISING", "CRITICISM", "CRITICISMS", "CRITICIZE", "CRITICIZED", "CRITICIZING", "CRITICS", "CRITIQUE", "CROAKED", "CROATIA", "CROATIAN", "CROATS", "CROCKERY", "CROCODILE", "CROCODILES", "CROFT", "CROHN", "CROMWELL", "CRONIES", "CROOK", "CROOKED", "CROP", "CROPS", "CROQUET", "CROSBY", "CROSS", "CROSSED", "CROSSES", "CROSSING", "CROSSINGS", "CROSSLY", "CROSSOVER", "CROSSROADS", "CROSSWORD", "CROUCHED", "CROUCHING", "CROW", "CROWD", "CROWDED", "CROWDING", "CROWDS", "CROWE", "CROWN", "CROWNED", "CROWNS", "CROWS", "CROYDON", "CRUCIAL", "CRUCIALLY", "CRUCIFIX", "CRUCIFIXION", "CRUDE", "CRUDELY", "CRUEL", "CRUELLY", "CRUELTY", "CRUISE", "CRUISER", "CRUISING", "CRUMBLE", "CRUMBLING", "CRUMBS", "CRUMPLED", "CRUMWALLIS", "CRUNCH", "CRUSADE", "CRUSH", "CRUSHED", "CRUSHING", "CRUST", "CRUSTAL", "CRUSTY", "CRUTCH", "CRUTCHES", "CRUX", "CRUZ", "CRY", "CRYING", "CRYPT", "CRYPTIC", "CRYPTS", "CRYSTAL", "CRYSTALLINE", "CRYSTALLIZATION", "CRYSTALS", "CSCE", "CUBA", "CUBAN", "CUBE", "CUBES", "CUBIC", "CUBICLE", "CUBISM", "CUBS", "CUCKOO", "CUCUMBER", "CUDDLY", "CUE", "CUES", "CUFF", "CUFFS", "CUISINE", "CULINARY", "CULLEN", "CULLEY", "CULMINATED", "CULMINATING", "CULMINATION", "CULPRIT", "CULPRITS", "CULT", "CULTIVATE", "CULTIVATED", "CULTIVATING", "CULTIVATION", "CULTS", "CULTURAL", "CULTURALLY", "CULTURE", "CULTURED", "CULTURES", "CUMBERLAND", "CUMBERSOME", "CUMBRIA", "CUMULATIVE", "CUNNING", "CUNNINGHAM", "CUNT", "CUP", "CUPBOARD", "CUPBOARDS", "CUPPED", "CUPS", "CURATE", "CURATOR", "CURATORS", "CURB", "CURD", "CURE", "CURED", "CURES", "CURFEW", "CURIA", "CURIOSITY", "CURIOUS", "CURIOUSLY", "CURL", "CURLED", "CURLING", "CURLS", "CURLY", "CURRENCIES", "CURRENCY", "CURRENT", "CURRENTLY", "CURRENTS", "CURRICULA", "CURRICULAR", "CURRICULUM", "CURRIE", "CURRY", "CURSE", "CURSED", "CURSES", "CURSING", "CURSOR", "CURSORY", "CURT", "CURTAIL", "CURTAILED", "CURTAIN", "CURTAINS", "CURTIS", "CURTLY", "CURVATURE", "CURVE", "CURVED", "CURVES", "CURVING", "CURZON", "CUSHION", "CUSHIONS", "CUSTARD", "CUSTODIAL", "CUSTODIAN", "CUSTODIANS", "CUSTODY", "CUSTOM", "CUSTOMARY", "CUSTOMER", "CUSTOMERS", "CUSTOMS", "CUT", "CUTBACKS", "CUTE", "CUTHBERT", "CUTLERY", "CUTS", "CUTTER", "CUTTERS", "CUTTING", "CUTTINGS", "CYCLE", "CYCLED", "CYCLES", "CYCLIC", "CYCLICAL", "CYCLING", "CYCLIST", "CYCLISTS", "CYCLOSPORIN", "CYLINDER", "CYLINDERS", "CYLINDRICAL", "CYNICAL", "CYNICALLY", "CYNICISM", "CYNICS", "CYNTHIA", "CYPRUS", "CYRIL", "CYSTIC", "CYTOPLASM", "CYTOPLASMIC", "CZECH", "CZECHOSLOVAK", "CZECHOSLOVAKIA", "CZECHS", "DAAK", "DAD", "DADA", "DADDY", "DADS", "DAFFODILS", "DAFT", "DAGENHAM", "DAGGER", "DAHL", "DAILIES", "DAILY", "DAINE", "DAIRY", "DAIS", "DAISIES", "DAISY", "DAKOTA", "DALAI", "DALE", "DALEK", "DALES", "DALEY", "DALGLIESH", "DALGLISH", "DALLAS", "DALTON", "DALY", "DALYELL", "DALZIEL", "DAM", "DAMAGE", "DAMAGED", "DAMAGES", "DAMAGING", "DAMASCUS", "DAME", "DAMIAN", "DAMIEN", "DAMMIT", "DAMN", "DAMNED", "DAMP", "DAMPNESS", "DAMS", "DANA", "DANCE", "DANCED", "DANCER", "DANCERS", "DANCES", "DANCING", "DANE", "DANES", "DANGER", "DANGEROUS", "DANGEROUSLY", "DANGERS", "DANGLING", "DANIEL", "DANIELLE", "DANIELS", "DANISH", "DANNY", "DANTE", "DANUBE", "DANZIG", "DAPHNE", "DARE", "DARED", "DARESAY", "DARING", "DARK", "DARKENED", "DARKER", "DARKEST", "DARKLY", "DARKNESS", "DARLING", "DARLINGTON", "DARREN", "DART", "DARTED", "DARTFORD", "DARTING", "DARTMOOR", "DARTS", "DARWIN", "DARWINIAN", "DASH", "DASHBOARD", "DASHED", "DASHING", "DATA", "DATABASE", "DATABASES", "DATE", "DATED", "DATES", "DATING", "DAUGHTER", "DAUGHTERS", "DAUNTING", "DAUNTLESS", "DAVE", "DAVEY", "DAVID", "DAVIDSON", "DAVIES", "DAVIS", "DAVISON", "DAVY", "DAWN", "DAWNED", "DAWSON", "DAY", "DAYLIGHT", "DAYS", "DAYTIME", "DAZE", "DAZED", "DAZZLING", "DEACON", "DEAD", "DEADLINE", "DEADLINES", "DEADLOCK", "DEADLY", "DEAF", "DEAFNESS", "DEAL", "DEALER", "DEALERS", "DEALING", "DEALINGS", "DEALS", "DEALT", "DEAN", "DEANE", "DEAR", "DEARER", "DEAREST", "DEARLY", "DEARTH", "DEATH", "DEATHS", "DEBACLE", "DEBATABLE", "DEBATE", "DEBATED", "DEBATES", "DEBATING", "DEBBIE", "DEBENTURE", "DEBENTURES", "DEBIT", "DEBORAH", "DEBRIS", "DEBT", "DEBTOR", "DEBTORS", "DEBTS", "DEBUT", "DECADE", "DECADES", "DECAY", "DECEASED", "DECEIT", "DECEIVE", "DECEIVED", "DECEIVING", "DECELERATION", "DECEMBER", "DECENCY", "DECENT", "DECENTLY", "DECENTRALISATION", "DECENTRALIZATION", "DECEPTION", "DECEPTIVE", "DECEPTIVELY", "DECIDE", "DECIDED", "DECIDEDLY", "DECIDER", "DECIDES", "DECIDING", "DECIMAL", "DECIMALS", "DECIPHER", "DECISION", "DECISIONS", "DECISIVE", "DECISIVELY", "DECK", "DECKS", "DECLAN", "DECLARATION", "DECLARATIONS", "DECLARE", "DECLARED", "DECLARES", "DECLARING", "DECLINE", "DECLINED", "DECLINES", "DECLINING", "DECOMPOSITION", "DECONSTRUCTION", "DECOR", "DECORATE", "DECORATED", "DECORATING", "DECORATION", "DECORATIONS", "DECORATIVE", "DECORATOR", "DECREASE", "DECREASED", "DECREASES", "DECREASING", "DECREE", "DECREED", "DECREES", "DEDICATED", "DEDICATION", "DEDUCE", "DEDUCED", "DEDUCTED", "DEDUCTION", "DEDUCTIONS", "DEDUCTIVE", "DEED", "DEEDS", "DEEMED", "DEEP", "DEEPEN", "DEEPENED", "DEEPER", "DEEPEST", "DEEPLY", "DEER", "DEESIDE", "DEFAMATION", "DEFAMATORY", "DEFAULT", "DEFEAT", "DEFEATED", "DEFEATING", "DEFEATS", "DEFECT", "DEFECTION", "DEFECTIVE", "DEFECTS", "DEFENCE", "DEFENCELESS", "DEFENCES", "DEFEND", "DEFENDANT", "DEFENDANTS", "DEFENDED", "DEFENDER", "DEFENDERS", "DEFENDING", "DEFENDS", "DEFENSE", "DEFENSIVE", "DEFENSIVELY", "DEFER", "DEFERENCE", "DEFERENTIAL", "DEFERRED", "DEFIANCE", "DEFIANT", "DEFIANTLY", "DEFICIENCIES", "DEFICIENCY", "DEFICIENT", "DEFICIT", "DEFICITS", "DEFIED", "DEFIES", "DEFINE", "DEFINED", "DEFINES", "DEFINING", "DEFINITE", "DEFINITELY", "DEFINITION", "DEFINITIONS", "DEFINITIVE", "DEFLATION", "DEFLECT", "DEFLECTED", "DEFLECTION", "DEFORESTATION", "DEFORMATION", "DEFRAUD", "DEFRIES", "DEFT", "DEFTLY", "DEFUNCT", "DEFUSE", "DEFY", "DEFYING", "DEGENERATE", "DEGENERATION", "DEGRADATION", "DEGREE", "DEGREES", "DEHYDRATION", "DEICTIC", "DEIRDRE", "DEITIES", "DEITY", "DEIXIS", "DELANEY", "DELAY", "DELAYED", "DELAYING", "DELAYS", "DELEGATE", "DELEGATED", "DELEGATES", "DELEGATION", "DELEGATIONS", "DELETE", "DELETED", "DELETERIOUS", "DELETION", "DELETIONS", "DELHI", "DELIA", "DELIBERATE", "DELIBERATELY", "DELIBERATION", "DELIBERATIONS", "DELICACY", "DELICATE", "DELICATELY", "DELICIOUS", "DELICIOUSLY", "DELIGHT", "DELIGHTED", "DELIGHTFUL", "DELIGHTFULLY", "DELIGHTS", "DELINQUENCY", "DELINQUENT", "DELIRIOUS", "DELIVER", "DELIVERANCE", "DELIVERED", "DELIVERIES", "DELIVERING", "DELIVERS", "DELIVERY", "DELL", "DELLA", "DELORS", "DELTA", "DELUGE", "DELUSION", "DELUSIONS", "DEMAND", "DEMANDED", "DEMANDING", "DEMANDS", "DEMARCATION", "DEMEANOUR", "DEMENTIA", "DEMESNE", "DEMISE", "DEMISED", "DEMO", "DEMOCRACIES", "DEMOCRACY", "DEMOCRAT", "DEMOCRATIC", "DEMOCRATICALLY", "DEMOCRATIZATION", "DEMOCRATS", "DEMOGRAPHIC", "DEMOGRAPHY", "DEMOLISH", "DEMOLISHED", "DEMOLITION", "DEMON", "DEMONIC", "DEMONS", "DEMONSTRABLY", "DEMONSTRATE", "DEMONSTRATED", "DEMONSTRATES", "DEMONSTRATING", "DEMONSTRATION", "DEMONSTRATIONS", "DEMONSTRATORS", "DEMPSTER", "DEN", "DENG", "DENIAL", "DENIALS", "DENIED", "DENIES", "DENIM", "DENIS", "DENISE", "DENMARK", "DENNING", "DENNIS", "DENNY", "DENOMINATION", "DENOMINATIONAL", "DENOMINATIONS", "DENOMINATOR", "DENOTE", "DENOTES", "DENOTING", "DENOUNCE", "DENOUNCED", "DENOUNCING", "DENSE", "DENSELY", "DENSER", "DENSITIES", "DENSITY", "DENT", "DENTAL", "DENTIST", "DENTISTS", "DENUNCIATION", "DENVER", "DENY", "DENYING", "DENYS", "DEPART", "DEPARTED", "DEPARTING", "DEPARTMENT", "DEPARTMENTAL", "DEPARTMENTS", "DEPARTURE", "DEPARTURES", "DEPEND", "DEPENDABLE", "DEPENDANTS", "DEPENDED", "DEPENDENCE", "DEPENDENCY", "DEPENDENT", "DEPENDENTS", "DEPENDING", "DEPENDS", "DEPICT", "DEPICTED", "DEPICTING", "DEPICTION", "DEPICTS", "DEPLETED", "DEPLETION", "DEPLORABLE", "DEPLORED", "DEPLOY", "DEPLOYED", "DEPLOYMENT", "DEPOPULATION", "DEPORTATION", "DEPORTED", "DEPOSIT", "DEPOSITED", "DEPOSITION", "DEPOSITORS", "DEPOSITS", "DEPOT", "DEPOTS", "DEPRECIATION", "DEPRESS", "DEPRESSED", "DEPRESSING", "DEPRESSION", "DEPRESSIONS", "DEPRESSIVE", "DEPRIVATION", "DEPRIVE", "DEPRIVED", "DEPRIVING", "DEPT", "DEPTFORD", "DEPTH", "DEPTHS", "DEPUTATION", "DEPUTIES", "DEPUTY", "DERBY", "DERBYSHIRE", "DEREGULATION", "DEREK", "DERELICT", "DERELICTION", "DERISION", "DERIVATION", "DERIVATIVE", "DERIVATIVES", "DERIVE", "DERIVED", "DERIVES", "DERIVING", "DERMOT", "DEROGATORY", "DERRIDA", "DERRY", "DERSINGHAM", "DESCARTES", "DESCEND", "DESCENDANT", "DESCENDANTS", "DESCENDED", "DESCENDING", "DESCENDS", "DESCENT", "DESCRIBE", "DESCRIBED", "DESCRIBES", "DESCRIBING", "DESCRIPTION", "DESCRIPTIONS", "DESCRIPTIVE", "DESERT", "DESERTED", "DESERTION", "DESERTS", "DESERVE", "DESERVED", "DESERVES", "DESERVING", "DESIGN", "DESIGNATE", "DESIGNATED", "DESIGNATION", "DESIGNED", "DESIGNER", "DESIGNERS", "DESIGNING", "DESIGNS", "DESIRABILITY", "DESIRABLE", "DESIRE", "DESIRED", "DESIRES", "DESK", "DESKS", "DESKTOP", "DESMOND", "DESOLATE", "DESOLATION", "DESPAIR", "DESPAIRING", "DESPAIRINGLY", "DESPATCH", "DESPATCHED", "DESPERATE", "DESPERATELY", "DESPERATION", "DESPICABLE", "DESPISE", "DESPISED", "DESPITE", "DESSERT", "DESSERTS", "DESTINATION", "DESTINATIONS", "DESTINED", "DESTINY", "DESTITUTE", "DESTROY", "DESTROYED", "DESTROYER", "DESTROYING", "DESTROYS", "DESTRUCTION", "DESTRUCTIVE", "DESULTORY", "DETACH", "DETACHED", "DETACHMENT", "DETAIL", "DETAILED", "DETAILING", "DETAILS", "DETAIN", "DETAINED", "DETAINEES", "DETECT", "DETECTABLE", "DETECTED", "DETECTING", "DETECTION", "DETECTIVE", "DETECTIVES", "DETECTOR", "DETECTORS", "DETECTS", "DETENTION", "DETER", "DETERGENT", "DETERGENTS", "DETERIORATE", "DETERIORATED", "DETERIORATING", "DETERIORATION", "DETERMINANT", "DETERMINANTS", "DETERMINATE", "DETERMINATION", "DETERMINATIONS", "DETERMINE", "DETERMINED", "DETERMINEDLY", "DETERMINES", "DETERMINING", "DETERMINISM", "DETERMINISTIC", "DETERRED", "DETERRENCE", "DETERRENT", "DETOUR", "DETRACT", "DETRIMENT", "DETRIMENTAL", "DETRITUS", "DETROIT", "DEUTERIUM", "DEUTSCHE", "DEUTSCHMARK", "DEVALUATION", "DEVALUED", "DEVASTATED", "DEVASTATING", "DEVASTATION", "DEVELOP", "DEVELOPED", "DEVELOPER", "DEVELOPERS", "DEVELOPING", "DEVELOPMENT", "DEVELOPMENTAL", "DEVELOPMENTS", "DEVELOPS", "DEVIANCE", "DEVIANT", "DEVIATION", "DEVIATIONS", "DEVICE", "DEVICES", "DEVIL", "DEVILS", "DEVIOUS", "DEVISE", "DEVISED", "DEVISING", "DEVLIN", "DEVOID", "DEVOLUTION", "DEVOLVED", "DEVON", "DEVONSHIRE", "DEVORE", "DEVOTE", "DEVOTED", "DEVOTEES", "DEVOTING", "DEVOTION", "DEVOUT", "DEVRAUX", "DEW", "DEXTER", "DEXTERITY", "DHABI", "DHSS", "DIABETES", "DIABETIC", "DIABETICS", "DIABOLICAL", "DIAGNOSE", "DIAGNOSED", "DIAGNOSES", "DIAGNOSIS", "DIAGNOSTIC", "DIAGONAL", "DIAGONALLY", "DIAGRAM", "DIAGRAMS", "DIAL", "DIALECT", "DIALECTIC", "DIALECTICAL", "DIALECTS", "DIALLED", "DIALOGUE", "DIALOGUES", "DIALYSIS", "DIAMETER", "DIAMOND", "DIAMONDS", "DIANA", "DIANE", "DIAPHRAGM", "DIARIES", "DIARRHOEA", "DIARY", "DICE", "DICEY", "DICHOTOMY", "DICK", "DICKENS", "DICKIE", "DICKINSON", "DICKSON", "DICTA", "DICTATE", "DICTATED", "DICTATES", "DICTATION", "DICTATOR", "DICTATORIAL", "DICTATORSHIP", "DICTIONARIES", "DICTIONARY", "DICTUM", "DID", "DIDCOT", "DIDIER", "DIE", "DIED", "DIEGO", "DIES", "DIESEL", "DIESELS", "DIET", "DIETARY", "DIETER", "DIETS", "DIFFER", "DIFFERED", "DIFFERENCE", "DIFFERENCES", "DIFFERENT", "DIFFERENTIAL", "DIFFERENTIALS", "DIFFERENTIATE", "DIFFERENTIATED", "DIFFERENTIATING", "DIFFERENTIATION", "DIFFERENTLY", "DIFFERING", "DIFFERS", "DIFFICULT", "DIFFICULTIES", "DIFFICULTY", "DIFFUSE", "DIFFUSION", "DIG", "DIGBY", "DIGEST", "DIGESTED", "DIGESTION", "DIGESTIVE", "DIGGING", "DIGIT", "DIGITAL", "DIGITS", "DIGNIFIED", "DIGNITARIES", "DIGNITY", "DIGS", "DILAPIDATED", "DILATATION", "DILEMMA", "DILEMMAS", "DILIGENCE", "DILIGENT", "DILIGENTLY", "DILLON", "DILUTE", "DILUTED", "DILUTION", "DIM", "DIMENSION", "DIMENSIONAL", "DIMENSIONS", "DIMINISH", "DIMINISHED", "DIMINISHES", "DIMINISHING", "DIMINUTION", "DIMLY", "DIN", "DINAH", "DINARS", "DINE", "DINED", "DINERS", "DINGHIES", "DINGHY", "DINGY", "DINING", "DINNER", "DINNERS", "DINOSAUR", "DINOSAURS", "DIOCESAN", "DIOCESE", "DIOXIDE", "DIP", "DIPLOCK", "DIPLOMA", "DIPLOMACY", "DIPLOMAS", "DIPLOMAT", "DIPLOMATIC", "DIPLOMATS", "DIPOLE", "DIPPED", "DIPPING", "DIRE", "DIRECT", "DIRECTED", "DIRECTING", "DIRECTION", "DIRECTIONAL", "DIRECTIONS", "DIRECTIVE", "DIRECTIVES", "DIRECTLY", "DIRECTNESS", "DIRECTOR", "DIRECTORATE", "DIRECTORIES", "DIRECTORS", "DIRECTORY", "DIRECTS", "DIRT", "DIRTY", "DISABILITIES", "DISABILITY", "DISABLED", "DISABLEMENT", "DISADVANTAGE", "DISADVANTAGED", "DISADVANTAGES", "DISAFFECTION", "DISAGREE", "DISAGREEABLE", "DISAGREED", "DISAGREEMENT", "DISAGREEMENTS", "DISAGREES", "DISAPPEAR", "DISAPPEARANCE", "DISAPPEARED", "DISAPPEARING", "DISAPPEARS", "DISAPPOINT", "DISAPPOINTED", "DISAPPOINTING", "DISAPPOINTINGLY", "DISAPPOINTMENT", "DISAPPOINTMENTS", "DISAPPROVAL", "DISAPPROVED", "DISARM", "DISARMAMENT", "DISARRAY", "DISASTER", "DISASTERS", "DISASTROUS", "DISASTROUSLY", "DISBANDED", "DISBELIEF", "DISC", "DISCARD", "DISCARDED", "DISCERN", "DISCERNED", "DISCERNIBLE", "DISCERNING", "DISCHARGE", "DISCHARGED", "DISCHARGES", "DISCHARGING", "DISCIPLE", "DISCIPLES", "DISCIPLINARY", "DISCIPLINE", "DISCIPLINED", "DISCIPLINES", "DISCLAIMER", "DISCLOSE", "DISCLOSED", "DISCLOSING", "DISCLOSURE", "DISCLOSURES", "DISCO", "DISCOMFORT", "DISCONCERTING", "DISCONTENT", "DISCONTENTED", "DISCONTINUED", "DISCONTINUITY", "DISCORD", "DISCORDANT", "DISCOS", "DISCOUNT", "DISCOUNTED", "DISCOUNTING", "DISCOUNTS", "DISCOURAGE", "DISCOURAGED", "DISCOURAGING", "DISCOURSE", "DISCOURSES", "DISCOVER", "DISCOVERED", "DISCOVERIES", "DISCOVERING", "DISCOVERS", "DISCOVERY", "DISCREDIT", "DISCREET", "DISCREETLY", "DISCREPANCIES", "DISCREPANCY", "DISCRETE", "DISCRETION", "DISCRETIONARY", "DISCRIMINATE", "DISCRIMINATED", "DISCRIMINATING", "DISCRIMINATION", "DISCRIMINATORY", "DISCS", "DISCURSIVE", "DISCUSS", "DISCUSSED", "DISCUSSES", "DISCUSSING", "DISCUSSION", "DISCUSSIONS", "DISDAIN", "DISEASE", "DISEASED", "DISEASES", "DISENCHANTMENT", "DISENTANGLE", "DISGRACE", "DISGRACED", "DISGRACEFUL", "DISGRUNTLED", "DISGUISE", "DISGUISED", "DISGUST", "DISGUSTED", "DISGUSTING", "DISH", "DISHES", "DISHONEST", "DISHONESTLY", "DISHONESTY", "DISHWASHER", "DISILLUSIONMENT", "DISINCENTIVE", "DISINTEGRATION", "DISINTERESTED", "DISK", "DISKS", "DISLIKE", "DISLIKED", "DISLOCATION", "DISLODGE", "DISMAL", "DISMANTLE", "DISMANTLED", "DISMANTLING", "DISMAY", "DISMAYED", "DISMISS", "DISMISSAL", "DISMISSALS", "DISMISSED", "DISMISSES", "DISMISSING", "DISMISSIVE", "DISMISSIVELY", "DISNEY", "DISNEYLAND", "DISOBEDIENCE", "DISORDER", "DISORDERED", "DISORDERS", "DISPARATE", "DISPARITIES", "DISPARITY", "DISPATCH", "DISPATCHED", "DISPEL", "DISPENSATION", "DISPENSE", "DISPENSED", "DISPENSER", "DISPENSING", "DISPERSAL", "DISPERSE", "DISPERSED", "DISPERSION", "DISPLACE", "DISPLACED", "DISPLACEMENT", "DISPLAY", "DISPLAYED", "DISPLAYING", "DISPLAYS", "DISPLEASURE", "DISPOSABLE", "DISPOSAL", "DISPOSALS", "DISPOSE", "DISPOSED", "DISPOSING", "DISPOSITION", "DISPOSITIONS", "DISPROPORTIONATE", "DISPROPORTIONATELY", "DISPUTE", "DISPUTED", "DISPUTES", "DISQUALIFICATION", "DISQUALIFIED", "DISQUIET", "DISREGARD", "DISREGARDED", "DISREPUTE", "DISRUPT", "DISRUPTED", "DISRUPTING", "DISRUPTION", "DISRUPTIVE", "DISSATISFACTION", "DISSATISFIED", "DISSEMINATION", "DISSENT", "DISSENTERS", "DISSERTATION", "DISSIDENT", "DISSIDENTS", "DISSIMILAR", "DISSOCIATION", "DISSOLUTION", "DISSOLVE", "DISSOLVED", "DISSOLVING", "DISSUADE", "DISTAL", "DISTANCE", "DISTANCES", "DISTANT", "DISTANTLY", "DISTASTE", "DISTASTEFUL", "DISTENSION", "DISTILLATION", "DISTILLERS", "DISTINCT", "DISTINCTION", "DISTINCTIONS", "DISTINCTIVE", "DISTINCTIVELY", "DISTINCTIVENESS", "DISTINCTLY", "DISTINGUISH", "DISTINGUISHABLE", "DISTINGUISHED", "DISTINGUISHES", "DISTINGUISHING", "DISTORT", "DISTORTED", "DISTORTION", "DISTORTIONS", "DISTRACT", "DISTRACTED", "DISTRACTION", "DISTRACTIONS", "DISTRAUGHT", "DISTRESS", "DISTRESSED", "DISTRESSING", "DISTRIBUTE", "DISTRIBUTED", "DISTRIBUTES", "DISTRIBUTING", "DISTRIBUTION", "DISTRIBUTIONS", "DISTRIBUTOR", "DISTRIBUTORS", "DISTRICT", "DISTRICTS", "DISTRUST", "DISTURB", "DISTURBANCE", "DISTURBANCES", "DISTURBED", "DISTURBING", "DISTURBINGLY", "DISUSED", "DITCH", "DITCHES", "DIURNAL", "DIVE", "DIVED", "DIVER", "DIVERGENCE", "DIVERGENT", "DIVERS", "DIVERSE", "DIVERSIFICATION", "DIVERSIFY", "DIVERSION", "DIVERSIONS", "DIVERSITY", "DIVERT", "DIVERTED", "DIVERTING", "DIVIDE", "DIVIDED", "DIVIDEND", "DIVIDENDS", "DIVIDES", "DIVIDING", "DIVINE", "DIVING", "DIVINITY", "DIVISION", "DIVISIONAL", "DIVISIONS", "DIVISIVE", "DIVORCE", "DIVORCED", "DIXIE", "DIXON", "DIXONS", "DIZZY", "DJIBOUTI", "DNA", "DOBSON", "DOC", "DOCK", "DOCKERS", "DOCKLANDS", "DOCKS", "DOCKYARD", "DOCTOR", "DOCTORATE", "DOCTORS", "DOCTRINAL", "DOCTRINE", "DOCTRINES", "DOCUMENT", "DOCUMENTARIES", "DOCUMENTARY", "DOCUMENTATION", "DOCUMENTED", "DOCUMENTS", "DODD", "DODGE", "DODGING", "DODGY", "DOE", "DOES", "DOG", "DOGGED", "DOGGEDLY", "DOGGY", "DOGMA", "DOGMATIC", "DOGS", "DOHERTY", "DOING", "DOINGS", "DOLE", "DOLL", "DOLLAR", "DOLLARS", "DOLLS", "DOLLY", "DOLPHIN", "DOLPHINS", "DOMAIN", "DOMAINS", "DOME", "DOMES", "DOMESDAY", "DOMESTIC", "DOMESTICATED", "DOMESTICITY", "DOMICILE", "DOMINANCE", "DOMINANT", "DOMINATE", "DOMINATED", "DOMINATES", "DOMINATING", "DOMINATION", "DOMINIC", "DOMINION", "DOMINIONS", "DON", "DONALD", "DONALDSON", "DONATE", "DONATED", "DONATION", "DONATIONS", "DONCASTER", "DONE", "DONEGAL", "DONKEY", "DONKEYS", "DONNA", "DONNELLY", "DONOR", "DONORS", "DONOVAN", "DOOLEY", "DOOM", "DOOMED", "DOOR", "DOORBELL", "DOORS", "DOORSTEP", "DOORWAY", "DOORWAYS", "DOPE", "DORA", "DORCAS", "DORCHESTER", "DOREEN", "DORIAN", "DORIS", "DORMANT", "DORMITORY", "DOROTHEA", "DOROTHY", "DORRELL", "DORSAL", "DORSET", "DOSAGE", "DOSE", "DOSES", "DOSSIER", "DOSTOEVSKY", "DOT", "DOTH", "DOTS", "DOTTED", "DOTTY", "DOUBLE", "DOUBLED", "DOUBLES", "DOUBLING", "DOUBLY", "DOUBT", "DOUBTED", "DOUBTFUL", "DOUBTFULLY", "DOUBTING", "DOUBTLESS", "DOUBTS", "DOUG", "DOUGAL", "DOUGH", "DOUGLAS", "DOUNREAY", "DOUR", "DOVE", "DOVER", "DOVES", "DOWD", "DOWN", "DOWNES", "DOWNFALL", "DOWNHILL", "DOWNING", "DOWNPOUR", "DOWNRIGHT", "DOWNS", "DOWNSTAIRS", "DOWNSTREAM", "DOWNTURN", "DOWNWARD", "DOWNWARDS", "DOWRY", "DOYLE", "DOZEN", "DOZENS", "DRAB", "DRACHENFELS", "DRACONIAN", "DRAFT", "DRAFTED", "DRAFTER", "DRAFTING", "DRAFTS", "DRAFTSMAN", "DRAG", "DRAGGED", "DRAGGING", "DRAGON", "DRAGONS", "DRAGOONS", "DRAIN", "DRAINAGE", "DRAINED", "DRAINING", "DRAINS", "DRAKE", "DRAMA", "DRAMAS", "DRAMATIC", "DRAMATICALLY", "DRANK", "DRAPED", "DRASTIC", "DRASTICALLY", "DRAUGHT", "DRAUGHTS", "DRAUGHTSMAN", "DRAW", "DRAWBACK", "DRAWBACKS", "DRAWER", "DRAWERS", "DRAWING", "DRAWINGS", "DRAWL", "DRAWLED", "DRAWN", "DRAWS", "DREAD", "DREADED", "DREADFUL", "DREADFULLY", "DREADING", "DREAM", "DREAMED", "DREAMING", "DREAMS", "DREAMT", "DREAMY", "DREARY", "DREGS", "DRESDEN", "DRESS", "DRESSED", "DRESSER", "DRESSES", "DRESSING", "DRESSINGS", "DREW", "DRIED", "DRIER", "DRIES", "DRIFT", "DRIFTED", "DRIFTING", "DRIFTS", "DRILL", "DRILLED", "DRILLING", "DRILLS", "DRILY", "DRINK", "DRINKER", "DRINKERS", "DRINKING", "DRINKS", "DRIP", "DRIPPING", "DRIVE", "DRIVEN", "DRIVER", "DRIVERS", "DRIVES", "DRIVEWAY", "DRIVING", "DRIZZLE", "DRONE", "DROP", "DROPLETS", "DROPPED", "DROPPING", "DROPPINGS", "DROPS", "DROUGHT", "DROVE", "DROWN", "DROWNED", "DROWNING", "DROWSY", "DRUG", "DRUGS", "DRUM", "DRUMMER", "DRUMS", "DRUNK", "DRUNKEN", "DRUNKENNESS", "DRUNKS", "DRURY", "DRY", "DRYER", "DRYING", "DRYNESS", "DUAL", "DUALISM", "DUBAI", "DUBBED", "DUBIOUS", "DUBLIN", "DUCAL", "DUCHESS", "DUCHY", "DUCK", "DUCKED", "DUCKING", "DUCKS", "DUCT", "DUDLEY", "DUE", "DUEL", "DUES", "DUET", "DUG", "DUKE", "DUKES", "DULL", "DULLY", "DULWICH", "DULY", "DUMAS", "DUMB", "DUMFRIES", "DUMMIES", "DUMMY", "DUMP", "DUMPED", "DUMPING", "DUN", "DUNBAR", "DUNCAN", "DUNDEE", "DUNE", "DUNES", "DUNFERMLINE", "DUNG", "DUNGANNON", "DUNGEON", "DUNKIRK", "DUNLOP", "DUNN", "DUNNING", "DUNWOODY", "DUO", "DUODENAL", "DUODENUM", "DUPLICATION", "DURABILITY", "DURABLE", "DURATION", "DURESS", "DURHAM", "DURIE", "DURING", "DURKHEIM", "DUSK", "DUST", "DUSTBIN", "DUSTBINS", "DUSTIN", "DUSTING", "DUSTY", "DUTCH", "DUTIES", "DUTIFUL", "DUTIFULLY", "DUTY", "DUVALL", "DUVET", "DWARF", "DWARFS", "DWELL", "DWELLERS", "DWELLING", "DWELLINGS", "DWYER", "DYE", "DYER", "DYES", "DYFED", "DYING", "DYKE", "DYKES", "DYLAN", "DYNAMIC", "DYNAMICS", "DYNAMISM", "DYNAMITE", "DYNASTIC", "DYNASTY", "DYSFUNCTION", "DYSLEXIA", "DYSON", "DYSPLASIA", "EACH", "EADWINE", "EAGER", "EAGERLY", "EAGERNESS", "EAGLE", "EAGLES", "EALING", "EAR", "EARL", "EARLE", "EARLIER", "EARLIEST", "EARLS", "EARLY", "EARMARKED", "EARN", "EARNED", "EARNER", "EARNERS", "EARNEST", "EARNESTLY", "EARNING", "EARNINGS", "EARNS", "EARRINGS", "EARS", "EARSHOT", "EARTH", "EARTHENWARE", "EARTHLY", "EARTHQUAKE", "EARTHQUAKES", "EARTHWORKS", "EARTHY", "EASE", "EASED", "EASEL", "EASIER", "EASIEST", "EASILY", "EASING", "EAST", "EASTBOURNE", "EASTER", "EASTERN", "EASTON", "EASTWARD", "EASTWARDS", "EASTWOOD", "EASY", "EAT", "EATEN", "EATING", "EATON", "EATS", "EAVES", "EBB", "EBERT", "EBONY", "ECCENTRIC", "ECCENTRICITY", "ECCLES", "ECCLESIASTICAL", "ECHELONS", "ECHO", "ECHOED", "ECHOES", "ECHOING", "ECLECTIC", "ECLIPSE", "ECOLOGICAL", "ECOLOGICALLY", "ECOLOGISTS", "ECOLOGY", "ECONOMETRIC", "ECONOMIC", "ECONOMICAL", "ECONOMICALLY", "ECONOMICS", "ECONOMIES", "ECONOMIST", "ECONOMISTS", "ECONOMY", "ECOSYSTEM", "ECSTASY", "ECSTATIC", "ECU", "ECUADOR", "ECUMENICAL", "EDBERG", "EDDIE", "EDDY", "EDEN", "EDGAR", "EDGE", "EDGED", "EDGES", "EDGING", "EDGY", "EDIBLE", "EDIE", "EDIFICE", "EDINBURGH", "EDIT", "EDITED", "EDITH", "EDITING", "EDITION", "EDITIONS", "EDITOR", "EDITORIAL", "EDITORS", "EDMONDS", "EDMUND", "EDMUNDS", "EDNA", "EDOUARD", "EDUARD", "EDUCATE", "EDUCATED", "EDUCATING", "EDUCATION", "EDUCATIONAL", "EDUCATIONALISTS", "EDUCATIONALLY", "EDUCATORS", "EDWARD", "EDWARDIAN", "EDWARDS", "EDWIN", "EEL", "EELS", "EERIE", "EFFECT", "EFFECTED", "EFFECTIVE", "EFFECTIVELY", "EFFECTIVENESS", "EFFECTS", "EFFICACY", "EFFICIENCY", "EFFICIENT", "EFFICIENTLY", "EFFLUENT", "EFFORT", "EFFORTLESS", "EFFORTLESSLY", "EFFORTS", "EFTA", "EGALITARIAN", "EGALITARIANISM", "EGG", "EGGS", "EGO", "EGYPT", "EGYPTIAN", "EGYPTIANS", "EIGENVALUES", "EIGHT", "EIGHTEEN", "EIGHTEENTH", "EIGHTH", "EIGHTIES", "EIGHTY", "EILEEN", "EINSTEIN", "EISENHOWER", "EITHER", "EJECTED", "ELABORATE", "ELABORATED", "ELABORATELY", "ELABORATION", "ELAINE", "ELAPSED", "ELASTIC", "ELASTICITY", "ELATION", "ELBOW", "ELBOWS", "ELDER", "ELDERLY", "ELDERS", "ELDEST", "ELDORADO", "ELEANOR", "ELECT", "ELECTED", "ELECTING", "ELECTION", "ELECTIONS", "ELECTIVE", "ELECTORAL", "ELECTORATE", "ELECTORS", "ELECTRIC", "ELECTRICAL", "ELECTRICALLY", "ELECTRICIAN", "ELECTRICIANS", "ELECTRICITY", "ELECTRIFICATION", "ELECTRODE", "ELECTRODES", "ELECTROMAGNETIC", "ELECTRON", "ELECTRONIC", "ELECTRONICALLY", "ELECTRONICS", "ELECTRONS", "ELECTROPHORESIS", "ELECTROSTATIC", "ELEGANCE", "ELEGANT", "ELEGANTLY", "ELEMENT", "ELEMENTAL", "ELEMENTARY", "ELEMENTS", "ELENA", "ELEPHANT", "ELEPHANTS", "ELEVATED", "ELEVATION", "ELEVATOR", "ELEVEN", "ELEVENTH", "ELF", "ELGIN", "ELIAS", "ELICIT", "ELIGIBILITY", "ELIGIBLE", "ELIMINATE", "ELIMINATED", "ELIMINATES", "ELIMINATING", "ELIMINATION", "ELINE", "ELINOR", "ELIOT", "ELISABETH", "ELISE", "ELITE", "ELITES", "ELITIST", "ELIZA", "ELIZABETH", "ELIZABETHAN", "ELLA", "ELLAND", "ELLEN", "ELLESMERE", "ELLIE", "ELLIOT", "ELLIOTT", "ELLIPTICAL", "ELLIS", "ELLWOOD", "ELM", "ELONGATED", "ELOQUENCE", "ELOQUENT", "ELOQUENTLY", "ELSE", "ELSEWHERE", "ELSIE", "ELTON", "ELUCIDATE", "ELUSIVE", "ELVES", "ELVIS", "EMAILINC", "EMANATING", "EMANCIPATION", "EMBANKMENT", "EMBARGO", "EMBARK", "EMBARKED", "EMBARKING", "EMBARRASS", "EMBARRASSED", "EMBARRASSING", "EMBARRASSINGLY", "EMBARRASSMENT", "EMBASSIES", "EMBASSY", "EMBEDDED", "EMBERS", "EMBLEM", "EMBODIED", "EMBODIES", "EMBODIMENT", "EMBODY", "EMBODYING", "EMBRACE", "EMBRACED", "EMBRACES", "EMBRACING", "EMBROIDERED", "EMBROIDERY", "EMBRYO", "EMBRYONIC", "EMBRYOS", "EMERALD", "EMERGE", "EMERGED", "EMERGENCE", "EMERGENCIES", "EMERGENCY", "EMERGENT", "EMERGES", "EMERGING", "EMERSON", "EMIGRANTS", "EMIGRATE", "EMIGRATED", "EMIGRATION", "EMILIA", "EMILY", "EMINENCE", "EMINENT", "EMINENTLY", "EMIRATES", "EMISSION", "EMISSIONS", "EMLYN", "EMMA", "EMMANUEL", "EMMIE", "EMOTION", "EMOTIONAL", "EMOTIONALLY", "EMOTIONS", "EMOTIVE", "EMPATHY", "EMPEROR", "EMPERORS", "EMPHASES", "EMPHASIS", "EMPHASISE", "EMPHASISED", "EMPHASISES", "EMPHASISING", "EMPHASIZE", "EMPHASIZED", "EMPHASIZES", "EMPHASIZING", "EMPHATIC", "EMPHATICALLY", "EMPIRE", "EMPIRES", "EMPIRICAL", "EMPIRICALLY", "EMPIRICISM", "EMPLOY", "EMPLOYED", "EMPLOYEE", "EMPLOYEES", "EMPLOYER", "EMPLOYERS", "EMPLOYING", "EMPLOYMENT", "EMPLOYS", "EMPOWERED", "EMPOWERMENT", "EMPRESS", "EMPTIED", "EMPTINESS", "EMPTY", "EMPTYING", "EMU", "EMULATE", "EMULATION", "EMULSION", "ENABLE", "ENABLED", "ENABLES", "ENABLING", "ENACT", "ENACTED", "ENACTMENT", "ENAMEL", "ENCHANTED", "ENCHANTING", "ENCHANTMENT", "ENCLAVE", "ENCLOSE", "ENCLOSED", "ENCLOSING", "ENCLOSURE", "ENCLOSURES", "ENCODED", "ENCODING", "ENCOMPASS", "ENCOMPASSES", "ENCOMPASSING", "ENCORE", "ENCOUNTER", "ENCOUNTERED", "ENCOUNTERING", "ENCOUNTERS", "ENCOURAGE", "ENCOURAGED", "ENCOURAGEMENT", "ENCOURAGES", "ENCOURAGING", "ENCOURAGINGLY", "ENCROACHMENT", "END", "ENDANGER", "ENDANGERED", "ENDEAVOUR", "ENDEAVOURING", "ENDEAVOURS", "ENDED", "ENDEMIC", "ENDILL", "ENDING", "ENDINGS", "ENDLESS", "ENDLESSLY", "ENDOGENOUS", "ENDORSE", "ENDORSED", "ENDORSEMENT", "ENDORSING", "ENDOSCOPIC", "ENDOSCOPY", "ENDOTHELIAL", "ENDOWED", "ENDOWMENT", "ENDOWMENTS", "ENDS", "ENDURANCE", "ENDURE", "ENDURED", "ENDURING", "ENEMA", "ENEMIES", "ENEMY", "ENERGETIC", "ENERGETICALLY", "ENERGIES", "ENERGY", "ENFIELD", "ENFORCE", "ENFORCEABLE", "ENFORCED", "ENFORCEMENT", "ENFORCING", "ENGAGE", "ENGAGED", "ENGAGEMENT", "ENGAGEMENTS", "ENGAGING", "ENGELS", "ENGINE", "ENGINEER", "ENGINEERING", "ENGINEERS", "ENGINES", "ENGLAND", "ENGLISH", "ENGLISHMAN", "ENGLISHMEN", "ENGRAVINGS", "ENGULFED", "ENHANCE", "ENHANCED", "ENHANCEMENT", "ENHANCEMENTS", "ENHANCES", "ENHANCING", "ENID", "ENIGMA", "ENIGMATIC", "ENJOY", "ENJOYABLE", "ENJOYED", "ENJOYING", "ENJOYMENT", "ENJOYS", "ENLARGE", "ENLARGED", "ENLARGEMENT", "ENLIGHTENED", "ENLIGHTENMENT", "ENLIST", "ENLISTED", "ENMITY", "ENOCH", "ENORMITY", "ENORMOUS", "ENORMOUSLY", "ENOUGH", "ENQUIRE", "ENQUIRED", "ENQUIRIES", "ENQUIRING", "ENQUIRY", "ENRICH", "ENRICHED", "ENRICHMENT", "ENROL", "ENROLLED", "ENROLMENT", "ENSEMBLE", "ENSHRINED", "ENSUE", "ENSUED", "ENSUING", "ENSURE", "ENSURED", "ENSURES", "ENSURING", "ENTAIL", "ENTAILED", "ENTAILS", "ENTER", "ENTERED", "ENTERING", "ENTERPRISE", "ENTERPRISES", "ENTERS", "ENTERTAIN", "ENTERTAINED", "ENTERTAINER", "ENTERTAINERS", "ENTERTAINING", "ENTERTAINMENT", "ENTERTAINMENTS", "ENTHALPY", "ENTHUSIASM", "ENTHUSIAST", "ENTHUSIASTIC", "ENTHUSIASTICALLY", "ENTHUSIASTS", "ENTICE", "ENTIRE", "ENTIRELY", "ENTIRETY", "ENTITIES", "ENTITLE", "ENTITLED", "ENTITLEMENT", "ENTITLEMENTS", "ENTITY", "ENTOURAGE", "ENTRANCE", "ENTRANCES", "ENTRANT", "ENTRANTS", "ENTRENCHED", "ENTREPRENEUR", "ENTREPRENEURIAL", "ENTREPRENEURS", "ENTRIES", "ENTROPY", "ENTRUSTED", "ENTRY", "ENUMERATION", "ENVELOPE", "ENVELOPES", "ENVIABLE", "ENVIED", "ENVIOUS", "ENVIRONMENT", "ENVIRONMENTAL", "ENVIRONMENTALISTS", "ENVIRONMENTALLY", "ENVIRONMENTS", "ENVIRONS", "ENVISAGE", "ENVISAGED", "ENVISAGES", "ENVOY", "ENVOYS", "ENVY", "ENZYME", "ENZYMES", "EPIC", "EPIDEMIC", "EPIDEMICS", "EPIDEMIOLOGICAL", "EPIDEMIOLOGY", "EPILEPSY", "EPISCOPAL", "EPISODE", "EPISODES", "EPISTEMOLOGICAL", "EPISTEMOLOGY", "EPITAPH", "EPITHELIAL", "EPITHELIUM", "EPITOME", "EPOCH", "EPSOM", "EQUAL", "EQUALISED", "EQUALISER", "EQUALITY", "EQUALLY", "EQUALS", "EQUATE", "EQUATED", "EQUATION", "EQUATIONS", "EQUATOR", "EQUATORIAL", "EQUILIBRIUM", "EQUIP", "EQUIPMENT", "EQUIPPED", "EQUITABLE", "EQUITIES", "EQUITY", "EQUIVALENCE", "EQUIVALENT", "EQUIVALENTS", "EQUIVOCAL", "ERA", "ERADICATE", "ERADICATION", "ERASE", "ERECT", "ERECTED", "ERECTING", "ERECTION", "ERIC", "ERICH", "ERIK", "ERIKA", "ERNEST", "ERNIE", "ERNST", "ERODED", "EROSION", "EROTIC", "ERRAND", "ERRATIC", "ERROL", "ERRONEOUS", "ERROR", "ERRORS", "ERSKINE", "ERSTWHILE", "ERUPTED", "ERUPTION", "ERUPTIONS", "ESCALATION", "ESCAPE", "ESCAPED", "ESCAPES", "ESCAPING", "ESCARPMENT", "ESCORT", "ESCORTED", "ESCORTING", "ESOTERIC", "ESPECIAL", "ESPECIALLY", "ESPIONAGE", "ESRC", "ESSAY", "ESSAYS", "ESSENCE", "ESSENCES", "ESSENTIAL", "ESSENTIALLY", "ESSENTIALS", "ESSEX", "ESTABLISH", "ESTABLISHED", "ESTABLISHES", "ESTABLISHING", "ESTABLISHMENT", "ESTABLISHMENTS", "ESTABROOK", "ESTATE", "ESTATES", "ESTEEM", "ESTELLA", "ESTHER", "ESTIMATE", "ESTIMATED", "ESTIMATES", "ESTIMATING", "ESTIMATION", "ESTONIA", "ESTONIAN", "ESTRANGED", "ESTUARIES", "ESTUARY", "ETA", "ETC", "ETCETERA", "ETCHINGS", "ETERNAL", "ETERNALLY", "ETERNITY", "ETHANOL", "ETHEL", "ETHER", "ETHEREAL", "ETHERNET", "ETHIC", "ETHICAL", "ETHICS", "ETHIOPIA", "ETHIOPIAN", "ETHNIC", "ETHNICITY", "ETHNOGRAPHIC", "ETHNOGRAPHY", "ETHOS", "ETIQUETTE", "ETON", "EUBANK", "EUCHARIST", "EUGENE", "EUPHORIA", "EURO", "EUROBOND", "EUROPE", "EUROPEAN", "EUROPEANS", "EUROTUNNEL", "EUSTON", "EUTHANASIA", "EVACUATE", "EVACUATED", "EVACUATION", "EVACUEES", "EVADE", "EVALUATE", "EVALUATED", "EVALUATING", "EVALUATION", "EVALUATIONS", "EVALUATIVE", "EVANGELICAL", "EVANGELISM", "EVANS", "EVAPORATED", "EVAPORATION", "EVASION", "EVASIVE", "EVE", "EVELYN", "EVEN", "EVENING", "EVENINGS", "EVENLY", "EVENT", "EVENTFUL", "EVENTS", "EVENTUAL", "EVENTUALITY", "EVENTUALLY", "EVER", "EVEREST", "EVERETT", "EVERLASTING", "EVERTON", "EVERY", "EVERYBODY", "EVERYDAY", "EVERYONE", "EVERYTHING", "EVERYWHERE", "EVESHAM", "EVICTED", "EVICTION", "EVIDENCE", "EVIDENCED", "EVIDENT", "EVIDENTLY", "EVIL", "EVILS", "EVOCATION", "EVOCATIVE", "EVOKE", "EVOKED", "EVOKES", "EVOLUTION", "EVOLUTIONARY", "EVOLVE", "EVOLVED", "EVOLVING", "EWE", "EWEN", "EWES", "EWING", "EXACERBATE", "EXACERBATED", "EXACT", "EXACTING", "EXACTLY", "EXAGGERATE", "EXAGGERATED", "EXAGGERATING", "EXAGGERATION", "EXALTED", "EXAM", "EXAMINATION", "EXAMINATIONS", "EXAMINE", "EXAMINED", "EXAMINER", "EXAMINERS", "EXAMINES", "EXAMINING", "EXAMPLE", "EXAMPLES", "EXAMS", "EXASPERATION", "EXCAVATED", "EXCAVATION", "EXCAVATIONS", "EXCEED", "EXCEEDED", "EXCEEDING", "EXCEEDINGLY", "EXCEEDS", "EXCELLENCE", "EXCELLENT", "EXCEPT", "EXCEPTION", "EXCEPTIONAL", "EXCEPTIONALLY", "EXCEPTIONS", "EXCESS", "EXCESSES", "EXCESSIVE", "EXCESSIVELY", "EXCHANGE", "EXCHANGED", "EXCHANGES", "EXCHANGING", "EXCHEQUER", "EXCISE", "EXCITABLE", "EXCITATION", "EXCITE", "EXCITED", "EXCITEDLY", "EXCITEMENT", "EXCITING", "EXCLAIMED", "EXCLAMATION", "EXCLUDE", "EXCLUDED", "EXCLUDES", "EXCLUDING", "EXCLUSION", "EXCLUSIONS", "EXCLUSIVE", "EXCLUSIVELY", "EXCLUSIVITY", "EXCREMENT", "EXCRETION", "EXCURSION", "EXCURSIONS", "EXCUSE", "EXCUSED", "EXCUSES", "EXECUTE", "EXECUTED", "EXECUTING", "EXECUTION", "EXECUTIONER", "EXECUTIONS", "EXECUTIVE", "EXECUTIVES", "EXECUTOR", "EXECUTORS", "EXEMPLARS", "EXEMPLARY", "EXEMPLIFIED", "EXEMPLIFIES", "EXEMPT", "EXEMPTED", "EXEMPTION", "EXEMPTIONS", "EXERCISABLE", "EXERCISE", "EXERCISED", "EXERCISES", "EXERCISING", "EXERT", "EXERTED", "EXERTING", "EXERTION", "EXERTS", "EXETER", "EXHAUST", "EXHAUSTED", "EXHAUSTING", "EXHAUSTION", "EXHAUSTIVE", "EXHIBIT", "EXHIBITED", "EXHIBITING", "EXHIBITION", "EXHIBITIONS", "EXHIBITORS", "EXHIBITS", "EXHILARATION", "EXHORTATION", "EXILE", "EXILED", "EXILES", "EXIST", "EXISTED", "EXISTENCE", "EXISTENTIAL", "EXISTING", "EXISTS", "EXIT", "EXITS", "EXODUS", "EXOGENOUS", "EXON", "EXORBITANT", "EXOTIC", "EXPAND", "EXPANDED", "EXPANDING", "EXPANDS", "EXPANSE", "EXPANSION", "EXPANSIVE", "EXPATRIATE", "EXPATRIATES", "EXPECT", "EXPECTANCY", "EXPECTANTLY", "EXPECTATION", "EXPECTATIONS", "EXPECTED", "EXPECTING", "EXPECTS", "EXPEDIENCY", "EXPEDIENT", "EXPEDITION", "EXPEDITIONS", "EXPEL", "EXPELLED", "EXPENDED", "EXPENDITURE", "EXPENDITURES", "EXPENSE", "EXPENSES", "EXPENSIVE", "EXPERIENCE", "EXPERIENCED", "EXPERIENCES", "EXPERIENCING", "EXPERIENTIAL", "EXPERIMENT", "EXPERIMENTAL", "EXPERIMENTALLY", "EXPERIMENTATION", "EXPERIMENTER", "EXPERIMENTING", "EXPERIMENTS", "EXPERT", "EXPERTISE", "EXPERTLY", "EXPERTS", "EXPIRE", "EXPIRED", "EXPIRES", "EXPIRY", "EXPLAIN", "EXPLAINED", "EXPLAINING", "EXPLAINS", "EXPLANATION", "EXPLANATIONS", "EXPLANATORY", "EXPLICABLE", "EXPLICIT", "EXPLICITLY", "EXPLODE", "EXPLODED", "EXPLODING", "EXPLOIT", "EXPLOITATION", "EXPLOITED", "EXPLOITING", "EXPLOITS", "EXPLORATION", "EXPLORATIONS", "EXPLORATORY", "EXPLORE", "EXPLORED", "EXPLORER", "EXPLORERS", "EXPLORES", "EXPLORING", "EXPLOSION", "EXPLOSIONS", "EXPLOSIVE", "EXPLOSIVES", "EXPO", "EXPONENT", "EXPONENTIAL", "EXPONENTS", "EXPORT", "EXPORTED", "EXPORTER", "EXPORTERS", "EXPORTING", "EXPORTS", "EXPOSE", "EXPOSED", "EXPOSES", "EXPOSING", "EXPOSITION", "EXPOSURE", "EXPRESS", "EXPRESSED", "EXPRESSES", "EXPRESSING", "EXPRESSION", "EXPRESSIONLESS", "EXPRESSIONS", "EXPRESSIVE", "EXPRESSLY", "EXPULSION", "EXQUISITE", "EXQUISITELY", "EXTANT", "EXTEND", "EXTENDED", "EXTENDING", "EXTENDS", "EXTENSION", "EXTENSIONS", "EXTENSIVE", "EXTENSIVELY", "EXTENT", "EXTERIOR", "EXTERNAL", "EXTERNALITIES", "EXTERNALLY", "EXTINCT", "EXTINCTION", "EXTINGUISHED", "EXTORTION", "EXTRA", "EXTRACELLULAR", "EXTRACT", "EXTRACTED", "EXTRACTING", "EXTRACTION", "EXTRACTS", "EXTRADITION", "EXTRAORDINARILY", "EXTRAORDINARY", "EXTRAPOLATION", "EXTRAS", "EXTRAVAGANCE", "EXTRAVAGANT", "EXTRAVAGANZA", "EXTREME", "EXTREMELY", "EXTREMES", "EXTREMIST", "EXTREMISTS", "EXTREMITIES", "EXTREMITY", "EXUBERANCE", "EXUBERANT", "EXXON", "EYE", "EYEBROW", "EYEBROWS", "EYED", "EYEING", "EYELASHES", "EYELID", "EYELIDS", "EYES", "EYESIGHT", "EYRE", "EZRA", "FABER", "FABIA", "FABIO", "FABLE", "FABLIAU", "FABLIAUX", "FABRIC", "FABRICATION", "FABRICS", "FABULOUS", "FACADE", "FACE", "FACED", "FACELESS", "FACES", "FACET", "FACETS", "FACIAL", "FACIES", "FACILE", "FACILITATE", "FACILITATED", "FACILITATES", "FACILITATING", "FACILITIES", "FACILITY", "FACING", "FACSIMILE", "FACT", "FACTION", "FACTIONAL", "FACTIONS", "FACTOR", "FACTORIES", "FACTORS", "FACTORY", "FACTS", "FACTUAL", "FACULTIES", "FACULTY", "FADE", "FADED", "FADING", "FAIL", "FAILED", "FAILING", "FAILINGS", "FAILS", "FAILURE", "FAILURES", "FAINT", "FAINTEST", "FAINTLY", "FAIR", "FAIRCLOUGH", "FAIRER", "FAIRFAX", "FAIRGROUND", "FAIRIES", "FAIRLY", "FAIRNESS", "FAIRS", "FAIRWAY", "FAIRY", "FAITH", "FAITHFUL", "FAITHFULLY", "FAITHS", "FAKE", "FALCON", "FALCONS", "FALDO", "FALKIRK", "FALKLAND", "FALKLANDS", "FALL", "FALLACY", "FALLEN", "FALLING", "FALLON", "FALLOW", "FALLS", "FALMOUTH", "FALSE", "FALSEHOOD", "FALSELY", "FALTERED", "FAME", "FAMED", "FAMILIAL", "FAMILIAR", "FAMILIARITY", "FAMILIES", "FAMILY", "FAMINE", "FAMOUS", "FAMOUSLY", "FAN", "FANATIC", "FANATICAL", "FANATICS", "FANCIED", "FANCIES", "FANCIFUL", "FANCY", "FAND", "FANGS", "FANNY", "FANS", "FANSHAWE", "FANTASIES", "FANTASTIC", "FANTASY", "FAR", "FARCE", "FARCICAL", "FARE", "FARED", "FARES", "FAREWELL", "FAREWELLS", "FARM", "FARMER", "FARMERS", "FARMHOUSE", "FARMING", "FARMLAND", "FARMS", "FARMYARD", "FARNBOROUGH", "FARNHAM", "FARR", "FARRELL", "FARTHER", "FASCINATED", "FASCINATING", "FASCINATION", "FASCISM", "FASCIST", "FASCISTS", "FASHION", "FASHIONABLE", "FASHIONED", "FASHIONS", "FAST", "FASTENED", "FASTER", "FASTEST", "FASTIDIOUS", "FAT", "FATAL", "FATALITIES", "FATALLY", "FATE", "FATEFUL", "FATES", "FATHER", "FATHERS", "FATHOM", "FATIGUE", "FATS", "FATTY", "FAULKNER", "FAULT", "FAULTS", "FAULTY", "FAUNA", "FAVOUR", "FAVOURABLE", "FAVOURABLY", "FAVOURED", "FAVOURING", "FAVOURITE", "FAVOURITES", "FAVOURS", "FAWCETT", "FAX", "FAYE", "FBI", "FEAR", "FEARED", "FEARFUL", "FEARFULLY", "FEARGAL", "FEARING", "FEARLESS", "FEARS", "FEARSOME", "FEASIBILITY", "FEASIBLE", "FEAST", "FEAT", "FEATHER", "FEATHERS", "FEATHERY", "FEATS", "FEATURE", "FEATURED", "FEATURELESS", "FEATURES", "FEATURING", "FEBRUARY", "FED", "FEDERAL", "FEDERALISM", "FEDERATION", "FEDOROV", "FEE", "FEEBLE", "FEEBLY", "FEED", "FEEDBACK", "FEEDER", "FEEDERS", "FEEDING", "FEEDS", "FEEL", "FEELING", "FEELINGS", "FEELS", "FEES", "FEET", "FELICITY", "FELINE", "FELIPE", "FELIX", "FELIXSTOWE", "FELL", "FELLA", "FELLED", "FELLER", "FELLOW", "FELLOWS", "FELLOWSHIP", "FELLOWSHIPS", "FELT", "FEMALE", "FEMALES", "FEMININE", "FEMININITY", "FEMINISM", "FEMINIST", "FEMINISTS", "FEN", "FENARI", "FENCE", "FENCES", "FENCING", "FEND", "FENDER", "FENELLA", "FENN", "FENS", "FENTON", "FERDINAND", "FERGIE", "FERGUS", "FERGUSON", "FERGUSSON", "FERMENTATION", "FERN", "FERNANDO", "FERNS", "FEROCIOUS", "FEROCITY", "FERRANTI", "FERRARI", "FERRET", "FERRETS", "FERRIES", "FERRY", "FERTILE", "FERTILISER", "FERTILISERS", "FERTILITY", "FERTILIZATION", "FERTILIZER", "FERTILIZERS", "FERVENT", "FERVENTLY", "FERVOUR", "FESTIVAL", "FESTIVALS", "FESTIVE", "FESTIVITIES", "FETAL", "FETCH", "FETCHED", "FETUS", "FEUD", "FEUDAL", "FEUDALISM", "FEVER", "FEVERISH", "FEW", "FEWER", "FIASCO", "FIAT", "FIBRE", "FIBREGLASS", "FIBRES", "FIBROSIS", "FIBROUS", "FICKLE", "FICTION", "FICTIONAL", "FICTIONS", "FICTITIOUS", "FIDDLE", "FIDDLING", "FIDEL", "FIDELITY", "FIDUCIARY", "FIELD", "FIELDING", "FIELDS", "FIELDWORK", "FIERCE", "FIERCELY", "FIERY", "FIFE", "FIFTEEN", "FIFTEENTH", "FIFTH", "FIFTIES", "FIFTIETH", "FIFTY", "FIG", "FIGHT", "FIGHTER", "FIGHTERS", "FIGHTING", "FIGHTS", "FIGS", "FIGURATIVE", "FIGURE", "FIGURED", "FIGURES", "FIJI", "FILAMENTS", "FILE", "FILED", "FILENAME", "FILES", "FILING", "FILL", "FILLED", "FILLER", "FILLET", "FILLETS", "FILLING", "FILLINGS", "FILLS", "FILLY", "FILM", "FILMED", "FILMER", "FILMING", "FILMMAKERS", "FILMS", "FILTER", "FILTERED", "FILTERING", "FILTERS", "FILTH", "FILTHY", "FILTRATION", "FIN", "FINAL", "FINALE", "FINALISED", "FINALISTS", "FINALITY", "FINALLY", "FINALS", "FINANCE", "FINANCED", "FINANCES", "FINANCIAL", "FINANCIALLY", "FINANCIER", "FINANCIERS", "FINANCING", "FINCH", "FINCHLEY", "FIND", "FINDING", "FINDINGS", "FINDS", "FINE", "FINED", "FINELY", "FINER", "FINES", "FINESSE", "FINEST", "FINGER", "FINGERBOARD", "FINGERED", "FINGERNAILS", "FINGERPRINTS", "FINGERS", "FINGERTIPS", "FINISH", "FINISHED", "FINISHES", "FINISHING", "FINITE", "FINLAND", "FINN", "FINNISH", "FINS", "FINSBURY", "FIONA", "FIR", "FIRE", "FIREARMS", "FIRED", "FIREFIGHTERS", "FIRELIGHT", "FIREMAN", "FIREMEN", "FIREPLACE", "FIRES", "FIREWOOD", "FIREWORK", "FIREWORKS", "FIRING", "FIRM", "FIRMER", "FIRMLY", "FIRMNESS", "FIRMS", "FIRST", "FIRSTLY", "FIRTH", "FISCAL", "FISH", "FISHED", "FISHER", "FISHERIES", "FISHERMAN", "FISHERMEN", "FISHERY", "FISHES", "FISHING", "FISHKEEPERS", "FISHY", "FIST", "FISTS", "FIT", "FITNESS", "FITS", "FITTED", "FITTER", "FITTEST", "FITTING", "FITTINGS", "FITZALAN", "FITZGERALD", "FIVE", "FIVER", "FIVES", "FIX", "FIXATION", "FIXED", "FIXING", "FIXTURE", "FIXTURES", "FIZZY", "FLAG", "FLAGS", "FLAGSHIP", "FLAIR", "FLAK", "FLAKE", "FLAKES", "FLAMBOYANT", "FLAME", "FLAMES", "FLAMING", "FLANDERS", "FLANK", "FLANKED", "FLANKER", "FLANKS", "FLANNEL", "FLAP", "FLAPPED", "FLAPPING", "FLAPS", "FLARE", "FLARED", "FLARES", "FLASH", "FLASHED", "FLASHES", "FLASHING", "FLASHY", "FLASK", "FLAT", "FLATLY", "FLATS", "FLATTENED", "FLATTER", "FLATTERED", "FLATTERING", "FLATTERY", "FLAUBERT", "FLAVIA", "FLAVOUR", "FLAVOURS", "FLAW", "FLAWED", "FLAWLESS", "FLAWS", "FLEA", "FLEAS", "FLED", "FLEE", "FLEECE", "FLEEING", "FLEET", "FLEETING", "FLEETINGLY", "FLEETS", "FLEETWOOD", "FLEISCHMANN", "FLEMING", "FLEMISH", "FLESH", "FLESHY", "FLETCHER", "FLEW", "FLEX", "FLEXIBILITY", "FLEXIBLE", "FLICK", "FLICKED", "FLICKER", "FLICKERED", "FLICKERING", "FLICKING", "FLIES", "FLIGHT", "FLIGHTS", "FLIMSY", "FLINCHED", "FLING", "FLINGING", "FLINT", "FLIP", "FLIPPED", "FLIPPING", "FLIRTATION", "FLIRTING", "FLOAT", "FLOATED", "FLOATING", "FLOATS", "FLOCK", "FLOCKS", "FLOOD", "FLOODED", "FLOODING", "FLOODLIT", "FLOODS", "FLOOR", "FLOORBOARDS", "FLOORING", "FLOORS", "FLOP", "FLOPPED", "FLOPPY", "FLORA", "FLORAL", "FLORENCE", "FLORIAN", "FLORID", "FLORIDA", "FLORIST", "FLOTATION", "FLOTILLA", "FLOUR", "FLOURISH", "FLOURISHED", "FLOURISHING", "FLOW", "FLOWED", "FLOWER", "FLOWERING", "FLOWERS", "FLOWERY", "FLOWING", "FLOWN", "FLOWS", "FLOY", "FLOYD", "FLU", "FLUCTUATION", "FLUCTUATIONS", "FLUE", "FLUENCY", "FLUENT", "FLUENTLY", "FLUFFY", "FLUID", "FLUIDS", "FLUKE", "FLUNG", "FLUORESCENCE", "FLUORESCENT", "FLURRY", "FLUSH", "FLUSHED", "FLUSHING", "FLUTE", "FLUTTER", "FLUTTERED", "FLUTTERING", "FLUX", "FLY", "FLYER", "FLYERS", "FLYING", "FLYNN", "FMLN", "FOAL", "FOALS", "FOAM", "FOCAL", "FOCUS", "FOCUSED", "FOCUSES", "FOCUSING", "FOCUSSED", "FODDER", "FOE", "FOETAL", "FOETUS", "FOG", "FOGGY", "FOIL", "FOLD", "FOLDED", "FOLDER", "FOLDERS", "FOLDING", "FOLDS", "FOLEY", "FOLIAGE", "FOLIO", "FOLK", "FOLKESTONE", "FOLKLORE", "FOLKS", "FOLLIES", "FOLLOW", "FOLLOWED", "FOLLOWER", "FOLLOWERS", "FOLLOWING", "FOLLOWS", "FOLLY", "FOND", "FONDA", "FONDANT", "FONDLY", "FONDNESS", "FONT", "FONTAINE", "FONTS", "FOOD", "FOODS", "FOODSTUFFS", "FOOL", "FOOLED", "FOOLING", "FOOLISH", "FOOLISHLY", "FOOLS", "FOOT", "FOOTAGE", "FOOTBALL", "FOOTBALLER", "FOOTBALLERS", "FOOTBRIDGE", "FOOTHILLS", "FOOTHOLD", "FOOTING", "FOOTNOTE", "FOOTNOTES", "FOOTPATH", "FOOTPATHS", "FOOTPRINT", "FOOTPRINTS", "FOOTSTEPS", "FOOTWEAR", "FOOTWORK", "FOR", "FORAY", "FORAYS", "FORBADE", "FORBES", "FORBID", "FORBIDDEN", "FORBIDDING", "FORBIDS", "FORCE", "FORCED", "FORCEFUL", "FORCEFULLY", "FORCEPS", "FORCES", "FORCIBLE", "FORCIBLY", "FORCING", "FORD", "FORE", "FOREARM", "FOREBEARS", "FOREBODING", "FORECAST", "FORECASTING", "FORECASTS", "FORECOURT", "FOREFINGER", "FOREFRONT", "FOREGOING", "FOREGROUND", "FOREHEAD", "FOREIGN", "FOREIGNER", "FOREIGNERS", "FOREMAN", "FOREMOST", "FORENSIC", "FORERUNNER", "FORESAW", "FORESEE", "FORESEEABLE", "FORESEEN", "FORESIGHT", "FOREST", "FORESTALL", "FORESTER", "FORESTERS", "FORESTRY", "FORESTS", "FOREVER", "FOREWORD", "FORFEITURE", "FORGE", "FORGED", "FORGERY", "FORGET", "FORGETS", "FORGETTING", "FORGING", "FORGIVE", "FORGIVEN", "FORGIVENESS", "FORGIVING", "FORGO", "FORGOT", "FORGOTTEN", "FORK", "FORKS", "FORLORN", "FORM", "FORMAL", "FORMALISM", "FORMALITIES", "FORMALITY", "FORMALLY", "FORMAT", "FORMATION", "FORMATIONS", "FORMATIVE", "FORMATS", "FORMBY", "FORMED", "FORMER", "FORMERLY", "FORMIDABLE", "FORMING", "FORMS", "FORMULA", "FORMULAE", "FORMULAS", "FORMULATE", "FORMULATED", "FORMULATING", "FORMULATION", "FORMULATIONS", "FORREST", "FORRESTER", "FORSTER", "FORSYTH", "FORT", "FORTE", "FORTH", "FORTHCOMING", "FORTHRIGHT", "FORTHWITH", "FORTIES", "FORTIFICATIONS", "FORTIFIED", "FORTNIGHT", "FORTRESS", "FORTS", "FORTUITOUS", "FORTUNATE", "FORTUNATELY", "FORTUNE", "FORTUNES", "FORTY", "FORUM", "FORUMS", "FORWARD", "FORWARDED", "FORWARDS", "FOSSIL", "FOSSILS", "FOSTER", "FOSTERED", "FOSTERING", "FOUCAULT", "FOUGHT", "FOUL", "FOUND", "FOUNDATION", "FOUNDATIONS", "FOUNDED", "FOUNDER", "FOUNDERS", "FOUNDING", "FOUNDRY", "FOUNTAIN", "FOUNTAINS", "FOUR", "FOURS", "FOURTEEN", "FOURTEENTH", "FOURTH", "FOURTHLY", "FOWL", "FOWLER", "FOX", "FOXES", "FOXTON", "FOYER", "FOYLE", "FRACTION", "FRACTIONAL", "FRACTIONALLY", "FRACTIONS", "FRACTURE", "FRACTURED", "FRACTURES", "FRAGILE", "FRAGILITY", "FRAGMENT", "FRAGMENTARY", "FRAGMENTATION", "FRAGMENTED", "FRAGMENTS", "FRAGRANCE", "FRAGRANT", "FRAIL", "FRAILTY", "FRAME", "FRAMED", "FRAMES", "FRAMEWORK", "FRAMEWORKS", "FRAMING", "FRAN", "FRANC", "FRANCA", "FRANCE", "FRANCES", "FRANCESCA", "FRANCESCO", "FRANCHISE", "FRANCHISES", "FRANCIS", "FRANCISCO", "FRANCO", "FRANCOIS", "FRANCS", "FRANK", "FRANKENSTEIN", "FRANKFURT", "FRANKIE", "FRANKISH", "FRANKLIN", "FRANKLY", "FRANKNESS", "FRANKS", "FRANTIC", "FRANTICALLY", "FRANZ", "FRASER", "FRATERNAL", "FRATERNITY", "FRAU", "FRAUD", "FRAUDULENT", "FRAUGHT", "FRAY", "FRAZER", "FREAK", "FRED", "FREDA", "FREDDIE", "FREDDY", "FREDERICA", "FREDERICK", "FREE", "FREED", "FREEDOM", "FREEDOMS", "FREEHOLD", "FREEHOLDERS", "FREEING", "FREELANCE", "FREELY", "FREEMAN", "FREER", "FREEZE", "FREEZER", "FREEZING", "FREIGHT", "FRENCH", "FRENCHMAN", "FRENCHMEN", "FRENETIC", "FRENZIED", "FRENZY", "FREQUENCIES", "FREQUENCY", "FREQUENT", "FREQUENTLY", "FRERE", "FRESCO", "FRESCOES", "FRESH", "FRESHER", "FRESHLY", "FRESHNESS", "FRESHWATER", "FREUD", "FREUDIAN", "FRIAR", "FRICTION", "FRIDAY", "FRIDAYS", "FRIDGE", "FRIDGES", "FRIED", "FRIEDMAN", "FRIEDRICH", "FRIEND", "FRIENDLINESS", "FRIENDLY", "FRIENDS", "FRIENDSHIP", "FRIENDSHIPS", "FRIEZE", "FRIGHT", "FRIGHTEN", "FRIGHTENED", "FRIGHTENING", "FRIGHTFUL", "FRIGID", "FRINGE", "FRINGES", "FRITH", "FRITZ", "FRIVOLOUS", "FRIZZELL", "FROCK", "FRODO", "FROG", "FROGS", "FROM", "FROME", "FRONT", "FRONTAGE", "FRONTAL", "FRONTIER", "FRONTIERS", "FRONTS", "FROST", "FROSTY", "FROTH", "FROWN", "FROWNED", "FROWNING", "FROZE", "FROZEN", "FRUIT", "FRUITFUL", "FRUITION", "FRUITLESS", "FRUITS", "FRUSTRATE", "FRUSTRATED", "FRUSTRATING", "FRUSTRATION", "FRUSTRATIONS", "FRY", "FRYING", "FUEL", "FUELLED", "FUELS", "FUGITIVE", "FUJIMORI", "FUJITSU", "FULFIL", "FULFILLED", "FULFILLING", "FULFILMENT", "FULFILS", "FULHAM", "FULL", "FULLBACK", "FULLER", "FULLEST", "FULLNESS", "FULLY", "FUMBLED", "FUMBLING", "FUMES", "FUN", "FUNCHAL", "FUNCTION", "FUNCTIONAL", "FUNCTIONALISM", "FUNCTIONALIST", "FUNCTIONALITY", "FUNCTIONALLY", "FUNCTIONING", "FUNCTIONS", "FUND", "FUNDAMENTAL", "FUNDAMENTALISM", "FUNDAMENTALIST", "FUNDAMENTALISTS", "FUNDAMENTALLY", "FUNDAMENTALS", "FUNDED", "FUNDHOLDERS", "FUNDING", "FUNDS", "FUNERAL", "FUNERALS", "FUNGAL", "FUNGI", "FUNGUS", "FUNKY", "FUNNEL", "FUNNIEST", "FUNNILY", "FUNNY", "FUR", "FURBY", "FURIOUS", "FURIOUSLY", "FURNACE", "FURNACES", "FURNISH", "FURNISHED", "FURNISHINGS", "FURNITURE", "FURORE", "FURROW", "FURRY", "FURS", "FURTHER", "FURTHERING", "FURTHERMORE", "FURTHEST", "FURTIVE", "FURY", "FUSE", "FUSELAGE", "FUSION", "FUSS", "FUSSY", "FUTILE", "FUTILITY", "FUTURE", "FUTURES", "FUTURISTIC", "FUZZY", "GABLE", "GABLES", "GABON", "GABRIEL", "GADGETS", "GAEL", "GAELIC", "GAG", "GAIETY", "GAIL", "GAILY", "GAIN", "GAINED", "GAINING", "GAINS", "GAINSBOROUGH", "GAIT", "GAL", "GALA", "GALACTIC", "GALAXIES", "GALAXY", "GALE", "GALERIE", "GALES", "GALILEO", "GALL", "GALLAGHER", "GALLANT", "GALLERIES", "GALLERY", "GALLEY", "GALLON", "GALLONS", "GALLOP", "GALLOPED", "GALLOPING", "GALLOWAY", "GALLOWS", "GALORE", "GALVANISED", "GALWAY", "GAMBLE", "GAMBLER", "GAMBLING", "GAME", "GAMES", "GAMMA", "GANDHI", "GANG", "GANGLION", "GANGS", "GANGSTER", "GANGSTERS", "GANGWAY", "GAOL", "GAP", "GAPED", "GAPS", "GARAGE", "GARAGES", "GARBAGE", "GARCIA", "GARDEN", "GARDENER", "GARDENERS", "GARDENING", "GARDENS", "GARDINER", "GARDNER", "GARETH", "GARGY", "GARISH", "GARLAND", "GARLIC", "GARMENT", "GARMENTS", "GARNISH", "GARRETT", "GARRISON", "GARRISONS", "GARRY", "GARTER", "GARTH", "GARVEY", "GARY", "GAS", "GASCOIGNE", "GASCONY", "GASEOUS", "GASES", "GASH", "GASP", "GASPED", "GASPING", "GASPS", "GASTON", "GASTRIC", "GASTRIN", "GASTRITIS", "GASTROINTESTINAL", "GATE", "GATEHOUSE", "GATES", "GATESHEAD", "GATEWAY", "GATEWAYS", "GATHER", "GATHERED", "GATHERING", "GATHERINGS", "GATHERS", "GATT", "GATTING", "GATWICK", "GAUGE", "GAUL", "GAULLE", "GAUNT", "GAUNTLET", "GAVE", "GAVIN", "GAY", "GAYS", "GAZA", "GAZE", "GAZED", "GAZETTE", "GAZING", "GAZZA", "GAZZER", "GCSE", "GEAR", "GEARBOX", "GEARED", "GEARING", "GEARS", "GEBREC", "GEDANKEN", "GEDGE", "GEE", "GEESE", "GEEZER", "GEL", "GELDER", "GEM", "GEMINI", "GEMMA", "GEMS", "GENDER", "GENE", "GENERA", "GENERAL", "GENERALISATION", "GENERALISATIONS", "GENERALISE", "GENERALISED", "GENERALITY", "GENERALIZATION", "GENERALIZATIONS", "GENERALIZE", "GENERALIZED", "GENERALLY", "GENERALS", "GENERATE", "GENERATED", "GENERATES", "GENERATING", "GENERATION", "GENERATIONS", "GENERATIVE", "GENERATOR", "GENERATORS", "GENERIC", "GENEROSITY", "GENEROUS", "GENEROUSLY", "GENES", "GENESIS", "GENETIC", "GENETICALLY", "GENETICS", "GENEVA", "GENIAL", "GENITAL", "GENITALS", "GENIUS", "GENOA", "GENOCIDE", "GENOME", "GENOMIC", "GENRE", "GENRES", "GENT", "GENTEEL", "GENTLE", "GENTLEMAN", "GENTLEMANLY", "GENTLEMEN", "GENTLENESS", "GENTLER", "GENTLY", "GENTRY", "GENTS", "GENUINE", "GENUINELY", "GENUS", "GEOCHEMICAL", "GEOFF", "GEOFFREY", "GEOGRAPHERS", "GEOGRAPHIC", "GEOGRAPHICAL", "GEOGRAPHICALLY", "GEOGRAPHY", "GEOLOGICAL", "GEOLOGIST", "GEOLOGISTS", "GEOLOGY", "GEOMETRIC", "GEOMETRICAL", "GEOMETRY", "GEOMORPHOLOGY", "GEOPHYSICAL", "GEORDIE", "GEORG", "GEORGE", "GEORGES", "GEORGIA", "GEORGIADES", "GEORGIAN", "GEORGINA", "GEOTHERMAL", "GERALD", "GERALDINE", "GERANIUMS", "GERARD", "GERHARD", "GERIATRIC", "GERM", "GERMAN", "GERMANIC", "GERMANS", "GERMANY", "GERMS", "GERRARD", "GERRY", "GERTRUDE", "GESNER", "GESTATION", "GESTURE", "GESTURED", "GESTURES", "GESTURING", "GET", "GETAWAY", "GETS", "GETTING", "GETTY", "GHANA", "GHASTLY", "GHETTO", "GHOST", "GHOSTLY", "GHOSTS", "GIANT", "GIANTS", "GIBBONS", "GIBBS", "GIBRALTAR", "GIBSON", "GIDDY", "GIFFORD", "GIFT", "GIFTED", "GIFTS", "GIG", "GIGANTIC", "GIGGLE", "GIGGLED", "GIGGLES", "GIGGLING", "GIGGS", "GIGS", "GILBERT", "GILBEY", "GILDED", "GILES", "GILL", "GILLESPIE", "GILLIAN", "GILLINGHAM", "GILLS", "GILT", "GILTS", "GIN", "GINA", "GINGER", "GINGERLY", "GIORGIO", "GIOVANNI", "GIPSIES", "GIPSY", "GIRL", "GIRLFRIEND", "GIRLFRIENDS", "GIRLS", "GIST", "GIVE", "GIVEN", "GIVES", "GIVING", "GLACIAL", "GLACIER", "GLACIERS", "GLAD", "GLADLY", "GLADSTONE", "GLADYS", "GLAMORGAN", "GLAMOROUS", "GLAMOUR", "GLANCE", "GLANCED", "GLANCES", "GLANCING", "GLAND", "GLANDS", "GLARE", "GLARED", "GLARING", "GLASGOW", "GLASNOST", "GLASS", "GLASSES", "GLASSY", "GLASTONBURY", "GLAXO", "GLAZE", "GLAZED", "GLAZING", "GLEAM", "GLEAMED", "GLEAMING", "GLEANED", "GLEE", "GLEEFULLY", "GLEN", "GLENN", "GLIADIN", "GLIDER", "GLIDERS", "GLIDING", "GLIMMER", "GLIMPSE", "GLIMPSED", "GLIMPSES", "GLINT", "GLINTING", "GLISTENING", "GLITTER", "GLITTERED", "GLITTERING", "GLITTERS", "GLOBAL", "GLOBALLY", "GLOBE", "GLOBULAR", "GLOOM", "GLOOMILY", "GLOOMY", "GLORIA", "GLORIES", "GLORIOUS", "GLORIOUSLY", "GLORY", "GLOSS", "GLOSSARY", "GLOSSY", "GLOUCESTER", "GLOUCESTERSHIRE", "GLOVE", "GLOVED", "GLOVER", "GLOVES", "GLOW", "GLOWED", "GLOWING", "GLUCOSE", "GLUE", "GLUED", "GLUM", "GLUTAMATE", "GLUTEN", "GLYN", "GLYNN", "GMBH", "GOAL", "GOALKEEPER", "GOALS", "GOAT", "GOATS", "GOBLET", "GOBLIN", "GOBLINS", "GOD", "GODDARD", "GODDESS", "GODFATHER", "GODFREY", "GODMOTHER", "GODS", "GODWIN", "GOEBBELS", "GOES", "GOGGLES", "GOGH", "GOING", "GOINGS", "GOLD", "GOLDBERG", "GOLDEN", "GOLDFISH", "GOLDIE", "GOLDING", "GOLDMAN", "GOLDSMITH", "GOLDSMITHS", "GOLF", "GOLFER", "GOLFERS", "GONE", "GONORRHOEA", "GOOCH", "GOOD", "GOODBYE", "GOODIES", "GOODMAN", "GOODNESS", "GOODNIGHT", "GOODS", "GOODWILL", "GOODWIN", "GOODY", "GOOSE", "GORBACHEV", "GORDON", "GORE", "GORENG", "GORGE", "GORGEOUS", "GORILLA", "GORMAN", "GOSFORTH", "GOSH", "GOSPEL", "GOSPELS", "GOSSIP", "GOT", "GOTHIC", "GOTTEN", "GOUGH", "GOULD", "GOURMET", "GOVERN", "GOVERNANCE", "GOVERNED", "GOVERNESS", "GOVERNING", "GOVERNMENT", "GOVERNMENTAL", "GOVERNMENTS", "GOVERNOR", "GOVERNORS", "GOVERNS", "GOWER", "GOWN", "GOWNS", "GRAB", "GRABBED", "GRABBING", "GRABS", "GRACE", "GRACEFUL", "GRACEFULLY", "GRACIOUS", "GRACIOUSLY", "GRADE", "GRADED", "GRADES", "GRADIENT", "GRADIENTS", "GRADUAL", "GRADUALLY", "GRADUATE", "GRADUATED", "GRADUATES", "GRADUATING", "GRADUATION", "GRAEME", "GRAF", "GRAFFITI", "GRAFT", "GRAFTON", "GRAHAM", "GRAIN", "GRAINNE", "GRAINS", "GRAM", "GRAMMAR", "GRAMMARS", "GRAMMATICAL", "GRAMMATICALLY", "GRAMOPHONE", "GRAMPIAN", "GRAMS", "GRAN", "GRANADA", "GRAND", "GRANDAD", "GRANDCHILDREN", "GRANDDAD", "GRANDDAUGHTER", "GRANDER", "GRANDEUR", "GRANDFATHER", "GRANDIOSE", "GRANDMA", "GRANDMOTHER", "GRANDPA", "GRANDPARENTS", "GRANDSON", "GRANGE", "GRANITE", "GRANNY", "GRANT", "GRANTED", "GRANTHAM", "GRANTING", "GRANTS", "GRANULES", "GRANVILLE", "GRAPE", "GRAPEFRUIT", "GRAPES", "GRAPH", "GRAPHIC", "GRAPHICAL", "GRAPHICALLY", "GRAPHICS", "GRAPHITE", "GRAPHS", "GRASP", "GRASPED", "GRASPING", "GRASS", "GRASSES", "GRASSLAND", "GRASSLANDS", "GRASSROOTS", "GRASSY", "GRATE", "GRATED", "GRATEFUL", "GRATEFULLY", "GRATIFICATION", "GRATIFYING", "GRATITUDE", "GRATUITOUS", "GRAVE", "GRAVEL", "GRAVELY", "GRAVES", "GRAVEYARD", "GRAVITATIONAL", "GRAVITY", "GRAVY", "GRAY", "GRAZING", "GREASE", "GREASY", "GREAT", "GREATER", "GREATEST", "GREATLY", "GREATNESS", "GREECE", "GREED", "GREEDILY", "GREEDY", "GREEK", "GREEKS", "GREEN", "GREENBELT", "GREENE", "GREENER", "GREENERY", "GREENHOUSE", "GREENLAND", "GREENOCK", "GREENPEACE", "GREENS", "GREENWICH", "GREENWOOD", "GREET", "GREETED", "GREETING", "GREETINGS", "GREG", "GREGARIOUS", "GREGORY", "GRENADA", "GRENADE", "GRENADES", "GRENFELL", "GRETA", "GREW", "GREY", "GREYHOUND", "GRID", "GRIDS", "GRIEF", "GRIEVANCE", "GRIEVANCES", "GRIEVE", "GRIEVOUS", "GRIFFIN", "GRIFFITH", "GRIFFITHS", "GRILL", "GRILLE", "GRIM", "GRIMACE", "GRIMACED", "GRIME", "GRIMES", "GRIMLY", "GRIMM", "GRIMMA", "GRIMSBY", "GRIN", "GRIND", "GRINDING", "GRINNED", "GRINNING", "GRIP", "GRIPPED", "GRIPPING", "GRIPS", "GRISLY", "GRIT", "GRITTED", "GRITTY", "GROAN", "GROANED", "GROANING", "GROCER", "GROCERIES", "GROCERY", "GROIN", "GROOM", "GROOMS", "GROOVE", "GROOVES", "GROPED", "GROPING", "GROSS", "GROSSLY", "GROSVENOR", "GROTESQUE", "GROUND", "GROUNDED", "GROUNDING", "GROUNDS", "GROUNDWATER", "GROUNDWORK", "GROUP", "GROUPED", "GROUPING", "GROUPINGS", "GROUPS", "GROUSE", "GROVE", "GROVES", "GROW", "GROWERS", "GROWING", "GROWL", "GROWLED", "GROWN", "GROWS", "GROWTH", "GRUB", "GRUBBY", "GRUDGE", "GRUDGINGLY", "GRUESOME", "GRUFF", "GRUMBLED", "GRUMBLING", "GRUMPY", "GRUNT", "GRUNTE", "GRUNTED", "GUARANTEE", "GUARANTEED", "GUARANTEEING", "GUARANTEES", "GUARANTOR", "GUARD", "GUARDED", "GUARDIAN", "GUARDIANS", "GUARDING", "GUARDS", "GUATEMALA", "GUBERNIIA", "GUERRILLA", "GUERRILLAS", "GUESS", "GUESSED", "GUESSING", "GUESSWORK", "GUEST", "GUESTS", "GUIDANCE", "GUIDE", "GUIDEBOOK", "GUIDED", "GUIDELINE", "GUIDELINES", "GUIDES", "GUIDING", "GUIDO", "GUIL", "GUILD", "GUILDFORD", "GUILDHALL", "GUILDS", "GUILLOTINE", "GUILT", "GUILTILY", "GUILTY", "GUINEA", "GUINEAS", "GUINNESS", "GUISBOROUGH", "GUISE", "GUITAR", "GUITARIST", "GUITARISTS", "GUITARS", "GULF", "GULL", "GULLIBLE", "GULLS", "GULLY", "GULP", "GULPED", "GUM", "GUMMER", "GUMS", "GUN", "GUNFIRE", "GUNMAN", "GUNMEN", "GUNN", "GUNNER", "GUNNERS", "GUNPOWDER", "GUNS", "GURDER", "GURU", "GUST", "GUSTO", "GUT", "GUTS", "GUTTER", "GUTTERING", "GUTTERS", "GUY", "GUYANA", "GUYS", "GWEN", "GWENT", "GWYNEDD", "GYM", "GYMNASIUM", "GYPSIES", "GYPSY", "HABERMAS", "HABIT", "HABITAT", "HABITATION", "HABITATS", "HABITS", "HABITUAL", "HABITUALLY", "HABITUATION", "HABSBURG", "HABSBURGS", "HACK", "HACKING", "HACKNEY", "HAD", "HADDOCK", "HADRIAN", "HAEMOGLOBIN", "HAEMORRHAGE", "HAGGARD", "HAGUE", "HAIL", "HAILED", "HAILSHAM", "HAINES", "HAIR", "HAIRCUT", "HAIRDRESSER", "HAIRDRESSERS", "HAIRDRESSING", "HAIRED", "HAIRS", "HAIRSTYLE", "HAIRY", "HAITI", "HAL", "HALE", "HALF", "HALFWAY", "HALIFAX", "HALL", "HALLIDAY", "HALLING", "HALLMARK", "HALLMARKS", "HALLO", "HALLOWED", "HALLS", "HALLUCINATIONS", "HALLWAY", "HALO", "HALT", "HALTED", "HALVED", "HALVES", "HAM", "HAMBLETON", "HAMBURG", "HAMILTON", "HAMISH", "HAMLET", "HAMLETS", "HAMMER", "HAMMERED", "HAMMERING", "HAMMERS", "HAMMERSMITH", "HAMMOND", "HAMPERED", "HAMPSHIRE", "HAMPSTEAD", "HAMPTON", "HAMSTRING", "HANCOCK", "HAND", "HANDBAG", "HANDBOOK", "HANDCUFFS", "HANDED", "HANDEL", "HANDERS", "HANDFUL", "HANDICAP", "HANDICAPPED", "HANDICAPS", "HANDING", "HANDKERCHIEF", "HANDLE", "HANDLED", "HANDLER", "HANDLERS", "HANDLES", "HANDLING", "HANDMADE", "HANDOUT", "HANDOUTS", "HANDS", "HANDSET", "HANDSHAKE", "HANDSOME", "HANDSOMELY", "HANDWRITING", "HANDWRITTEN", "HANDY", "HANG", "HANGAR", "HANGED", "HANGER", "HANGING", "HANGINGS", "HANGMAN", "HANGOVER", "HANGS", "HANK", "HANKIN", "HANLEY", "HANNA", "HANNAH", "HANOI", "HANOVER", "HANS", "HANSARD", "HANSON", "HANTS", "HAPHAZARD", "HAPLESS", "HAPPEN", "HAPPENED", "HAPPENING", "HAPPENINGS", "HAPPENS", "HAPPIER", "HAPPIEST", "HAPPILY", "HAPPINESS", "HAPPY", "HARARE", "HARASSMENT", "HARBOUR", "HARBOURS", "HARD", "HARDBACK", "HARDBOARD", "HARDCORE", "HARDEN", "HARDENED", "HARDER", "HARDEST", "HARDING", "HARDLINE", "HARDLY", "HARDNESS", "HARDSHIP", "HARDSHIPS", "HARDWARE", "HARDWOOD", "HARDY", "HARE", "HAREM", "HARES", "HARGREAVES", "HARI", "HARINGEY", "HARKER", "HARLAND", "HARLEM", "HARLEY", "HARLOW", "HARM", "HARMED", "HARMFUL", "HARMLESS", "HARMONIC", "HARMONIES", "HARMONIOUS", "HARMONISATION", "HARMONY", "HARNESS", "HARNESSED", "HAROLD", "HARP", "HARPER", "HARPERCOLLINS", "HARPSICHORD", "HARRIET", "HARRINGTON", "HARRIS", "HARRISON", "HARRODS", "HARROGATE", "HARROW", "HARRY", "HARSH", "HARSHER", "HARSHLY", "HARSHNESS", "HARSNET", "HART", "HARTLEPOOL", "HARTLEY", "HARVARD", "HARVEST", "HARVESTS", "HARVEY", "HARWELL", "HARWICH", "HAS", "HASAN", "HASLEMERE", "HASSAN", "HASSLE", "HASTE", "HASTEN", "HASTENED", "HASTILY", "HASTINGS", "HASTY", "HAT", "HATCH", "HATE", "HATED", "HATEFUL", "HATELEY", "HATES", "HATFIELD", "HATH", "HATING", "HATRED", "HATS", "HATT", "HATTERSLEY", "HATTON", "HAUGHTY", "HAUL", "HAULAGE", "HAULED", "HAULIER", "HAULING", "HAUNT", "HAUNTED", "HAUNTS", "HAUSER", "HAVE", "HAVEL", "HAVEN", "HAVENS", "HAVING", "HAVISHAM", "HAVOC", "HAVVIE", "HAWAII", "HAWAIIAN", "HAWES", "HAWICK", "HAWK", "HAWKE", "HAWKINS", "HAWKS", "HAY", "HAYES", "HAYLEY", "HAYLING", "HAYMAN", "HAYNES", "HAYWARD", "HAZARD", "HAZARDOUS", "HAZARDS", "HAZE", "HAZEL", "HAZY", "HCIMA", "HEAD", "HEADACHE", "HEADACHES", "HEADED", "HEADER", "HEADHUNTERS", "HEADHUNTING", "HEADING", "HEADINGS", "HEADLAND", "HEADLIGHTS", "HEADLINE", "HEADLINES", "HEADMASTER", "HEADMEN", "HEADMISTRESS", "HEADPHONES", "HEADQUARTERS", "HEADS", "HEADSTOCK", "HEADTEACHER", "HEADTEACHERS", "HEADWAY", "HEADY", "HEAL", "HEALED", "HEALER", "HEALEY", "HEALING", "HEALTH", "HEALTHCARE", "HEALTHIER", "HEALTHY", "HEAP", "HEAPS", "HEAR", "HEARD", "HEARER", "HEARING", "HEARINGS", "HEARS", "HEARSAY", "HEART", "HEARTBEAT", "HEARTBROKEN", "HEARTFELT", "HEARTH", "HEARTILY", "HEARTLAND", "HEARTLESS", "HEARTS", "HEARTY", "HEAT", "HEATED", "HEATER", "HEATERS", "HEATH", "HEATHCLIFF", "HEATHER", "HEATHROW", "HEATING", "HEATS", "HEAVED", "HEAVEN", "HEAVENLY", "HEAVENS", "HEAVIER", "HEAVIEST", "HEAVILY", "HEAVING", "HEAVY", "HEAVYWEIGHT", "HEBREW", "HEBRIDES", "HECK", "HECTARE", "HECTARES", "HECTIC", "HECTOR", "HEDGE", "HEDGEHOG", "HEDGEHOGS", "HEDGEROW", "HEDGEROWS", "HEDGES", "HEED", "HEEL", "HEELS", "HEFTY", "HEGEL", "HEGEMONY", "HEIDI", "HEIGHT", "HEIGHTENED", "HEIGHTS", "HEINRICH", "HEINZ", "HEIR", "HEIRESS", "HEIRS", "HELD", "HELEN", "HELENA", "HELENS", "HELICOBACTER", "HELICOPTER", "HELICOPTERS", "HELIUM", "HELIX", "HELL", "HELLENISTIC", "HELLO", "HELM", "HELMET", "HELMETS", "HELMUT", "HELP", "HELPED", "HELPER", "HELPERS", "HELPFUL", "HELPFULLY", "HELPING", "HELPLESS", "HELPLESSLY", "HELPLESSNESS", "HELPLINE", "HELPS", "HELSINKI", "HEM", "HEMISPHERE", "HEMISPHERES", "HEN", "HENCE", "HENCEFORTH", "HENCKE", "HENDERSON", "HENDON", "HENDRIX", "HENDRY", "HENLEY", "HENNESSY", "HENRI", "HENRIETTA", "HENRY", "HENS", "HEPARIN", "HEPATIC", "HEPATITIS", "HEPZIBAH", "HER", "HERALD", "HERALDED", "HERB", "HERBACEOUS", "HERBAL", "HERBERT", "HERBIVORES", "HERBS", "HERCULES", "HERD", "HERDS", "HERE", "HEREAFTER", "HEREBY", "HEREDITARY", "HEREDITY", "HEREFORD", "HEREFORDSHIRE", "HEREIN", "HERESY", "HERIOT", "HERITAGE", "HERMAN", "HERMANN", "HERMITAGE", "HERNIA", "HERO", "HERODOTOS", "HEROES", "HEROIC", "HEROIN", "HEROINE", "HEROISM", "HERON", "HERPES", "HERR", "HERRING", "HERS", "HERSELF", "HERTFORDSHIRE", "HERTS", "HESELTINE", "HESITANT", "HESITANTLY", "HESITATE", "HESITATED", "HESITATION", "HESKETH", "HESS", "HESTER", "HETEROGENEITY", "HETEROGENEOUS", "HETEROSEXUAL", "HEWITT", "HEWLETT", "HEXAGONAL", "HEXHAM", "HEY", "HEYDAY", "HIATUS", "HIBS", "HICK", "HICKS", "HID", "HIDDEN", "HIDE", "HIDEOUS", "HIDES", "HIDING", "HIERARCHICAL", "HIERARCHIES", "HIERARCHY", "HIGGINS", "HIGGS", "HIGH", "HIGHBURY", "HIGHER", "HIGHEST", "HIGHGATE", "HIGHLAND", "HIGHLANDER", "HIGHLANDERS", "HIGHLANDS", "HIGHLIGHT", "HIGHLIGHTED", "HIGHLIGHTING", "HIGHLIGHTS", "HIGHLY", "HIGHNESS", "HIGHWAY", "HIGHWAYS", "HILARIOUS", "HILARY", "HILDA", "HILL", "HILLS", "HILLSBOROUGH", "HILLSIDE", "HILLSIDES", "HILT", "HILTON", "HIM", "HIMALAYAS", "HIMSELF", "HIND", "HINDER", "HINDERED", "HINDRANCE", "HINDSIGHT", "HINDU", "HINDUS", "HINGE", "HINGES", "HINKLEY", "HINT", "HINTED", "HINTERLAND", "HINTING", "HINTS", "HIP", "HIPPIES", "HIPPY", "HIPS", "HIR", "HIRE", "HIRED", "HIRING", "HIROSHIMA", "HIRST", "HIS", "HISS", "HISSED", "HISTAMINE", "HISTOLOGICAL", "HISTOLOGY", "HISTORIAN", "HISTORIANS", "HISTORIC", "HISTORICAL", "HISTORICALLY", "HISTORICISM", "HISTORIES", "HISTORY", "HIT", "HITACHI", "HITCH", "HITCHCOCK", "HITHERTO", "HITLER", "HITS", "HITTING", "HIVE", "HIYA", "HMSO", "HOARD", "HOARDS", "HOARE", "HOARSE", "HOARSELY", "HOAX", "HOB", "HOBBES", "HOBBIES", "HOBBS", "HOBBY", "HOBSON", "HOCKEY", "HODGE", "HODGES", "HODGSON", "HOFFMAN", "HOFFMANN", "HOGAN", "HOGG", "HOISTED", "HOLBORN", "HOLD", "HOLDEN", "HOLDER", "HOLDERS", "HOLDING", "HOLDINGS", "HOLDS", "HOLE", "HOLES", "HOLIDAY", "HOLIDAYMAKERS", "HOLIDAYS", "HOLINESS", "HOLISM", "HOLISTIC", "HOLLAND", "HOLLIDAYE", "HOLLOW", "HOLLOWAY", "HOLLOWS", "HOLLY", "HOLLYWOOD", "HOLMAN", "HOLMES", "HOLOCAUST", "HOLSTER", "HOLT", "HOLY", "HOLYHEAD", "HOLYWOOD", "HOMAGE", "HOME", "HOMELAND", "HOMELESS", "HOMELESSNESS", "HOMELY", "HOMER", "HOMES", "HOMESICK", "HOMEWORK", "HOMICIDE", "HOMOEOPATHIC", "HOMOEOPATHY", "HOMOGENEITY", "HOMOGENEOUS", "HOMOLOGOUS", "HOMOLOGY", "HOMOSEXUAL", "HOMOSEXUALITY", "HOMOSEXUALS", "HONDA", "HONDURAS", "HONEST", "HONESTLY", "HONESTY", "HONEY", "HONEYMOON", "HONG", "HONORARY", "HONOUR", "HONOURABLE", "HONOURED", "HONOURS", "HONS", "HOOD", "HOODED", "HOODS", "HOOF", "HOOK", "HOOKED", "HOOKER", "HOOKS", "HOOLIGAN", "HOOLIGANISM", "HOOLIGANS", "HOOMEY", "HOOP", "HOOPER", "HOOPS", "HOORAY", "HOOVER", "HOOVES", "HOP", "HOPE", "HOPED", "HOPEFUL", "HOPEFULLY", "HOPEFULS", "HOPELESS", "HOPELESSLY", "HOPELESSNESS", "HOPES", "HOPING", "HOPKINS", "HOPPED", "HOPPER", "HOPPING", "HOPS", "HORACE", "HORDE", "HORDES", "HORIZON", "HORIZONS", "HORIZONTAL", "HORIZONTALLY", "HORMONAL", "HORMONE", "HORMONES", "HORN", "HORNBY", "HORNE", "HORNS", "HORRENDOUS", "HORRIBLE", "HORRIBLY", "HORRID", "HORRIFIC", "HORRIFIED", "HORROR", "HORRORS", "HORSE", "HORSEBACK", "HORSEMAN", "HORSEMEN", "HORSES", "HORTICULTURAL", "HORTON", "HOSE", "HOSKINS", "HOSPICE", "HOSPITABLE", "HOSPITAL", "HOSPITALITY", "HOSPITALS", "HOST", "HOSTAGE", "HOSTAGES", "HOSTED", "HOSTEL", "HOSTELS", "HOSTESS", "HOSTILE", "HOSTILITIES", "HOSTILITY", "HOSTING", "HOSTS", "HOT", "HOTEL", "HOTELIERS", "HOTELS", "HOTLY", "HOTSPUR", "HOTTER", "HOTTEST", "HOUGHTON", "HOUND", "HOUNDS", "HOUNSLOW", "HOUR", "HOURLY", "HOURS", "HOUSE", "HOUSED", "HOUSEHOLD", "HOUSEHOLDER", "HOUSEHOLDERS", "HOUSEHOLDS", "HOUSEKEEPER", "HOUSEKEEPING", "HOUSES", "HOUSEWIFE", "HOUSEWIVES", "HOUSEWORK", "HOUSING", "HOUSTON", "HOVE", "HOVERED", "HOVERING", "HOW", "HOWARD", "HOWARTH", "HOWE", "HOWELL", "HOWEVER", "HOWL", "HOWLED", "HOWLING", "HRUN", "HUB", "HUBERT", "HUDDERSFIELD", "HUDDLED", "HUDSON", "HUE", "HUES", "HUG", "HUGE", "HUGELY", "HUGGED", "HUGGING", "HUGH", "HUGHES", "HUGO", "HUH", "HULL", "HULLO", "HUM", "HUMAN", "HUMANE", "HUMANISM", "HUMANIST", "HUMANITARIAN", "HUMANITIES", "HUMANITY", "HUMANKIND", "HUMANS", "HUMBER", "HUMBERSIDE", "HUMBLE", "HUMBLY", "HUME", "HUMID", "HUMIDITY", "HUMILIATED", "HUMILIATING", "HUMILIATION", "HUMILITY", "HUMMING", "HUMOROUS", "HUMOUR", "HUMP", "HUMPHREY", "HUMPHREYS", "HUNCH", "HUNCHED", "HUNDRED", "HUNDREDS", "HUNDREDTH", "HUNG", "HUNGARIAN", "HUNGARIANS", "HUNGARY", "HUNGER", "HUNGRILY", "HUNGRY", "HUNT", "HUNTED", "HUNTER", "HUNTERS", "HUNTING", "HUNTINGDON", "HURD", "HURDLE", "HURDLES", "HURLED", "HURLEY", "HURLING", "HURRICANE", "HURRICANES", "HURRIED", "HURRIEDLY", "HURRY", "HURRYING", "HURST", "HURT", "HURTFUL", "HURTING", "HURTLING", "HURTS", "HURWORTH", "HUSBAND", "HUSBANDRY", "HUSBANDS", "HUSH", "HUSHED", "HUSKILY", "HUSKY", "HUSSEIN", "HUSSEY", "HUT", "HUTCHINSON", "HUTCHISON", "HUTS", "HUTTON", "HUXLEY", "HYBRID", "HYBRIDISATION", "HYBRIDIZATION", "HYBRIDS", "HYDE", "HYDRA", "HYDRAULIC", "HYDROCARBON", "HYDROCARBONS", "HYDROCHLORIC", "HYDROGEN", "HYDROXIDE", "HYGIENE", "HYGIENIC", "HYMN", "HYMNS", "HYPE", "HYPERPLASIA", "HYPERTENSION", "HYPERTEXT", "HYPNOSIS", "HYPNOTIC", "HYPOCRISY", "HYPOCRITE", "HYPOCRITICAL", "HYPOGLYCAEMIA", "HYPOTHESES", "HYPOTHESIS", "HYPOTHETICAL", "HYSTERIA", "HYSTERICAL", "HYWEL", "IAEA", "IAGO", "IAIN", "IANTHE", "IBID", "IBRAHIM", "IBROX", "ICE", "ICEBERG", "ICED", "ICELAND", "ICING", "ICON", "ICONS", "IDEA", "IDEAL", "IDEALISM", "IDEALISTIC", "IDEALIZED", "IDEALLY", "IDEALS", "IDEAS", "IDENTICAL", "IDENTIFIABLE", "IDENTIFICATION", "IDENTIFIED", "IDENTIFIER", "IDENTIFIERS", "IDENTIFIES", "IDENTIFY", "IDENTIFYING", "IDENTITIES", "IDENTITY", "IDEOLOGICAL", "IDEOLOGICALLY", "IDEOLOGIES", "IDEOLOGY", "IDIOM", "IDIOMS", "IDIOPATHIC", "IDIOSYNCRATIC", "IDIOT", "IDIOTS", "IDLE", "IDLENESS", "IDLY", "IDOL", "IDOLS", "IDYLLIC", "IGNEOUS", "IGNITION", "IGNORANCE", "IGNORANT", "IGNORE", "IGNORED", "IGNORES", "IGNORING", "ILEAL", "ILEUM", "ILFORD", "ILL", "ILLEGAL", "ILLEGALITY", "ILLEGALLY", "ILLEGITIMATE", "ILLICIT", "ILLINOIS", "ILLITERACY", "ILLITERATE", "ILLNESS", "ILLNESSES", "ILLOGICAL", "ILLS", "ILLUMINATE", "ILLUMINATED", "ILLUMINATING", "ILLUMINATION", "ILLUSION", "ILLUSIONS", "ILLUSORY", "ILLUSTRATE", "ILLUSTRATED", "ILLUSTRATES", "ILLUSTRATING", "ILLUSTRATION", "ILLUSTRATIONS", "ILLUSTRATIVE", "ILLUSTRATOR", "ILLUSTRIOUS", "IMAGE", "IMAGERY", "IMAGES", "IMAGINABLE", "IMAGINARY", "IMAGINATION", "IMAGINATIONS", "IMAGINATIVE", "IMAGINATIVELY", "IMAGINE", "IMAGINED", "IMAGINES", "IMAGINING", "IMBALANCE", "IMBALANCES", "IMITATE", "IMITATING", "IMITATION", "IMMACULATE", "IMMACULATELY", "IMMATERIAL", "IMMATURE", "IMMEASURABLY", "IMMEDIACY", "IMMEDIATE", "IMMEDIATELY", "IMMENSE", "IMMENSELY", "IMMERSED", "IMMERSION", "IMMIGRANT", "IMMIGRANTS", "IMMIGRATION", "IMMINENT", "IMMOBILE", "IMMORAL", "IMMORALITY", "IMMORTAL", "IMMORTALITY", "IMMUNE", "IMMUNISATION", "IMMUNITY", "IMMUNOLOGICAL", "IMPACT", "IMPACTS", "IMPAIR", "IMPAIRED", "IMPAIRMENT", "IMPART", "IMPARTIAL", "IMPARTIALITY", "IMPASSE", "IMPASSIONED", "IMPASSIVE", "IMPATIENCE", "IMPATIENT", "IMPATIENTLY", "IMPECCABLE", "IMPECCABLY", "IMPEDANCE", "IMPEDE", "IMPEDIMENT", "IMPENDING", "IMPENETRABLE", "IMPERATIVE", "IMPERATIVES", "IMPERCEPTIBLY", "IMPERFECT", "IMPERFECTIONS", "IMPERFECTLY", "IMPERIAL", "IMPERIALISM", "IMPERIALIST", "IMPERIOUS", "IMPERSONAL", "IMPERVIOUS", "IMPETUS", "IMPLACABLE", "IMPLANT", "IMPLAUSIBLE", "IMPLEMENT", "IMPLEMENTATION", "IMPLEMENTATIONS", "IMPLEMENTED", "IMPLEMENTING", "IMPLEMENTS", "IMPLICATED", "IMPLICATION", "IMPLICATIONS", "IMPLICIT", "IMPLICITLY", "IMPLIED", "IMPLIES", "IMPLY", "IMPLYING", "IMPORT", "IMPORTANCE", "IMPORTANT", "IMPORTANTLY", "IMPORTATION", "IMPORTED", "IMPORTER", "IMPORTERS", "IMPORTING", "IMPORTS", "IMPOSE", "IMPOSED", "IMPOSES", "IMPOSING", "IMPOSITION", "IMPOSSIBILITY", "IMPOSSIBLE", "IMPOSSIBLY", "IMPOTENCE", "IMPOTENT", "IMPOVERISHED", "IMPRACTICABLE", "IMPRACTICAL", "IMPRECISE", "IMPRESS", "IMPRESSED", "IMPRESSION", "IMPRESSIONS", "IMPRESSIVE", "IMPRESSIVELY", "IMPRINT", "IMPRISONED", "IMPRISONMENT", "IMPROBABLE", "IMPROPER", "IMPROPERLY", "IMPROVE", "IMPROVED", "IMPROVEMENT", "IMPROVEMENTS", "IMPROVES", "IMPROVING", "IMPROVISATION", "IMPROVISED", "IMPULSE", "IMPULSES", "IMPULSIVE", "IMPUNITY", "INABILITY", "INACCESSIBLE", "INACCURACIES", "INACCURATE", "INACTION", "INACTIVE", "INACTIVITY", "INADEQUACIES", "INADEQUACY", "INADEQUATE", "INADEQUATELY", "INADVERTENTLY", "INANIMATE", "INAPPROPRIATE", "INAPPROPRIATELY", "INAUGURAL", "INAUGURATED", "INAUGURATION", "INBUILT", "INCAPABLE", "INCAPACITY", "INCARNATION", "INCE", "INCENSE", "INCENSED", "INCENTIVE", "INCENTIVES", "INCEPTION", "INCESSANT", "INCEST", "INCH", "INCHES", "INCIDENCE", "INCIDENT", "INCIDENTAL", "INCIDENTALLY", "INCIDENTS", "INCINERATION", "INCINERATOR", "INCIPIENT", "INCISIVE", "INCISORS", "INCLINATION", "INCLINATIONS", "INCLINE", "INCLINED", "INCLUDE", "INCLUDED", "INCLUDES", "INCLUDING", "INCLUSION", "INCLUSIVE", "INCOME", "INCOMERS", "INCOMES", "INCOMING", "INCOMPARABLE", "INCOMPATIBILITY", "INCOMPATIBLE", "INCOMPETENCE", "INCOMPETENT", "INCOMPLETE", "INCOMPREHENSIBLE", "INCONCEIVABLE", "INCONCLUSIVE", "INCONGRUOUS", "INCONSISTENCIES", "INCONSISTENCY", "INCONSISTENT", "INCONSPICUOUS", "INCONTINENCE", "INCONTINENT", "INCONVENIENCE", "INCONVENIENT", "INCORPORATE", "INCORPORATED", "INCORPORATES", "INCORPORATING", "INCORPORATION", "INCORRECT", "INCORRECTLY", "INCREASE", "INCREASED", "INCREASES", "INCREASING", "INCREASINGLY", "INCREDIBLE", "INCREDIBLY", "INCREDULITY", "INCREDULOUS", "INCREDULOUSLY", "INCREMENT", "INCREMENTAL", "INCREMENTS", "INCUBATED", "INCUBATION", "INCUMBENT", "INCUR", "INCURABLE", "INCURRED", "INCURRING", "INDEBTED", "INDEBTEDNESS", "INDECENCY", "INDECENT", "INDECISION", "INDEED", "INDEFENSIBLE", "INDEFINITE", "INDEFINITELY", "INDEMNITY", "INDEPENDENCE", "INDEPENDENT", "INDEPENDENTLY", "INDEPENDENTS", "INDETERMINATE", "INDEX", "INDEXES", "INDEXING", "INDIA", "INDIAN", "INDIANA", "INDIANS", "INDICATE", "INDICATED", "INDICATES", "INDICATING", "INDICATION", "INDICATIONS", "INDICATIVE", "INDICATOR", "INDICATORS", "INDICES", "INDICTED", "INDICTMENT", "INDIE", "INDIES", "INDIFFERENCE", "INDIFFERENT", "INDIGENOUS", "INDIGESTION", "INDIGNANT", "INDIGNANTLY", "INDIGNATION", "INDIGNITY", "INDIGO", "INDIRECT", "INDIRECTLY", "INDISCRIMINATE", "INDISCRIMINATELY", "INDISPENSABLE", "INDISTINCT", "INDISTINGUISHABLE", "INDIVIDUAL", "INDIVIDUALISM", "INDIVIDUALIST", "INDIVIDUALISTIC", "INDIVIDUALITY", "INDIVIDUALLY", "INDIVIDUALS", "INDOMETHACIN", "INDONESIA", "INDONESIAN", "INDOOR", "INDOORS", "INDUCE", "INDUCED", "INDUCEMENT", "INDUCEMENTS", "INDUCES", "INDUCING", "INDUCTANCE", "INDUCTION", "INDUCTIVE", "INDULGE", "INDULGED", "INDULGENCE", "INDULGENT", "INDULGING", "INDUSTRIAL", "INDUSTRIALISATION", "INDUSTRIALISED", "INDUSTRIALIST", "INDUSTRIALISTS", "INDUSTRIALIZATION", "INDUSTRIALIZED", "INDUSTRIES", "INDUSTRIOUS", "INDUSTRY", "INEFFECTIVE", "INEFFECTUAL", "INEFFICIENCY", "INEFFICIENT", "INELIGIBLE", "INEPT", "INEQUALITIES", "INEQUALITY", "INERT", "INERTIA", "INESCAPABLE", "INEVITABILITY", "INEVITABLE", "INEVITABLY", "INEXORABLE", "INEXORABLY", "INEXPENSIVE", "INEXPERIENCE", "INEXPERIENCED", "INEXPLICABLE", "INEXPLICABLY", "INEXTRICABLY", "INFALLIBLE", "INFAMOUS", "INFANCY", "INFANT", "INFANTILE", "INFANTRY", "INFANTS", "INFARCTION", "INFECTED", "INFECTION", "INFECTIONS", "INFECTIOUS", "INFECTIVE", "INFER", "INFERENCE", "INFERENCES", "INFERIOR", "INFERIORITY", "INFERNO", "INFERRED", "INFERTILITY", "INFESTATION", "INFIDELITY", "INFILTRATION", "INFINITE", "INFINITELY", "INFINITIVE", "INFINITY", "INFIRM", "INFIRMARY", "INFLAMED", "INFLAMMATION", "INFLAMMATORY", "INFLATABLE", "INFLATED", "INFLATION", "INFLATIONARY", "INFLEXIBLE", "INFLICT", "INFLICTED", "INFLOW", "INFLUENCE", "INFLUENCED", "INFLUENCES", "INFLUENCING", "INFLUENTIAL", "INFLUENZA", "INFLUX", "INFO", "INFORM", "INFORMAL", "INFORMALLY", "INFORMANT", "INFORMANTS", "INFORMATION", "INFORMATIONAL", "INFORMATIVE", "INFORMED", "INFORMER", "INFORMING", "INFORMIX", "INFORMS", "INFRARED", "INFRASTRUCTURE", "INFREQUENT", "INFREQUENTLY", "INFRINGEMENT", "INFUSION", "INGENIOUS", "INGENUITY", "INGESTION", "INGREDIENT", "INGREDIENTS", "INGRES", "INGRID", "INHABIT", "INHABITANTS", "INHABITED", "INHERENT", "INHERENTLY", "INHERIT", "INHERITANCE", "INHERITED", "INHIBIT", "INHIBITED", "INHIBITION", "INHIBITIONS", "INHIBITOR", "INHIBITORS", "INHIBITORY", "INHIBITS", "INHOSPITABLE", "INHUMAN", "INIMICAL", "INITIAL", "INITIALLY", "INITIALS", "INITIATE", "INITIATED", "INITIATING", "INITIATION", "INITIATIVE", "INITIATIVES", "INJECT", "INJECTED", "INJECTING", "INJECTION", "INJECTIONS", "INJUNCTION", "INJUNCTIONS", "INJURE", "INJURED", "INJURIES", "INJURING", "INJURY", "INJUSTICE", "INJUSTICES", "INK", "INKATHA", "INKLING", "INLAND", "INLET", "INMATES", "INN", "INNATE", "INNER", "INNERMOST", "INNES", "INNINGS", "INNOCENCE", "INNOCENT", "INNOCENTLY", "INNOCUOUS", "INNOVATION", "INNOVATIONS", "INNOVATIVE", "INNS", "INNUMERABLE", "INORGANIC", "INPATIENT", "INPUT", "INPUTS", "INQUEST", "INQUIRE", "INQUIRED", "INQUIRIES", "INQUIRY", "INQUISITION", "INQUISITIVE", "INROADS", "INSANE", "INSANITY", "INSATIABLE", "INSCRIBED", "INSCRIPTION", "INSCRIPTIONS", "INSCRUTABLE", "INSECT", "INSECTS", "INSECURE", "INSECURITY", "INSENSITIVE", "INSENSITIVITY", "INSEPARABLE", "INSERT", "INSERTED", "INSERTING", "INSERTION", "INSET", "INSIDE", "INSIDER", "INSIDERS", "INSIDES", "INSIDIOUS", "INSIGHT", "INSIGHTS", "INSIGNIA", "INSIGNIFICANCE", "INSIGNIFICANT", "INSIST", "INSISTED", "INSISTENCE", "INSISTENT", "INSISTING", "INSISTS", "INSOLUBLE", "INSOLVENCY", "INSOLVENT", "INSP", "INSPECT", "INSPECTED", "INSPECTING", "INSPECTION", "INSPECTIONS", "INSPECTOR", "INSPECTORATE", "INSPECTORS", "INSPIRATION", "INSPIRATIONAL", "INSPIRE", "INSPIRED", "INSPIRES", "INSPIRING", "INSTABILITY", "INSTALL", "INSTALLATION", "INSTALLATIONS", "INSTALLED", "INSTALLING", "INSTALMENT", "INSTALMENTS", "INSTANCE", "INSTANCES", "INSTANT", "INSTANTANEOUS", "INSTANTANEOUSLY", "INSTANTLY", "INSTEAD", "INSTIGATION", "INSTIL", "INSTINCT", "INSTINCTIVE", "INSTINCTIVELY", "INSTINCTS", "INSTINCTUAL", "INSTITUTE", "INSTITUTED", "INSTITUTES", "INSTITUTION", "INSTITUTIONAL", "INSTITUTIONS", "INSTRUCT", "INSTRUCTED", "INSTRUCTING", "INSTRUCTION", "INSTRUCTIONAL", "INSTRUCTIONS", "INSTRUCTIVE", "INSTRUCTOR", "INSTRUCTORS", "INSTRUMENT", "INSTRUMENTAL", "INSTRUMENTATION", "INSTRUMENTS", "INSUBSTANTIAL", "INSUFFICIENT", "INSUFFICIENTLY", "INSULAR", "INSULATION", "INSULIN", "INSULT", "INSULTING", "INSULTS", "INSURANCE", "INSURE", "INSURED", "INSURER", "INSURERS", "INSURMOUNTABLE", "INSURRECTION", "INTACT", "INTAKE", "INTANGIBLE", "INTEGER", "INTEGERS", "INTEGRAL", "INTEGRATE", "INTEGRATED", "INTEGRATING", "INTEGRATION", "INTEGRITY", "INTEL", "INTELLECT", "INTELLECTUAL", "INTELLECTUALLY", "INTELLECTUALS", "INTELLIGENCE", "INTELLIGENT", "INTELLIGENTLY", "INTELLIGENTSIA", "INTELLIGIBLE", "INTEND", "INTENDED", "INTENDING", "INTENDS", "INTENSE", "INTENSELY", "INTENSIFICATION", "INTENSIFIED", "INTENSIFY", "INTENSITY", "INTENSIVE", "INTENSIVELY", "INTENT", "INTENTION", "INTENTIONAL", "INTENTIONALLY", "INTENTIONS", "INTENTLY", "INTENTS", "INTER", "INTERACT", "INTERACTING", "INTERACTION", "INTERACTIONS", "INTERACTIVE", "INTERCEPT", "INTERCEPTED", "INTERCEPTION", "INTERCHANGE", "INTERCHANGEABLE", "INTERCITY", "INTERCOM", "INTERCOURSE", "INTERDEPENDENCE", "INTERDEPENDENT", "INTERDISCIPLINARY", "INTEREST", "INTERESTED", "INTERESTING", "INTERESTINGLY", "INTERESTS", "INTERFACE", "INTERFACES", "INTERFERE", "INTERFERED", "INTERFERENCE", "INTERFERES", "INTERFERING", "INTERFERON", "INTERGOVERNMENTAL", "INTERIM", "INTERIOR", "INTERIORS", "INTERLOCKING", "INTERLOCUTORY", "INTERLUDE", "INTERMEDIARIES", "INTERMEDIARY", "INTERMEDIATE", "INTERMEDIATES", "INTERMINABLE", "INTERMITTENT", "INTERMITTENTLY", "INTERNAL", "INTERNALLY", "INTERNATIONAL", "INTERNATIONALISM", "INTERNATIONALLY", "INTERNATIONALS", "INTERNET", "INTERNMENT", "INTEROPERABILITY", "INTERPERSONAL", "INTERPLAY", "INTERPRET", "INTERPRETATION", "INTERPRETATIONS", "INTERPRETATIVE", "INTERPRETED", "INTERPRETER", "INTERPRETERS", "INTERPRETING", "INTERPRETS", "INTERROGATION", "INTERRUPT", "INTERRUPTED", "INTERRUPTING", "INTERRUPTION", "INTERRUPTIONS", "INTERSECTION", "INTERSPERSED", "INTERVAL", "INTERVALS", "INTERVENE", "INTERVENED", "INTERVENING", "INTERVENTION", "INTERVENTIONIST", "INTERVENTIONS", "INTERVIEW", "INTERVIEWED", "INTERVIEWEE", "INTERVIEWEES", "INTERVIEWER", "INTERVIEWERS", "INTERVIEWING", "INTERVIEWS", "INTERWAR", "INTESTINAL", "INTESTINE", "INTESTINES", "INTIFADA", "INTIMACY", "INTIMATE", "INTIMATELY", "INTIMIDATE", "INTIMIDATED", "INTIMIDATING", "INTIMIDATION", "INTO", "INTOLERABLE", "INTOLERANCE", "INTONATION", "INTRACELLULAR", "INTRACTABLE", "INTRANSIGENCE", "INTRAVENOUS", "INTREPID", "INTRICACIES", "INTRICATE", "INTRIGUE", "INTRIGUED", "INTRIGUING", "INTRINSIC", "INTRINSICALLY", "INTRODUCE", "INTRODUCED", "INTRODUCES", "INTRODUCING", "INTRODUCTION", "INTRODUCTIONS", "INTRODUCTORY", "INTROSPECTION", "INTRUDE", "INTRUDER", "INTRUDERS", "INTRUSION", "INTRUSIONS", "INTRUSIVE", "INTUITION", "INTUITIONS", "INTUITIVE", "INTUITIVELY", "INUNDATED", "INVADE", "INVADED", "INVADERS", "INVADING", "INVALID", "INVALIDITY", "INVALUABLE", "INVARIABLY", "INVASION", "INVASIONS", "INVASIVE", "INVENT", "INVENTED", "INVENTING", "INVENTION", "INVENTIONS", "INVENTIVE", "INVENTOR", "INVENTORIES", "INVENTORY", "INVERNESS", "INVERSE", "INVERSELY", "INVERSION", "INVERTEBRATES", "INVERTED", "INVEST", "INVESTED", "INVESTIGATE", "INVESTIGATED", "INVESTIGATES", "INVESTIGATING", "INVESTIGATION", "INVESTIGATIONS", "INVESTIGATIVE", "INVESTIGATOR", "INVESTIGATORS", "INVESTING", "INVESTMENT", "INVESTMENTS", "INVESTOR", "INVESTORS", "INVESTS", "INVINCIBLE", "INVISIBLE", "INVITATION", "INVITATIONS", "INVITE", "INVITED", "INVITES", "INVITING", "INVOICE", "INVOICES", "INVOKE", "INVOKED", "INVOKING", "INVOLUNTARILY", "INVOLUNTARY", "INVOLVE", "INVOLVED", "INVOLVEMENT", "INVOLVES", "INVOLVING", "INWARD", "INWARDLY", "INWARDS", "ION", "IONA", "IONIC", "IONS", "IPSWICH", "IRAN", "IRANIAN", "IRANIANS", "IRAQ", "IRAQI", "IRAQIS", "IRATE", "IRELAND", "IRENE", "IRINA", "IRIS", "IRISH", "IRISHMAN", "IRON", "IRONIC", "IRONICALLY", "IRONING", "IRONS", "IRONY", "IRRADIATION", "IRRATIONAL", "IRRECONCILABLE", "IRREGULAR", "IRREGULARITIES", "IRREGULARITY", "IRREGULARLY", "IRRELEVANCE", "IRRELEVANT", "IRRESISTIBLE", "IRRESISTIBLY", "IRRESPONSIBLE", "IRREVERSIBLE", "IRREVOCABLE", "IRREVOCABLY", "IRRIGATION", "IRRITABILITY", "IRRITABLE", "IRRITABLY", "IRRITANT", "IRRITATE", "IRRITATED", "IRRITATING", "IRRITATION", "IRVINE", "IRVING", "IRWIN", "ISAAC", "ISAACS", "ISABEL", "ISABELLA", "ISABELLE", "ISAIAH", "ISAMBARD", "ISIS", "ISLAM", "ISLAMIC", "ISLAND", "ISLANDERS", "ISLANDS", "ISLAY", "ISLE", "ISLES", "ISLINGTON", "ISOBEL", "ISOLATE", "ISOLATED", "ISOLATING", "ISOLATION", "ISOTOPE", "ISRAEL", "ISRAELI", "ISRAELIS", "ISSUANCE", "ISSUE", "ISSUED", "ISSUER", "ISSUES", "ISSUING", "ISTANBUL", "ITALIAN", "ITALIANS", "ITALICS", "ITALY", "ITEM", "ITEMS", "ITERATION", "ITINERARY", "ITSELF", "IVAN", "IVES", "IVOR", "IVORY", "IVY", "IXORA", "JABBED", "JACK", "JACKET", "JACKETS", "JACKIE", "JACKSON", "JACOB", "JACOBITE", "JACOBS", "JACOBSEN", "JACQUARD", "JACQUELINE", "JACQUES", "JACQUI", "JADE", "JAGGED", "JAGGER", "JAGUAR", "JAIL", "JAILED", "JAKARTA", "JAKE", "JAM", "JAMAICA", "JAMAICAN", "JAMES", "JAMIE", "JAMIESON", "JAMMED", "JANATA", "JANE", "JANEIRO", "JANET", "JANICE", "JANNIE", "JANUARY", "JAPAN", "JAPANESE", "JAR", "JARDINE", "JARGON", "JARMAN", "JARS", "JARVIS", "JASON", "JASPER", "JAVA", "JAW", "JAWS", "JAY", "JAYNE", "JAZZ", "JEALOUS", "JEALOUSLY", "JEALOUSY", "JEAN", "JEANETTE", "JEANNE", "JEANS", "JEEP", "JEEPS", "JEFF", "JEFFERSON", "JEFFREY", "JEHAN", "JEHOVAH", "JEKYLL", "JELLY", "JENKINS", "JENNA", "JENNIE", "JENNIFER", "JENNINGS", "JENNY", "JEOPARDISE", "JEOPARDY", "JEREMIAH", "JEREMY", "JERK", "JERKED", "JERKING", "JEROME", "JERRY", "JERSEY", "JERUSALEM", "JESS", "JESSAMY", "JESSE", "JESSICA", "JESSIE", "JESUIT", "JESUITS", "JESUS", "JET", "JETS", "JETT", "JETTY", "JEWEL", "JEWELLER", "JEWELLERS", "JEWELLERY", "JEWELS", "JEWISH", "JEWS", "JEZRAEL", "JIGSAW", "JILL", "JIMMY", "JINNY", "JOAN", "JOANNA", "JOANNE", "JOB", "JOBLESS", "JOBS", "JOCK", "JOCKEY", "JOCKEYS", "JOEL", "JOEY", "JOGGING", "JOHANN", "JOHANNESBURG", "JOHN", "JOHNNIE", "JOHNNY", "JOHNS", "JOHNSON", "JOHNSTON", "JOHNSTONE", "JOIN", "JOINED", "JOINER", "JOINING", "JOINS", "JOINT", "JOINTLY", "JOINTS", "JOISTS", "JOKE", "JOKED", "JOKER", "JOKES", "JOKING", "JOLLY", "JOLT", "JONAS", "JONATHAN", "JONATHON", "JONES", "JORDAN", "JORDANIAN", "JORGE", "JOSE", "JOSEF", "JOSEPH", "JOSEPHINE", "JOSH", "JOSHUA", "JOSIE", "JOTAN", "JOURNAL", "JOURNALISM", "JOURNALIST", "JOURNALISTIC", "JOURNALISTS", "JOURNALS", "JOURNEY", "JOURNEYS", "JOVIAL", "JOY", "JOYCE", "JOYFUL", "JOYOUS", "JOYS", "JOYSTICK", "JUAN", "JUBILANT", "JUBILEE", "JUDAISM", "JUDAS", "JUDE", "JUDGE", "JUDGED", "JUDGEMENT", "JUDGEMENTS", "JUDGES", "JUDGING", "JUDGMENT", "JUDGMENTS", "JUDICIAL", "JUDICIARY", "JUDICIOUS", "JUDITH", "JUDY", "JUG", "JUGS", "JUICE", "JUICES", "JUICY", "JULES", "JULIA", "JULIAN", "JULIE", "JULIET", "JULIUS", "JULY", "JUMBLE", "JUMP", "JUMPED", "JUMPER", "JUMPERS", "JUMPING", "JUMPS", "JUNCTION", "JUNCTIONS", "JUNCTURE", "JUNE", "JUNG", "JUNGLE", "JUNIOR", "JUNIORS", "JUNIPER", "JUNK", "JUNTA", "JUPITER", "JURASSIC", "JURIES", "JURISDICTION", "JURISDICTIONAL", "JURISDICTIONS", "JURNET", "JURORS", "JURY", "JUST", "JUSTICE", "JUSTICES", "JUSTIFIABLE", "JUSTIFIABLY", "JUSTIFICATION", "JUSTIFICATIONS", "JUSTIFIED", "JUSTIFIES", "JUSTIFY", "JUSTIFYING", "JUSTIN", "JUSTLY", "JUTTING", "JUVENILE", "JUVENILES", "JUXTAPOSITION", "KABUL", "KAIFU", "KALCHU", "KAMPUCHEA", "KANE", "KANGAROO", "KANSAS", "KANT", "KARABAKH", "KARACHI", "KARAJAN", "KARATE", "KAREN", "KARL", "KARPOV", "KARR", "KASHMIR", "KASPAROV", "KATE", "KATH", "KATHERINE", "KATHLEEN", "KATHY", "KATIE", "KATY", "KAUFMAN", "KAYE", "KAZAKHSTAN", "KEANE", "KEATING", "KEATS", "KEEGAN", "KEEN", "KEENER", "KEENLY", "KEEP", "KEEPER", "KEEPERS", "KEEPING", "KEEPS", "KEIGHLEY", "KEITH", "KELLY", "KELSO", "KEMP", "KEMPTON", "KEN", "KENDAL", "KENDALL", "KENNEDY", "KENNEL", "KENNELS", "KENNETH", "KENNY", "KENSINGTON", "KENT", "KENTISH", "KENTON", "KENTUCKY", "KENYA", "KENYAN", "KEPT", "KERB", "KERNEL", "KERR", "KERRY", "KESTREL", "KESWICK", "KETTERING", "KETTLE", "KEVIN", "KEY", "KEYBOARD", "KEYBOARDS", "KEYHOLE", "KEYNES", "KEYNESIAN", "KEYNOTE", "KEYS", "KEYWORD", "KEYWORDS", "KHAKI", "KHAN", "KHARTOUM", "KHMER", "KHMERS", "KHOMEINI", "KHRUSHCHEV", "KICK", "KICKED", "KICKING", "KICKS", "KID", "KIDDERMINSTER", "KIDDIES", "KIDDING", "KIDLINGTON", "KIDNAP", "KIDNAPPED", "KIDNAPPERS", "KIDNEY", "KIDNEYS", "KIDS", "KIEV", "KILBURN", "KILL", "KILLED", "KILLER", "KILLERS", "KILLING", "KILLINGS", "KILLION", "KILLS", "KILMARNOCK", "KILN", "KILO", "KILOGRAMS", "KILOMETRE", "KILOMETRES", "KILOS", "KIN", "KINASE", "KIND", "KINDA", "KINDLY", "KINDNESS", "KINDS", "KINETIC", "KING", "KINGDOM", "KINGDOMS", "KINGFISHER", "KINGS", "KINGSHIP", "KINGSLEY", "KINGSTON", "KINNOCK", "KINSHIP", "KINSMAN", "KINSMEN", "KIOSK", "KIPLING", "KIRBY", "KIRK", "KIRKBY", "KIRKWALL", "KIROV", "KIRSTY", "KISS", "KISSED", "KISSES", "KISSING", "KIT", "KITCHEN", "KITCHENS", "KITE", "KITES", "KITS", "KITTEN", "KITTENS", "KITTY", "KIWI", "KLAUS", "KLEIN", "KLERK", "KNACK", "KNARESBOROUGH", "KNEE", "KNEELING", "KNEES", "KNELT", "KNEW", "KNICKERS", "KNIFE", "KNIGHT", "KNIGHTED", "KNIGHTHOOD", "KNIGHTON", "KNIGHTS", "KNIT", "KNITTED", "KNITTERS", "KNITTING", "KNIVES", "KNOB", "KNOBS", "KNOCK", "KNOCKED", "KNOCKING", "KNOCKOUT", "KNOCKS", "KNOSSOS", "KNOT", "KNOTS", "KNOW", "KNOWING", "KNOWINGLY", "KNOWLEDGE", "KNOWLEDGEABLE", "KNOWLES", "KNOWN", "KNOWS", "KNOX", "KNUCKLES", "KODAK", "KOHL", "KOLCHINSKY", "KONG", "KOONS", "KOREA", "KOREAN", "KOREANS", "KOSOVO", "KPMG", "KREMLIN", "KRISTOPHER", "KRUGER", "KUALA", "KUHN", "KUMAR", "KURDISH", "KURDS", "KURT", "KUWAIT", "KUWAITI", "KYLE", "KYLIE", "LAB", "LABEL", "LABELLED", "LABELLING", "LABELS", "LABOR", "LABORATORIES", "LABORATORY", "LABORIOUS", "LABORIOUSLY", "LABOUR", "LABOURER", "LABOURERS", "LABOURS", "LABOV", "LABRADOR", "LABS", "LABYRINTH", "LAC", "LACE", "LACEY", "LACHLAN", "LACK", "LACKED", "LACKING", "LACKLUSTRE", "LACKS", "LACQUER", "LACY", "LAD", "LADDER", "LADDERS", "LADEN", "LADIES", "LADING", "LADS", "LADY", "LADYSHIP", "LAG", "LAGER", "LAGOON", "LAGOS", "LAIBON", "LAID", "LAIN", "LAING", "LAIR", "LAIRD", "LAIS", "LAITY", "LAKE", "LAKES", "LAKESIDE", "LAMB", "LAMBERT", "LAMBETH", "LAMBS", "LAME", "LAMELY", "LAMENT", "LAMINA", "LAMONT", "LAMP", "LAMPS", "LANARK", "LANARKSHIRE", "LANCASHIRE", "LANCASTER", "LANCE", "LANCS", "LAND", "LANDED", "LANDFILL", "LANDFORMS", "LANDING", "LANDINGS", "LANDLADY", "LANDLESS", "LANDLORD", "LANDLORDS", "LANDMARK", "LANDMARKS", "LANDOWNER", "LANDOWNERS", "LANDS", "LANDSCAPE", "LANDSCAPES", "LANDSLIDE", "LANE", "LANES", "LANFRANC", "LANG", "LANGBAURGH", "LANGER", "LANGLEY", "LANGUAGE", "LANGUAGES", "LANGUID", "LANKA", "LANSDOWNE", "LANTERN", "LAOS", "LAP", "LAPS", "LAPSE", "LARDER", "LARGE", "LARGELY", "LARGER", "LARGEST", "LARK", "LARKIN", "LARNE", "LARRY", "LARVA", "LARVAE", "LASER", "LASERS", "LASHED", "LASHES", "LASMO", "LASS", "LAST", "LASTED", "LASTING", "LASTLY", "LASTS", "LATCH", "LATE", "LATELY", "LATENCY", "LATENT", "LATER", "LATERAL", "LATERALLY", "LATEST", "LATIN", "LATITUDE", "LATITUDES", "LATTER", "LATTERLY", "LATTICE", "LATVIA", "LATVIAN", "LAUGH", "LAUGHABLE", "LAUGHED", "LAUGHING", "LAUGHS", "LAUGHTER", "LAUGHTON", "LAUNCH", "LAUNCHED", "LAUNCHES", "LAUNCHING", "LAUNDRY", "LAURA", "LAURELS", "LAURENCE", "LAURENT", "LAURIE", "LAUSANNE", "LAUTRO", "LAVA", "LAVAS", "LAVATORIES", "LAVATORY", "LAVENDER", "LAVINIA", "LAVISH", "LAVISHLY", "LAW", "LAWFUL", "LAWFULLY", "LAWN", "LAWNS", "LAWRENCE", "LAWRIE", "LAWS", "LAWSON", "LAWSUIT", "LAWTON", "LAWYER", "LAWYERS", "LAX", "LAY", "LAYER", "LAYERS", "LAYING", "LAYMAN", "LAYMEN", "LAYOUT", "LAYOUTS", "LAYS", "LAZILY", "LAZY", "LDCS", "LEA", "LEACH", "LEAD", "LEADED", "LEADEN", "LEADER", "LEADERS", "LEADERSHIP", "LEADING", "LEADS", "LEAF", "LEAFLET", "LEAFLETS", "LEAFY", "LEAGUE", "LEAGUES", "LEAK", "LEAKAGE", "LEAKED", "LEAKING", "LEAKS", "LEAN", "LEANED", "LEANING", "LEANS", "LEANT", "LEAP", "LEAPED", "LEAPING", "LEAPOR", "LEAPS", "LEAPT", "LEAR", "LEARN", "LEARNED", "LEARNER", "LEARNERS", "LEARNING", "LEARNS", "LEARNT", "LEAS", "LEASE", "LEASED", "LEASEHOLD", "LEASES", "LEASH", "LEASING", "LEAST", "LEATHER", "LEAVE", "LEAVERS", "LEAVES", "LEAVING", "LEAVIS", "LEBANESE", "LEBANON", "LECTURE", "LECTURER", "LECTURERS", "LECTURES", "LECTURING", "LED", "LEDGE", "LEDGER", "LEE", "LEEDS", "LEEKS", "LEES", "LEFT", "LEFTIST", "LEG", "LEGACIES", "LEGACY", "LEGAL", "LEGALITY", "LEGALLY", "LEGEND", "LEGENDARY", "LEGENDS", "LEGGINGS", "LEGION", "LEGIONS", "LEGISLATE", "LEGISLATION", "LEGISLATIVE", "LEGISLATORS", "LEGISLATURE", "LEGITIMACY", "LEGITIMATE", "LEGITIMATELY", "LEGITIMATION", "LEGS", "LEHMANN", "LEICESTER", "LEICESTERSHIRE", "LEIGH", "LEIGHTON", "LEILA", "LEIPZIG", "LEISURE", "LEISURELY", "LEITH", "LEMON", "LEMONADE", "LEMONS", "LEND", "LENDER", "LENDERS", "LENDING", "LENDS", "LENGTH", "LENGTHS", "LENGTHY", "LENIENT", "LENIN", "LENINGRAD", "LENNIE", "LENNON", "LENNOX", "LENNY", "LENS", "LENSES", "LENT", "LEON", "LEONARD", "LEONARDO", "LEONE", "LEONIE", "LEONORA", "LEOPARD", "LEOPOLD", "LESBIAN", "LESBIANS", "LESION", "LESIONS", "LESLEY", "LESLIE", "LESOTHO", "LESS", "LESSEE", "LESSEN", "LESSER", "LESSING", "LESSON", "LESSONS", "LESSOR", "LEST", "LESTER", "LET", "LETHAL", "LETHARGIC", "LETHARGY", "LETS", "LETTER", "LETTERING", "LETTERS", "LETTING", "LETTUCE", "LEUKAEMIA", "LEVEL", "LEVELLED", "LEVELS", "LEVER", "LEVERAGE", "LEVERS", "LEVI", "LEVIED", "LEVIES", "LEVIN", "LEVY", "LEWES", "LEWIS", "LEXANDRO", "LEXICAL", "LEXICOGRAPHERS", "LEXICON", "LEYLAND", "LEYS", "LIABILITIES", "LIABILITY", "LIABLE", "LIAISE", "LIAISON", "LIAM", "LIAR", "LIB", "LIBEL", "LIBERAL", "LIBERALISATION", "LIBERALISM", "LIBERALIZATION", "LIBERALLY", "LIBERALS", "LIBERATE", "LIBERATED", "LIBERATION", "LIBERIA", "LIBERTIES", "LIBERTY", "LIBIDO", "LIBRARIAN", "LIBRARIANS", "LIBRARIES", "LIBRARY", "LIBYA", "LIBYAN", "LICE", "LICENCE", "LICENCES", "LICENSE", "LICENSED", "LICENSEE", "LICENSEES", "LICENSING", "LICHEN", "LICHENS", "LICHFIELD", "LICK", "LICKED", "LICKING", "LID", "LIDS", "LIE", "LIED", "LIES", "LIEUTENANT", "LIEUTENANTS", "LIFE", "LIFEBOAT", "LIFELESS", "LIFELINE", "LIFELONG", "LIFESPAN", "LIFESTYLE", "LIFESTYLES", "LIFETIME", "LIFT", "LIFTED", "LIFTING", "LIFTS", "LIGAMENTS", "LIGHT", "LIGHTED", "LIGHTEN", "LIGHTER", "LIGHTHOUSE", "LIGHTING", "LIGHTLY", "LIGHTNESS", "LIGHTNING", "LIGHTS", "LIGHTWEIGHT", "LIKE", "LIKEABLE", "LIKED", "LIKELIHOOD", "LIKELY", "LIKENED", "LIKENESS", "LIKES", "LIKEWISE", "LIKING", "LILI", "LILIAN", "LILIES", "LILLE", "LILLEY", "LILY", "LIMA", "LIMB", "LIMBO", "LIMBS", "LIME", "LIMELIGHT", "LIMESTONE", "LIMESTONES", "LIMIT", "LIMITATION", "LIMITATIONS", "LIMITED", "LIMITING", "LIMITLESS", "LIMITS", "LIMOGES", "LIMOUSINE", "LIMP", "LIMPED", "LIMPING", "LINCOLN", "LINCOLNSHIRE", "LINDA", "LINDSAY", "LINDSEY", "LINE", "LINEAGE", "LINEAR", "LINED", "LINEKER", "LINEN", "LINER", "LINERS", "LINES", "LINESMAN", "LINFIELD", "LINFORD", "LING", "LINGER", "LINGERED", "LINGERING", "LINGUIST", "LINGUISTIC", "LINGUISTICALLY", "LINGUISTICS", "LINGUISTS", "LINING", "LININGS", "LINK", "LINKAGE", "LINKAGES", "LINKED", "LINKING", "LINKS", "LINLITHGOW", "LINO", "LINOLEUM", "LINTON", "LION", "LIONEL", "LIONS", "LIP", "LIPHOOK", "LIPID", "LIPS", "LIPSTICK", "LIQUID", "LIQUIDATION", "LIQUIDATOR", "LIQUIDITY", "LIQUIDS", "LIQUOR", "LISA", "LISBON", "LISBURN", "LISSA", "LIST", "LISTED", "LISTEN", "LISTENED", "LISTENER", "LISTENERS", "LISTENING", "LISTENS", "LISTER", "LISTING", "LISTINGS", "LISTS", "LIT", "LITANY", "LITERACY", "LITERAL", "LITERALLY", "LITERARY", "LITERATE", "LITERATURE", "LITHE", "LITHOSPHERE", "LITHUANIA", "LITHUANIAN", "LITIGANTS", "LITIGATION", "LITRE", "LITRES", "LITTER", "LITTERED", "LITTLE", "LITTLEWOODS", "LITURGICAL", "LITURGY", "LIVE", "LIVED", "LIVELIHOOD", "LIVELY", "LIVER", "LIVERPOOL", "LIVERY", "LIVES", "LIVESEY", "LIVESTOCK", "LIVID", "LIVING", "LIVINGSTON", "LIVINGSTONE", "LIZA", "LIZARD", "LIZARDS", "LIZZIE", "LIZZY", "LLANDUDNO", "LLANELLI", "LLEWELLYN", "LLOYD", "LLOYDS", "LOAD", "LOADED", "LOADING", "LOADS", "LOAF", "LOAN", "LOANS", "LOATH", "LOATHE", "LOATHED", "LOAVES", "LOBBIES", "LOBBY", "LOBBYING", "LOBE", "LOBES", "LOBSTER", "LOCAL", "LOCALISED", "LOCALITIES", "LOCALITY", "LOCALLY", "LOCALS", "LOCATE", "LOCATED", "LOCATING", "LOCATION", "LOCATIONAL", "LOCATIONS", "LOCH", "LOCHS", "LOCK", "LOCKE", "LOCKED", "LOCKER", "LOCKERBIE", "LOCKING", "LOCKS", "LOCKWOOD", "LOCO", "LOCOMOTIVE", "LOCOMOTIVES", "LOCUS", "LODGE", "LODGED", "LODGER", "LODGERS", "LODGING", "LODGINGS", "LOFT", "LOFTY", "LOG", "LOGAN", "LOGGED", "LOGGING", "LOGIC", "LOGICAL", "LOGICALLY", "LOGISTIC", "LOGISTICS", "LOGO", "LOGOS", "LOGS", "LOINS", "LOMBARD", "LOMBARDY", "LONDON", "LONDONDERRY", "LONDONER", "LONDONERS", "LONE", "LONELINESS", "LONELY", "LONER", "LONG", "LONGED", "LONGER", "LONGEST", "LONGEVITY", "LONGING", "LONGITUDINAL", "LONGMAN", "LONGSTANDING", "LONGTERM", "LONSDALE", "LOOK", "LOOKED", "LOOKING", "LOOKOUT", "LOOKS", "LOOM", "LOOMED", "LOOMING", "LOOMS", "LOOP", "LOOPHOLE", "LOOPS", "LOOSE", "LOOSELY", "LOOSEN", "LOOSENED", "LOOSER", "LORD", "LORDS", "LORDSHIP", "LORDSHIPS", "LORENZO", "LORETTA", "LORI", "LORNA", "LORNE", "LORRAINE", "LORRIES", "LORRY", "LORTON", "LOSE", "LOSER", "LOSERS", "LOSES", "LOSING", "LOSS", "LOSSES", "LOST", "LOT", "LOTHAR", "LOTHIAN", "LOTION", "LOTS", "LOTTERY", "LOTUS", "LOUD", "LOUDER", "LOUDLY", "LOUDSPEAKER", "LOUDSPEAKERS", "LOUGH", "LOUGHBOROUGH", "LOUIS", "LOUISA", "LOUISE", "LOUISIANA", "LOUNGE", "LOUNGING", "LOUSY", "LOUVRE", "LOVABLE", "LOVE", "LOVED", "LOVELL", "LOVELY", "LOVER", "LOVERS", "LOVES", "LOVING", "LOVINGLY", "LOW", "LOWE", "LOWELL", "LOWER", "LOWERED", "LOWERING", "LOWERS", "LOWEST", "LOWESTOFT", "LOWLAND", "LOWLANDS", "LOYAL", "LOYALIST", "LOYALISTS", "LOYALTIES", "LOYALTY", "LUCAS", "LUCE", "LUCENZO", "LUCIA", "LUCID", "LUCIE", "LUCIEN", "LUCIFER", "LUCINDA", "LUCK", "LUCKER", "LUCKILY", "LUCKY", "LUCRATIVE", "LUCY", "LUDENS", "LUDICROUS", "LUDLOW", "LUDO", "LUDOVICO", "LUDWIG", "LUFTWAFFE", "LUGGAGE", "LUIS", "LUISA", "LUKE", "LUKEWARM", "LULL", "LUMEN", "LUMINAL", "LUMINOUS", "LUMP", "LUMPS", "LUMPUR", "LUMPY", "LUMSDEN", "LUNAR", "LUNATIC", "LUNCH", "LUNCHEON", "LUNCHES", "LUNCHTIME", "LUNG", "LUNGS", "LURCH", "LURCHED", "LURE", "LURED", "LURGAN", "LURID", "LURKING", "LUSCIOUS", "LUSH", "LUST", "LUSTRE", "LUTHER", "LUTON", "LUXEMBOURG", "LUXURIES", "LUXURIOUS", "LUXURY", "LYBRAND", "LYDIA", "LYELL", "LYING", "LYLE", "LYMINGTON", "LYMPH", "LYMPHOCYTES", "LYMPHOMA", "LYNCH", "LYNDA", "LYNN", "LYNNE", "LYON", "LYONS", "LYRIC", "LYRICAL", "LYRICS", "MAASTRICHT", "MABEL", "MABS", "MACABRE", "MACAO", "MACARI", "MACARTHUR", "MACAULAY", "MACBETH", "MACCA", "MACCLESFIELD", "MACDONALD", "MACE", "MACEDONIA", "MACEDONIAN", "MACGREGOR", "MACHIN", "MACHINE", "MACHINERY", "MACHINES", "MACHO", "MACINTOSH", "MACK", "MACKAY", "MACKENZIE", "MACKEREL", "MACKIE", "MACKINTOSH", "MACLEAN", "MACLEOD", "MACMILLAN", "MACPHERSON", "MACQUILLAN", "MACROECONOMIC", "MACROSCOPIC", "MACSHARRY", "MAD", "MADAGASCAR", "MADAM", "MADAME", "MADE", "MADEIRA", "MADELEINE", "MADEMOISELLE", "MADGE", "MADLY", "MADMAN", "MADNESS", "MADONNA", "MADRID", "MAESTRO", "MAFIA", "MAGAZINE", "MAGAZINES", "MAGDALEN", "MAGEE", "MAGGIE", "MAGGOTS", "MAGIC", "MAGICAL", "MAGICALLY", "MAGICIAN", "MAGISTRATE", "MAGISTRATES", "MAGMA", "MAGNATE", "MAGNATES", "MAGNESIUM", "MAGNET", "MAGNETIC", "MAGNETISM", "MAGNETS", "MAGNIFICATION", "MAGNIFICENCE", "MAGNIFICENT", "MAGNIFICENTLY", "MAGNITUDE", "MAGNUS", "MAGUIRE", "MAHMOUD", "MAHOGANY", "MAHONEY", "MAID", "MAIDEN", "MAIDENHEAD", "MAIDS", "MAIDSTONE", "MAIL", "MAILING", "MAIN", "MAINE", "MAINFRAME", "MAINFRAMES", "MAINLAND", "MAINLY", "MAINS", "MAINSTAY", "MAINSTREAM", "MAINTAIN", "MAINTAINED", "MAINTAINING", "MAINTAINS", "MAINTENANCE", "MAISIE", "MAITLAND", "MAIZE", "MAJESTIC", "MAJESTY", "MAJOR", "MAJORCA", "MAJORITIES", "MAJORITY", "MAKE", "MAKER", "MAKERS", "MAKES", "MAKESHIFT", "MAKEUP", "MAKING", "MALA", "MALABSORPTION", "MALAISE", "MALARIA", "MALAWI", "MALAYA", "MALAYSIA", "MALAYSIAN", "MALCOLM", "MALE", "MALES", "MALEVOLENT", "MALI", "MALICE", "MALICIOUS", "MALICIOUSLY", "MALIGNANCY", "MALIGNANT", "MALIK", "MALL", "MALLACHY", "MALLEABLE", "MALNUTRITION", "MALONE", "MALPRACTICE", "MALT", "MALTA", "MALTINGS", "MALTON", "MALTRAVERS", "MALVERN", "MAMA", "MAMAN", "MAMMA", "MAMMAL", "MAMMALIAN", "MAMMALS", "MAMMOTH", "MAN", "MANAGE", "MANAGEABLE", "MANAGED", "MANAGEMENT", "MANAGEMENTS", "MANAGER", "MANAGERIAL", "MANAGERS", "MANAGES", "MANAGING", "MANCHESTER", "MANCINI", "MANDARIN", "MANDATE", "MANDATORY", "MANDELA", "MANDEVILLE", "MANDY", "MANE", "MANHATTAN", "MANHOOD", "MANIA", "MANIAC", "MANIC", "MANIFEST", "MANIFESTATION", "MANIFESTATIONS", "MANIFESTED", "MANIFESTLY", "MANIFESTO", "MANIFESTS", "MANILA", "MANIPULATE", "MANIPULATED", "MANIPULATING", "MANIPULATION", "MANIPULATIVE", "MANKIND", "MANLEY", "MANLY", "MANN", "MANNED", "MANNER", "MANNERISMS", "MANNERS", "MANNHEIM", "MANNING", "MANOEUVRE", "MANOEUVRES", "MANOMETRY", "MANOR", "MANORS", "MANPOWER", "MANS", "MANSELL", "MANSFIELD", "MANSION", "MANSLAUGHTER", "MANTELPIECE", "MANTLE", "MANUAL", "MANUALLY", "MANUALS", "MANUEL", "MANUFACTURE", "MANUFACTURED", "MANUFACTURER", "MANUFACTURERS", "MANUFACTURES", "MANUFACTURING", "MANURE", "MANUSCRIPT", "MANUSCRIPTS", "MANVILLE", "MANX", "MANY", "MAP", "MAPLE", "MAPPED", "MAPPING", "MAPS", "MAR", "MARATHON", "MARBLE", "MARBLES", "MARC", "MARCEL", "MARCH", "MARCHED", "MARCHERS", "MARCHES", "MARCHING", "MARCO", "MARCOS", "MARCUS", "MARE", "MARES", "MARGARET", "MARGARINE", "MARGERY", "MARGIN", "MARGINAL", "MARGINALLY", "MARGINS", "MARGUERITE", "MARIA", "MARIAN", "MARIANA", "MARIANNE", "MARIE", "MARIJUANA", "MARILYN", "MARINA", "MARINE", "MARINES", "MARINO", "MARIO", "MARION", "MARITAL", "MARITIME", "MARIUS", "MARJORIE", "MARK", "MARKED", "MARKEDLY", "MARKER", "MARKERS", "MARKET", "MARKETABLE", "MARKETED", "MARKETING", "MARKETPLACE", "MARKETS", "MARKHAM", "MARKING", "MARKINGS", "MARKS", "MARLBOROUGH", "MARLENE", "MARLEY", "MARLON", "MARLOW", "MARLOWE", "MARMALADE", "MAROON", "MARQUEE", "MARQUESS", "MARQUIS", "MARR", "MARRED", "MARRIAGE", "MARRIAGES", "MARRIED", "MARRIES", "MARROW", "MARRY", "MARRYING", "MARS", "MARSEILLE", "MARSEILLES", "MARSH", "MARSHAL", "MARSHALL", "MARSHES", "MARSHY", "MARSTON", "MARTHA", "MARTIAL", "MARTIN", "MARTINA", "MARTINI", "MARTON", "MARTYN", "MARTYR", "MARTYRDOM", "MARTYRS", "MARVELLOUS", "MARVELLOUSLY", "MARVIN", "MARWICK", "MARX", "MARXISM", "MARXIST", "MARXISTS", "MARY", "MARYLAND", "MARYLEBONE", "MARZIPAN", "MASAI", "MASCARA", "MASCULINE", "MASCULINITY", "MASK", "MASKED", "MASKLIN", "MASKS", "MASON", "MASONRY", "MASONS", "MASS", "MASSACHUSETTS", "MASSACRE", "MASSAGE", "MASSED", "MASSES", "MASSEY", "MASSINGHAM", "MASSIVE", "MASSIVELY", "MAST", "MASTER", "MASTERED", "MASTERLY", "MASTERPIECE", "MASTERPIECES", "MASTERS", "MASTERY", "MASTS", "MASTURBATION", "MAT", "MATCH", "MATCHED", "MATCHES", "MATCHING", "MATE", "MATERIAL", "MATERIALISE", "MATERIALISM", "MATERIALISTIC", "MATERIALLY", "MATERIALS", "MATERNAL", "MATERNITY", "MATES", "MATEY", "MATHEMATICAL", "MATHEMATICALLY", "MATHEMATICIAN", "MATHEMATICIANS", "MATHEMATICS", "MATHS", "MATILDA", "MATING", "MATISSE", "MATRICES", "MATRIMONIAL", "MATRIX", "MATRON", "MATS", "MATT", "MATTER", "MATTERED", "MATTERS", "MATTHEW", "MATTHEWS", "MATTHEY", "MATTRESS", "MATTRESSES", "MATURATION", "MATURE", "MATURES", "MATURITY", "MAUD", "MAUDE", "MAURA", "MAUREEN", "MAURICE", "MAURIN", "MAURITANIA", "MAURITIUS", "MAUSOLEUM", "MAUVE", "MAVERICK", "MAVIS", "MAXIM", "MAXIMAL", "MAXIMILIAN", "MAXIMISATION", "MAXIMISE", "MAXIMIZE", "MAXIMUM", "MAXINE", "MAXWELL", "MAY", "MAYBE", "MAYER", "MAYFAIR", "MAYHEM", "MAYHEW", "MAYNARD", "MAYNE", "MAYO", "MAYONNAISE", "MAYOR", "MAYORS", "MAZE", "MCALLISTER", "MCBRIDE", "MCCALL", "MCCANN", "MCCARTHY", "MCCARTNEY", "MCCLAIR", "MCCOIST", "MCCREADY", "MCDERMOTT", "MCDONALD", "MCDONNELL", "MCDOUGALL", "MCENROE", "MCEWAN", "MCFARLANE", "MCGOWAN", "MCGRATH", "MCGREGOR", "MCGUINNESS", "MCHALE", "MCILLVANNEY", "MCINTOSH", "MCKAY", "MCKENNA", "MCKENZIE", "MCLAREN", "MCLAUGHLIN", "MCLEAN", "MCLEISH", "MCLEOD", "MCLOUGHLIN", "MCMAHON", "MCMANUS", "MCMILLAN", "MCNAB", "MCNAMARA", "MCNEILL", "MCPHERSON", "MCQUEEN", "MEAD", "MEADOW", "MEADOWS", "MEAGRE", "MEAL", "MEALS", "MEAN", "MEANING", "MEANINGFUL", "MEANINGFULLY", "MEANINGLESS", "MEANINGS", "MEANS", "MEANT", "MEANTIME", "MEANWHILE", "MEASLES", "MEASURABLE", "MEASURE", "MEASURED", "MEASUREMENT", "MEASUREMENTS", "MEASURES", "MEASURING", "MEAT", "MEATS", "MECCA", "MECHANIC", "MECHANICAL", "MECHANICALLY", "MECHANICS", "MECHANISM", "MECHANISMS", "MECHANISTIC", "MEDAL", "MEDALLIST", "MEDALS", "MEDAU", "MEDIA", "MEDIAEVAL", "MEDIAN", "MEDIATE", "MEDIATED", "MEDIATION", "MEDIATOR", "MEDIATORS", "MEDICAL", "MEDICALLY", "MEDICATION", "MEDICINAL", "MEDICINE", "MEDICINES", "MEDICS", "MEDIEVAL", "MEDIOCRE", "MEDITATION", "MEDITATIONS", "MEDITERRANEAN", "MEDIUM", "MEDLEY", "MEDRESE", "MEDWAY", "MEEHAN", "MEEK", "MEEKLY", "MEET", "MEETING", "MEETINGS", "MEETS", "MEHMED", "MELANCHOLY", "MELANIE", "MELBOURNE", "MELISSA", "MELLOR", "MELLOW", "MELODIC", "MELODIES", "MELODRAMA", "MELODRAMATIC", "MELODY", "MELON", "MELROSE", "MELT", "MELTED", "MELTING", "MELVILLE", "MEMBER", "MEMBERS", "MEMBERSHIP", "MEMBRANE", "MEMBRANES", "MEMENTO", "MEMO", "MEMOIR", "MEMOIRS", "MEMORABILIA", "MEMORABLE", "MEMORANDA", "MEMORANDUM", "MEMORIAL", "MEMORIALS", "MEMORIES", "MEMORY", "MEMOS", "MEMPHIS", "MEN", "MENACE", "MENACINGLY", "MEND", "MENDING", "MENIAL", "MENINGITIS", "MENOPAUSE", "MENSTRUAL", "MENSTRUATION", "MENTAL", "MENTALITY", "MENTALLY", "MENTION", "MENTIONED", "MENTIONING", "MENTIONS", "MENTOR", "MENU", "MENUS", "MENZIES", "MERCANTILE", "MERCEDES", "MERCENARIES", "MERCER", "MERCHANDISE", "MERCHANT", "MERCHANTABLE", "MERCHANTS", "MERCHISTON", "MERCIA", "MERCIAN", "MERCIFUL", "MERCIFULLY", "MERCILESS", "MERCILESSLY", "MERCURY", "MERCY", "MERE", "MEREDITH", "MERELY", "MEREST", "MERGE", "MERGED", "MERGER", "MERGERS", "MERGING", "MERIT", "MERITS", "MERLIN", "MEROVINGIAN", "MERRILL", "MERRILY", "MERRY", "MERSEY", "MERSEYSIDE", "MERSON", "MERTON", "MERVYN", "MERYL", "MERYMOSE", "MESELF", "MESH", "MESS", "MESSAGE", "MESSAGES", "MESSENGER", "MESSENGERS", "MESSIAH", "MESSIANIC", "MESSING", "MESSRS", "MESSY", "MET", "METABOLIC", "METABOLISM", "METAL", "METALLIC", "METALS", "METALWORK", "METAPHOR", "METAPHORICAL", "METAPHORICALLY", "METAPHORS", "METAPHYSICAL", "METAPLASIA", "METEORITES", "METEOROLOGICAL", "METER", "METERS", "METHANE", "METHANOL", "METHOD", "METHODICAL", "METHODIST", "METHODISTS", "METHODOLOGICAL", "METHODOLOGIES", "METHODOLOGY", "METHODS", "METHYL", "METICULOUS", "METICULOUSLY", "METRE", "METRES", "METRIC", "METRO", "METROPOLIS", "METROPOLITAN", "MEXICAN", "MEXICO", "MEYER", "MIAMI", "MICE", "MICHAEL", "MICHEL", "MICHELANGELO", "MICHELE", "MICHELLE", "MICHIGAN", "MICK", "MICKEY", "MICKY", "MICRO", "MICROCOMPUTER", "MICROCOMPUTERS", "MICROCOSM", "MICROELECTRONICS", "MICROORGANISMS", "MICROPHONE", "MICROPHONES", "MICROPROCESSOR", "MICROPROCESSORS", "MICROSCOPE", "MICROSCOPIC", "MICROSCOPY", "MICROSOFT", "MICROSYSTEMS", "MICROWAVE", "MID", "MIDDAY", "MIDDLE", "MIDDLESBROUGH", "MIDDLESEX", "MIDDLETON", "MIDDLEWEIGHT", "MIDFIELD", "MIDFIELDER", "MIDI", "MIDLAND", "MIDLANDS", "MIDNIGHT", "MIDST", "MIDSUMMER", "MIDWAY", "MIDWEEK", "MIDWIFE", "MIDWIVES", "MIGHT", "MIGHTILY", "MIGHTY", "MIGRAINE", "MIGRANT", "MIGRANTS", "MIGRATE", "MIGRATION", "MIGRATORY", "MIGUEL", "MIGUELITO", "MIKE", "MIKHAIL", "MILAN", "MILBURN", "MILD", "MILDER", "MILDLY", "MILDRED", "MILE", "MILEAGE", "MILES", "MILESTONE", "MILESTONES", "MILETTI", "MILFORD", "MILIEU", "MILITANCY", "MILITANT", "MILITANTS", "MILITARILY", "MILITARY", "MILITIA", "MILITIAS", "MILK", "MILKING", "MILKMAN", "MILKY", "MILL", "MILLAR", "MILLENNIA", "MILLENNIUM", "MILLER", "MILLIE", "MILLIGAN", "MILLIMETRE", "MILLIMETRES", "MILLING", "MILLION", "MILLIONAIRE", "MILLIONAIRES", "MILLIONS", "MILLS", "MILLWALL", "MILLY", "MILNE", "MILNER", "MILROY", "MILTON", "MIME", "MIMIC", "MINCE", "MIND", "MINDED", "MINDER", "MINDFUL", "MINDLESS", "MINDS", "MINE", "MINEFIELD", "MINER", "MINERAL", "MINERALISATION", "MINERALS", "MINERS", "MINES", "MINGLED", "MINH", "MINI", "MINIATURE", "MINIATURES", "MINIBUS", "MINIMAL", "MINIMISE", "MINIMISED", "MINIMISING", "MINIMIZE", "MINIMUM", "MINING", "MINISTER", "MINISTERIAL", "MINISTERS", "MINISTRIES", "MINISTRY", "MINK", "MINNESOTA", "MINNIE", "MINOAN", "MINOR", "MINORITIES", "MINORITY", "MINORS", "MINS", "MINSTER", "MINT", "MINTON", "MINUS", "MINUTE", "MINUTES", "MIPS", "MIRACLE", "MIRACLES", "MIRACULOUS", "MIRACULOUSLY", "MIRANDA", "MIRIAM", "MIRROR", "MIRRORED", "MIRRORS", "MIRTH", "MISCARRIAGE", "MISCELLANEOUS", "MISCHIEF", "MISCHIEVOUS", "MISCONCEPTION", "MISCONCEPTIONS", "MISCONDUCT", "MISERABLE", "MISERABLY", "MISERY", "MISFORTUNE", "MISGIVINGS", "MISGUIDED", "MISLEAD", "MISLEADING", "MISLED", "MISMANAGEMENT", "MISMATCH", "MISPLACED", "MISREPRESENTATION", "MISS", "MISSED", "MISSES", "MISSILE", "MISSILES", "MISSING", "MISSION", "MISSIONARIES", "MISSIONARY", "MISSIONS", "MISSISSIPPI", "MISSOURI", "MISSUS", "MIST", "MISTAKE", "MISTAKEN", "MISTAKENLY", "MISTAKES", "MISTER", "MISTRESS", "MISTRESSES", "MISTRUST", "MISTS", "MISTY", "MISUNDERSTANDING", "MISUNDERSTANDINGS", "MISUNDERSTOOD", "MISUSE", "MITCH", "MITCHAM", "MITCHELL", "MITIGATE", "MITIGATION", "MITOCHONDRIAL", "MITSUBISHI", "MITTERRAND", "MIX", "MIXED", "MIXER", "MIXING", "MIXTURE", "MIXTURES", "MIYAZAWA", "MOAN", "MOANED", "MOANING", "MOAT", "MOB", "MOBILE", "MOBILISATION", "MOBILITY", "MOBILIZATION", "MOBILIZE", "MOBS", "MOCK", "MOCKED", "MOCKERY", "MOCKING", "MOCKINGLY", "MODAL", "MODE", "MODEL", "MODELLED", "MODELLING", "MODELS", "MODEM", "MODERATE", "MODERATELY", "MODERATION", "MODERATOR", "MODERN", "MODERNISATION", "MODERNISE", "MODERNISM", "MODERNIST", "MODERNITY", "MODERNIZATION", "MODES", "MODEST", "MODESTLY", "MODESTY", "MODI", "MODIFICATION", "MODIFICATIONS", "MODIFIED", "MODIFY", "MODIFYING", "MODIGLIANI", "MODULAR", "MODULATION", "MODULE", "MODULES", "MODULUS", "MOGADISHU", "MOHAMED", "MOHAMMAD", "MOHAMMED", "MOIRA", "MOIST", "MOISTURE", "MOLAR", "MOLARS", "MOLD", "MOLDOVA", "MOLE", "MOLECULAR", "MOLECULE", "MOLECULES", "MOLES", "MOLLA", "MOLLUSCS", "MOLLY", "MOLTEN", "MOM", "MOMENT", "MOMENTARILY", "MOMENTARY", "MOMENTOUS", "MOMENTS", "MOMENTUM", "MONA", "MONACO", "MONARCH", "MONARCHS", "MONARCHY", "MONASTERIES", "MONASTERY", "MONASTIC", "MONDAY", "MONDAYS", "MONDE", "MONETARIST", "MONETARISTS", "MONETARY", "MONEY", "MONEYS", "MONGOLIA", "MONGOLIAN", "MONICA", "MONIES", "MONITOR", "MONITORED", "MONITORING", "MONITORS", "MONK", "MONKEY", "MONKEYS", "MONKS", "MONMOUTH", "MONO", "MONOCLONAL", "MONOGRAPH", "MONOLITHIC", "MONOLOGUE", "MONONUCLEAR", "MONOPOLIES", "MONOPOLISTIC", "MONOPOLY", "MONOTONOUS", "MONOTONY", "MONOXIDE", "MONROE", "MONSIEUR", "MONSOON", "MONSTER", "MONSTERS", "MONSTROUS", "MONT", "MONTAGU", "MONTAGUE", "MONTANA", "MONTE", "MONTENEGRO", "MONTGOMERY", "MONTH", "MONTHLY", "MONTHS", "MONTREAL", "MONTROSE", "MONUMENT", "MONUMENTAL", "MONUMENTS", "MOOD", "MOODS", "MOODY", "MOON", "MOONEY", "MOONLIGHT", "MOONLIT", "MOONS", "MOOR", "MOORE", "MOORINGS", "MOORISH", "MOORLAND", "MOORS", "MOOT", "MOP", "MORAL", "MORALE", "MORALITY", "MORALLY", "MORALS", "MORAN", "MORATORIUM", "MORBID", "MORBIDITY", "MORE", "MORECAMBE", "MOREOVER", "MORES", "MORGAN", "MORI", "MORIBUND", "MORLAND", "MORLEY", "MORNING", "MORNINGS", "MOROCCAN", "MOROCCO", "MOROSE", "MORPHINE", "MORPHOLOGICAL", "MORPHOLOGY", "MORRIS", "MORRISON", "MORRISSEY", "MORSE", "MORTAL", "MORTALITY", "MORTALS", "MORTAR", "MORTGAGE", "MORTGAGEE", "MORTGAGES", "MORTIMER", "MORTON", "MOSAIC", "MOSAICS", "MOSCOW", "MOSELEY", "MOSES", "MOSLEM", "MOSLEMS", "MOSLEY", "MOSQUE", "MOSQUITO", "MOSQUITOES", "MOSS", "MOST", "MOSTLY", "MOT", "MOTEL", "MOTH", "MOTHER", "MOTHERBOARD", "MOTHERHOOD", "MOTHERS", "MOTHERWELL", "MOTHS", "MOTIF", "MOTIFS", "MOTILITY", "MOTION", "MOTIONED", "MOTIONLESS", "MOTIONS", "MOTIVATE", "MOTIVATED", "MOTIVATION", "MOTIVATIONAL", "MOTIVATIONS", "MOTIVE", "MOTIVES", "MOTOR", "MOTORBIKE", "MOTORCYCLE", "MOTORING", "MOTORIST", "MOTORISTS", "MOTOROLA", "MOTORS", "MOTORWAY", "MOTORWAYS", "MOTTLED", "MOTTO", "MOULD", "MOULDED", "MOULDING", "MOULDINGS", "MOULDS", "MOULDY", "MOUND", "MOUNDS", "MOUNT", "MOUNTAIN", "MOUNTAINEERING", "MOUNTAINOUS", "MOUNTAINS", "MOUNTAINSIDE", "MOUNTBATTEN", "MOUNTED", "MOUNTING", "MOUNTS", "MOURNERS", "MOURNFUL", "MOURNING", "MOUSE", "MOUSSE", "MOUSTACHE", "MOUTH", "MOUTHFUL", "MOUTHPIECE", "MOUTHS", "MOVABLE", "MOVE", "MOVED", "MOVEMENT", "MOVEMENTS", "MOVER", "MOVES", "MOVIE", "MOVIES", "MOVING", "MOWBRAY", "MOWER", "MOYNIHAN", "MOZAMBIQUE", "MOZART", "MPRP", "MRNA", "MUBARAK", "MUCH", "MUCK", "MUCKING", "MUCOSA", "MUCOSAL", "MUCOUS", "MUCUS", "MUD", "MUDDLE", "MUDDLED", "MUDDY", "MUFFLED", "MUFTI", "MUFTILIK", "MUG", "MUGS", "MUHAMMAD", "MUIR", "MUJAHEDDIN", "MULBERRY", "MULE", "MULES", "MULTICULTURAL", "MULTIDISCIPLINARY", "MULTILATERAL", "MULTIMEDIA", "MULTINATIONAL", "MULTINATIONALS", "MULTIPARTY", "MULTIPLE", "MULTIPLES", "MULTIPLICATION", "MULTIPLICITY", "MULTIPLIED", "MULTIPLIER", "MULTIPLY", "MULTIPLYING", "MULTITUDE", "MUM", "MUMBLED", "MUMMY", "MUMS", "MUNDANE", "MUNGO", "MUNICH", "MUNICIPAL", "MUNITIONS", "MUNRO", "MURDER", "MURDERED", "MURDERER", "MURDERERS", "MURDERING", "MURDEROUS", "MURDERS", "MURDOCH", "MURIEL", "MURKY", "MURMUR", "MURMURED", "MURMURING", "MURPHY", "MURRAY", "MURRAYFIELD", "MUSCLE", "MUSCLES", "MUSCULAR", "MUSE", "MUSED", "MUSEUM", "MUSEUMS", "MUSHROOM", "MUSHROOMS", "MUSIC", "MUSICAL", "MUSICALLY", "MUSICALS", "MUSICIAN", "MUSICIANS", "MUSLIM", "MUSLIMS", "MUSLIN", "MUSSELS", "MUSSOLINI", "MUST", "MUSTARD", "MUSTER", "MUSTY", "MUTANT", "MUTANTS", "MUTATION", "MUTATIONS", "MUTE", "MUTED", "MUTINY", "MUTTERED", "MUTTERING", "MUTTON", "MUTUAL", "MUTUALLY", "MUZZLE", "MYELOSKI", "MYERS", "MYLES", "MYOCARDIAL", "MYRA", "MYRIAD", "MYSELF", "MYSTERIES", "MYSTERIOUS", "MYSTERIOUSLY", "MYSTERY", "MYSTIC", "MYSTICAL", "MYSTICISM", "MYSTICS", "MYSTIQUE", "MYTH", "MYTHICAL", "MYTHOLOGICAL", "MYTHOLOGY", "MYTHS", "NACIONAL", "NAHUM", "NAIL", "NAILED", "NAILS", "NAIROBI", "NAIVE", "NAIVETY", "NAKED", "NAKEDNESS", "NAME", "NAMED", "NAMELESS", "NAMELY", "NAMES", "NAMESAKE", "NAMIBIA", "NAMIBIAN", "NAMING", "NANA", "NANCY", "NANNY", "NAOMI", "NAP", "NAPE", "NAPIER", "NAPKIN", "NAPLES", "NAPOLEON", "NAPOLEONIC", "NAPPIES", "NAPPY", "NARRATION", "NARRATIVE", "NARRATIVES", "NARRATOR", "NARROW", "NARROWED", "NARROWER", "NARROWING", "NARROWLY", "NARROWNESS", "NARROWS", "NASA", "NASAL", "NASH", "NASTY", "NATAL", "NATALIE", "NATASHA", "NATHAN", "NATHANIEL", "NATION", "NATIONAL", "NATIONALISATION", "NATIONALISED", "NATIONALISM", "NATIONALIST", "NATIONALISTIC", "NATIONALISTS", "NATIONALITIES", "NATIONALITY", "NATIONALIZATION", "NATIONALIZED", "NATIONALLY", "NATIONALS", "NATIONS", "NATIONWIDE", "NATIVE", "NATIVES", "NATO", "NATURAL", "NATURALISM", "NATURALIST", "NATURALISTIC", "NATURALISTS", "NATURALLY", "NATURE", "NATURES", "NATWEST", "NAUGHTY", "NAUSEA", "NAUTICAL", "NAVAL", "NAVE", "NAVEL", "NAVIGATE", "NAVIGATION", "NAVIGATIONAL", "NAVIGATOR", "NAVY", "NAY", "NAYLOR", "NAZI", "NAZIS", "NEAL", "NEAR", "NEARBY", "NEARED", "NEARER", "NEAREST", "NEARING", "NEARLY", "NEARNESS", "NEAT", "NEATH", "NEATLY", "NECESSARILY", "NECESSARY", "NECESSITATE", "NECESSITATED", "NECESSITATES", "NECESSITIES", "NECESSITY", "NECK", "NECKLACE", "NECKS", "NECROSIS", "NECTAR", "NEED", "NEEDED", "NEEDHAM", "NEEDING", "NEEDLE", "NEEDLES", "NEEDLESS", "NEEDS", "NEEDY", "NEGATION", "NEGATIVE", "NEGATIVELY", "NEGATIVES", "NEGLECT", "NEGLECTED", "NEGLECTING", "NEGLIGENCE", "NEGLIGENT", "NEGLIGENTLY", "NEGLIGIBLE", "NEGOTIABLE", "NEGOTIATE", "NEGOTIATED", "NEGOTIATING", "NEGOTIATION", "NEGOTIATIONS", "NEGOTIATOR", "NEGOTIATORS", "NEGRO", "NEIGHBOUR", "NEIGHBOURHOOD", "NEIGHBOURHOODS", "NEIGHBOURING", "NEIGHBOURS", "NEIL", "NEILL", "NEITHER", "NELL", "NELLIE", "NELSON", "NENNA", "NEOLITHIC", "NEON", "NEONATAL", "NEPAL", "NEPHEW", "NEPHEWS", "NEPTUNE", "NERVE", "NERVES", "NERVOSA", "NERVOUS", "NERVOUSLY", "NERVOUSNESS", "NESS", "NEST", "NESTING", "NESTLING", "NESTS", "NET", "NETHER", "NETHERLANDS", "NETS", "NETTED", "NETTING", "NETTLE", "NETTLES", "NETWARE", "NETWORK", "NETWORKED", "NETWORKING", "NETWORKS", "NEURAL", "NEUROLOGICAL", "NEURON", "NEURONS", "NEUROPATHY", "NEUROSIS", "NEUROTIC", "NEUTRAL", "NEUTRALISATION", "NEUTRALITY", "NEUTRON", "NEUTRONS", "NEVADA", "NEVER", "NEVERTHELESS", "NEVILLE", "NEVIS", "NEW", "NEWARK", "NEWBORN", "NEWBURY", "NEWCASTLE", "NEWCO", "NEWCOMER", "NEWCOMERS", "NEWER", "NEWEST", "NEWFOUNDLAND", "NEWHAM", "NEWINGTON", "NEWLEY", "NEWLY", "NEWMAN", "NEWMARKET", "NEWPORT", "NEWRY", "NEWS", "NEWSAGENT", "NEWSAGENTS", "NEWSLETTER", "NEWSLETTERS", "NEWSOME", "NEWSPAPER", "NEWSPAPERS", "NEWTON", "NEWTONIAN", "NEWTOWN", "NEXT", "NEXUS", "NGUYEN", "NIALL", "NICANDRA", "NICARAGUA", "NICE", "NICELY", "NICER", "NICEST", "NICETIES", "NICHE", "NICHES", "NICHOLAS", "NICHOLLS", "NICHOLS", "NICHOLSON", "NICK", "NICKED", "NICKLAUS", "NICKNAME", "NICKNAMED", "NICKY", "NICOLA", "NICOLAE", "NICOLAS", "NICOLO", "NICOSIA", "NICOTINE", "NIECE", "NIETZSCHE", "NIGEL", "NIGER", "NIGERIA", "NIGERIAN", "NIGGLING", "NIGHT", "NIGHTCLUB", "NIGHTDRESS", "NIGHTFALL", "NIGHTINGALE", "NIGHTLIFE", "NIGHTLY", "NIGHTMARE", "NIGHTMARES", "NIGHTS", "NIKI", "NIKOLAI", "NIKOS", "NIL", "NILE", "NINA", "NINE", "NINETEEN", "NINETEENTH", "NINETIES", "NINETY", "NINTH", "NIP", "NIPPLE", "NIPPLES", "NIRO", "NIRVANA", "NISSAN", "NITRATE", "NITRATES", "NITRIC", "NITROGEN", "NIXDORF", "NIXON", "NIZAN", "NKRUMAH", "NOAH", "NOBEL", "NOBILITY", "NOBLE", "NOBLEMAN", "NOBLEMEN", "NOBLES", "NOBODY", "NOCTURNAL", "NOD", "NODDED", "NODDING", "NODE", "NODES", "NOEL", "NOISE", "NOISES", "NOISILY", "NOISY", "NOLAN", "NOMADIC", "NOMADS", "NOME", "NOMENCLATURE", "NOMES", "NOMINAL", "NOMINALLY", "NOMINATE", "NOMINATED", "NOMINATION", "NOMINATIONS", "NOMINEE", "NOMINEES", "NON", "NONCONFORMIST", "NONCONFORMISTS", "NONE", "NONETHELESS", "NONSENSE", "NOON", "NOOSE", "NOPE", "NOR", "NORA", "NORDERN", "NORDIC", "NOREEN", "NORFOLK", "NORIEGA", "NORM", "NORMA", "NORMAL", "NORMALISATION", "NORMALITY", "NORMALIZATION", "NORMALLY", "NORMAN", "NORMANDY", "NORMANS", "NORMATIVE", "NORMS", "NORRIS", "NORTH", "NORTHALLERTON", "NORTHAMPTON", "NORTHAMPTONSHIRE", "NORTHANTS", "NORTHEAST", "NORTHERLY", "NORTHERN", "NORTHUMBERLAND", "NORTHUMBRIA", "NORTHUMBRIAN", "NORTHWARD", "NORTHWARDS", "NORTHWEST", "NORTON", "NORWAY", "NORWEGIAN", "NORWEGIANS", "NORWICH", "NORWOOD", "NOSE", "NOSES", "NOSTALGIA", "NOSTALGIC", "NOSTRILS", "NOT", "NOTABLE", "NOTABLY", "NOTATION", "NOTCH", "NOTE", "NOTEBOOK", "NOTEBOOKS", "NOTED", "NOTES", "NOTEWORTHY", "NOTHING", "NOTICE", "NOTICEABLE", "NOTICEABLY", "NOTICED", "NOTICES", "NOTICING", "NOTIFICATION", "NOTIFIED", "NOTIFY", "NOTING", "NOTION", "NOTIONAL", "NOTIONS", "NOTORIETY", "NOTORIOUS", "NOTORIOUSLY", "NOTTING", "NOTTINGHAM", "NOTTINGHAMSHIRE", "NOTTS", "NOTWITHSTANDING", "NOUGHT", "NOUN", "NOUNS", "NOURISHMENT", "NOVA", "NOVEL", "NOVELIST", "NOVELISTS", "NOVELL", "NOVELS", "NOVELTY", "NOVEMBER", "NOVICE", "NOVICES", "NOW", "NOWADAYS", "NOWHERE", "NOWS", "NOWT", "NOXIOUS", "NOZZLE", "NPFL", "NSAID", "NSAIDS", "NUADU", "NUANCES", "NUCLEAR", "NUCLEATION", "NUCLEI", "NUCLEIC", "NUCLEOTIDE", "NUCLEOTIDES", "NUCLEUS", "NUDE", "NUDGED", "NUISANCE", "NULL", "NUMB", "NUMBER", "NUMBERED", "NUMBERING", "NUMBERS", "NUMERACY", "NUMERIC", "NUMERICAL", "NUMERICALLY", "NUMEROUS", "NUN", "NUNS", "NUREMBERG", "NURSE", "NURSED", "NURSERIES", "NURSERY", "NURSES", "NURSING", "NURTURED", "NUT", "NUTRIENTS", "NUTRITION", "NUTRITIONAL", "NUTRITIOUS", "NUTS", "NUTTY", "NVQS", "NYLON", "OAK", "OAKESHOTT", "OAKLEY", "OAKS", "OARS", "OASIS", "OATES", "OATH", "OATHS", "OATS", "OBAN", "OBEDIENCE", "OBEDIENT", "OBEDIENTLY", "OBESE", "OBESITY", "OBEY", "OBEYED", "OBEYING", "OBITUARY", "OBJECT", "OBJECTED", "OBJECTING", "OBJECTION", "OBJECTIONABLE", "OBJECTIONS", "OBJECTIVE", "OBJECTIVELY", "OBJECTIVES", "OBJECTIVITY", "OBJECTORS", "OBJECTS", "OBLIGATION", "OBLIGATIONS", "OBLIGATORY", "OBLIGE", "OBLIGED", "OBLIQUE", "OBLIQUELY", "OBLITERATED", "OBLIVION", "OBLIVIOUS", "OBNOXIOUS", "OBSCENE", "OBSCENITY", "OBSCURE", "OBSCURED", "OBSCURES", "OBSCURITY", "OBSERVABLE", "OBSERVANCE", "OBSERVATION", "OBSERVATIONAL", "OBSERVATIONS", "OBSERVATORY", "OBSERVE", "OBSERVED", "OBSERVER", "OBSERVERS", "OBSERVES", "OBSERVING", "OBSESSED", "OBSESSION", "OBSESSIONS", "OBSESSIVE", "OBSOLETE", "OBSTACLE", "OBSTACLES", "OBSTRUCT", "OBSTRUCTING", "OBSTRUCTION", "OBSTRUCTIVE", "OBTAIN", "OBTAINABLE", "OBTAINED", "OBTAINING", "OBTAINS", "OBVIOUS", "OBVIOUSLY", "OCCASION", "OCCASIONAL", "OCCASIONALLY", "OCCASIONED", "OCCASIONS", "OCCULT", "OCCUPANCY", "OCCUPANT", "OCCUPANTS", "OCCUPATION", "OCCUPATIONAL", "OCCUPATIONS", "OCCUPIED", "OCCUPIER", "OCCUPIERS", "OCCUPIES", "OCCUPY", "OCCUPYING", "OCCUR", "OCCURRED", "OCCURRENCE", "OCCURRENCES", "OCCURRING", "OCCURS", "OCEAN", "OCEANIC", "OCEANS", "OCTAGONAL", "OCTAMER", "OCTAVE", "OCTOBER", "OCTOPUS", "ODD", "ODDITY", "ODDLY", "ODDS", "ODOUR", "ODOURS", "OECD", "OEDEMA", "OEDIPUS", "OESOPHAGEAL", "OESOPHAGITIS", "OESOPHAGUS", "OESTROGEN", "OFF", "OFFA", "OFFENCE", "OFFENCES", "OFFEND", "OFFENDED", "OFFENDER", "OFFENDERS", "OFFENDING", "OFFENSIVE", "OFFER", "OFFERED", "OFFERING", "OFFERINGS", "OFFEROR", "OFFERS", "OFFICE", "OFFICER", "OFFICERS", "OFFICES", "OFFICIAL", "OFFICIALDOM", "OFFICIALLY", "OFFICIALS", "OFFLINE", "OFFSET", "OFFSHORE", "OFFSIDE", "OFFSPRING", "OFT", "OFTEN", "OHIO", "OIL", "OILS", "OILY", "OINTMENT", "OKAY", "OLD", "OLDER", "OLDEST", "OLDFIELD", "OLDHAM", "OLDS", "OLGA", "OLIGONUCLEOTIDE", "OLIGONUCLEOTIDES", "OLIVE", "OLIVER", "OLIVES", "OLIVETTI", "OLIVIA", "OLIVIER", "OLLIE", "OLYMPIA", "OLYMPIC", "OLYMPICS", "OMAGH", "OMALLY", "OMAN", "OMAR", "OMBUDSMAN", "OMELETTE", "OMEN", "OMEPRAZOLE", "OMINOUS", "OMINOUSLY", "OMISSION", "OMISSIONS", "OMIT", "OMITTED", "OMITTING", "ONCE", "ONCOMING", "ONE", "ONEROUS", "ONES", "ONESELF", "ONGOING", "ONION", "ONIONS", "ONLINE", "ONLOOKERS", "ONLY", "ONSET", "ONSHORE", "ONSLAUGHT", "ONTARIO", "ONTO", "ONTOLOGICAL", "ONUS", "ONWARD", "ONWARDS", "OOPS", "OPAQUE", "OPCS", "OPEC", "OPEN", "OPENED", "OPENER", "OPENING", "OPENINGS", "OPENLY", "OPENNESS", "OPENS", "OPERA", "OPERAS", "OPERATE", "OPERATED", "OPERATES", "OPERATIC", "OPERATING", "OPERATION", "OPERATIONAL", "OPERATIONS", "OPERATIVE", "OPERATIVES", "OPERATOR", "OPERATORS", "OPINION", "OPINIONS", "OPIUM", "OPPONENT", "OPPONENTS", "OPPORTUNIST", "OPPORTUNISTIC", "OPPORTUNITIES", "OPPORTUNITY", "OPPOSE", "OPPOSED", "OPPOSES", "OPPOSING", "OPPOSITE", "OPPOSITES", "OPPOSITION", "OPPOSITIONS", "OPPRESSED", "OPPRESSION", "OPPRESSIVE", "OPT", "OPTED", "OPTIC", "OPTICAL", "OPTICS", "OPTIMAL", "OPTIMISM", "OPTIMISTIC", "OPTIMUM", "OPTING", "OPTION", "OPTIONAL", "OPTIONS", "OPULENT", "ORACLE", "ORAL", "ORALLY", "ORANGE", "ORANGES", "ORATORY", "ORB", "ORBIT", "ORBITAL", "ORBITS", "ORCHARD", "ORCHARDS", "ORCHESTRA", "ORCHESTRAL", "ORCHESTRAS", "ORCHID", "ORCHIDS", "ORCS", "ORDAINED", "ORDEAL", "ORDER", "ORDERED", "ORDERING", "ORDERLY", "ORDERS", "ORDINARILY", "ORDINARY", "ORDINATION", "ORDNANCE", "ORE", "OREGON", "ORGAN", "ORGANIC", "ORGANICALLY", "ORGANISATION", "ORGANISATIONAL", "ORGANISATIONS", "ORGANISE", "ORGANISED", "ORGANISER", "ORGANISERS", "ORGANISES", "ORGANISING", "ORGANISM", "ORGANISMS", "ORGANIST", "ORGANIZATION", "ORGANIZATIONAL", "ORGANIZATIONS", "ORGANIZE", "ORGANIZED", "ORGANIZER", "ORGANIZERS", "ORGANIZING", "ORGANS", "ORGASM", "ORGY", "ORIENT", "ORIENTAL", "ORIENTATION", "ORIENTATIONS", "ORIENTED", "ORIGIN", "ORIGINAL", "ORIGINALITY", "ORIGINALLY", "ORIGINALS", "ORIGINATE", "ORIGINATED", "ORIGINATES", "ORIGINATING", "ORIGINATOR", "ORIGINS", "ORION", "ORKNEY", "ORLANDO", "ORLEANS", "ORMESBY", "ORNAMENT", "ORNAMENTAL", "ORNAMENTS", "ORNATE", "ORPHAN", "ORPHANAGE", "ORPHANS", "ORPHEUS", "ORRELL", "ORTEGA", "ORTHODOX", "ORTHODOXY", "ORTHOPAEDIC", "ORTON", "ORWELL", "OSAKA", "OSBORNE", "OSCAR", "OSCILLATION", "OSIRIS", "OSLO", "OSMAN", "OSTENSIBLY", "OSWALD", "OTHELLO", "OTHER", "OTHERS", "OTHERWISE", "OTLEY", "OTTAWA", "OTTER", "OTTERS", "OTTO", "OTTOMAN", "OUGHT", "OULD", "OUNCE", "OUNCES", "OUR", "OURS", "OURSELVES", "OUST", "OUSTED", "OUT", "OUTBREAK", "OUTBREAKS", "OUTBUILDINGS", "OUTBURST", "OUTBURSTS", "OUTCOME", "OUTCOMES", "OUTCROP", "OUTCRY", "OUTDATED", "OUTDOOR", "OUTDOORS", "OUTER", "OUTFIT", "OUTFITS", "OUTFLOW", "OUTGOING", "OUTGOINGS", "OUTING", "OUTINGS", "OUTLAY", "OUTLET", "OUTLETS", "OUTLINE", "OUTLINED", "OUTLINES", "OUTLINING", "OUTLOOK", "OUTLYING", "OUTMODED", "OUTPATIENT", "OUTPUT", "OUTPUTS", "OUTRAGE", "OUTRAGED", "OUTRAGEOUS", "OUTRIGHT", "OUTSET", "OUTSIDE", "OUTSIDER", "OUTSIDERS", "OUTSKIRTS", "OUTSPOKEN", "OUTSTANDING", "OUTSTRETCHED", "OUTWARD", "OUTWARDLY", "OUTWARDS", "OUTWEIGH", "OUTWEIGHED", "OUTWITH", "OVAL", "OVATION", "OVEN", "OVENS", "OVER", "OVERALL", "OVERALLS", "OVERBOARD", "OVERCAME", "OVERCOAT", "OVERCOME", "OVERCOMES", "OVERCOMING", "OVERCROWDED", "OVERCROWDING", "OVERDOSE", "OVERDRAFT", "OVERDRIVE", "OVERDUE", "OVERFLOW", "OVERFLOWING", "OVERGROWN", "OVERHAUL", "OVERHEAD", "OVERHEADS", "OVERHEARD", "OVERLAP", "OVERLAPPING", "OVERLOAD", "OVERLOOK", "OVERLOOKED", "OVERLOOKING", "OVERLOOKS", "OVERLY", "OVERNIGHT", "OVERRIDE", "OVERRIDING", "OVERRUN", "OVERS", "OVERSEAS", "OVERSEE", "OVERSEEING", "OVERSHADOWED", "OVERSIGHT", "OVERT", "OVERTAKE", "OVERTAKEN", "OVERTAKING", "OVERTHROW", "OVERTHROWN", "OVERTIME", "OVERTLY", "OVERTONES", "OVERTOOK", "OVERTURE", "OVERTURES", "OVERTURN", "OVERTURNED", "OVERVIEW", "OVERWEIGHT", "OVERWHELM", "OVERWHELMED", "OVERWHELMING", "OVERWHELMINGLY", "OWE", "OWED", "OWEN", "OWENS", "OWES", "OWING", "OWL", "OWLS", "OWN", "OWNED", "OWNER", "OWNERS", "OWNERSHIP", "OWNING", "OWNS", "OXEN", "OXFAM", "OXFORD", "OXFORDSHIRE", "OXIDATION", "OXIDE", "OXIDES", "OXYGEN", "OYSTER", "OYSTERS", "OZONE", "PACE", "PACED", "PACES", "PACIFIC", "PACIFIST", "PACING", "PACK", "PACKAGE", "PACKAGES", "PACKAGING", "PACKED", "PACKET", "PACKETS", "PACKING", "PACKS", "PACT", "PAD", "PADDED", "PADDINGTON", "PADDLE", "PADDLING", "PADDOCK", "PADDY", "PADLOCK", "PADS", "PAEDIATRIC", "PAGAN", "PAGE", "PAGEANT", "PAGEMAKER", "PAGES", "PAID", "PAIGE", "PAIN", "PAINFUL", "PAINFULLY", "PAINLESS", "PAINS", "PAINSTAKING", "PAINSTAKINGLY", "PAINT", "PAINTED", "PAINTER", "PAINTERS", "PAINTING", "PAINTINGS", "PAINTS", "PAINTWORK", "PAIR", "PAIRED", "PAIRS", "PAISLEY", "PAKISTAN", "PAKISTANI", "PAKISTANIS", "PAL", "PALACE", "PALACES", "PALAEOZOIC", "PALATABLE", "PALATE", "PALATINE", "PALAZZO", "PALE", "PALER", "PALESTINE", "PALESTINIAN", "PALESTINIANS", "PALETTE", "PALLETS", "PALLID", "PALLOR", "PALM", "PALMER", "PALMERSTON", "PALMS", "PALPABLE", "PALS", "PALSY", "PALTRY", "PAMELA", "PAMPHLET", "PAMPHLETS", "PAN", "PANACEA", "PANACHE", "PANAMA", "PANAMANIAN", "PANCRAS", "PANCREAS", "PANCREATIC", "PANCREATITIS", "PANE", "PANEL", "PANELLED", "PANELLING", "PANELS", "PANES", "PANG", "PANIC", "PANICKED", "PANORAMA", "PANORAMIC", "PANS", "PANTHER", "PANTING", "PANTOMIME", "PANTRY", "PANTS", "PAOLO", "PAPA", "PAPACY", "PAPAL", "PAPER", "PAPERBACK", "PAPERBACKS", "PAPERS", "PAPERWORK", "PAPILLAE", "PAPUA", "PAR", "PARA", "PARABLE", "PARABLES", "PARACETAMOL", "PARACHUTE", "PARADE", "PARADES", "PARADIGM", "PARADIGMS", "PARADISE", "PARADOX", "PARADOXES", "PARADOXICAL", "PARADOXICALLY", "PARAFFIN", "PARAGRAPH", "PARAGRAPHS", "PARAGUAY", "PARALLEL", "PARALLELED", "PARALLELISM", "PARALLELS", "PARALYSED", "PARALYSIS", "PARAMETER", "PARAMETERS", "PARAMILITARIES", "PARAMILITARY", "PARAMOUNT", "PARANOIA", "PARANOID", "PARAPET", "PARAPHERNALIA", "PARAPHRASE", "PARASITE", "PARASITES", "PARASITIC", "PARCEL", "PARCELS", "PARCHMENT", "PARDON", "PARENT", "PARENTAL", "PARENTHOOD", "PARENTS", "PARGETER", "PARIETAL", "PARIS", "PARISH", "PARISHES", "PARISHIONERS", "PARISIAN", "PARITY", "PARK", "PARKED", "PARKER", "PARKES", "PARKIN", "PARKING", "PARKINSON", "PARKLAND", "PARKS", "PARLIAMENT", "PARLIAMENTARIANS", "PARLIAMENTARY", "PARLIAMENTS", "PARLOUR", "PARMA", "PAROCHIAL", "PARODY", "PAROLE", "PARQUET", "PARR", "PARROT", "PARROTS", "PARRY", "PARSLEY", "PARSON", "PARSONS", "PART", "PARTED", "PARTI", "PARTIAL", "PARTIALLY", "PARTICIPANT", "PARTICIPANTS", "PARTICIPATE", "PARTICIPATED", "PARTICIPATING", "PARTICIPATION", "PARTICIPATIVE", "PARTICIPATORY", "PARTICLE", "PARTICLES", "PARTICULAR", "PARTICULARLY", "PARTICULARS", "PARTIDO", "PARTIES", "PARTING", "PARTISAN", "PARTISANS", "PARTITION", "PARTITIONS", "PARTLY", "PARTNER", "PARTNERS", "PARTNERSHIP", "PARTNERSHIPS", "PARTS", "PARTY", "PASCAL", "PASCOE", "PASS", "PASSAGE", "PASSAGES", "PASSAGEWAY", "PASSED", "PASSENGER", "PASSENGERS", "PASSES", "PASSING", "PASSION", "PASSIONATE", "PASSIONATELY", "PASSIONS", "PASSIVE", "PASSIVELY", "PASSIVITY", "PASSOVER", "PASSPORT", "PASSPORTS", "PASSWORD", "PAST", "PASTA", "PASTE", "PASTEL", "PASTELS", "PASTIME", "PASTOR", "PASTORAL", "PASTRY", "PASTURE", "PASTURES", "PAT", "PATCH", "PATCHES", "PATCHWORK", "PATCHY", "PATEL", "PATENT", "PATENTLY", "PATENTS", "PATERNAL", "PATERNALISM", "PATERNALISTIC", "PATERSON", "PATH", "PATHETIC", "PATHOGENESIS", "PATHOGENIC", "PATHOGENS", "PATHOLOGICAL", "PATHOLOGIST", "PATHOLOGY", "PATHOS", "PATHS", "PATHWAY", "PATHWAYS", "PATIENCE", "PATIENT", "PATIENTLY", "PATIENTS", "PATIO", "PATRIARCH", "PATRIARCHAL", "PATRIARCHY", "PATRICIA", "PATRICIAN", "PATRICK", "PATRIOT", "PATRIOTIC", "PATRIOTISM", "PATROL", "PATROLLING", "PATROLS", "PATRON", "PATRONAGE", "PATRONS", "PATSY", "PATTED", "PATTEN", "PATTER", "PATTERN", "PATTERNED", "PATTERNING", "PATTERNS", "PATTERSON", "PATTING", "PAUCITY", "PAUL", "PAULA", "PAULINE", "PAULO", "PAUPER", "PAUPERS", "PAUSE", "PAUSED", "PAUSES", "PAUSING", "PAVED", "PAVEL", "PAVEMENT", "PAVEMENTS", "PAVILION", "PAVING", "PAVLOV", "PAW", "PAWN", "PAWS", "PAY", "PAYABLE", "PAYER", "PAYERS", "PAYING", "PAYMENT", "PAYMENTS", "PAYNE", "PAYOUT", "PAYROLL", "PAYS", "PCBS", "PEA", "PEACE", "PEACEFUL", "PEACEFULLY", "PEACEKEEPING", "PEACETIME", "PEACH", "PEACOCK", "PEAK", "PEAKS", "PEANUT", "PEANUTS", "PEAR", "PEARCE", "PEARL", "PEARLS", "PEARLY", "PEARS", "PEARSON", "PEAS", "PEASANT", "PEASANTRY", "PEASANTS", "PEAT", "PEATY", "PEBBLE", "PEBBLES", "PECK", "PECKHAM", "PECKING", "PECULIAR", "PECULIARITIES", "PECULIARLY", "PECUNIARY", "PEDAGOGIC", "PEDAGOGICAL", "PEDAGOGY", "PEDAL", "PEDESTAL", "PEDESTRIAN", "PEDESTRIANS", "PEDIGREE", "PEDRO", "PEEBLES", "PEEL", "PEELED", "PEELING", "PEEPING", "PEER", "PEERAGE", "PEERED", "PEERING", "PEERS", "PEG", "PEGASUS", "PEGGY", "PEGS", "PEKING", "PELLET", "PELLETS", "PELVIC", "PELVIS", "PEMBROKE", "PEMBROKESHIRE", "PEN", "PENAL", "PENALISED", "PENALTIES", "PENALTY", "PENANCE", "PENCE", "PENCIL", "PENCILS", "PENDANT", "PENDING", "PENDULUM", "PENELOPE", "PENETRATE", "PENETRATED", "PENETRATING", "PENETRATION", "PENG", "PENGE", "PENGUIN", "PENGUINS", "PENH", "PENICILLIN", "PENINSULA", "PENIS", "PENN", "PENNIES", "PENNILESS", "PENNINES", "PENNSYLVANIA", "PENNY", "PENROSE", "PENRY", "PENS", "PENSION", "PENSIONABLE", "PENSIONER", "PENSIONERS", "PENSIONS", "PENTAGON", "PENTAGONAL", "PENTIUM", "PENULTIMATE", "PENZANCE", "PEOPLE", "PEOPLES", "PEP", "PEPPER", "PEPPERS", "PEPSINOGEN", "PEPTIC", "PEPTIDE", "PEPTIDES", "PER", "PERCE", "PERCEIVE", "PERCEIVED", "PERCEIVES", "PERCEIVING", "PERCENT", "PERCENTAGE", "PERCENTAGES", "PERCEPTIBLE", "PERCEPTION", "PERCEPTIONS", "PERCEPTIVE", "PERCEPTUAL", "PERCH", "PERCHED", "PERCUSSION", "PERCUTANEOUS", "PERCY", "PERDITA", "PERENNIAL", "PERESTROIKA", "PERFECT", "PERFECTED", "PERFECTION", "PERFECTLY", "PERFORM", "PERFORMANCE", "PERFORMANCES", "PERFORMED", "PERFORMER", "PERFORMERS", "PERFORMING", "PERFORMS", "PERFUME", "PERFUNCTORY", "PERFUSION", "PERHAPS", "PERIL", "PERILOUS", "PERILOUSLY", "PERILS", "PERIMETER", "PERINATAL", "PERIOD", "PERIODIC", "PERIODICAL", "PERIODICALLY", "PERIODICALS", "PERIODS", "PERIPHERAL", "PERIPHERALS", "PERIPHERY", "PERKIN", "PERKINS", "PERKS", "PERM", "PERMANENCE", "PERMANENT", "PERMANENTLY", "PERMEABILITY", "PERMISSIBLE", "PERMISSION", "PERMISSIONS", "PERMISSIVE", "PERMIT", "PERMITS", "PERMITTED", "PERMITTING", "PERMUTATIONS", "PERNICIOUS", "PEROT", "PEROXIDE", "PERPETRATORS", "PERPETUAL", "PERPETUALLY", "PERPETUATE", "PERRY", "PERSECUTION", "PERSEVERANCE", "PERSIA", "PERSIAN", "PERSIANS", "PERSIST", "PERSISTED", "PERSISTENCE", "PERSISTENT", "PERSISTENTLY", "PERSISTS", "PERSON", "PERSONA", "PERSONAL", "PERSONALISED", "PERSONALITIES", "PERSONALITY", "PERSONALLY", "PERSONNEL", "PERSONS", "PERSPECTIVE", "PERSPECTIVES", "PERSPIRATION", "PERSUADE", "PERSUADED", "PERSUADING", "PERSUASION", "PERSUASIVE", "PERT", "PERTH", "PERTHSHIRE", "PERTINENT", "PERU", "PERUVIAN", "PERVASIVE", "PERVERSE", "PERVERSELY", "PERVERSION", "PESSIMISM", "PESSIMISTIC", "PEST", "PESTICIDE", "PESTICIDES", "PESTS", "PET", "PETAL", "PETALS", "PETE", "PETER", "PETERBOROUGH", "PETERS", "PETERSBURG", "PETERSFIELD", "PETERSON", "PETITE", "PETITION", "PETITIONER", "PETITIONS", "PETROCHEMICAL", "PETROL", "PETROLEUM", "PETS", "PETTY", "PEUGEOT", "PEW", "PEWS", "PEWTER", "PHANTOM", "PHARMACEUTICAL", "PHARMACEUTICALS", "PHARMACIST", "PHARMACY", "PHASE", "PHASED", "PHASES", "PHEASANT", "PHEASANTS", "PHELPS", "PHENOMENA", "PHENOMENAL", "PHENOMENON", "PHENOTYPE", "PHEW", "PHIL", "PHILADELPHIA", "PHILANTHROPIC", "PHILANTHROPY", "PHILHARMONIC", "PHILIP", "PHILIPPA", "PHILIPPE", "PHILIPPINE", "PHILIPPINES", "PHILIPS", "PHILLIP", "PHILLIPS", "PHILLIS", "PHILOSOPHER", "PHILOSOPHERS", "PHILOSOPHICAL", "PHILOSOPHICALLY", "PHILOSOPHIES", "PHILOSOPHY", "PHNOM", "PHOEBE", "PHOENIX", "PHONE", "PHONED", "PHONEME", "PHONEMES", "PHONEMIC", "PHONES", "PHONETIC", "PHONEY", "PHONING", "PHONOLOGICAL", "PHONOLOGY", "PHOSPHATASE", "PHOSPHATE", "PHOSPHATES", "PHOSPHORUS", "PHOSPHORYLATION", "PHOTO", "PHOTOCOPIER", "PHOTOCOPY", "PHOTOGRAPH", "PHOTOGRAPHED", "PHOTOGRAPHER", "PHOTOGRAPHERS", "PHOTOGRAPHIC", "PHOTOGRAPHS", "PHOTOGRAPHY", "PHOTON", "PHOTONS", "PHOTOS", "PHOTOSYNTHESIS", "PHRASE", "PHRASES", "PHYLLIS", "PHYSICAL", "PHYSICALLY", "PHYSICIAN", "PHYSICIANS", "PHYSICIST", "PHYSICISTS", "PHYSICS", "PHYSIOLOGICAL", "PHYSIOLOGY", "PHYSIOTHERAPIST", "PHYSIOTHERAPY", "PHYSIQUE", "PIANIST", "PIANO", "PIANOS", "PIAZZA", "PICASSO", "PICCADILLY", "PICK", "PICKED", "PICKERING", "PICKET", "PICKETS", "PICKING", "PICKINGS", "PICKS", "PICKUP", "PICKUPS", "PICKWICK", "PICNIC", "PICNICS", "PICTORIAL", "PICTURE", "PICTURED", "PICTURES", "PICTURESQUE", "PIE", "PIECE", "PIECEMEAL", "PIECES", "PIER", "PIERCED", "PIERCING", "PIERRE", "PIERS", "PIES", "PIETRO", "PIETY", "PIG", "PIGEON", "PIGEONS", "PIGGOTT", "PIGGY", "PIGMENT", "PIGMENTS", "PIGS", "PIKE", "PILE", "PILED", "PILES", "PILGRIM", "PILGRIMAGE", "PILGRIMS", "PILING", "PILKINGTON", "PILL", "PILLAR", "PILLARS", "PILLOW", "PILLOWS", "PILLS", "PILOT", "PILOTS", "PIN", "PINCH", "PINCHED", "PINCHING", "PINE", "PINEAPPLE", "PINES", "PING", "PINK", "PINKS", "PINNACLE", "PINNED", "PINNING", "PINPOINT", "PINS", "PINT", "PINTS", "PIONEER", "PIONEERED", "PIONEERING", "PIONEERS", "PIOUS", "PIP", "PIPE", "PIPELINE", "PIPER", "PIPES", "PIRACY", "PIRATE", "PIRATES", "PISA", "PISS", "PISSED", "PISTOL", "PISTOLS", "PISTON", "PIT", "PITCH", "PITCHED", "PITCHES", "PITCHING", "PITFALLS", "PITIFUL", "PITS", "PITT", "PITTSBURGH", "PITY", "PIUS", "PIVOT", "PIVOTAL", "PIXEL", "PIXELS", "PIZZA", "PIZZAS", "PLACATE", "PLACE", "PLACEBO", "PLACED", "PLACEMENT", "PLACEMENTS", "PLACES", "PLACID", "PLACING", "PLAGUE", "PLAGUED", "PLAID", "PLAIN", "PLAINLY", "PLAINS", "PLAINTIFF", "PLAINTIFFS", "PLAINTIVE", "PLAN", "PLANE", "PLANES", "PLANET", "PLANETARY", "PLANETS", "PLANK", "PLANKS", "PLANKTON", "PLANNED", "PLANNER", "PLANNERS", "PLANNING", "PLANS", "PLANT", "PLANTATION", "PLANTATIONS", "PLANTED", "PLANTING", "PLANTS", "PLAQUE", "PLAQUES", "PLASMA", "PLASMID", "PLASMIDS", "PLASMINOGEN", "PLASTER", "PLASTIC", "PLASTICS", "PLATE", "PLATEAU", "PLATELET", "PLATELETS", "PLATES", "PLATFORM", "PLATFORMS", "PLATINUM", "PLATO", "PLATONIC", "PLATOON", "PLATT", "PLATTER", "PLAUSIBILITY", "PLAUSIBLE", "PLAUSIBLY", "PLAY", "PLAYBACK", "PLAYED", "PLAYER", "PLAYERS", "PLAYFUL", "PLAYGROUND", "PLAYGROUP", "PLAYING", "PLAYS", "PLAYWRIGHT", "PLEA", "PLEAD", "PLEADED", "PLEADING", "PLEADINGS", "PLEAS", "PLEASANT", "PLEASANTLY", "PLEASE", "PLEASED", "PLEASES", "PLEASING", "PLEASURABLE", "PLEASURE", "PLEASURES", "PLEATS", "PLEDGE", "PLEDGED", "PLEDGES", "PLEISTOCENE", "PLENTIFUL", "PLENTY", "PLENUM", "PLETHORA", "PLIGHT", "PLINTH", "PLOT", "PLOTS", "PLOTTED", "PLOTTING", "PLOUGH", "PLOUGHED", "PLOUGHING", "PLOY", "PLUCK", "PLUCKED", "PLUG", "PLUGGED", "PLUGGING", "PLUGS", "PLUM", "PLUMAGE", "PLUMBER", "PLUMBING", "PLUME", "PLUMES", "PLUMMER", "PLUMP", "PLUMS", "PLUNGE", "PLUNGED", "PLUNGING", "PLURAL", "PLURALISM", "PLURALIST", "PLURALISTIC", "PLURALITY", "PLUS", "PLUTONIUM", "PLYMOUTH", "PLYWOOD", "PNEUMONIA", "POACHERS", "POCKET", "POCKETS", "POD", "PODIUM", "POEM", "POEMS", "POET", "POETIC", "POETRY", "POETS", "POIGNANT", "POINT", "POINTED", "POINTEDLY", "POINTER", "POINTERS", "POINTING", "POINTLESS", "POINTS", "POISE", "POISED", "POISON", "POISONED", "POISONING", "POISONOUS", "POISONS", "POKE", "POKED", "POKER", "POKING", "POLAND", "POLAR", "POLARISATION", "POLARITY", "POLARIZATION", "POLE", "POLES", "POLICE", "POLICEMAN", "POLICEMEN", "POLICEWOMAN", "POLICIES", "POLICING", "POLICY", "POLICYHOLDER", "POLICYHOLDERS", "POLIO", "POLISH", "POLISHED", "POLISHING", "POLITBURO", "POLITE", "POLITELY", "POLITENESS", "POLITICAL", "POLITICALLY", "POLITICIAN", "POLITICIANS", "POLITICS", "POLITY", "POLL", "POLLARD", "POLLED", "POLLEN", "POLLING", "POLLOCK", "POLLS", "POLLSTERS", "POLLUTANTS", "POLLUTED", "POLLUTERS", "POLLUTING", "POLLUTION", "POLLY", "POLO", "POLY", "POLYESTER", "POLYETHYLENE", "POLYMER", "POLYMERASE", "POLYMERS", "POLYPEPTIDE", "POLYPS", "POLYSTYRENE", "POLYTECHNIC", "POLYTECHNICS", "POLYTHENE", "POMP", "POMPIDOU", "POMPOUS", "POND", "PONDERED", "PONDERING", "PONDEROUS", "PONDS", "PONIES", "PONS", "PONT", "PONTYPOOL", "PONY", "POOL", "POOLE", "POOLEY", "POOLS", "POOLSIDE", "POOR", "POORER", "POOREST", "POORLY", "POP", "POPE", "POPES", "POPLAR", "POPPED", "POPPIES", "POPPING", "POPS", "POPULACE", "POPULAR", "POPULARITY", "POPULARLY", "POPULATED", "POPULATION", "POPULATIONS", "POPULIST", "POPULOUS", "PORCELAIN", "PORCH", "PORE", "PORES", "PORK", "PORN", "PORNOGRAPHIC", "PORNOGRAPHY", "POROSITY", "POROUS", "PORRIDGE", "PORT", "PORTABILITY", "PORTABLE", "PORTADOWN", "PORTAL", "PORTALS", "PORTER", "PORTERS", "PORTFOLIO", "PORTFOLIOS", "PORTICO", "PORTILLO", "PORTION", "PORTIONS", "PORTLAND", "PORTO", "PORTRAIT", "PORTRAITS", "PORTRAITURE", "PORTRAY", "PORTRAYAL", "PORTRAYED", "PORTRAYING", "PORTRAYS", "PORTS", "PORTSMOUTH", "PORTUGAL", "PORTUGUESE", "POSE", "POSED", "POSES", "POSH", "POSI", "POSING", "POSITION", "POSITIONAL", "POSITIONED", "POSITIONING", "POSITIONS", "POSITIVE", "POSITIVELY", "POSITIVISM", "POSITIVIST", "POSSESS", "POSSESSED", "POSSESSES", "POSSESSING", "POSSESSION", "POSSESSIONS", "POSSESSIVE", "POSSIBILITIES", "POSSIBILITY", "POSSIBLE", "POSSIBLY", "POST", "POSTAGE", "POSTAL", "POSTCARD", "POSTCARDS", "POSTED", "POSTER", "POSTERIOR", "POSTERITY", "POSTERS", "POSTGRADUATE", "POSTHUMOUS", "POSTING", "POSTMAN", "POSTMODERN", "POSTMODERNISM", "POSTMODERNIST", "POSTOPERATIVE", "POSTPONE", "POSTPONED", "POSTPONEMENT", "POSTPRANDIAL", "POSTS", "POSTSCRIPT", "POSTURE", "POSTWAR", "POT", "POTASSIUM", "POTATO", "POTATOES", "POTENCIES", "POTENCY", "POTENT", "POTENTIAL", "POTENTIALITIES", "POTENTIALLY", "POTENTIALS", "POTS", "POTTED", "POTTER", "POTTERY", "POUCH", "POULANTZAS", "POULTRY", "POUNCE", "POUNCED", "POUND", "POUNDING", "POUNDS", "POUR", "POURED", "POURING", "POURS", "POVERTY", "POWDER", "POWDERED", "POWDERS", "POWELL", "POWER", "POWERED", "POWERFUL", "POWERFULLY", "POWERLESS", "POWERLESSNESS", "POWERPC", "POWERS", "POWYS", "PPM", "PRACTICABLE", "PRACTICAL", "PRACTICALITIES", "PRACTICALITY", "PRACTICALLY", "PRACTICE", "PRACTICES", "PRACTISE", "PRACTISED", "PRACTISING", "PRACTITIONER", "PRACTITIONERS", "PRADESH", "PRAGMATIC", "PRAGMATICS", "PRAGMATISM", "PRAGUE", "PRAIRIE", "PRAISE", "PRAISED", "PRAISES", "PRAISING", "PRAM", "PRATT", "PRAWN", "PRAWNS", "PRAY", "PRAYED", "PRAYER", "PRAYERS", "PRAYING", "PREACH", "PREACHED", "PREACHER", "PREACHERS", "PREACHING", "PREAMBLE", "PREAMP", "PRECARIOUS", "PRECARIOUSLY", "PRECAUTION", "PRECAUTIONARY", "PRECAUTIONS", "PRECEDE", "PRECEDED", "PRECEDENCE", "PRECEDENT", "PRECEDENTS", "PRECEDES", "PRECEDING", "PRECEPTS", "PRECINCT", "PRECIOUS", "PRECIPITATE", "PRECIPITATED", "PRECIPITATION", "PRECISE", "PRECISELY", "PRECISION", "PRECLUDE", "PRECLUDES", "PRECOCIOUS", "PRECONCEPTIONS", "PRECONDITION", "PRECONDITIONS", "PRECURSOR", "PRECURSORS", "PREDATION", "PREDATOR", "PREDATORS", "PREDATORY", "PREDECESSOR", "PREDECESSORS", "PREDETERMINED", "PREDICAMENT", "PREDICATE", "PREDICT", "PREDICTABILITY", "PREDICTABLE", "PREDICTABLY", "PREDICTED", "PREDICTING", "PREDICTION", "PREDICTIONS", "PREDICTIVE", "PREDICTOR", "PREDICTS", "PREDISPOSITION", "PREDOMINANCE", "PREDOMINANT", "PREDOMINANTLY", "PREFACE", "PREFER", "PREFERABLE", "PREFERABLY", "PREFERENCE", "PREFERENCES", "PREFERENTIAL", "PREFERRED", "PREFERRING", "PREFERS", "PREGNANCIES", "PREGNANCY", "PREGNANT", "PREHISTORIC", "PREJUDICE", "PREJUDICED", "PREJUDICES", "PREJUDICIAL", "PRELIMINARY", "PRELUDE", "PREMATURE", "PREMATURELY", "PREMIER", "PREMIERE", "PREMIERSHIP", "PREMISE", "PREMISES", "PREMIUM", "PREMIUMS", "PRENTICE", "PREOCCUPATION", "PREOCCUPATIONS", "PREOCCUPIED", "PREPARATION", "PREPARATIONS", "PREPARATORY", "PREPARE", "PREPARED", "PREPAREDNESS", "PREPARES", "PREPARING", "PREPONDERANCE", "PREPOSTEROUS", "PREREQUISITE", "PREROGATIVE", "PRESBYTERIAN", "PRESBYTERIANS", "PRESCOTT", "PRESCRIBE", "PRESCRIBED", "PRESCRIBING", "PRESCRIPTION", "PRESCRIPTIONS", "PRESCRIPTIVE", "PRESENCE", "PRESENT", "PRESENTABLE", "PRESENTATION", "PRESENTATIONS", "PRESENTED", "PRESENTER", "PRESENTERS", "PRESENTING", "PRESENTLY", "PRESENTS", "PRESERVATION", "PRESERVE", "PRESERVED", "PRESERVES", "PRESERVING", "PRESIDED", "PRESIDENCY", "PRESIDENT", "PRESIDENTIAL", "PRESIDENTS", "PRESIDING", "PRESIDIUM", "PRESLEY", "PRESS", "PRESSED", "PRESSES", "PRESSING", "PRESSURE", "PRESSURES", "PRESTEL", "PRESTIGE", "PRESTIGIOUS", "PRESTON", "PRESTWICK", "PRESUMABLY", "PRESUME", "PRESUMED", "PRESUMPTION", "PRESUPPOSES", "PRESUPPOSITIONS", "PRETENCE", "PRETEND", "PRETENDED", "PRETENDING", "PRETENDS", "PRETENSIONS", "PRETENTIOUS", "PRETEXT", "PRETORIA", "PRETTIEST", "PRETTY", "PREVAIL", "PREVAILED", "PREVAILING", "PREVAILS", "PREVALENCE", "PREVALENT", "PREVENT", "PREVENTATIVE", "PREVENTED", "PREVENTING", "PREVENTION", "PREVENTIVE", "PREVENTS", "PREVIEW", "PREVIOUS", "PREVIOUSLY", "PREY", "PRICE", "PRICED", "PRICELESS", "PRICES", "PRICING", "PRICK", "PRICKLY", "PRIDE", "PRIEST", "PRIESTHOOD", "PRIESTLEY", "PRIESTLY", "PRIESTS", "PRIM", "PRIMACY", "PRIMAL", "PRIMARIES", "PRIMARILY", "PRIMARY", "PRIMATE", "PRIMATES", "PRIME", "PRIMER", "PRIMERS", "PRIMITIVE", "PRIMORDIAL", "PRINCE", "PRINCELY", "PRINCES", "PRINCESS", "PRINCIPAL", "PRINCIPALITY", "PRINCIPALLY", "PRINCIPALS", "PRINCIPLE", "PRINCIPLES", "PRINGLE", "PRINT", "PRINTED", "PRINTER", "PRINTERS", "PRINTING", "PRINTOUT", "PRINTS", "PRIOR", "PRIORITIES", "PRIORITY", "PRIORY", "PRISE", "PRISON", "PRISONER", "PRISONERS", "PRISONS", "PRISTINE", "PRITCHARD", "PRIVACY", "PRIVATE", "PRIVATELY", "PRIVATISATION", "PRIVATISE", "PRIVATISED", "PRIVATIZATION", "PRIVET", "PRIVILEGE", "PRIVILEGED", "PRIVILEGES", "PRIVY", "PRIX", "PRIZE", "PRIZED", "PRIZES", "PRO", "PROACTIVE", "PROBABILISTIC", "PROBABILITIES", "PROBABILITY", "PROBABLE", "PROBABLY", "PROBATE", "PROBATION", "PROBE", "PROBED", "PROBES", "PROBING", "PROBLEM", "PROBLEMATIC", "PROBLEMATICAL", "PROBLEMS", "PROBYN", "PROCEDURAL", "PROCEDURE", "PROCEDURES", "PROCEED", "PROCEEDED", "PROCEEDING", "PROCEEDINGS", "PROCEEDS", "PROCESS", "PROCESSED", "PROCESSES", "PROCESSING", "PROCESSION", "PROCESSIONS", "PROCESSOR", "PROCESSORS", "PROCLAIM", "PROCLAIMED", "PROCLAIMING", "PROCLAMATION", "PROCTOR", "PROCURE", "PROCUREMENT", "PRODDED", "PRODIGIOUS", "PRODIGY", "PRODUCE", "PRODUCED", "PRODUCER", "PRODUCERS", "PRODUCES", "PRODUCING", "PRODUCT", "PRODUCTION", "PRODUCTIONS", "PRODUCTIVE", "PRODUCTIVITY", "PRODUCTS", "PROF", "PROFESSION", "PROFESSIONAL", "PROFESSIONALISM", "PROFESSIONALLY", "PROFESSIONALS", "PROFESSIONS", "PROFESSOR", "PROFESSORS", "PROFICIENCY", "PROFICIENT", "PROFILE", "PROFILES", "PROFIT", "PROFITABILITY", "PROFITABLE", "PROFITABLY", "PROFITBOSS", "PROFITS", "PROFOUND", "PROFOUNDLY", "PROFUSELY", "PROFUSION", "PROGENY", "PROGNOSIS", "PROGRAM", "PROGRAMME", "PROGRAMMED", "PROGRAMMER", "PROGRAMMERS", "PROGRAMMES", "PROGRAMMING", "PROGRAMS", "PROGRESS", "PROGRESSED", "PROGRESSES", "PROGRESSING", "PROGRESSION", "PROGRESSIVE", "PROGRESSIVELY", "PROHIBIT", "PROHIBITED", "PROHIBITING", "PROHIBITION", "PROHIBITIONS", "PROHIBITIVE", "PROJECT", "PROJECTED", "PROJECTING", "PROJECTION", "PROJECTIONS", "PROJECTOR", "PROJECTS", "PROLETARIAT", "PROLIFERATION", "PROLIFERATIVE", "PROLIFIC", "PROLOGUE", "PROLONG", "PROLONGED", "PROMENADE", "PROMINENCE", "PROMINENT", "PROMINENTLY", "PROMISCUITY", "PROMISCUOUS", "PROMISE", "PROMISED", "PROMISES", "PROMISING", "PROMOTE", "PROMOTED", "PROMOTER", "PROMOTERS", "PROMOTES", "PROMOTING", "PROMOTION", "PROMOTIONAL", "PROMOTIONS", "PROMPT", "PROMPTED", "PROMPTING", "PROMPTLY", "PROMPTS", "PRONE", "PRONOUN", "PRONOUNCE", "PRONOUNCED", "PRONOUNCEMENT", "PRONOUNCEMENTS", "PRONOUNS", "PRONUNCIATION", "PROOF", "PROOFS", "PROP", "PROPAGANDA", "PROPAGATION", "PROPELLED", "PROPELLER", "PROPENSITY", "PROPER", "PROPERLY", "PROPERTIES", "PROPERTY", "PROPHECIES", "PROPHECY", "PROPHET", "PROPHETIC", "PROPHETS", "PROPONENTS", "PROPORTION", "PROPORTIONAL", "PROPORTIONALITY", "PROPORTIONATE", "PROPORTIONATELY", "PROPORTIONS", "PROPOSAL", "PROPOSALS", "PROPOSE", "PROPOSED", "PROPOSES", "PROPOSING", "PROPOSITION", "PROPOSITIONS", "PROPPED", "PROPPING", "PROPRIA", "PROPRIETARY", "PROPRIETOR", "PROPRIETORS", "PROPRIETY", "PROPS", "PROS", "PROSAIC", "PROSE", "PROSECUTE", "PROSECUTED", "PROSECUTING", "PROSECUTION", "PROSECUTIONS", "PROSECUTOR", "PROSECUTORS", "PROSPECT", "PROSPECTIVE", "PROSPECTS", "PROSPECTUS", "PROSPER", "PROSPERITY", "PROSPEROUS", "PROST", "PROSTAGLANDIN", "PROSTATE", "PROSTITUTE", "PROSTITUTES", "PROSTITUTION", "PROTAGONIST", "PROTAGONISTS", "PROTECT", "PROTECTED", "PROTECTING", "PROTECTION", "PROTECTIONISM", "PROTECTIONIST", "PROTECTIVE", "PROTECTOR", "PROTECTS", "PROTEIN", "PROTEINS", "PROTEST", "PROTESTANT", "PROTESTANTISM", "PROTESTANTS", "PROTESTATIONS", "PROTESTED", "PROTESTERS", "PROTESTING", "PROTESTORS", "PROTESTS", "PROTOCOL", "PROTOCOLS", "PROTON", "PROTONS", "PROTOTYPE", "PROTOTYPES", "PROTRACTED", "PROTRUDING", "PROUD", "PROUDLY", "PROUST", "PROVE", "PROVED", "PROVEN", "PROVENANCE", "PROVENCE", "PROVERBIAL", "PROVES", "PROVIDE", "PROVIDED", "PROVIDENCE", "PROVIDER", "PROVIDERS", "PROVIDES", "PROVIDING", "PROVINCE", "PROVINCES", "PROVINCIAL", "PROVING", "PROVISION", "PROVISIONAL", "PROVISIONALLY", "PROVISIONS", "PROVISO", "PROVOCATION", "PROVOCATIVE", "PROVOKE", "PROVOKED", "PROVOKING", "PROWESS", "PROXIMAL", "PROXIMITY", "PROXY", "PRUDENCE", "PRUDENT", "PRUDENTIAL", "PRUSSIA", "PRUSSIAN", "PSALMS", "PSBR", "PSYCHE", "PSYCHEDELIC", "PSYCHIATRIC", "PSYCHIATRIST", "PSYCHIATRISTS", "PSYCHIATRY", "PSYCHIC", "PSYCHOANALYSIS", "PSYCHOANALYTIC", "PSYCHOLOGICAL", "PSYCHOLOGICALLY", "PSYCHOLOGIST", "PSYCHOLOGISTS", "PSYCHOLOGY", "PSYCHOSIS", "PSYCHOTHERAPY", "PSYCHOTIC", "PUB", "PUBERTY", "PUBIC", "PUBLIC", "PUBLICAN", "PUBLICATION", "PUBLICATIONS", "PUBLICISE", "PUBLICITY", "PUBLICLY", "PUBLISH", "PUBLISHED", "PUBLISHER", "PUBLISHERS", "PUBLISHES", "PUBLISHING", "PUBS", "PUDDEPHAT", "PUDDING", "PUDDINGS", "PUDDLE", "PUDDLES", "PUERTO", "PUFF", "PUFFED", "PUFFING", "PUGH", "PULL", "PULLED", "PULLING", "PULLOVER", "PULLS", "PULMONARY", "PULP", "PULPIT", "PULSAR", "PULSE", "PULSES", "PUMP", "PUMPED", "PUMPING", "PUMPS", "PUN", "PUNCH", "PUNCHCARD", "PUNCHED", "PUNCHES", "PUNCHING", "PUNCTUATED", "PUNCTUATION", "PUNCTURE", "PUNDITS", "PUNGENT", "PUNISH", "PUNISHABLE", "PUNISHED", "PUNISHING", "PUNISHMENT", "PUNISHMENTS", "PUNITIVE", "PUNJAB", "PUNK", "PUNT", "PUNTER", "PUNTERS", "PUP", "PUPIL", "PUPILS", "PUPPET", "PUPPETS", "PUPPIES", "PUPPY", "PUPS", "PURCELL", "PURCHASE", "PURCHASED", "PURCHASER", "PURCHASERS", "PURCHASES", "PURCHASING", "PURE", "PURELY", "PUREST", "PURGATORY", "PURGE", "PURIFICATION", "PURIFIED", "PURISTS", "PURITAN", "PURITY", "PURPLE", "PURPORTING", "PURPORTS", "PURPOSE", "PURPOSEFUL", "PURPOSEFULLY", "PURPOSELY", "PURPOSES", "PURSE", "PURSED", "PURSUANCE", "PURSUE", "PURSUED", "PURSUER", "PURSUERS", "PURSUING", "PURSUIT", "PURSUITS", "PUSH", "PUSHCHAIR", "PUSHED", "PUSHES", "PUSHING", "PUSSY", "PUT", "PUTATIVE", "PUTNEY", "PUTS", "PUTT", "PUTTER", "PUTTING", "PUTTY", "PUZZLE", "PUZZLED", "PUZZLEMENT", "PUZZLES", "PUZZLING", "PYJAMAS", "PYLONS", "PYLORI", "PYRAMID", "PYRAMIDS", "PYRENEES", "QATAR", "QUA", "QUADRANT", "QUAINT", "QUAKER", "QUAKERS", "QUALIFICATION", "QUALIFICATIONS", "QUALIFIED", "QUALIFIER", "QUALIFIERS", "QUALIFIES", "QUALIFY", "QUALIFYING", "QUALITATIVE", "QUALITATIVELY", "QUALITIES", "QUALITY", "QUALMS", "QUANTIFICATION", "QUANTIFIED", "QUANTIFY", "QUANTITATIVE", "QUANTITATIVELY", "QUANTITIES", "QUANTITY", "QUANTUM", "QUARANTINE", "QUARREL", "QUARRELS", "QUARRIES", "QUARRY", "QUARTER", "QUARTERLY", "QUARTERS", "QUARTET", "QUARTETS", "QUARTZ", "QUASHED", "QUAY", "QUAYLE", "QUAYSIDE", "QUEBEC", "QUEEN", "QUEENS", "QUEENSLAND", "QUEER", "QUELL", "QUENTIN", "QUERIED", "QUERIES", "QUERY", "QUEST", "QUESTION", "QUESTIONABLE", "QUESTIONED", "QUESTIONING", "QUESTIONNAIRE", "QUESTIONNAIRES", "QUESTIONS", "QUEUE", "QUEUES", "QUEUING", "QUICK", "QUICKENED", "QUICKER", "QUICKEST", "QUICKLY", "QUID", "QUIESCENT", "QUIET", "QUIETER", "QUIETLY", "QUIETNESS", "QUIGLEY", "QUILT", "QUINN", "QUIRKY", "QUIT", "QUITE", "QUITTING", "QUIVERING", "QUIZ", "QUIZZICAL", "QUOTA", "QUOTAS", "QUOTATION", "QUOTATIONS", "QUOTE", "QUOTED", "QUOTES", "QUOTING", "RABBI", "RABBIT", "RABBITS", "RACE", "RACECOURSE", "RACED", "RACER", "RACES", "RACHAELA", "RACHEL", "RACIAL", "RACIALLY", "RACING", "RACISM", "RACIST", "RACK", "RACKET", "RACKS", "RADAR", "RADCLIFFE", "RADIAL", "RADIANCE", "RADIANT", "RADIATING", "RADIATION", "RADIATOR", "RADIATORS", "RADICAL", "RADICALISM", "RADICALLY", "RADICALS", "RADIO", "RADIOACTIVE", "RADIOACTIVITY", "RADIOCARBON", "RADIOLOGICAL", "RADIOS", "RADIOTHERAPY", "RADISH", "RADIUS", "RADON", "RAFAEL", "RAFAELO", "RAFFLE", "RAFSANJANI", "RAFT", "RAFTERS", "RAG", "RAGE", "RAGED", "RAGGED", "RAGING", "RAGS", "RAID", "RAIDED", "RAIDER", "RAIDERS", "RAIDS", "RAIL", "RAILINGS", "RAILROAD", "RAILS", "RAILWAY", "RAILWAYS", "RAIN", "RAINBOW", "RAINCOAT", "RAINED", "RAINFALL", "RAINFOREST", "RAINFORESTS", "RAINING", "RAINS", "RAINY", "RAISE", "RAISED", "RAISES", "RAISING", "RAISINS", "RAKE", "RAKED", "RAKING", "RALEIGH", "RALLIED", "RALLIES", "RALLY", "RALPH", "RAM", "RAMAN", "RAMBLERS", "RAMIFICATIONS", "RAMMED", "RAMP", "RAMPANT", "RAMPARTS", "RAMPS", "RAMSAY", "RAMSEY", "RAMSHACKLE", "RAN", "RANCH", "RANDALL", "RANDOLPH", "RANDOM", "RANDOMISED", "RANDOMLY", "RANG", "RANGE", "RANGED", "RANGER", "RANGERS", "RANGES", "RANGING", "RANGOON", "RANK", "RANKED", "RANKING", "RANKINGS", "RANKS", "RANSOM", "RANULF", "RAP", "RAPE", "RAPED", "RAPHAEL", "RAPID", "RAPIDITY", "RAPIDLY", "RAPIDS", "RAPING", "RAPIST", "RAPPED", "RAPPORT", "RAPPROCHEMENT", "RAPT", "RARE", "RARELY", "RARER", "RAREST", "RARITY", "RASH", "RASKOLNIKOV", "RASPBERRIES", "RASPBERRY", "RASPED", "RAT", "RATAGAN", "RATE", "RATEABLE", "RATED", "RATEPAYERS", "RATES", "RATHER", "RATIFICATION", "RATIFIED", "RATIFY", "RATING", "RATINGS", "RATIO", "RATION", "RATIONAL", "RATIONALE", "RATIONALISATION", "RATIONALISM", "RATIONALITY", "RATIONALIZATION", "RATIONALLY", "RATIONING", "RATIONS", "RATIOS", "RATS", "RATTLE", "RATTLED", "RATTLING", "RAUCOUS", "RAVAGES", "RAVE", "RAVINE", "RAW", "RAY", "RAYBESTOS", "RAYMOND", "RAYNER", "RAYS", "RAZOR", "RDBI", "REACH", "REACHED", "REACHES", "REACHING", "REACT", "REACTED", "REACTING", "REACTION", "REACTIONARY", "REACTIONS", "REACTIVE", "REACTIVITY", "REACTOR", "REACTORS", "REACTS", "READ", "READABILITY", "READABLE", "READER", "READERS", "READERSHIP", "READILY", "READINESS", "READING", "READINGS", "READS", "READY", "REAFFIRMED", "REAGAN", "REAL", "REALIGNMENT", "REALISATION", "REALISE", "REALISED", "REALISES", "REALISING", "REALISM", "REALIST", "REALISTIC", "REALISTICALLY", "REALISTS", "REALITIES", "REALITY", "REALIZATION", "REALIZATIONS", "REALIZE", "REALIZED", "REALIZES", "REALIZING", "REALLY", "REALM", "REALMS", "REAP", "REAPPEAR", "REAPPEARANCE", "REAPPEARED", "REAPPRAISAL", "REAR", "REARED", "REARGUARD", "REARING", "REARMAMENT", "REARRANGEMENT", "REASON", "REASONABLE", "REASONABLENESS", "REASONABLY", "REASONED", "REASONING", "REASONS", "REASSERT", "REASSESS", "REASSESSMENT", "REASSURANCE", "REASSURE", "REASSURED", "REASSURING", "REASSURINGLY", "REBATE", "REBATES", "REBECCA", "REBEL", "REBELLION", "REBELLIOUS", "REBELS", "REBIRTH", "REBOUND", "REBUILD", "REBUILDING", "REBUILT", "REBUKE", "RECALCITRANT", "RECALL", "RECALLED", "RECALLING", "RECALLS", "RECAPTURE", "RECEIPT", "RECEIPTS", "RECEIVE", "RECEIVED", "RECEIVER", "RECEIVERS", "RECEIVERSHIP", "RECEIVES", "RECEIVING", "RECENT", "RECENTLY", "RECEPTION", "RECEPTIONIST", "RECEPTIONS", "RECEPTIVE", "RECEPTOR", "RECEPTORS", "RECESS", "RECESSES", "RECESSION", "RECESSIONS", "RECIPE", "RECIPES", "RECIPIENT", "RECIPIENTS", "RECIPROCAL", "RECIPROCITY", "RECITAL", "RECITALS", "RECITE", "RECITED", "RECITING", "RECKLESS", "RECKLESSLY", "RECKLESSNESS", "RECKON", "RECKONED", "RECKONING", "RECKONS", "RECLAIM", "RECLAIMED", "RECLAMATION", "RECOGNISABLE", "RECOGNISE", "RECOGNISED", "RECOGNISER", "RECOGNISES", "RECOGNISING", "RECOGNITION", "RECOGNIZABLE", "RECOGNIZE", "RECOGNIZED", "RECOGNIZES", "RECOGNIZING", "RECOLLECTION", "RECOLLECTIONS", "RECOMBINANT", "RECOMMEND", "RECOMMENDATION", "RECOMMENDATIONS", "RECOMMENDED", "RECOMMENDING", "RECOMMENDS", "RECONCILE", "RECONCILED", "RECONCILIATION", "RECONCILING", "RECONNAISSANCE", "RECONSIDER", "RECONSTRUCT", "RECONSTRUCTED", "RECONSTRUCTION", "RECONSTRUCTIONS", "RECORD", "RECORDED", "RECORDER", "RECORDERS", "RECORDING", "RECORDINGS", "RECORDS", "RECOUP", "RECOURSE", "RECOVER", "RECOVERABLE", "RECOVERED", "RECOVERING", "RECOVERY", "RECREATE", "RECREATION", "RECREATIONAL", "RECRUIT", "RECRUITED", "RECRUITING", "RECRUITMENT", "RECRUITS", "RECTAL", "RECTANGLE", "RECTANGULAR", "RECTIFICATION", "RECTIFIED", "RECTIFY", "RECTOR", "RECTORY", "RECTUM", "RECUR", "RECURRENCE", "RECURRENT", "RECURRING", "RECYCLE", "RECYCLED", "RECYCLING", "RED", "REDCAR", "REDDISH", "REDEEM", "REDEEMED", "REDEMPTION", "REDEVELOPMENT", "REDISTRIBUTION", "REDISTRIBUTIVE", "REDMOND", "REDRESS", "REDS", "REDUCE", "REDUCED", "REDUCES", "REDUCING", "REDUCTION", "REDUCTIONS", "REDUNDANCIES", "REDUNDANCY", "REDUNDANT", "REDWOOD", "REED", "REEDS", "REEF", "REEFS", "REEL", "REELING", "REES", "REEVE", "REEVES", "REF", "REFECTORY", "REFER", "REFEREE", "REFEREES", "REFERENCE", "REFERENCES", "REFERENDUM", "REFERENT", "REFERENTIAL", "REFERRAL", "REFERRALS", "REFERRED", "REFERRING", "REFERS", "REFINE", "REFINED", "REFINEMENT", "REFINEMENTS", "REFINERY", "REFINING", "REFLECT", "REFLECTANCE", "REFLECTED", "REFLECTING", "REFLECTION", "REFLECTIONS", "REFLECTIVE", "REFLECTS", "REFLEX", "REFLEXES", "REFLUX", "REFORM", "REFORMATION", "REFORMED", "REFORMER", "REFORMERS", "REFORMING", "REFORMIST", "REFORMS", "REFRAIN", "REFRESHING", "REFRESHMENT", "REFRESHMENTS", "REFRIGERATION", "REFRIGERATOR", "REFRIGERATORS", "REFS", "REFUGE", "REFUGEE", "REFUGEES", "REFUND", "REFURBISHED", "REFURBISHMENT", "REFUSAL", "REFUSE", "REFUSED", "REFUSES", "REFUSING", "REFUTE", "REGAIN", "REGAINED", "REGAINING", "REGAL", "REGAN", "REGARD", "REGARDED", "REGARDING", "REGARDLESS", "REGARDS", "REGENCY", "REGENERATE", "REGENERATION", "REGENT", "REGGAE", "REGGIE", "REGIME", "REGIMEN", "REGIMENT", "REGIMENTAL", "REGIMENTS", "REGIMES", "REGINA", "REGINALD", "REGION", "REGIONAL", "REGIONS", "REGIS", "REGISTER", "REGISTERED", "REGISTERING", "REGISTERS", "REGISTRAR", "REGISTRATION", "REGISTRATIONS", "REGISTRY", "REGRESSION", "REGRESSIVE", "REGRET", "REGRETFULLY", "REGRETS", "REGRETTABLE", "REGRETTABLY", "REGRETTED", "REGRETTING", "REGULAR", "REGULARITY", "REGULARLY", "REGULARS", "REGULATE", "REGULATED", "REGULATES", "REGULATING", "REGULATION", "REGULATIONS", "REGULATOR", "REGULATORS", "REGULATORY", "REHABILITATION", "REHEARSAL", "REHEARSALS", "REHEARSE", "REHEARSING", "REICH", "REID", "REIGN", "REILLY", "REIMBURSEMENT", "REIN", "REINCARNATION", "REINDEER", "REINFORCE", "REINFORCED", "REINFORCEMENT", "REINFORCEMENTS", "REINFORCES", "REINFORCING", "REINS", "REINSTATE", "REINSTATED", "REINSTATEMENT", "REINTRODUCTION", "REITERATED", "REJECT", "REJECTED", "REJECTING", "REJECTION", "REJECTS", "REJOIN", "REJOINED", "RELAPSE", "RELATE", "RELATED", "RELATES", "RELATING", "RELATION", "RELATIONAL", "RELATIONS", "RELATIONSHIP", "RELATIONSHIPS", "RELATIVE", "RELATIVELY", "RELATIVES", "RELATIVISM", "RELATIVITY", "RELAX", "RELAXATION", "RELAXATIONS", "RELAXED", "RELAXING", "RELAY", "RELEASE", "RELEASED", "RELEASES", "RELEASING", "RELEGATED", "RELEGATION", "RELENTLESS", "RELENTLESSLY", "RELEVANCE", "RELEVANT", "RELIABILITY", "RELIABLE", "RELIABLY", "RELIANCE", "RELIANT", "RELIC", "RELICS", "RELIED", "RELIEF", "RELIEFS", "RELIES", "RELIEVE", "RELIEVED", "RELIEVING", "RELIGION", "RELIGIONS", "RELIGIOUS", "RELINQUISH", "RELINQUISHED", "RELISH", "RELOCATE", "RELOCATION", "RELUCTANCE", "RELUCTANT", "RELUCTANTLY", "RELY", "RELYING", "REMAIN", "REMAINDER", "REMAINED", "REMAINING", "REMAINS", "REMAND", "REMANDED", "REMARK", "REMARKABLE", "REMARKABLY", "REMARKED", "REMARKING", "REMARKS", "REMBRANDT", "REMEDIAL", "REMEDIED", "REMEDIES", "REMEDY", "REMEMBER", "REMEMBERED", "REMEMBERING", "REMEMBERS", "REMEMBRANCE", "REMIND", "REMINDED", "REMINDER", "REMINDERS", "REMINDING", "REMINDS", "REMINISCENCE", "REMINISCENCES", "REMINISCENT", "REMISSION", "REMIT", "REMNANT", "REMNANTS", "REMORSE", "REMOTE", "REMOTELY", "REMOTENESS", "REMOVABLE", "REMOVAL", "REMOVE", "REMOVED", "REMOVES", "REMOVING", "REMUNERATION", "RENAISSANCE", "RENAL", "RENAMED", "RENAULT", "RENDER", "RENDERED", "RENDERING", "RENDERS", "RENDEZVOUS", "RENE", "RENEW", "RENEWABLE", "RENEWAL", "RENEWED", "RENEWING", "RENFE", "RENNIE", "RENOUNCE", "RENOVATION", "RENOWNED", "RENT", "RENTAL", "RENTALS", "RENTED", "RENTING", "RENTOKIL", "RENTON", "RENTS", "RENUNCIATION", "RENWICK", "REOPEN", "REOPENED", "REORGANISATION", "REORGANIZATION", "REP", "REPAID", "REPAIR", "REPAIRED", "REPAIRING", "REPAIRS", "REPARATIONS", "REPATRIATION", "REPAY", "REPAYMENT", "REPAYMENTS", "REPEAL", "REPEALED", "REPEAT", "REPEATED", "REPEATEDLY", "REPEATING", "REPEATS", "REPENTANCE", "REPERCUSSIONS", "REPERTOIRE", "REPERTORY", "REPETITION", "REPETITIONS", "REPETITIVE", "REPLACE", "REPLACED", "REPLACEMENT", "REPLACEMENTS", "REPLACES", "REPLACING", "REPLAY", "REPLICA", "REPLICAS", "REPLICATE", "REPLICATION", "REPLIED", "REPLIES", "REPLY", "REPLYING", "REPORT", "REPORTED", "REPORTEDLY", "REPORTER", "REPORTERS", "REPORTING", "REPORTS", "REPOSE", "REPOSITORY", "REPOSSESSIONS", "REPRESENT", "REPRESENTATION", "REPRESENTATIONAL", "REPRESENTATIONS", "REPRESENTATIVE", "REPRESENTATIVES", "REPRESENTED", "REPRESENTING", "REPRESENTS", "REPRESSED", "REPRESSION", "REPRESSIVE", "REPRIEVE", "REPRISALS", "REPROACH", "REPRODUCE", "REPRODUCED", "REPRODUCING", "REPRODUCTION", "REPRODUCTIONS", "REPRODUCTIVE", "REPS", "REPTILE", "REPTILES", "REPUBLIC", "REPUBLICAN", "REPUBLICANS", "REPUBLICS", "REPUDIATION", "REPULSIVE", "REPUTABLE", "REPUTATION", "REPUTATIONS", "REPUTED", "REPUTEDLY", "REQUEST", "REQUESTED", "REQUESTING", "REQUESTS", "REQUIRE", "REQUIRED", "REQUIREMENT", "REQUIREMENTS", "REQUIRES", "REQUIRING", "REQUISITE", "RESALE", "RESCUE", "RESCUED", "RESCUERS", "RESCUING", "RESEARCH", "RESEARCHED", "RESEARCHER", "RESEARCHERS", "RESEARCHES", "RESEARCHING", "RESECTION", "RESELLER", "RESELLERS", "RESEMBLANCE", "RESEMBLE", "RESEMBLED", "RESEMBLES", "RESEMBLING", "RESENT", "RESENTED", "RESENTFUL", "RESENTMENT", "RESERVATION", "RESERVATIONS", "RESERVE", "RESERVED", "RESERVES", "RESERVING", "RESERVOIR", "RESERVOIRS", "RESETTLEMENT", "RESHUFFLE", "RESIDE", "RESIDENCE", "RESIDENCES", "RESIDENCY", "RESIDENT", "RESIDENTIAL", "RESIDENTS", "RESIDES", "RESIDING", "RESIDUAL", "RESIDUALS", "RESIDUE", "RESIDUES", "RESIGN", "RESIGNATION", "RESIGNATIONS", "RESIGNED", "RESIGNING", "RESILIENCE", "RESILIENT", "RESIN", "RESIST", "RESISTANCE", "RESISTANT", "RESISTED", "RESISTING", "RESISTOR", "RESISTS", "RESOLUTE", "RESOLUTELY", "RESOLUTION", "RESOLUTIONS", "RESOLVE", "RESOLVED", "RESOLVING", "RESONANCE", "RESONANT", "RESORT", "RESORTING", "RESORTS", "RESOUNDING", "RESOURCE", "RESOURCEFUL", "RESOURCES", "RESPECT", "RESPECTABILITY", "RESPECTABLE", "RESPECTED", "RESPECTFUL", "RESPECTFULLY", "RESPECTING", "RESPECTIVE", "RESPECTIVELY", "RESPECTS", "RESPIRATION", "RESPIRATORY", "RESPITE", "RESPLENDENT", "RESPOND", "RESPONDED", "RESPONDENT", "RESPONDENTS", "RESPONDING", "RESPONDS", "RESPONSE", "RESPONSES", "RESPONSIBILITIES", "RESPONSIBILITY", "RESPONSIBLE", "RESPONSIBLY", "RESPONSIVE", "RESPONSIVENESS", "REST", "RESTART", "RESTAURANT", "RESTAURANTS", "RESTED", "RESTFUL", "RESTING", "RESTITUTION", "RESTLESS", "RESTLESSLY", "RESTLESSNESS", "RESTORATION", "RESTORE", "RESTORED", "RESTORING", "RESTRAIN", "RESTRAINED", "RESTRAINING", "RESTRAINT", "RESTRAINTS", "RESTRICT", "RESTRICTED", "RESTRICTING", "RESTRICTION", "RESTRICTIONS", "RESTRICTIVE", "RESTRICTS", "RESTRUCTURE", "RESTRUCTURING", "RESTS", "RESULT", "RESULTANT", "RESULTED", "RESULTING", "RESULTS", "RESUME", "RESUMED", "RESUMING", "RESUMPTION", "RESURGENCE", "RESURRECTION", "RESUSCITATION", "RETAIL", "RETAILER", "RETAILERS", "RETAILING", "RETAIN", "RETAINED", "RETAINER", "RETAINERS", "RETAINING", "RETAINS", "RETALIATE", "RETALIATION", "RETARDATION", "RETARDED", "RETD", "RETENTION", "RETHINK", "RETICENCE", "RETICENT", "RETINA", "RETINAL", "RETINUE", "RETIRE", "RETIRED", "RETIREMENT", "RETIRES", "RETIRING", "RETORT", "RETORTED", "RETREAT", "RETREATED", "RETREATING", "RETRIAL", "RETRIBUTION", "RETRIEVAL", "RETRIEVE", "RETRIEVED", "RETROGRADE", "RETROSPECT", "RETROSPECTIVE", "RETROSPECTIVELY", "RETURN", "RETURNED", "RETURNING", "RETURNS", "REUNIFICATION", "REUNION", "REUNITED", "REUTER", "REUTERS", "REV", "REVALUATION", "REVD", "REVEAL", "REVEALED", "REVEALING", "REVEALS", "REVELATION", "REVELATIONS", "REVENGE", "REVENUE", "REVENUES", "REVERENCE", "REVEREND", "REVERIE", "REVERSAL", "REVERSE", "REVERSED", "REVERSIBLE", "REVERSING", "REVERSION", "REVERT", "REVERTED", "REVERTING", "REVIEW", "REVIEWED", "REVIEWER", "REVIEWERS", "REVIEWING", "REVIEWS", "REVISE", "REVISED", "REVISING", "REVISION", "REVISIONS", "REVIVAL", "REVIVE", "REVIVED", "REVIVING", "REVOKE", "REVOKED", "REVOLT", "REVOLUTION", "REVOLUTIONARIES", "REVOLUTIONARY", "REVOLUTIONS", "REVOLVER", "REVOLVES", "REVULSION", "REWARD", "REWARDED", "REWARDING", "REWARDS", "REWRITE", "REWRITTEN", "REYNOLDS", "RHETORIC", "RHETORICAL", "RHEUMATISM", "RHEUMATOID", "RHINE", "RHINO", "RHODA", "RHODES", "RHODESIA", "RHYL", "RHYME", "RHYMES", "RHYTHM", "RHYTHMIC", "RHYTHMICALLY", "RHYTHMS", "RIB", "RIBBER", "RIBBON", "RIBBONS", "RIBS", "RICA", "RICE", "RICH", "RICHARD", "RICHARDS", "RICHARDSON", "RICHER", "RICHES", "RICHEST", "RICHIE", "RICHLY", "RICHMOND", "RICHMONDSHIRE", "RICHNESS", "RICHTER", "RICK", "RICKETY", "RICKY", "RICO", "RID", "RIDDEN", "RIDDLE", "RIDDLED", "RIDE", "RIDER", "RIDERS", "RIDES", "RIDGE", "RIDGES", "RIDICULE", "RIDICULOUS", "RIDICULOUSLY", "RIDING", "RIDLEY", "RIFE", "RIFKIND", "RIFLE", "RIFLES", "RIFT", "RIG", "RIGHT", "RIGHTEOUS", "RIGHTEOUSNESS", "RIGHTFUL", "RIGHTLY", "RIGHTNESS", "RIGHTS", "RIGID", "RIGIDITY", "RIGIDLY", "RIGOROUS", "RIGOROUSLY", "RIGOUR", "RIGOURS", "RIGS", "RILEY", "RIM", "RINCEWIND", "RIND", "RING", "RINGING", "RINGS", "RINSE", "RIOT", "RIOTERS", "RIOTING", "RIOTOUS", "RIOTS", "RIP", "RIPE", "RIPLEY", "RIPON", "RIPPED", "RIPPING", "RIPPLE", "RIPPLES", "RISC", "RISE", "RISEN", "RISES", "RISING", "RISK", "RISKED", "RISKING", "RISKS", "RISKY", "RITA", "RITCHIE", "RITE", "RITES", "RITUAL", "RITUALS", "RITZ", "RIVAL", "RIVALRIES", "RIVALRY", "RIVALS", "RIVEN", "RIVER", "RIVERA", "RIVERS", "RIVERSIDE", "RIVIERA", "RNLI", "ROACH", "ROAD", "ROADS", "ROADSHOW", "ROADSIDE", "ROADWAY", "ROADWORKS", "ROAM", "ROAMED", "ROAMING", "ROAR", "ROARED", "ROARING", "ROAST", "ROB", "ROBB", "ROBBED", "ROBBER", "ROBBERIES", "ROBBERS", "ROBBERY", "ROBBIE", "ROBBING", "ROBBINS", "ROBE", "ROBERT", "ROBERTO", "ROBERTS", "ROBERTSON", "ROBES", "ROBIN", "ROBINS", "ROBINSON", "ROBOT", "ROBOTS", "ROBSON", "ROBUST", "ROBYN", "ROCHDALE", "ROCHE", "ROCHESTER", "ROCK", "ROCKED", "ROCKER", "ROCKERS", "ROCKET", "ROCKETS", "ROCKING", "ROCKS", "ROCKY", "ROD", "RODE", "RODENTS", "RODERICK", "RODGERS", "RODNEY", "RODRIGO", "RODRIGUEZ", "RODS", "ROE", "ROGER", "ROGERS", "ROGUE", "ROHAN", "ROHMER", "ROIRBAK", "ROLAND", "ROLE", "ROLES", "ROLL", "ROLLE", "ROLLED", "ROLLER", "ROLLERS", "ROLLING", "ROLLS", "ROMAN", "ROMANCE", "ROMANCES", "ROMANESQUE", "ROMANIA", "ROMANIAN", "ROMANIANS", "ROMANOV", "ROMANS", "ROMANTIC", "ROMANTICISM", "ROME", "ROMEO", "ROMFORD", "RONALD", "RONNI", "RONNIE", "ROOF", "ROOFING", "ROOFS", "ROOM", "ROOMS", "ROONEY", "ROOSEVELT", "ROOT", "ROOTED", "ROOTS", "ROPE", "ROPES", "RORY", "ROSA", "ROSALIND", "ROSE", "ROSEMARY", "ROSEN", "ROSENTHAL", "ROSES", "ROSETTES", "ROSEWOOD", "ROSIE", "ROSS", "ROSTOV", "ROSTRUM", "ROSY", "ROSYTH", "ROT", "ROTA", "ROTARY", "ROTATE", "ROTATING", "ROTATION", "ROTATIONAL", "ROTH", "ROTHERHAM", "ROTHSCHILD", "ROTOR", "ROTTEN", "ROTTERDAM", "ROTTING", "ROTTWEILER", "ROTTWEILERS", "ROUBLE", "ROUBLES", "ROUEN", "ROUGE", "ROUGES", "ROUGH", "ROUGHLY", "ROUND", "ROUNDABOUT", "ROUNDABOUTS", "ROUNDED", "ROUNDING", "ROUNDLY", "ROUNDS", "ROURKE", "ROUSE", "ROUSED", "ROUSING", "ROUSSEAU", "ROUT", "ROUTE", "ROUTER", "ROUTES", "ROUTINE", "ROUTINELY", "ROUTINES", "ROVER", "ROVERS", "ROW", "ROWDY", "ROWE", "ROWING", "ROWLAND", "ROWNTREE", "ROWS", "ROXBURGH", "ROYAL", "ROYALS", "ROYALTIES", "ROYALTY", "ROYCE", "ROYSTON", "ROZANOV", "RSPB", "RSPCA", "RUB", "RUBBED", "RUBBER", "RUBBING", "RUBBISH", "RUBBLE", "RUBENS", "RUBY", "RUCKSACK", "RUDDER", "RUDDOCK", "RUDDY", "RUDE", "RUDELY", "RUDENESS", "RUDIMENTARY", "RUDOLF", "RUE", "RUEFUL", "RUEFULLY", "RUFFLED", "RUFUS", "RUG", "RUGBY", "RUGGED", "RUGS", "RUIN", "RUINED", "RUINING", "RUINS", "RULE", "RULED", "RULER", "RULERS", "RULES", "RULING", "RULINGS", "RUM", "RUMBELOWS", "RUMBLE", "RUMOUR", "RUMOURED", "RUMOURS", "RUMP", "RUN", "RUNAWAY", "RUNCORN", "RUNDOWN", "RUNE", "RUNG", "RUNNER", "RUNNERS", "RUNNING", "RUNS", "RUNWAY", "RUPERT", "RUPTURE", "RURAL", "RUSH", "RUSHDIE", "RUSHED", "RUSHES", "RUSHING", "RUSKIN", "RUSS", "RUSSELL", "RUSSIA", "RUSSIAN", "RUSSIANS", "RUSSON", "RUST", "RUSTIC", "RUSTLE", "RUSTY", "RUTH", "RUTHERFORD", "RUTHLESS", "RUTHLESSLY", "RUTHLESSNESS", "RUTLAND", "RWANDA", "RYAN", "RYDER", "RYE", "RYEDALE", "RYLEY", "SAATCHI", "SABAH", "SABBATH", "SABHA", "SABINE", "SABOTAGE", "SABRINA", "SAC", "SACHS", "SACK", "SACKED", "SACKING", "SACKS", "SACRAMENT", "SACRAMENTS", "SACRED", "SACRIFICE", "SACRIFICED", "SACRIFICES", "SACRIFICIAL", "SACRIFICING", "SAD", "SADDAM", "SADDENED", "SADDLE", "SADISTIC", "SADLER", "SADLY", "SADNESS", "SAFARI", "SAFE", "SAFEGUARD", "SAFEGUARDING", "SAFEGUARDS", "SAFELY", "SAFER", "SAFEST", "SAFETY", "SAFFRON", "SAGA", "SAGE", "SAHARA", "SAID", "SAIGON", "SAIL", "SAILED", "SAILING", "SAILOR", "SAILORS", "SAILS", "SAINSBURY", "SAINT", "SAINTS", "SAKE", "SALAD", "SALADS", "SALAMI", "SALARIED", "SALARIES", "SALARY", "SALE", "SALES", "SALESMAN", "SALESMEN", "SALESPERSON", "SALFORD", "SALIENT", "SALINE", "SALINITY", "SALISBURY", "SALIVA", "SALLY", "SALMAN", "SALMON", "SALMONELLA", "SALON", "SALONS", "SALOON", "SALOONS", "SALT", "SALTS", "SALTY", "SALUTARY", "SALUTE", "SALUTED", "SALVADOR", "SALVAGE", "SALVATION", "SALZBURG", "SAMANTHA", "SAME", "SAMMY", "SAMOA", "SAMPLE", "SAMPLED", "SAMPLES", "SAMPLING", "SAMPSON", "SAMSON", "SAMUEL", "SANCHEZ", "SANCTION", "SANCTIONED", "SANCTIONS", "SANCTITY", "SANCTUARY", "SAND", "SANDALS", "SANDERS", "SANDERSON", "SANDINISTA", "SANDISON", "SANDRA", "SANDS", "SANDSTONE", "SANDSTONES", "SANDWICH", "SANDWICHES", "SANDY", "SANDYS", "SANE", "SANG", "SANITARY", "SANITATION", "SANITY", "SANK", "SANTA", "SANTIAGO", "SAP", "SARA", "SARACENS", "SARAH", "SARAJEVO", "SARCASM", "SARCASTIC", "SARCASTICALLY", "SARDINES", "SARDINIA", "SARDONIC", "SARDONICALLY", "SARELLA", "SARTRE", "SASH", "SAT", "SATAN", "SATANIC", "SATCHELL", "SATELLITE", "SATELLITES", "SATIN", "SATIRE", "SATIRICAL", "SATISFACTION", "SATISFACTORILY", "SATISFACTORY", "SATISFIED", "SATISFIES", "SATISFY", "SATISFYING", "SATURATED", "SATURATION", "SATURDAY", "SATURDAYS", "SAUCE", "SAUCEPAN", "SAUCEPANS", "SAUCER", "SAUCERS", "SAUCES", "SAUDI", "SAUL", "SAUNA", "SAUNDERS", "SAUSAGE", "SAUSAGES", "SAVAGE", "SAVAGELY", "SAVAGERY", "SAVAGES", "SAVE", "SAVED", "SAVER", "SAVERS", "SAVES", "SAVILLE", "SAVING", "SAVINGS", "SAVIOUR", "SAVOUR", "SAVOY", "SAW", "SAWDUST", "SAWYER", "SAXON", "SAXONS", "SAXONY", "SAY", "SAYING", "SAYINGS", "SAYS", "SCAFFOLD", "SCAFFOLDING", "SCALABLE", "SCALAR", "SCALE", "SCALED", "SCALES", "SCALP", "SCAN", "SCANDAL", "SCANDALOUS", "SCANDALS", "SCANDINAVIA", "SCANDINAVIAN", "SCANNED", "SCANNER", "SCANNERS", "SCANNING", "SCANT", "SCANTY", "SCAPEGOAT", "SCAR", "SCARBOROUGH", "SCARCE", "SCARCELY", "SCARCITY", "SCARE", "SCARED", "SCARF", "SCARGILL", "SCARLET", "SCARMAN", "SCARS", "SCARVES", "SCARY", "SCATHACH", "SCATHING", "SCATTER", "SCATTERED", "SCATTERING", "SCENARIO", "SCENARIOS", "SCENE", "SCENERY", "SCENES", "SCENIC", "SCENT", "SCENTED", "SCENTS", "SCEPTIC", "SCEPTICAL", "SCEPTICISM", "SCEPTICS", "SCHED", "SCHEDULE", "SCHEDULED", "SCHEDULES", "SCHELLENBERG", "SCHEMA", "SCHEMATA", "SCHEMATIC", "SCHEME", "SCHEMES", "SCHISM", "SCHIZOPHRENIA", "SCHMIDT", "SCHOFIELD", "SCHOLAR", "SCHOLARLY", "SCHOLARS", "SCHOLARSHIP", "SCHOLARSHIPS", "SCHOOL", "SCHOOLBOY", "SCHOOLBOYS", "SCHOOLCHILDREN", "SCHOOLDAYS", "SCHOOLGIRL", "SCHOOLING", "SCHOOLMASTER", "SCHOOLS", "SCHOOLTEACHER", "SCHRAMM", "SCHUBERT", "SCHUMACHER", "SCHWEPPES", "SCIENCE", "SCIENCES", "SCIENTIFIC", "SCIENTIFICALLY", "SCIENTIST", "SCIENTISTS", "SCISSORS", "SCLEROSING", "SCLEROSIS", "SCLEROTHERAPY", "SCOOP", "SCOOPED", "SCOPE", "SCORE", "SCORED", "SCORER", "SCORERS", "SCORES", "SCORING", "SCORN", "SCORNFUL", "SCORNFULLY", "SCORTON", "SCOT", "SCOTCH", "SCOTIA", "SCOTLAND", "SCOTS", "SCOTSMAN", "SCOTT", "SCOTTISH", "SCOTVEC", "SCOURGE", "SCOUT", "SCOUTS", "SCOWL", "SCOWLED", "SCRAMBLE", "SCRAMBLED", "SCRAMBLING", "SCRAP", "SCRAPE", "SCRAPED", "SCRAPING", "SCRAPPED", "SCRAPS", "SCRATCH", "SCRATCHED", "SCRATCHES", "SCRATCHING", "SCREAM", "SCREAMED", "SCREAMING", "SCREAMS", "SCREECH", "SCREEN", "SCREENED", "SCREENING", "SCREENPLAY", "SCREENS", "SCREW", "SCREWDRIVER", "SCREWED", "SCREWING", "SCREWS", "SCRIBBLED", "SCRIBE", "SCRIPT", "SCRIPTS", "SCRIPTURE", "SCRIPTURES", "SCROLL", "SCROLLED", "SCRUB", "SCRUFFY", "SCRUM", "SCRUPULOUS", "SCRUPULOUSLY", "SCRUTINY", "SCUDAMORE", "SCULLERY", "SCULPTOR", "SCULPTORS", "SCULPTURE", "SCULPTURES", "SCUM", "SCUNTHORPE", "SCURRIED", "SCURRYING", "SCUTTLED", "SDLP", "SEA", "SEABED", "SEAFOOD", "SEAFRONT", "SEAL", "SEALED", "SEALING", "SEALS", "SEAM", "SEAMAN", "SEAMEN", "SEAMLESS", "SEAMS", "SEAN", "SEARCH", "SEARCHED", "SEARCHER", "SEARCHES", "SEARCHING", "SEARLE", "SEAS", "SEASIDE", "SEASON", "SEASONAL", "SEASONED", "SEASONING", "SEASONS", "SEAT", "SEATED", "SEATING", "SEATON", "SEATS", "SEATTLE", "SEAWEED", "SEBASTIAN", "SEC", "SECESSION", "SECLUDED", "SECLUSION", "SECOND", "SECONDARY", "SECONDED", "SECONDER", "SECONDHAND", "SECONDLY", "SECONDMENT", "SECONDS", "SECRECY", "SECRET", "SECRETARIAL", "SECRETARIAT", "SECRETARIES", "SECRETARY", "SECRETION", "SECRETIONS", "SECRETIVE", "SECRETLY", "SECRETORY", "SECRETS", "SECS", "SECT", "SECTARIAN", "SECTION", "SECTIONAL", "SECTIONS", "SECTOR", "SECTORS", "SECTS", "SECULAR", "SECURE", "SECURED", "SECURELY", "SECURING", "SECURITIES", "SECURITY", "SEDENTARY", "SEDGEFIELD", "SEDIMENT", "SEDIMENTARY", "SEDIMENTATION", "SEDIMENTS", "SEDUCE", "SEDUCED", "SEDUCTION", "SEDUCTIVE", "SEE", "SEED", "SEEDLINGS", "SEEDS", "SEEDY", "SEEING", "SEEK", "SEEKERS", "SEEKING", "SEEKS", "SEEM", "SEEMED", "SEEMING", "SEEMINGLY", "SEEMS", "SEEN", "SEEPING", "SEES", "SEFTON", "SEGMENT", "SEGMENTAL", "SEGMENTATION", "SEGMENTS", "SEGREGATION", "SEISMIC", "SEIZE", "SEIZED", "SEIZING", "SEIZURE", "SEIZURES", "SEJM", "SELBY", "SELDOM", "SELECT", "SELECTED", "SELECTING", "SELECTION", "SELECTIONS", "SELECTIVE", "SELECTIVELY", "SELECTIVITY", "SELECTOR", "SELECTORS", "SELECTS", "SELES", "SELF", "SELFISH", "SELFISHNESS", "SELFLESS", "SELINA", "SELKIRK", "SELL", "SELLAFIELD", "SELLER", "SELLERS", "SELLING", "SELLS", "SELVES", "SELWYN", "SEMA", "SEMANTIC", "SEMANTICALLY", "SEMANTICS", "SEMBLANCE", "SEMEN", "SEMI", "SEMICONDUCTOR", "SEMINAL", "SEMINAR", "SEMINARS", "SENATE", "SENATOR", "SENATORS", "SEND", "SENDER", "SENDING", "SENDS", "SENEGAL", "SENILE", "SENIOR", "SENIORITY", "SENIORS", "SENNA", "SENSATION", "SENSATIONAL", "SENSATIONS", "SENSE", "SENSED", "SENSELESS", "SENSES", "SENSIBILITIES", "SENSIBILITY", "SENSIBLE", "SENSIBLY", "SENSING", "SENSITIVE", "SENSITIVELY", "SENSITIVITIES", "SENSITIVITY", "SENSOR", "SENSORS", "SENSORY", "SENSUAL", "SENSUALITY", "SENSUOUS", "SENT", "SENTENCE", "SENTENCED", "SENTENCES", "SENTENCING", "SENTIMENT", "SENTIMENTAL", "SENTIMENTALITY", "SENTIMENTS", "SENTRIES", "SENTRY", "SEOUL", "SEPARATE", "SEPARATED", "SEPARATELY", "SEPARATES", "SEPARATING", "SEPARATION", "SEPARATISM", "SEPARATIST", "SEPT", "SEPTEMBER", "SEQUEL", "SEQUENCE", "SEQUENCES", "SEQUENCING", "SEQUENT", "SEQUENTIAL", "SERA", "SERAFIN", "SERB", "SERBIA", "SERBIAN", "SERBS", "SERC", "SERENE", "SERENITY", "SERFDOM", "SERFS", "SERGEANT", "SERGEANTS", "SERGEI", "SERGIO", "SERIAL", "SERIALS", "SERIES", "SERIOUS", "SERIOUSLY", "SERIOUSNESS", "SERMON", "SERMONS", "SERPENT", "SERPS", "SERUM", "SERVANT", "SERVANTS", "SERVE", "SERVED", "SERVER", "SERVERS", "SERVES", "SERVICE", "SERVICEABLE", "SERVICED", "SERVICEMEN", "SERVICES", "SERVICING", "SERVING", "SESSION", "SESSIONS", "SET", "SETBACK", "SETBACKS", "SETH", "SETS", "SETTEE", "SETTING", "SETTINGS", "SETTLE", "SETTLED", "SETTLEMENT", "SETTLEMENTS", "SETTLERS", "SETTLES", "SETTLING", "SETTLOR", "SETUP", "SEVEN", "SEVENS", "SEVENTEEN", "SEVENTEENTH", "SEVENTH", "SEVENTIES", "SEVENTY", "SEVERAL", "SEVERANCE", "SEVERE", "SEVERED", "SEVERELY", "SEVERITY", "SEVERN", "SEVILLE", "SEW", "SEWAGE", "SEWER", "SEWERS", "SEWING", "SEWN", "SEX", "SEXES", "SEXISM", "SEXIST", "SEXUAL", "SEXUALITY", "SEXUALLY", "SEXY", "SEYCHELLES", "SEYMOUR", "SHABBY", "SHADE", "SHADED", "SHADES", "SHADOW", "SHADOWS", "SHADOWY", "SHADY", "SHAFT", "SHAFTESBURY", "SHAFTS", "SHAGGY", "SHAH", "SHAI", "SHAIKH", "SHAKE", "SHAKEN", "SHAKES", "SHAKESPEARE", "SHAKILY", "SHAKING", "SHAKY", "SHALE", "SHALL", "SHALLOT", "SHALLOW", "SHALLOWS", "SHALT", "SHAM", "SHAMAN", "SHAMBLES", "SHAME", "SHAMEFUL", "SHAMIR", "SHAMPOO", "SHANE", "SHANGHAI", "SHANNON", "SHAPE", "SHAPED", "SHAPELESS", "SHAPELY", "SHAPES", "SHAPING", "SHARE", "SHARED", "SHAREHOLDER", "SHAREHOLDERS", "SHAREHOLDING", "SHAREHOLDINGS", "SHARES", "SHAREWARE", "SHARING", "SHARK", "SHARKS", "SHARON", "SHARP", "SHARPE", "SHARPEN", "SHARPENED", "SHARPER", "SHARPEST", "SHARPLY", "SHARPNESS", "SHATTERED", "SHATTERING", "SHAUN", "SHAVE", "SHAVED", "SHAVING", "SHAW", "SHAWL", "SHE", "SHEAF", "SHEAR", "SHEARER", "SHEARS", "SHEATH", "SHED", "SHEDDING", "SHEDS", "SHEEN", "SHEEP", "SHEER", "SHEET", "SHEETING", "SHEETS", "SHEFF", "SHEFFIELD", "SHEIKH", "SHEILA", "SHELDON", "SHELDUKHER", "SHELF", "SHELL", "SHELLEY", "SHELLFISH", "SHELLS", "SHELTER", "SHELTERED", "SHELTERING", "SHELTERS", "SHELVED", "SHELVES", "SHEPHARD", "SHEPHERD", "SHEPHERDS", "SHEPPARD", "SHERIDAN", "SHERIFF", "SHERINGHAM", "SHERLOCK", "SHERMAN", "SHERRY", "SHERWOOD", "SHETLAND", "SHEVARDNADZE", "SHIA", "SHIELD", "SHIELDING", "SHIELDS", "SHIFT", "SHIFTED", "SHIFTING", "SHIFTS", "SHIFTY", "SHILDON", "SHILLING", "SHILLINGS", "SHIN", "SHINE", "SHINES", "SHINGLE", "SHINING", "SHINY", "SHIONA", "SHIP", "SHIPBUILDING", "SHIPMENT", "SHIPMENTS", "SHIPOWNERS", "SHIPPED", "SHIPPING", "SHIPS", "SHIPYARD", "SHIPYARDS", "SHIRE", "SHIRES", "SHIRLEY", "SHIRT", "SHIRTS", "SHIVER", "SHIVERED", "SHIVERING", "SHOAL", "SHOALS", "SHOCK", "SHOCKED", "SHOCKING", "SHOCKS", "SHODDY", "SHOE", "SHOEMAKER", "SHOES", "SHONE", "SHOOK", "SHOOT", "SHOOTING", "SHOOTINGS", "SHOOTS", "SHOP", "SHOPKEEPER", "SHOPKEEPERS", "SHOPPERS", "SHOPPING", "SHOPS", "SHORE", "SHORELINE", "SHORES", "SHORT", "SHORTAGE", "SHORTAGES", "SHORTCOMINGS", "SHORTEN", "SHORTER", "SHORTEST", "SHORTFALL", "SHORTHAND", "SHORTLIST", "SHORTLY", "SHORTS", "SHOSTAKOVICH", "SHOT", "SHOTGUN", "SHOTS", "SHOULD", "SHOULDER", "SHOULDERS", "SHOUT", "SHOUTED", "SHOUTING", "SHOUTS", "SHOVE", "SHOVED", "SHOVEL", "SHOVING", "SHOW", "SHOWBIZ", "SHOWCASE", "SHOWDOWN", "SHOWED", "SHOWER", "SHOWERED", "SHOWERS", "SHOWING", "SHOWN", "SHOWPIECE", "SHOWROOM", "SHOWROOMS", "SHOWS", "SHRANK", "SHRAPNEL", "SHREDS", "SHREWD", "SHREWDLY", "SHREWSBURY", "SHRIEK", "SHRIEKED", "SHRILL", "SHRIMP", "SHRIMPS", "SHRINE", "SHRINES", "SHRINK", "SHRINKING", "SHROPSHIRE", "SHROUD", "SHRUB", "SHRUBS", "SHRUG", "SHRUGGED", "SHRUGGING", "SHRUNK", "SHUDDER", "SHUDDERED", "SHUDDERING", "SHUFFLED", "SHUFFLING", "SHUT", "SHUTS", "SHUTTER", "SHUTTERS", "SHUTTING", "SHUTTLE", "SHY", "SHYLY", "SHYNESS", "SIBERIA", "SIBERIAN", "SIBLING", "SIBLINGS", "SIC", "SICILIAN", "SICILY", "SICK", "SICKENING", "SICKLE", "SICKLY", "SICKNESS", "SIDE", "SIDEBOARD", "SIDELINES", "SIDES", "SIDEWAYS", "SIDINGS", "SIDNEY", "SIEGE", "SIEMENS", "SIERRA", "SIEVE", "SIGH", "SIGHED", "SIGHING", "SIGHT", "SIGHTINGS", "SIGHTS", "SIGMA", "SIGN", "SIGNAL", "SIGNALLED", "SIGNALLING", "SIGNALS", "SIGNATORIES", "SIGNATORY", "SIGNATURE", "SIGNATURES", "SIGNED", "SIGNIFICANCE", "SIGNIFICANT", "SIGNIFICANTLY", "SIGNIFICATION", "SIGNIFIED", "SIGNIFIER", "SIGNIFIES", "SIGNIFY", "SIGNING", "SIGNOR", "SIGNPOST", "SIGNS", "SIKES", "SIKH", "SILAS", "SILENCE", "SILENCED", "SILENT", "SILENTLY", "SILHOUETTE", "SILICA", "SILICON", "SILICONE", "SILK", "SILKEN", "SILKS", "SILKY", "SILL", "SILLY", "SILT", "SILVA", "SILVER", "SILVERSTONE", "SILVERY", "SILVIA", "SIMILAR", "SIMILARITIES", "SIMILARITY", "SIMILARLY", "SIMMER", "SIMMONDS", "SIMMONS", "SIMON", "SIMONE", "SIMPLE", "SIMPLER", "SIMPLEST", "SIMPLICITY", "SIMPLIFICATION", "SIMPLIFIED", "SIMPLIFY", "SIMPLISTIC", "SIMPLY", "SIMPSON", "SIMS", "SIMULATE", "SIMULATED", "SIMULATION", "SIMULATIONS", "SIMULATOR", "SIMULTANEOUS", "SIMULTANEOUSLY", "SIN", "SINATRA", "SINCE", "SINCERE", "SINCERELY", "SINCERITY", "SINCLAIR", "SINE", "SINEAD", "SINFUL", "SING", "SINGAPORE", "SINGER", "SINGERS", "SINGH", "SINGING", "SINGLE", "SINGLED", "SINGLES", "SINGLETON", "SINGLY", "SINGS", "SINGULAR", "SINGULARITIES", "SINGULARITY", "SINGULARLY", "SINISTER", "SINK", "SINKING", "SINKS", "SINNER", "SINNERS", "SINS", "SIP", "SIPPED", "SIPPING", "SIR", "SIREN", "SIRENS", "SIRITH", "SISTER", "SISTERS", "SIT", "SITE", "SITED", "SITES", "SITING", "SITS", "SITTER", "SITTING", "SITUATED", "SITUATION", "SITUATIONAL", "SITUATIONS", "SIWARD", "SIX", "SIXES", "SIXPENCE", "SIXTEEN", "SIXTEENTH", "SIXTH", "SIXTIES", "SIXTY", "SIZE", "SIZEABLE", "SIZED", "SIZES", "SIZEWELL", "SKELETAL", "SKELETON", "SKELETONS", "SKELTON", "SKETCH", "SKETCHED", "SKETCHES", "SKETCHING", "SKI", "SKIERS", "SKIES", "SKIING", "SKILFUL", "SKILFULLY", "SKILL", "SKILLED", "SKILLS", "SKIMMING", "SKIN", "SKINHEAD", "SKINHEADS", "SKINNER", "SKINNY", "SKINS", "SKIP", "SKIPPED", "SKIPPER", "SKIPPING", "SKIPTON", "SKIRMISH", "SKIRT", "SKIRTING", "SKIRTS", "SKIS", "SKULL", "SKULLS", "SKY", "SKYE", "SKYLINE", "SLAB", "SLABS", "SLACK", "SLACKS", "SLADE", "SLAG", "SLAIN", "SLALOM", "SLAM", "SLAMMED", "SLAMMING", "SLANG", "SLANT", "SLAP", "SLAPPED", "SLAPPING", "SLASH", "SLASHED", "SLATE", "SLATER", "SLATES", "SLAUGHTER", "SLAUGHTERED", "SLAVE", "SLAVERY", "SLAVES", "SLAVS", "SLEDGE", "SLEEK", "SLEEP", "SLEEPER", "SLEEPERS", "SLEEPILY", "SLEEPING", "SLEEPLESS", "SLEEPS", "SLEEPY", "SLEEVE", "SLEEVES", "SLENDER", "SLEPT", "SLICE", "SLICED", "SLICES", "SLICING", "SLICK", "SLID", "SLIDE", "SLIDES", "SLIDING", "SLIGHT", "SLIGHTEST", "SLIGHTLY", "SLIM", "SLIME", "SLIMY", "SLING", "SLIP", "SLIPPED", "SLIPPERS", "SLIPPERY", "SLIPPING", "SLIPS", "SLIT", "SLITS", "SLIVER", "SLOANE", "SLOGAN", "SLOGANS", "SLOPE", "SLOPES", "SLOPING", "SLOPPY", "SLOT", "SLOTS", "SLOUGH", "SLOVAK", "SLOVAKIA", "SLOVENE", "SLOVENIA", "SLOW", "SLOWDOWN", "SLOWED", "SLOWER", "SLOWING", "SLOWLY", "SLOWNESS", "SLOWS", "SLUDGE", "SLUG", "SLUGGISH", "SLUGS", "SLUM", "SLUMP", "SLUMPED", "SLUMS", "SLUNG", "SLURRY", "SLY", "SMACK", "SMACKED", "SMALL", "SMALLER", "SMALLEST", "SMALLPOX", "SMART", "SMARTLY", "SMASH", "SMASHED", "SMASHING", "SMEAR", "SMELL", "SMELLED", "SMELLING", "SMELLS", "SMELLY", "SMELT", "SMILE", "SMILED", "SMILES", "SMILING", "SMITH", "SMITHS", "SMOG", "SMOKE", "SMOKED", "SMOKER", "SMOKERS", "SMOKING", "SMOKY", "SMOOTH", "SMOOTHED", "SMOOTHER", "SMOOTHING", "SMOOTHLY", "SMOOTHNESS", "SMUG", "SMUGGLED", "SMUGGLERS", "SMUGGLING", "SMUGLY", "SMYTH", "SNACK", "SNACKS", "SNAG", "SNAIL", "SNAILS", "SNAKE", "SNAKES", "SNAP", "SNAPPED", "SNAPPING", "SNAPS", "SNAPSHOT", "SNAPSHOTS", "SNARLED", "SNATCH", "SNATCHED", "SNATCHING", "SNEAK", "SNEER", "SNEERED", "SNELL", "SNIFF", "SNIFFED", "SNIFFING", "SNIPER", "SNOB", "SNOBBERY", "SNOOKER", "SNORING", "SNORT", "SNORTED", "SNOUT", "SNOW", "SNOWDON", "SNOWDONIA", "SNOWY", "SNUG", "SOAK", "SOAKED", "SOAKING", "SOAMES", "SOAP", "SOAPS", "SOAPY", "SOAR", "SOARED", "SOARING", "SOB", "SOBBED", "SOBBING", "SOBER", "SOBS", "SOCCER", "SOCIABLE", "SOCIAL", "SOCIALISATION", "SOCIALISM", "SOCIALIST", "SOCIALISTS", "SOCIALIZATION", "SOCIALLY", "SOCIETAL", "SOCIETIES", "SOCIETY", "SOCIOECONOMIC", "SOCIOLINGUISTIC", "SOCIOLOGICAL", "SOCIOLOGIST", "SOCIOLOGISTS", "SOCIOLOGY", "SOCK", "SOCKET", "SOCKETS", "SOCKS", "SOCRATES", "SOD", "SODA", "SODDEN", "SODIUM", "SOFA", "SOFAS", "SOFIA", "SOFT", "SOFTEN", "SOFTENED", "SOFTENING", "SOFTER", "SOFTLY", "SOFTNESS", "SOFTWARE", "SOGGY", "SOHO", "SOIL", "SOILS", "SOLACE", "SOLAR", "SOLARIS", "SOLARIUM", "SOLD", "SOLDIER", "SOLDIERS", "SOLE", "SOLELY", "SOLEMN", "SOLEMNLY", "SOLES", "SOLICITOR", "SOLICITORS", "SOLID", "SOLIDARITY", "SOLIDITY", "SOLIDLY", "SOLIDS", "SOLIHULL", "SOLITARY", "SOLITUDE", "SOLO", "SOLOIST", "SOLOISTS", "SOLOMON", "SOLOS", "SOLUBLE", "SOLUTE", "SOLUTION", "SOLUTIONS", "SOLVE", "SOLVED", "SOLVENT", "SOLVENTS", "SOLVES", "SOLVING", "SOMALI", "SOMALIA", "SOMBRE", "SOME", "SOMEBODY", "SOMEHOW", "SOMEONE", "SOMERSET", "SOMERVILLE", "SOMETHING", "SOMETIME", "SOMETIMES", "SOMEWHAT", "SOMEWHERE", "SON", "SONAR", "SONATA", "SONG", "SONGS", "SONIA", "SONIC", "SONNET", "SONNETS", "SONNY", "SONS", "SONY", "SOON", "SOONER", "SOOT", "SOOTHE", "SOOTHED", "SOOTHING", "SOOTHINGLY", "SOOTY", "SOPHIA", "SOPHIE", "SOPHISTICATED", "SOPHISTICATION", "SOPRANO", "SORDID", "SORE", "SORELY", "SORES", "SORROW", "SORROWS", "SORRY", "SORT", "SORTED", "SORTIE", "SORTIES", "SORTING", "SORTS", "SOTHEBY", "SOUGHT", "SOUL", "SOULS", "SOUND", "SOUNDED", "SOUNDING", "SOUNDLY", "SOUNDS", "SOUNDTRACK", "SOUNESS", "SOUP", "SOUPS", "SOUR", "SOURCE", "SOURCES", "SOURLY", "SOUTH", "SOUTHALL", "SOUTHAMPTON", "SOUTHEAST", "SOUTHEND", "SOUTHERN", "SOUTHEY", "SOUTHGATE", "SOUTHPORT", "SOUTHWARDS", "SOUTHWARK", "SOUTHWELL", "SOUTHWEST", "SOUVENIR", "SOUVENIRS", "SOVEREIGN", "SOVEREIGNS", "SOVEREIGNTY", "SOVIET", "SOVIETS", "SOW", "SOWN", "SOYA", "SPA", "SPACE", "SPACECRAFT", "SPACES", "SPACESHIP", "SPACING", "SPACIOUS", "SPADE", "SPADES", "SPAGHETTI", "SPAIN", "SPALDING", "SPAN", "SPANIARD", "SPANIARDS", "SPANISH", "SPANNED", "SPANNER", "SPANNING", "SPANS", "SPAR", "SPARC", "SPARCSTATION", "SPARE", "SPARED", "SPARINGLY", "SPARK", "SPARKED", "SPARKLE", "SPARKLING", "SPARKS", "SPARROW", "SPARSE", "SPARSELY", "SPARTA", "SPARTAN", "SPASM", "SPASMS", "SPAT", "SPATE", "SPATIAL", "SPATIALLY", "SPAWN", "SPEAK", "SPEAKER", "SPEAKERS", "SPEAKING", "SPEAKS", "SPEAR", "SPEARS", "SPECIAL", "SPECIALISATION", "SPECIALISE", "SPECIALISED", "SPECIALISES", "SPECIALISING", "SPECIALISMS", "SPECIALIST", "SPECIALISTS", "SPECIALITIES", "SPECIALITY", "SPECIALIZATION", "SPECIALIZED", "SPECIALLY", "SPECIALS", "SPECIALTY", "SPECIES", "SPECIFIC", "SPECIFICALLY", "SPECIFICATION", "SPECIFICATIONS", "SPECIFICITY", "SPECIFIED", "SPECIFIES", "SPECIFY", "SPECIFYING", "SPECIMEN", "SPECIMENS", "SPECK", "SPECS", "SPECTACLE", "SPECTACLES", "SPECTACULAR", "SPECTACULARLY", "SPECTATOR", "SPECTATORS", "SPECTRA", "SPECTRAL", "SPECTRE", "SPECTROSCOPY", "SPECTRUM", "SPECULATE", "SPECULATED", "SPECULATING", "SPECULATION", "SPECULATIONS", "SPECULATIVE", "SPECULATORS", "SPED", "SPEECH", "SPEECHES", "SPEECHLESS", "SPEED", "SPEEDILY", "SPEEDING", "SPEEDS", "SPEEDY", "SPELL", "SPELLED", "SPELLING", "SPELLINGS", "SPELLS", "SPELT", "SPENCE", "SPENCER", "SPENCERS", "SPEND", "SPENDING", "SPENDS", "SPENNYMOOR", "SPENSER", "SPENT", "SPERM", "SPHERE", "SPHERES", "SPHERICAL", "SPHINCTER", "SPICE", "SPICES", "SPICY", "SPIDER", "SPIDERS", "SPIELBERG", "SPIES", "SPIKE", "SPIKES", "SPIKY", "SPILL", "SPILLED", "SPILLING", "SPIN", "SPINACH", "SPINAL", "SPINE", "SPINELETS", "SPINES", "SPINNER", "SPINNERS", "SPINNING", "SPINSTER", "SPIRAL", "SPIRE", "SPIRES", "SPIRIT", "SPIRITED", "SPIRITS", "SPIRITUAL", "SPIRITUALITY", "SPIRITUALLY", "SPIRO", "SPIT", "SPITE", "SPITEFUL", "SPITFIRE", "SPITTING", "SPLASH", "SPLASHED", "SPLASHING", "SPLEEN", "SPLENDID", "SPLENDIDLY", "SPLENDOUR", "SPLINTER", "SPLIT", "SPLITS", "SPLITTING", "SPLUTTERED", "SPOIL", "SPOILED", "SPOILING", "SPOILS", "SPOILT", "SPOKE", "SPOKEN", "SPOKESMAN", "SPOKESMEN", "SPOKESPERSON", "SPOKESWOMAN", "SPONGE", "SPONSOR", "SPONSORED", "SPONSORING", "SPONSORS", "SPONSORSHIP", "SPONTANEITY", "SPONTANEOUS", "SPONTANEOUSLY", "SPOOKY", "SPOON", "SPOONFUL", "SPOONS", "SPORADIC", "SPORES", "SPORT", "SPORTED", "SPORTING", "SPORTS", "SPORTSMAN", "SPORTSMEN", "SPOT", "SPOTLESS", "SPOTLIGHT", "SPOTS", "SPOTTED", "SPOTTING", "SPOTTY", "SPOUSE", "SPOUSES", "SPRANG", "SPRAWLED", "SPRAY", "SPRAYED", "SPRAYING", "SPRAYS", "SPREAD", "SPREADING", "SPREADS", "SPREADSHEET", "SPREADSHEETS", "SPREE", "SPRING", "SPRINGBOARD", "SPRINGFIELD", "SPRINGING", "SPRINGS", "SPRINGTIME", "SPRINKLE", "SPRINKLING", "SPRINT", "SPRINTER", "SPROUTS", "SPRS", "SPRUNG", "SPUN", "SPUR", "SPURIOUS", "SPURRED", "SPURS", "SPY", "SPYING", "SQUAD", "SQUADRON", "SQUADRONS", "SQUADS", "SQUALID", "SQUALOR", "SQUARE", "SQUARED", "SQUARELY", "SQUARES", "SQUASH", "SQUAT", "SQUATTED", "SQUATTERS", "SQUATTING", "SQUEAK", "SQUEEZE", "SQUEEZED", "SQUEEZING", "SQUID", "SQUINTED", "SQUIRE", "SQUIRREL", "SQUIRRELS", "SSDS", "STAB", "STABBED", "STABBING", "STABILISE", "STABILITY", "STABILIZATION", "STABILIZE", "STABLE", "STABLES", "STACCATO", "STACEY", "STACK", "STACKED", "STACKS", "STADIUM", "STAFF", "STAFFED", "STAFFING", "STAFFORD", "STAFFORDSHIRE", "STAFFS", "STAG", "STAGE", "STAGED", "STAGES", "STAGGERED", "STAGGERING", "STAGING", "STAGNANT", "STAGNATION", "STAIN", "STAINED", "STAINING", "STAINLESS", "STAINS", "STAIR", "STAIRCASE", "STAIRCASES", "STAIRS", "STAIRWAY", "STAIRWELL", "STAKE", "STAKES", "STALE", "STALEMATE", "STALIN", "STALINIST", "STALK", "STALKED", "STALKING", "STALKS", "STALL", "STALLION", "STALLS", "STAMFORD", "STAMINA", "STAMMERED", "STAMP", "STAMPED", "STAMPING", "STAMPS", "STAN", "STANCE", "STANCES", "STAND", "STANDARD", "STANDARDISATION", "STANDARDISED", "STANDARDIZATION", "STANDARDIZED", "STANDARDS", "STANDBY", "STANDING", "STANDPOINT", "STANDS", "STANDSTILL", "STANFORD", "STANLEY", "STANTON", "STANZA", "STAPLE", "STAPLETON", "STAR", "STARBOARD", "STARDOM", "STARE", "STARED", "STARING", "STARK", "STARKLY", "STARLINGS", "STARRED", "STARRING", "STARS", "START", "STARTED", "STARTER", "STARTERS", "STARTING", "STARTLED", "STARTLING", "STARTLINGLY", "STARTS", "STARVATION", "STARVE", "STARVED", "STARVING", "STATE", "STATED", "STATELY", "STATEMENT", "STATEMENTS", "STATES", "STATESMAN", "STATESMEN", "STATIC", "STATING", "STATION", "STATIONARY", "STATIONED", "STATIONERY", "STATIONS", "STATISTIC", "STATISTICAL", "STATISTICALLY", "STATISTICS", "STATUE", "STATUES", "STATURE", "STATUS", "STATUTE", "STATUTES", "STATUTORY", "STAUNCH", "STAVROGIN", "STAY", "STAYED", "STAYING", "STAYS", "STEAD", "STEADIED", "STEADILY", "STEADY", "STEAK", "STEAKS", "STEAL", "STEALING", "STEALS", "STEALTH", "STEAM", "STEAMER", "STEAMING", "STEAMY", "STEEL", "STEELE", "STEELY", "STEEN", "STEEP", "STEEPER", "STEEPLY", "STEER", "STEERED", "STEERING", "STEFAN", "STEIN", "STEINER", "STELLA", "STEM", "STEMMED", "STEMMING", "STEMS", "STENCH", "STENT", "STEP", "STEPFATHER", "STEPHANIE", "STEPHEN", "STEPHENS", "STEPHENSON", "STEPMOTHER", "STEPPED", "STEPPING", "STEPS", "STEREO", "STEREOTYPE", "STEREOTYPED", "STEREOTYPES", "STEREOTYPICAL", "STERILE", "STERILISATION", "STERLING", "STERN", "STERNE", "STERNLY", "STEROIDS", "STEVE", "STEVEN", "STEVENS", "STEVENSON", "STEVIE", "STEW", "STEWARD", "STEWARDS", "STEWARDSHIP", "STEWART", "STICK", "STICKER", "STICKERS", "STICKING", "STICKS", "STICKY", "STIFF", "STIFFENED", "STIFFER", "STIFFLY", "STIFFNESS", "STIFLE", "STIFLED", "STIFLING", "STIGMA", "STILE", "STILL", "STILLNESS", "STIMULATE", "STIMULATED", "STIMULATES", "STIMULATING", "STIMULATION", "STIMULI", "STIMULUS", "STING", "STINK", "STINT", "STIPULATED", "STIPULATION", "STIR", "STIRLING", "STIRRED", "STIRRING", "STITCH", "STITCHES", "STOCK", "STOCKBROKER", "STOCKBROKERS", "STOCKED", "STOCKHOLM", "STOCKING", "STOCKINGS", "STOCKISTS", "STOCKMARKET", "STOCKPORT", "STOCKS", "STOCKTON", "STOCKY", "STODDARD", "STOK", "STOKE", "STOKES", "STOKESLEY", "STOLE", "STOLEN", "STOMACH", "STOMACHS", "STONE", "STONEHENGE", "STONES", "STONEWORK", "STONY", "STOOD", "STOOL", "STOOLS", "STOOPED", "STOP", "STOPPAGE", "STOPPED", "STOPPING", "STOPS", "STORAGE", "STORE", "STORED", "STORES", "STOREY", "STOREYS", "STORIES", "STORING", "STORM", "STORMED", "STORMING", "STORMS", "STORMY", "STORNOWAY", "STORY", "STOUR", "STOUT", "STOVE", "STOVES", "STOWE", "STRACH", "STRACHAN", "STRAIGHT", "STRAIGHTAWAY", "STRAIGHTEN", "STRAIGHTENED", "STRAIGHTENING", "STRAIGHTFORWARD", "STRAIN", "STRAINED", "STRAINING", "STRAINS", "STRAIT", "STRAITS", "STRAND", "STRANDED", "STRANDS", "STRANGE", "STRANGELY", "STRANGENESS", "STRANGER", "STRANGERS", "STRANGEST", "STRANGLED", "STRAP", "STRAPPED", "STRAPS", "STRASBOURG", "STRATA", "STRATEGIC", "STRATEGICALLY", "STRATEGIES", "STRATEGY", "STRATFORD", "STRATHCLYDE", "STRATIFICATION", "STRATIGRAPHICAL", "STRATOSPHERE", "STRATTON", "STRATUM", "STRAUSS", "STRAVINSKY", "STRAW", "STRAWBERRIES", "STRAWBERRY", "STRAY", "STREAK", "STREAKS", "STREAM", "STREAMING", "STREAMS", "STREET", "STREETS", "STRENGTH", "STRENGTHEN", "STRENGTHENED", "STRENGTHENING", "STRENGTHENS", "STRENGTHS", "STRENUOUS", "STRENUOUSLY", "STRESS", "STRESSED", "STRESSES", "STRESSFUL", "STRESSING", "STRETCH", "STRETCHED", "STRETCHER", "STRETCHES", "STRETCHING", "STREWN", "STRICKEN", "STRICT", "STRICTER", "STRICTEST", "STRICTLY", "STRICTURE", "STRICTURES", "STRIDE", "STRIDENT", "STRIDES", "STRIDING", "STRIFE", "STRIKE", "STRIKER", "STRIKERS", "STRIKES", "STRIKING", "STRIKINGLY", "STRING", "STRINGENT", "STRINGER", "STRINGS", "STRIP", "STRIPE", "STRIPED", "STRIPES", "STRIPPED", "STRIPPING", "STRIPS", "STRIVE", "STRIVING", "STRODE", "STROKE", "STROKED", "STROKES", "STROKING", "STROLL", "STROLLED", "STROLLING", "STRONG", "STRONGER", "STRONGEST", "STRONGHOLD", "STRONGLY", "STROUD", "STROVE", "STRUCK", "STRUCTURAL", "STRUCTURALISM", "STRUCTURALIST", "STRUCTURALLY", "STRUCTURE", "STRUCTURED", "STRUCTURES", "STRUGGLE", "STRUGGLED", "STRUGGLES", "STRUGGLING", "STRUNG", "STUART", "STUBBLE", "STUBBORN", "STUBBORNLY", "STUBBS", "STUCK", "STUD", "STUDENT", "STUDENTS", "STUDIED", "STUDIES", "STUDIO", "STUDIOS", "STUDY", "STUDYING", "STUFF", "STUFFED", "STUFFING", "STUFFY", "STUMBLE", "STUMBLED", "STUMBLING", "STUMP", "STUMPS", "STUNG", "STUNNED", "STUNNING", "STUNT", "STUPENDOUS", "STUPID", "STUPIDITY", "STUPIDLY", "STURDY", "STUTTGART", "STYCH", "STYLE", "STYLES", "STYLISH", "STYLIST", "STYLISTIC", "STYLISTICS", "SUB", "SUBCOMMITTEE", "SUBCONSCIOUS", "SUBCONSCIOUSLY", "SUBCONTRACTORS", "SUBDIVIDED", "SUBDIVISION", "SUBDIVISIONS", "SUBDUCTION", "SUBDUE", "SUBDUED", "SUBGROUP", "SUBGROUPS", "SUBJECT", "SUBJECTED", "SUBJECTION", "SUBJECTIVE", "SUBJECTIVITY", "SUBJECTS", "SUBLIME", "SUBMARINE", "SUBMARINES", "SUBMERGED", "SUBMISSION", "SUBMISSIONS", "SUBMISSIVE", "SUBMIT", "SUBMITS", "SUBMITTED", "SUBMITTING", "SUBORDINATE", "SUBORDINATES", "SUBORDINATION", "SUBS", "SUBSCRIBE", "SUBSCRIBER", "SUBSCRIBERS", "SUBSCRIPTION", "SUBSCRIPTIONS", "SUBSECTION", "SUBSECTIONS", "SUBSEQUENT", "SUBSEQUENTLY", "SUBSET", "SUBSIDED", "SUBSIDENCE", "SUBSIDIARIES", "SUBSIDIARITY", "SUBSIDIARY", "SUBSIDIES", "SUBSIDISE", "SUBSIDISED", "SUBSIDY", "SUBSISTENCE", "SUBSTANCE", "SUBSTANCES", "SUBSTANTIAL", "SUBSTANTIALLY", "SUBSTANTIATE", "SUBSTANTIVE", "SUBSTITUTE", "SUBSTITUTED", "SUBSTITUTES", "SUBSTITUTING", "SUBSTITUTION", "SUBSTRATE", "SUBSUMED", "SUBSYSTEM", "SUBSYSTEMS", "SUBTLE", "SUBTLETIES", "SUBTLETY", "SUBTLY", "SUBUNIT", "SUBUNITS", "SUBURB", "SUBURBAN", "SUBURBS", "SUBVERSION", "SUBVERSIVE", "SUBWAY", "SUCCEED", "SUCCEEDED", "SUCCEEDING", "SUCCEEDS", "SUCCESS", "SUCCESSES", "SUCCESSFUL", "SUCCESSFULLY", "SUCCESSION", "SUCCESSIVE", "SUCCESSIVELY", "SUCCESSOR", "SUCCESSORS", "SUCCINCT", "SUCCINCTLY", "SUCCULENT", "SUCCUMB", "SUCH", "SUCK", "SUCKED", "SUCKER", "SUCKING", "SUCTION", "SUDAN", "SUDANESE", "SUDBURY", "SUDDEN", "SUDDENLY", "SUE", "SUED", "SUEDE", "SUEZ", "SUFFER", "SUFFERED", "SUFFERER", "SUFFERERS", "SUFFERING", "SUFFERINGS", "SUFFERS", "SUFFICE", "SUFFICIENT", "SUFFICIENTLY", "SUFFIX", "SUFFOLK", "SUFFRAGE", "SUGAR", "SUGARS", "SUGGEST", "SUGGESTED", "SUGGESTING", "SUGGESTION", "SUGGESTIONS", "SUGGESTIVE", "SUGGESTS", "SUICIDAL", "SUICIDE", "SUICIDES", "SUING", "SUIT", "SUITABILITY", "SUITABLE", "SUITABLY", "SUITCASE", "SUITCASES", "SUITE", "SUITED", "SUITES", "SUITS", "SUKARNO", "SULKY", "SULLEN", "SULLIVAN", "SULPHATE", "SULPHUR", "SULPHURIC", "SULTAN", "SULTRY", "SUM", "SUMATRA", "SUMMARIES", "SUMMARILY", "SUMMARISE", "SUMMARISED", "SUMMARISES", "SUMMARIZE", "SUMMARIZED", "SUMMARY", "SUMMAT", "SUMMED", "SUMMER", "SUMMERCHILD", "SUMMERS", "SUMMING", "SUMMIT", "SUMMITS", "SUMMON", "SUMMONED", "SUMMONING", "SUMMONS", "SUMPTUOUS", "SUMS", "SUN", "SUNDAY", "SUNDAYS", "SUNDERLAND", "SUNDRY", "SUNG", "SUNGLASSES", "SUNIL", "SUNK", "SUNKEN", "SUNLIGHT", "SUNLIT", "SUNNY", "SUNRISE", "SUNSET", "SUNSHINE", "SUNSOFT", "SUPER", "SUPERANNUATION", "SUPERB", "SUPERBLY", "SUPEREGO", "SUPERFICIAL", "SUPERFICIALLY", "SUPERFLUOUS", "SUPERINTENDENT", "SUPERIOR", "SUPERIORITY", "SUPERIORS", "SUPERMARKET", "SUPERMARKETS", "SUPERNATURAL", "SUPERPOWER", "SUPERPOWERS", "SUPERSEDED", "SUPERSTAR", "SUPERSTITION", "SUPERSTITIOUS", "SUPERSTRUCTURE", "SUPERVISE", "SUPERVISED", "SUPERVISING", "SUPERVISION", "SUPERVISOR", "SUPERVISORS", "SUPERVISORY", "SUPINE", "SUPPER", "SUPPLE", "SUPPLEMENT", "SUPPLEMENTARY", "SUPPLEMENTATION", "SUPPLEMENTED", "SUPPLEMENTS", "SUPPLIED", "SUPPLIER", "SUPPLIERS", "SUPPLIES", "SUPPLY", "SUPPLYING", "SUPPORT", "SUPPORTED", "SUPPORTER", "SUPPORTERS", "SUPPORTING", "SUPPORTIVE", "SUPPORTS", "SUPPOSE", "SUPPOSED", "SUPPOSEDLY", "SUPPOSING", "SUPPOSITION", "SUPPRESS", "SUPPRESSED", "SUPPRESSING", "SUPPRESSION", "SUPRANATIONAL", "SUPREMACY", "SUPREME", "SUPREMELY", "SUPT", "SURE", "SURELY", "SURERE", "SURETY", "SURF", "SURFACE", "SURFACED", "SURFACES", "SURGE", "SURGED", "SURGEON", "SURGEONS", "SURGERIES", "SURGERY", "SURGICAL", "SURKOV", "SURMOUNTED", "SURNAME", "SURNAMES", "SURPLUS", "SURPLUSES", "SURPRISE", "SURPRISED", "SURPRISES", "SURPRISING", "SURPRISINGLY", "SURREAL", "SURREALISM", "SURRENDER", "SURRENDERED", "SURRENDERING", "SURREPTITIOUSLY", "SURREY", "SURROGATE", "SURROUND", "SURROUNDED", "SURROUNDING", "SURROUNDINGS", "SURROUNDS", "SURVEILLANCE", "SURVEY", "SURVEYED", "SURVEYING", "SURVEYOR", "SURVEYORS", "SURVEYS", "SURVIVAL", "SURVIVE", "SURVIVED", "SURVIVES", "SURVIVING", "SURVIVOR", "SURVIVORS", "SUSAN", "SUSANNA", "SUSANNAH", "SUSCEPTIBILITY", "SUSCEPTIBLE", "SUSIE", "SUSPECT", "SUSPECTED", "SUSPECTING", "SUSPECTS", "SUSPEND", "SUSPENDED", "SUSPENSE", "SUSPENSION", "SUSPENSIONS", "SUSPICION", "SUSPICIONS", "SUSPICIOUS", "SUSPICIOUSLY", "SUSSEX", "SUSTAIN", "SUSTAINABILITY", "SUSTAINABLE", "SUSTAINED", "SUSTAINING", "SUSTENANCE", "SUTCLIFFE", "SUTHERLAND", "SUTTON", "SUZANNE", "SUZIE", "SUZY", "SVQS", "SWALLOW", "SWALLOWED", "SWALLOWING", "SWALLOWS", "SWAM", "SWAMP", "SWAMPED", "SWAN", "SWANAGE", "SWANN", "SWANS", "SWANSEA", "SWAP", "SWASTIKA", "SWATHE", "SWAY", "SWAYED", "SWAYING", "SWEAR", "SWEARING", "SWEAT", "SWEATER", "SWEATERS", "SWEATING", "SWEATY", "SWEDE", "SWEDEN", "SWEDES", "SWEDISH", "SWEENEY", "SWEEP", "SWEEPER", "SWEEPING", "SWEEPS", "SWEET", "SWEETER", "SWEETHEART", "SWEETIE", "SWEETLY", "SWEETNESS", "SWEETS", "SWELL", "SWELLED", "SWELLING", "SWEPT", "SWIFT", "SWIFTLY", "SWIM", "SWIMMER", "SWIMMERS", "SWIMMING", "SWIMSUIT", "SWINDON", "SWINE", "SWING", "SWINGING", "SWINGS", "SWINTON", "SWIRLED", "SWIRLING", "SWISS", "SWITCH", "SWITCHBOARD", "SWITCHED", "SWITCHES", "SWITCHING", "SWITZERLAND", "SWIVELLED", "SWOLLEN", "SWOOPED", "SWORD", "SWORDS", "SWORE", "SWORN", "SWUNG", "SYBASE", "SYBIL", "SYDNEY", "SYKES", "SYLLABLE", "SYLLABLES", "SYLLABUS", "SYLLABUSES", "SYLVESTER", "SYLVIA", "SYLVIE", "SYMBOL", "SYMBOLIC", "SYMBOLICALLY", "SYMBOLISM", "SYMBOLS", "SYMMETRIC", "SYMMETRICAL", "SYMMETRY", "SYMPATHETIC", "SYMPATHETICALLY", "SYMPATHIES", "SYMPATHY", "SYMPHONIES", "SYMPHONY", "SYMPOSIUM", "SYMPTOM", "SYMPTOMATIC", "SYMPTOMS", "SYNAGOGUE", "SYNAPSES", "SYNAPTIC", "SYNDICATE", "SYNDROME", "SYNOD", "SYNONYM", "SYNONYMOUS", "SYNONYMS", "SYNTACTIC", "SYNTAX", "SYNTHESIS", "SYNTHETIC", "SYPHILIS", "SYRIA", "SYRIAN", "SYRIANS", "SYRINGE", "SYRUP", "SYSTEM", "SYSTEMATIC", "SYSTEMATICALLY", "SYSTEMIC", "SYSTEMS", "TAB", "TABITHA", "TABLE", "TABLEAU", "TABLECLOTH", "TABLED", "TABLES", "TABLESPOON", "TABLESPOONS", "TABLET", "TABLETS", "TABLOID", "TABLOIDS", "TABOO", "TABOOS", "TABS", "TABULAR", "TACIT", "TACITLY", "TACK", "TACKLE", "TACKLED", "TACKLING", "TACKY", "TACT", "TACTFUL", "TACTFULLY", "TACTIC", "TACTICAL", "TACTICS", "TACTILE", "TADPOLES", "TAG", "TAGS", "TAIL", "TAILOR", "TAILORED", "TAILS", "TAIT", "TAIWAN", "TAIWANESE", "TAKE", "TAKEAWAY", "TAKEN", "TAKEOVER", "TAKEOVERS", "TAKERS", "TAKES", "TAKING", "TAKINGS", "TALBOT", "TALE", "TALENT", "TALENTED", "TALENTS", "TALES", "TALIGENT", "TALK", "TALKATIVE", "TALKED", "TALKING", "TALKS", "TALL", "TALLER", "TALLEST", "TALLIS", "TALLY", "TALONS", "TAMAR", "TAME", "TAMIL", "TAMMUZ", "TAN", "TANDEM", "TANG", "TANGIBLE", "TANGLE", "TANGLED", "TANK", "TANKARD", "TANKER", "TANKERS", "TANKS", "TANNED", "TANNER", "TANTAMOUNT", "TANTRUM", "TANTRUMS", "TANZANIA", "TAP", "TAPE", "TAPED", "TAPES", "TAPESTRIES", "TAPESTRY", "TAPING", "TAPPED", "TAPPING", "TAPS", "TAR", "TARA", "TARDIS", "TARGET", "TARGETED", "TARGETING", "TARGETS", "TARIFF", "TARIFFS", "TARIQ", "TARMAC", "TART", "TARTAN", "TARTLY", "TARTS", "TASK", "TASKS", "TASTE", "TASTED", "TASTEFUL", "TASTEFULLY", "TASTELESS", "TASTES", "TASTING", "TASTY", "TATE", "TATTERED", "TATTOO", "TAUGHT", "TAUNTED", "TAUNTON", "TAURUS", "TAUT", "TAVERN", "TAWNO", "TAWNY", "TAX", "TAXABLE", "TAXATION", "TAXED", "TAXES", "TAXI", "TAXING", "TAXIS", "TAXONOMIC", "TAXONOMY", "TAXPAYER", "TAXPAYERS", "TAYLOR", "TAYSIDE", "TBILISI", "TBSP", "TCHAIKOVSKY", "TEA", "TEACH", "TEACHER", "TEACHERS", "TEACHES", "TEACHING", "TEACHINGS", "TEAM", "TEAMED", "TEAMS", "TEAMWORK", "TEAPOT", "TEAR", "TEARFUL", "TEARING", "TEARS", "TEAS", "TEASE", "TEASED", "TEASING", "TEASPOON", "TEATIME", "TEBBIT", "TECH", "TECHNICAL", "TECHNICALITIES", "TECHNICALLY", "TECHNICIAN", "TECHNICIANS", "TECHNIQUE", "TECHNIQUES", "TECHNO", "TECHNOLOGICAL", "TECHNOLOGICALLY", "TECHNOLOGIES", "TECHNOLOGY", "TECS", "TECTONIC", "TED", "TEDDY", "TEDIOUS", "TEDIUM", "TEE", "TEEMING", "TEEN", "TEENAGE", "TEENAGER", "TEENAGERS", "TEENS", "TEES", "TEESDALE", "TEESSIDE", "TEETH", "TEHERAN", "TEHRAN", "TELECOM", "TELECOMMUNICATIONS", "TELEGRAM", "TELEGRAPH", "TELEPHONE", "TELEPHONED", "TELEPHONES", "TELEPHONING", "TELESCOPE", "TELESCOPES", "TELEVISED", "TELEVISION", "TELEVISIONS", "TELFORD", "TELL", "TELLER", "TELLING", "TELLS", "TELLY", "TEMPER", "TEMPERAMENT", "TEMPERAMENTAL", "TEMPERANCE", "TEMPERATE", "TEMPERATURE", "TEMPERATURES", "TEMPERED", "TEMPERS", "TEMPEST", "TEMPLATE", "TEMPLATES", "TEMPLE", "TEMPLES", "TEMPLETON", "TEMPO", "TEMPORAL", "TEMPORARILY", "TEMPORARY", "TEMPT", "TEMPTATION", "TEMPTATIONS", "TEMPTED", "TEMPTING", "TEN", "TENABLE", "TENACIOUS", "TENACITY", "TENANCIES", "TENANCY", "TENANT", "TENANTS", "TEND", "TENDED", "TENDENCIES", "TENDENCY", "TENDER", "TENDERING", "TENDERLY", "TENDERNESS", "TENDERS", "TENDING", "TENDON", "TENDONS", "TENDRILS", "TENDS", "TENEMENT", "TENEMENTS", "TENETS", "TENNER", "TENNESSEE", "TENNIS", "TENNYSON", "TENOR", "TENS", "TENSE", "TENSED", "TENSILE", "TENSION", "TENSIONS", "TENSOR", "TENT", "TENTACLE", "TENTACLES", "TENTATIVE", "TENTATIVELY", "TENTH", "TENTS", "TENUOUS", "TENURE", "TERENCE", "TERESA", "TERM", "TERMED", "TERMINAL", "TERMINALLY", "TERMINALS", "TERMINATE", "TERMINATED", "TERMINATING", "TERMINATION", "TERMINOLOGY", "TERMINUS", "TERMITES", "TERMS", "TERRACE", "TERRACED", "TERRACES", "TERRACOTTA", "TERRAIN", "TERRESTRIAL", "TERRIBLE", "TERRIBLY", "TERRIER", "TERRIFIC", "TERRIFIED", "TERRIFYING", "TERRITORIAL", "TERRITORIES", "TERRITORY", "TERROR", "TERRORISM", "TERRORIST", "TERRORISTS", "TERRORS", "TERRY", "TERSE", "TERSELY", "TERTIARY", "TESCO", "TESS", "TESSA", "TEST", "TESTAMENT", "TESTATOR", "TESTED", "TESTIFY", "TESTIMONY", "TESTING", "TESTS", "TETANUS", "TEWKESBURY", "TEXAS", "TEXT", "TEXTBOOK", "TEXTBOOKS", "TEXTILE", "TEXTILES", "TEXTS", "TEXTUAL", "TEXTURE", "TEXTURED", "TEXTURES", "THAI", "THAILAND", "THAME", "THAMES", "THAN", "THANK", "THANKED", "THANKFUL", "THANKFULLY", "THANKING", "THANKS", "THANKSGIVING", "THAT", "THATCH", "THATCHED", "THATCHER", "THATCHERISM", "THATCHERITE", "THAW", "THE", "THEATRE", "THEATRES", "THEATRICAL", "THEDA", "THEE", "THEFT", "THEFTS", "THEIR", "THEIRS", "THEM", "THEMATIC", "THEME", "THEMES", "THEMSELVES", "THEN", "THENCE", "THEO", "THEODORA", "THEODORE", "THEOLOGIAN", "THEOLOGIANS", "THEOLOGICAL", "THEOLOGY", "THEOREM", "THEORETICAL", "THEORETICALLY", "THEORIES", "THEORIST", "THEORISTS", "THEORY", "THERAPEUTIC", "THERAPIES", "THERAPIST", "THERAPISTS", "THERAPY", "THERE", "THEREABOUTS", "THEREAFTER", "THEREBY", "THEREFORE", "THEREIN", "THEREOF", "THEREON", "THERESA", "THERESE", "THERETO", "THERMAL", "THERMOMETER", "THERMOSTAT", "THESAURUS", "THESE", "THESES", "THESIS", "THEY", "THICK", "THICKER", "THICKET", "THICKLY", "THICKNESS", "THIEF", "THIEVES", "THIGH", "THIGHS", "THIN", "THING", "THINGS", "THINGY", "THINK", "THINKER", "THINKERS", "THINKING", "THINKS", "THINLY", "THINNER", "THIRD", "THIRDLY", "THIRDS", "THIRSK", "THIRST", "THIRSTY", "THIRTEEN", "THIRTEENTH", "THIRTIES", "THIRTIETH", "THIRTY", "THIS", "THOMAS", "THOMPSON", "THOMSON", "THORFINN", "THORN", "THORNABY", "THORNE", "THORNS", "THORNTON", "THORNY", "THOROUGH", "THOROUGHFARE", "THOROUGHLY", "THOROUGHNESS", "THORPE", "THOSE", "THOU", "THOUGH", "THOUGHT", "THOUGHTFUL", "THOUGHTFULLY", "THOUGHTLESS", "THOUGHTS", "THOUSAND", "THOUSANDS", "THRASHING", "THREAD", "THREADBARE", "THREADS", "THREAT", "THREATEN", "THREATENED", "THREATENING", "THREATENS", "THREATS", "THREE", "THREES", "THRESHOLD", "THRESHOLDS", "THREW", "THRIFT", "THRILL", "THRILLED", "THRILLER", "THRILLING", "THRILLS", "THRIVE", "THRIVES", "THRIVING", "THROAT", "THROATS", "THROBBING", "THROES", "THROMBOSIS", "THRONE", "THRONG", "THROTTLE", "THROUGH", "THROUGHOUT", "THROUGHPUT", "THROW", "THROWING", "THROWN", "THROWS", "THRUSH", "THRUST", "THRUSTING", "THUCYDIDES", "THUD", "THUGS", "THUMB", "THUMBS", "THUMP", "THUMPED", "THUMPING", "THUNDER", "THUNDERED", "THUNDEROUS", "THURSDAY", "THURSDAYS", "THUS", "THWART", "THWARTED", "THY", "THYME", "TIANANMEN", "TIBET", "TIBETAN", "TICK", "TICKED", "TICKET", "TICKETS", "TICKING", "TICKS", "TIDAL", "TIDE", "TIDES", "TIDIED", "TIDY", "TIDYING", "TIE", "TIED", "TIER", "TIERS", "TIES", "TIGER", "TIGERS", "TIGHT", "TIGHTEN", "TIGHTENED", "TIGHTENING", "TIGHTER", "TIGHTLY", "TIGHTNESS", "TIGHTS", "TILDA", "TILE", "TILED", "TILES", "TILL", "TILLER", "TILT", "TILTED", "TILTING", "TIMBER", "TIMBERS", "TIME", "TIMED", "TIMELESS", "TIMELY", "TIMER", "TIMES", "TIMESCALE", "TIMETABLE", "TIMETABLES", "TIMID", "TIMING", "TIMINGS", "TIMMY", "TIMOR", "TIMOTHY", "TIN", "TINA", "TINGE", "TINIEST", "TINKER", "TINNED", "TINS", "TINY", "TIP", "TIPPED", "TIPPING", "TIPS", "TIRANA", "TIRED", "TIREDNESS", "TIRELESS", "TIRELESSLY", "TIRESOME", "TIRING", "TISSUE", "TISSUES", "TIT", "TITFORD", "TITLE", "TITLED", "TITLES", "TITO", "TITS", "TIVOLI", "TNCS", "TOAD", "TOADS", "TOAST", "TOBACCO", "TOBY", "TODAY", "TODD", "TODDLER", "TODDLERS", "TOE", "TOES", "TOFFEE", "TOGETHER", "TOIL", "TOILET", "TOILETRIES", "TOILETS", "TOKEN", "TOKENS", "TOKYO", "TOLD", "TOLERABLE", "TOLERANCE", "TOLERANT", "TOLERATE", "TOLERATED", "TOLERATION", "TOLKIEN", "TOLL", "TOLLS", "TOLONEN", "TOLSTOY", "TOMATO", "TOMATOES", "TOMB", "TOMBS", "TOMLINSON", "TOMMY", "TOMOGRAPHY", "TOMORROW", "TON", "TONAL", "TONE", "TONES", "TONGUE", "TONGUES", "TONIC", "TONIGHT", "TONNE", "TONNES", "TONS", "TONY", "TOO", "TOOK", "TOOL", "TOOLS", "TOOTH", "TOOTHBRUSH", "TOOTHPASTE", "TOP", "TOPAZ", "TOPIC", "TOPICAL", "TOPICS", "TOPLESS", "TOPOGRAPHICAL", "TOPOGRAPHY", "TOPPED", "TOPPING", "TOPPLE", "TOPPLED", "TOPS", "TORCH", "TORCHES", "TORE", "TORIES", "TORMENT", "TORN", "TORNADO", "TORONTO", "TORPEDO", "TORQUAY", "TORQUE", "TORRANCE", "TORRENT", "TORRENTIAL", "TORSO", "TORT", "TORTOISE", "TORTUOUS", "TORTURE", "TORTURED", "TORY", "TOSHIBA", "TOSS", "TOSSED", "TOSSIE", "TOSSING", "TOTAL", "TOTALITY", "TOTALLED", "TOTALLING", "TOTALLY", "TOTALS", "TOTTENHAM", "TOUCH", "TOUCHE", "TOUCHED", "TOUCHES", "TOUCHING", "TOUCHLINE", "TOUCHY", "TOUGH", "TOUGHER", "TOUGHEST", "TOUGHNESS", "TOULOUSE", "TOUR", "TOURED", "TOURING", "TOURISM", "TOURIST", "TOURISTS", "TOURNAMENT", "TOURNAMENTS", "TOURS", "TOW", "TOWARD", "TOWARDS", "TOWED", "TOWEL", "TOWELS", "TOWER", "TOWERING", "TOWERS", "TOWN", "TOWNS", "TOWNSEND", "TOWNSHIP", "TOWNSHIPS", "TOWPATH", "TOXIC", "TOXICITY", "TOXIN", "TOXINS", "TOY", "TOYING", "TOYOTA", "TOYS", "TRACE", "TRACED", "TRACES", "TRACEY", "TRACING", "TRACK", "TRACKED", "TRACKING", "TRACKS", "TRACKSUIT", "TRACT", "TRACTION", "TRACTOR", "TRACTORS", "TRACTS", "TRACY", "TRADE", "TRADED", "TRADEMARK", "TRADER", "TRADERS", "TRADES", "TRADESMAN", "TRADESMEN", "TRADING", "TRADITION", "TRADITIONAL", "TRADITIONALLY", "TRADITIONS", "TRAFALGAR", "TRAFFIC", "TRAFFICKERS", "TRAFFICKING", "TRAFFORD", "TRAGEDIES", "TRAGEDY", "TRAGIC", "TRAGICALLY", "TRAIL", "TRAILED", "TRAILER", "TRAILERS", "TRAILING", "TRAILS", "TRAIN", "TRAINED", "TRAINEE", "TRAINEES", "TRAINER", "TRAINERS", "TRAINING", "TRAINS", "TRAIT", "TRAITOR", "TRAITORS", "TRAITS", "TRAJECTORIES", "TRAJECTORY", "TRAM", "TRAMP", "TRAMS", "TRAMWAY", "TRANCE", "TRANMERE", "TRANQUIL", "TRANQUILLITY", "TRANSACTION", "TRANSACTIONS", "TRANSATLANTIC", "TRANSCEND", "TRANSCENDENTAL", "TRANSCRIPT", "TRANSCRIPTION", "TRANSCRIPTIONAL", "TRANSCRIPTS", "TRANSFECTION", "TRANSFER", "TRANSFERABLE", "TRANSFEREE", "TRANSFERENCE", "TRANSFEROR", "TRANSFERRED", "TRANSFERRING", "TRANSFERS", "TRANSFORM", "TRANSFORMATION", "TRANSFORMATIONS", "TRANSFORMED", "TRANSFORMER", "TRANSFORMING", "TRANSFORMS", "TRANSFUSION", "TRANSGENIC", "TRANSGRESSION", "TRANSIENT", "TRANSISTOR", "TRANSISTORS", "TRANSIT", "TRANSITION", "TRANSITIONAL", "TRANSITIONS", "TRANSITORY", "TRANSLATE", "TRANSLATED", "TRANSLATES", "TRANSLATING", "TRANSLATION", "TRANSLATIONS", "TRANSLATOR", "TRANSLATORS", "TRANSLUCENT", "TRANSMISSION", "TRANSMISSIONS", "TRANSMIT", "TRANSMITTED", "TRANSMITTER", "TRANSMITTING", "TRANSNATIONAL", "TRANSPARENCY", "TRANSPARENT", "TRANSPIRED", "TRANSPLANT", "TRANSPLANTATION", "TRANSPORT", "TRANSPORTATION", "TRANSPORTED", "TRANSPORTER", "TRANSPORTING", "TRANSVAAL", "TRANSVERSE", "TRANSVESTITE", "TRAP", "TRAPPED", "TRAPPING", "TRAPPINGS", "TRAPS", "TRASH", "TRAUMA", "TRAUMAS", "TRAUMATIC", "TRAVEL", "TRAVELLED", "TRAVELLER", "TRAVELLERS", "TRAVELLING", "TRAVELS", "TRAVERS", "TRAVERSE", "TRAVIS", "TRAY", "TRAYS", "TREACHEROUS", "TREACHERY", "TREACLE", "TREAD", "TREADING", "TREASON", "TREASURE", "TREASURER", "TREASURES", "TREASURY", "TREAT", "TREATED", "TREATIES", "TREATING", "TREATISE", "TREATMENT", "TREATMENTS", "TREATS", "TREATY", "TREBLE", "TREE", "TREES", "TREK", "TREMAYNE", "TREMBLE", "TREMBLED", "TREMBLING", "TREMENDOUS", "TREMENDOUSLY", "TREMOLO", "TREMOR", "TRENCH", "TRENCHES", "TREND", "TRENDS", "TRENDY", "TRENT", "TREPIDATION", "TRESPASS", "TREVOR", "TRIAL", "TRIALS", "TRIANGLE", "TRIANGLES", "TRIANGULAR", "TRIBAL", "TRIBE", "TRIBES", "TRIBESMEN", "TRIBUNAL", "TRIBUNALS", "TRIBUNE", "TRIBUTE", "TRIBUTES", "TRICK", "TRICKED", "TRICKLE", "TRICKLING", "TRICKS", "TRICKY", "TRIDENT", "TRIED", "TRIES", "TRIFLE", "TRIGGER", "TRIGGERED", "TRIGGERS", "TRILLION", "TRILOGY", "TRIM", "TRIMMED", "TRIMMING", "TRIMMINGS", "TRINIDAD", "TRINITY", "TRIO", "TRIP", "TRIPARTITE", "TRIPLE", "TRIPOD", "TRIPOLI", "TRIPPED", "TRIPPING", "TRIPS", "TRISTAN", "TRIUMPH", "TRIUMPHAL", "TRIUMPHANT", "TRIUMPHANTLY", "TRIUMPHS", "TRIVIA", "TRIVIAL", "TRNA", "TROD", "TRODDEN", "TROLLEY", "TROLLEYS", "TROOP", "TROOPER", "TROOPS", "TROPHIES", "TROPHY", "TROPICAL", "TROPICS", "TROT", "TROTSKY", "TROTTED", "TROTTING", "TROUBLE", "TROUBLED", "TROUBLES", "TROUBLESOME", "TROUBLING", "TROUGH", "TROUGHS", "TROUPE", "TROUSER", "TROUSERS", "TROUT", "TROWEL", "TROY", "TRUANCY", "TRUCE", "TRUCK", "TRUCKS", "TRUDGED", "TRUE", "TRULY", "TRUMAN", "TRUMPET", "TRUMPETS", "TRUNCHBULL", "TRUNK", "TRUNKS", "TRURO", "TRUST", "TRUSTED", "TRUSTEE", "TRUSTEES", "TRUSTING", "TRUSTS", "TRUSTWORTHY", "TRUSTY", "TRUTH", "TRUTHFUL", "TRUTHFULLY", "TRUTHS", "TRY", "TRYING", "TSAR", "TUB", "TUBE", "TUBERCULOSIS", "TUBES", "TUBING", "TUBS", "TUBULAR", "TUCK", "TUCKED", "TUCKER", "TUCKING", "TUDOR", "TUESDAY", "TUESDAYS", "TUFNELL", "TUG", "TUGGED", "TUGGING", "TUITION", "TUMBLE", "TUMBLED", "TUMBLER", "TUMBLING", "TUMMY", "TUMOUR", "TUMOURS", "TUNA", "TUNBRIDGE", "TUNDRA", "TUNE", "TUNED", "TUNES", "TUNG", "TUNGSTEN", "TUNIC", "TUNING", "TUNIS", "TUNISIA", "TUNNEL", "TUNNELS", "TUNSTALL", "TUPPE", "TURBINE", "TURBO", "TURBULENCE", "TURBULENT", "TURF", "TURIN", "TURK", "TURKEY", "TURKISH", "TURKS", "TURMOIL", "TURN", "TURNAROUND", "TURNBULL", "TURNED", "TURNER", "TURNING", "TURNOUT", "TURNOVER", "TURNS", "TURNTABLE", "TURQUOISE", "TURRET", "TURTLE", "TURTLES", "TUSCANY", "TUTOR", "TUTORIAL", "TUTORIALS", "TUTORS", "TWEED", "TWELFTH", "TWELFTHS", "TWELVE", "TWENTIES", "TWENTIETH", "TWENTY", "TWICE", "TWICKENHAM", "TWIG", "TWIGS", "TWILIGHT", "TWIN", "TWINGE", "TWINKLE", "TWINS", "TWIST", "TWISTED", "TWISTING", "TWISTS", "TWITCH", "TWITCHED", "TWITCHING", "TWO", "TWOFLOWER", "TWOFOLD", "TWOS", "TYCOON", "TYING", "TYLER", "TYNE", "TYNESIDE", "TYPE", "TYPED", "TYPES", "TYPEWRITER", "TYPEWRITERS", "TYPICAL", "TYPICALLY", "TYPING", "TYPIST", "TYPOLOGY", "TYRANNY", "TYRANT", "TYRANTS", "TYRE", "TYRES", "TYSON", "UBIQUITOUS", "UCTA", "UEFA", "UGANDA", "UGH", "UGLINESS", "UGLY", "UIST", "UKRAINE", "UKRAINIAN", "ULCER", "ULCERATION", "ULCERATIVE", "ULCERS", "ULSTER", "ULTHUAN", "ULTIMATE", "ULTIMATELY", "ULTIMATUM", "ULTRA", "ULTRASOUND", "ULTRAVIOLET", "ULYSSES", "UMBILICAL", "UMBRELLA", "UMBRELLAS", "UMPIRE", "UMPIRES", "UNABLE", "UNACCEPTABLE", "UNACCOMPANIED", "UNACCUSTOMED", "UNAFFECTED", "UNAIDED", "UNALTERED", "UNAMBIGUOUS", "UNAMBIGUOUSLY", "UNANIMITY", "UNANIMOUS", "UNANIMOUSLY", "UNANSWERED", "UNANTICIPATED", "UNARMED", "UNASHAMEDLY", "UNASSAILABLE", "UNATTAINABLE", "UNATTENDED", "UNATTRACTIVE", "UNAUTHORISED", "UNAUTHORIZED", "UNAVAILABLE", "UNAVOIDABLE", "UNAWARE", "UNAWARES", "UNBALANCED", "UNBEARABLE", "UNBEARABLY", "UNBEATABLE", "UNBEATEN", "UNBELIEVABLE", "UNBELIEVABLY", "UNBIASED", "UNBORN", "UNBROKEN", "UNCANNY", "UNCERTAIN", "UNCERTAINLY", "UNCERTAINTIES", "UNCERTAINTY", "UNCHALLENGED", "UNCHANGED", "UNCHANGING", "UNCHARACTERISTIC", "UNCHARACTERISTICALLY", "UNCHECKED", "UNCLE", "UNCLEAN", "UNCLEAR", "UNCLES", "UNCOMFORTABLE", "UNCOMFORTABLY", "UNCOMMON", "UNCOMPLICATED", "UNCOMPROMISING", "UNCONCERNED", "UNCONDITIONAL", "UNCONDITIONALLY", "UNCONNECTED", "UNCONSCIOUS", "UNCONSCIOUSLY", "UNCONSCIOUSNESS", "UNCONSTITUTIONAL", "UNCONTROLLABLE", "UNCONTROLLABLY", "UNCONTROLLED", "UNCONVENTIONAL", "UNCONVINCED", "UNCONVINCING", "UNCOVER", "UNCOVERED", "UNCRITICAL", "UNDAMAGED", "UNDAUNTED", "UNDECIDED", "UNDEFINED", "UNDEMOCRATIC", "UNDENIABLE", "UNDENIABLY", "UNDER", "UNDERCARRIAGE", "UNDERCLASS", "UNDERCOVER", "UNDERESTIMATE", "UNDERESTIMATED", "UNDERFOOT", "UNDERGO", "UNDERGOES", "UNDERGOING", "UNDERGONE", "UNDERGRADUATE", "UNDERGRADUATES", "UNDERGROUND", "UNDERGROWTH", "UNDERLIE", "UNDERLIES", "UNDERLINE", "UNDERLINED", "UNDERLINES", "UNDERLINING", "UNDERLYING", "UNDERMINE", "UNDERMINED", "UNDERMINES", "UNDERMINING", "UNDERNEATH", "UNDERPANTS", "UNDERPIN", "UNDERPINNED", "UNDERSIDE", "UNDERSTAND", "UNDERSTANDABLE", "UNDERSTANDABLY", "UNDERSTANDING", "UNDERSTANDINGS", "UNDERSTANDS", "UNDERSTATEMENT", "UNDERSTOOD", "UNDERTAKE", "UNDERTAKEN", "UNDERTAKER", "UNDERTAKERS", "UNDERTAKES", "UNDERTAKING", "UNDERTAKINGS", "UNDERTOOK", "UNDERVALUED", "UNDERWATER", "UNDERWAY", "UNDERWEAR", "UNDERWENT", "UNDERWOOD", "UNDERWORLD", "UNDERWRITERS", "UNDERWRITTEN", "UNDESIRABLE", "UNDETECTED", "UNDEVELOPED", "UNDID", "UNDIFFERENTIATED", "UNDIGNIFIED", "UNDISCLOSED", "UNDISCOVERED", "UNDISPUTED", "UNDISTURBED", "UNDIVIDED", "UNDO", "UNDONE", "UNDOUBTED", "UNDOUBTEDLY", "UNDUE", "UNDULY", "UNEARTHED", "UNEASE", "UNEASILY", "UNEASY", "UNECONOMIC", "UNEDUCATED", "UNEMPLOYED", "UNEMPLOYMENT", "UNENFORCEABLE", "UNEQUAL", "UNEQUIVOCAL", "UNEQUIVOCALLY", "UNESCO", "UNEVEN", "UNEVENLY", "UNEVENTFUL", "UNEXPECTED", "UNEXPECTEDLY", "UNEXPLAINED", "UNEXPLORED", "UNFAIR", "UNFAIRLY", "UNFAIRNESS", "UNFAITHFUL", "UNFAMILIAR", "UNFASHIONABLE", "UNFAVOURABLE", "UNFAVOURABLY", "UNFETTERED", "UNFINISHED", "UNFIT", "UNFOLDED", "UNFOLDS", "UNFORESEEN", "UNFORGETTABLE", "UNFORTUNATE", "UNFORTUNATELY", "UNFOUNDED", "UNFRIENDLY", "UNFULFILLED", "UNGRATEFUL", "UNHAPPILY", "UNHAPPINESS", "UNHAPPY", "UNHARMED", "UNHEALTHY", "UNHEARD", "UNHELPFUL", "UNHURT", "UNIDENTIFIED", "UNIFICATION", "UNIFIED", "UNIFORM", "UNIFORMED", "UNIFORMITY", "UNIFORMLY", "UNIFORMS", "UNILATERAL", "UNILATERALLY", "UNIMAGINABLE", "UNIMAGINATIVE", "UNIMPORTANT", "UNIMPRESSED", "UNINFORMED", "UNINHABITED", "UNINHIBITED", "UNINTELLIGIBLE", "UNINTENDED", "UNINTENTIONAL", "UNINTERESTED", "UNINTERESTING", "UNINTERRUPTED", "UNION", "UNIONISM", "UNIONIST", "UNIONISTS", "UNIONS", "UNIQUE", "UNIQUELY", "UNIQUENESS", "UNISON", "UNISYS", "UNIT", "UNITA", "UNITARY", "UNITE", "UNITED", "UNITING", "UNITS", "UNITY", "UNIVEL", "UNIVERSAL", "UNIVERSALITY", "UNIVERSALLY", "UNIVERSE", "UNIVERSITIES", "UNIVERSITY", "UNIX", "UNIXWARE", "UNJUST", "UNJUSTIFIED", "UNKEMPT", "UNKIND", "UNKNOWN", "UNLAWFUL", "UNLAWFULLY", "UNLEADED", "UNLEASHED", "UNLESS", "UNLIKE", "UNLIKELY", "UNLIMITED", "UNLISTED", "UNLIT", "UNLOAD", "UNLOADED", "UNLOADING", "UNLOCK", "UNLOCKED", "UNLUCKY", "UNMARKED", "UNMARRIED", "UNMET", "UNMISTAKABLE", "UNMISTAKABLY", "UNMOVED", "UNNAMED", "UNNATURAL", "UNNATURALLY", "UNNECESSARILY", "UNNECESSARY", "UNNOTICED", "UNOBTRUSIVE", "UNOCCUPIED", "UNOFFICIAL", "UNOFFICIALLY", "UNOPENED", "UNOPPOSED", "UNORTHODOX", "UNPACK", "UNPAID", "UNPALATABLE", "UNPARALLELED", "UNPERTURBED", "UNPLANNED", "UNPLEASANT", "UNPLEASANTLY", "UNPOPULAR", "UNPOPULARITY", "UNPRECEDENTED", "UNPREDICTABILITY", "UNPREDICTABLE", "UNPREPARED", "UNPRODUCTIVE", "UNPROFITABLE", "UNPROTECTED", "UNPUBLISHED", "UNQUALIFIED", "UNQUESTIONABLY", "UNRAVEL", "UNREADABLE", "UNREAL", "UNREALISTIC", "UNREALITY", "UNREASONABLE", "UNREASONABLY", "UNRECOGNISED", "UNREGISTERED", "UNRELATED", "UNRELIABLE", "UNREMARKABLE", "UNREMITTING", "UNREPORTED", "UNREPRESENTATIVE", "UNRESOLVED", "UNRESPONSIVE", "UNREST", "UNRESTRICTED", "UNRIVALLED", "UNRULY", "UNSAFE", "UNSATISFACTORY", "UNSAVOURY", "UNSCATHED", "UNSCRUPULOUS", "UNSECURED", "UNSEEN", "UNSKILLED", "UNSOLD", "UNSOLICITED", "UNSOLVED", "UNSOPHISTICATED", "UNSOUND", "UNSPEAKABLE", "UNSPECIFIED", "UNSPOILT", "UNSPOKEN", "UNSTABLE", "UNSTEADILY", "UNSTEADY", "UNSTOPPABLE", "UNSTRUCTURED", "UNSUCCESSFUL", "UNSUCCESSFULLY", "UNSUITABLE", "UNSUPPORTED", "UNSURE", "UNSURPRISINGLY", "UNSUSPECTING", "UNSYMPATHETIC", "UNTENABLE", "UNTHINKABLE", "UNTIDY", "UNTIL", "UNTIMELY", "UNTO", "UNTOLD", "UNTOUCHED", "UNTRAINED", "UNTREATED", "UNTRUE", "UNTYPICAL", "UNUSED", "UNUSUAL", "UNUSUALLY", "UNVEIL", "UNVEILED", "UNWANTED", "UNWARRANTED", "UNWASHED", "UNWELCOME", "UNWELL", "UNWIELDY", "UNWILLING", "UNWILLINGLY", "UNWILLINGNESS", "UNWISE", "UNWITTINGLY", "UNWORKABLE", "UNWORTHY", "UNWRITTEN", "UNYIELDING", "UPBRINGING", "UPDATE", "UPDATED", "UPDATING", "UPGRADE", "UPGRADED", "UPGRADES", "UPGRADING", "UPHEAVAL", "UPHEAVALS", "UPHELD", "UPHILL", "UPHOLD", "UPHOLDING", "UPHOLSTERY", "UPKEEP", "UPLAND", "UPLANDS", "UPLIFT", "UPON", "UPPER", "UPPERMOST", "UPRIGHT", "UPRISING", "UPROAR", "UPSET", "UPSETS", "UPSETTING", "UPSHOT", "UPSTAIRS", "UPSTREAM", "UPSURGE", "UPTAKE", "UPTON", "UPTURN", "UPTURNED", "UPWARD", "UPWARDS", "URANIUM", "URBAN", "URBANIZATION", "URCHIN", "URGE", "URGED", "URGENCY", "URGENT", "URGENTLY", "URGES", "URGH", "URGING", "URINARY", "URINE", "URN", "URQUHART", "URSULA", "URUGUAY", "USABLE", "USAGE", "USAGES", "USE", "USED", "USEFUL", "USEFULLY", "USEFULNESS", "USELESS", "USER", "USERS", "USES", "USHERED", "USING", "USSR", "USUAL", "USUALLY", "UTAH", "UTERUS", "UTILISATION", "UTILISE", "UTILISED", "UTILISING", "UTILITARIAN", "UTILITARIANISM", "UTILITIES", "UTILITY", "UTMOST", "UTOPIA", "UTOPIAN", "UTTER", "UTTERANCE", "UTTERANCES", "UTTERED", "UTTERING", "UTTERLY", "UTTERSON", "UZBEKISTAN", "VACANCIES", "VACANCY", "VACANT", "VACATION", "VACATIONS", "VACCINATION", "VACCINE", "VACCINES", "VACLAV", "VACUUM", "VAGARIES", "VAGINA", "VAGINAL", "VAGUE", "VAGUELY", "VAGUENESS", "VAIN", "VALE", "VALENCE", "VALENCIA", "VALENTINE", "VALERIE", "VALID", "VALIDATE", "VALIDATED", "VALIDATION", "VALIDITY", "VALLEY", "VALLEYS", "VALUABLE", "VALUABLES", "VALUATION", "VALUATIONS", "VALUE", "VALUED", "VALUER", "VALUES", "VALUING", "VALVE", "VALVES", "VAMPIRE", "VAN", "VANCOUVER", "VANDALISM", "VANDALS", "VANE", "VANESSA", "VANGUARD", "VANILLA", "VANISH", "VANISHED", "VANISHES", "VANITY", "VANS", "VANTAGE", "VAPOUR", "VARIABILITY", "VARIABLE", "VARIABLES", "VARIANCE", "VARIANT", "VARIANTS", "VARIATION", "VARIATIONS", "VARICES", "VARIED", "VARIES", "VARIETIES", "VARIETY", "VARIOUS", "VARIOUSLY", "VARNISH", "VARY", "VARYING", "VASCULAR", "VASE", "VASES", "VASSAL", "VASSALS", "VAST", "VASTLY", "VAT", "VATICAN", "VAUGHAN", "VAULT", "VAULTS", "VAUXHALL", "VEAL", "VECTOR", "VECTORS", "VEGAS", "VEGETABLE", "VEGETABLES", "VEGETARIAN", "VEGETARIANS", "VEGETATION", "VEHEMENT", "VEHEMENTLY", "VEHICLE", "VEHICLES", "VEIL", "VEILED", "VEILS", "VEIN", "VEINS", "VELOCITIES", "VELOCITY", "VELVET", "VENABLES", "VENDOR", "VENDORS", "VENEER", "VENERABLE", "VENEREAL", "VENETIAN", "VENEZUELA", "VENGEANCE", "VENICE", "VENISON", "VENOM", "VENOMOUS", "VENOUS", "VENT", "VENTILATION", "VENTILATOR", "VENTRAL", "VENTRICULAR", "VENTURE", "VENTURED", "VENTURES", "VENTURING", "VENUE", "VENUES", "VENUS", "VERA", "VERANDA", "VERANDAH", "VERB", "VERBAL", "VERBALLY", "VERBS", "VERDERERS", "VERDI", "VERDICT", "VERDICTS", "VERDUN", "VERGE", "VERIFICATION", "VERIFIED", "VERIFY", "VERITABLE", "VERITY", "VERN", "VERNACULAR", "VERNON", "VERONA", "VERONICA", "VERSAILLES", "VERSATILE", "VERSATILITY", "VERSE", "VERSES", "VERSION", "VERSIONS", "VERSUS", "VERTEBRAE", "VERTEBRATES", "VERTICAL", "VERTICALLY", "VERY", "VESICLES", "VESSEL", "VESSELS", "VEST", "VESTED", "VESTIGES", "VESTRY", "VET", "VETERAN", "VETERANS", "VETERINARY", "VETO", "VETS", "VIA", "VIABILITY", "VIABLE", "VIADUCT", "VIAL", "VIBRANT", "VIBRATION", "VIBRATIONAL", "VIBRATIONS", "VICAR", "VICARAGE", "VICE", "VICES", "VICINITY", "VICIOUS", "VICIOUSLY", "VICKERS", "VICKI", "VICKY", "VICTIM", "VICTIMS", "VICTOR", "VICTORIA", "VICTORIAN", "VICTORIANS", "VICTORIES", "VICTORIOUS", "VICTORY", "VIDEO", "VIDEOS", "VIE", "VIENNA", "VIENNESE", "VIETNAM", "VIETNAMESE", "VIEW", "VIEWED", "VIEWER", "VIEWERS", "VIEWING", "VIEWPOINT", "VIEWPOINTS", "VIEWS", "VIGIL", "VIGILANCE", "VIGILANT", "VIGOROUS", "VIGOROUSLY", "VIGOUR", "VII", "VIII", "VIKING", "VIKINGS", "VILE", "VILLA", "VILLAGE", "VILLAGERS", "VILLAGES", "VILLAIN", "VILLAINS", "VILLAS", "VINCE", "VINCENT", "VINDICATED", "VINDICTIVE", "VINE", "VINEGAR", "VINES", "VINEYARD", "VINEYARDS", "VINTAGE", "VINYL", "VIOLA", "VIOLATE", "VIOLATED", "VIOLATING", "VIOLATION", "VIOLATIONS", "VIOLENCE", "VIOLENT", "VIOLENTLY", "VIOLET", "VIOLETS", "VIOLIN", "VIOLINIST", "VIOLINS", "VIRAL", "VIRGIL", "VIRGIN", "VIRGINIA", "VIRGINITY", "VIRGINS", "VIRTUAL", "VIRTUALLY", "VIRTUE", "VIRTUES", "VIRTUOSO", "VIRTUOUS", "VIRULENT", "VIRUS", "VIRUSES", "VISA", "VISAS", "VISCOSITY", "VISCOUNT", "VISCOUS", "VISIBILITY", "VISIBLE", "VISIBLY", "VISION", "VISIONARY", "VISIONS", "VISIT", "VISITED", "VISITING", "VISITOR", "VISITORS", "VISITS", "VISTA", "VISTAS", "VISUAL", "VISUALISATION", "VISUALISE", "VISUALIZE", "VISUALLY", "VITA", "VITAL", "VITALITY", "VITALLY", "VITAMIN", "VITAMINS", "VITOR", "VITRO", "VIVID", "VIVIDLY", "VIVO", "VLADIMIR", "VOCABULARY", "VOCAL", "VOCALS", "VOCATION", "VOCATIONAL", "VOCIFEROUS", "VODKA", "VOGUE", "VOICE", "VOICED", "VOICES", "VOID", "VOLATILE", "VOLATILITY", "VOLCANIC", "VOLCANO", "VOLCANOES", "VOLE", "VOLKSWAGEN", "VOLLEY", "VOLOGSKY", "VOLT", "VOLTAGE", "VOLTAIRE", "VOLTS", "VOLUME", "VOLUMES", "VOLUMINOUS", "VOLUNTARILY", "VOLUNTARY", "VOLUNTEER", "VOLUNTEERED", "VOLUNTEERS", "VOLVO", "VOMIT", "VOMITING", "VON", "VORTEX", "VOTE", "VOTED", "VOTER", "VOTERS", "VOTES", "VOTING", "VOUCHER", "VOUCHERS", "VOW", "VOWED", "VOWEL", "VOWELS", "VOWS", "VOYAGE", "VOYAGES", "VULCAN", "VULGAR", "VULNERABILITY", "VULNERABLE", "VULTURE", "VULTURES", "WABI", "WACC", "WAD", "WADDINGTON", "WADE", "WADERS", "WAGE", "WAGED", "WAGER", "WAGES", "WAGNER", "WAGON", "WAGONS", "WAIL", "WAILED", "WAIST", "WAISTBAND", "WAISTCOAT", "WAIT", "WAITE", "WAITED", "WAITER", "WAITERS", "WAITING", "WAITRESS", "WAITS", "WAIVE", "WAIVER", "WAKE", "WAKEFIELD", "WAKEHAM", "WAKES", "WAKING", "WALDEGRAVE", "WALES", "WALESA", "WALK", "WALKED", "WALKER", "WALKERS", "WALKING", "WALKMAN", "WALKS", "WALKWAY", "WALL", "WALLABIES", "WALLACE", "WALLASEY", "WALLED", "WALLER", "WALLET", "WALLINGFORD", "WALLIS", "WALLPAPER", "WALLS", "WALLY", "WALNUT", "WALNUTS", "WALPOLE", "WALSALL", "WALSH", "WALSINGHAM", "WALTER", "WALTERS", "WALTHAM", "WALTON", "WALTZ", "WAN", "WAND", "WANDER", "WANDERED", "WANDERING", "WANDSWORTH", "WANG", "WANT", "WANTAGE", "WANTED", "WANTING", "WANTON", "WANTS", "WAPPING", "WAR", "WARBURG", "WARD", "WARDEN", "WARDENS", "WARDROBE", "WARDROBES", "WARDS", "WARE", "WAREHOUSE", "WAREHOUSES", "WARES", "WARFARE", "WARHEADS", "WARILY", "WARM", "WARMED", "WARMER", "WARMEST", "WARMING", "WARMLY", "WARMTH", "WARN", "WARNED", "WARNER", "WARNING", "WARNINGS", "WARNS", "WARP", "WARRANT", "WARRANTIES", "WARRANTS", "WARRANTY", "WARREN", "WARRINGTON", "WARRIOR", "WARRIORS", "WARS", "WARSAW", "WARSHIP", "WARSHIPS", "WARTIME", "WARTS", "WARWICK", "WARWICKSHIRE", "WARY", "WAS", "WASH", "WASHED", "WASHER", "WASHES", "WASHING", "WASHINGTON", "WASP", "WASPS", "WASTAGE", "WASTE", "WASTED", "WASTEFUL", "WASTELAND", "WASTES", "WASTING", "WATCH", "WATCHDOG", "WATCHED", "WATCHER", "WATCHERS", "WATCHES", "WATCHFUL", "WATCHING", "WATCHMAN", "WATER", "WATERCOLOUR", "WATERCOLOURS", "WATERFALL", "WATERFALLS", "WATERFORD", "WATERFRONT", "WATERHOUSE", "WATERING", "WATERLOGGED", "WATERLOO", "WATERMAN", "WATERPROOF", "WATERS", "WATERSHED", "WATERSIDE", "WATERTIGHT", "WATERWAY", "WATERWAYS", "WATERY", "WATFORD", "WATKINS", "WATSON", "WATT", "WATTS", "WAUGH", "WAVE", "WAVED", "WAVELENGTH", "WAVELENGTHS", "WAVES", "WAVING", "WAVY", "WAX", "WAY", "WAYNE", "WAYS", "WAYSIDE", "WAYWARD", "WEAK", "WEAKEN", "WEAKENED", "WEAKENING", "WEAKER", "WEAKEST", "WEAKLY", "WEAKNESS", "WEAKNESSES", "WEALD", "WEALTH", "WEALTHIER", "WEALTHY", "WEAPON", "WEAPONRY", "WEAPONS", "WEAR", "WEARER", "WEARILY", "WEARINESS", "WEARING", "WEARS", "WEARY", "WEATHER", "WEATHERED", "WEATHERING", "WEAVE", "WEAVER", "WEAVERS", "WEAVING", "WEB", "WEBB", "WEBBER", "WEBER", "WEBS", "WEBSTER", "WED", "WEDDING", "WEDDINGS", "WEDGE", "WEDGES", "WEDGWOOD", "WEDNESDAY", "WEDNESDAYS", "WEE", "WEED", "WEEDS", "WEEDY", "WEEK", "WEEKDAY", "WEEKDAYS", "WEEKEND", "WEEKENDS", "WEEKLY", "WEEKS", "WEEP", "WEEPING", "WEIGH", "WEIGHED", "WEIGHING", "WEIGHS", "WEIGHT", "WEIGHTED", "WEIGHTS", "WEIGHTY", "WEIMAR", "WEIR", "WEIRD", "WELCOME", "WELCOMED", "WELCOMES", "WELCOMING", "WELFARE", "WELL", "WELLBEING", "WELLER", "WELLINGTON", "WELLS", "WELSH", "WELSHPOOL", "WELTER", "WEMBLEY", "WENDY", "WENT", "WENTWORTH", "WEPT", "WERE", "WERNER", "WESLEY", "WESSEX", "WEST", "WESTBOURNE", "WESTERLY", "WESTERN", "WESTERNERS", "WESTMINSTER", "WESTON", "WESTWARD", "WESTWARDS", "WET", "WETHERBY", "WETLAND", "WETLANDS", "WEXFORD", "WEYMOUTH", "WHADDON", "WHALE", "WHALES", "WHALING", "WHARF", "WHARTON", "WHAT", "WHATEVER", "WHATSOEVER", "WHEAT", "WHEATLEY", "WHEEL", "WHEELBARROW", "WHEELCHAIR", "WHEELCHAIRS", "WHEELED", "WHEELER", "WHEELING", "WHEELS", "WHELAN", "WHEN", "WHENCE", "WHENEVER", "WHERE", "WHEREABOUTS", "WHEREAS", "WHEREBY", "WHEREIN", "WHEREUPON", "WHEREVER", "WHETHER", "WHICH", "WHICHEVER", "WHIFF", "WHIG", "WHIGS", "WHILE", "WHILST", "WHIM", "WHIMS", "WHINE", "WHINING", "WHIP", "WHIPPED", "WHIPPING", "WHIPS", "WHIRLED", "WHIRLING", "WHIRLWIND", "WHISKERS", "WHISKEY", "WHISKIES", "WHISKY", "WHISPER", "WHISPERED", "WHISPERING", "WHISPERS", "WHISTLE", "WHISTLED", "WHISTLING", "WHIT", "WHITAKER", "WHITBREAD", "WHITBY", "WHITE", "WHITECHAPEL", "WHITEHALL", "WHITEHEAD", "WHITEHOUSE", "WHITENESS", "WHITES", "WHITLEY", "WHITLOCK", "WHITNEY", "WHITTINGTON", "WHO", "WHOEVER", "WHOLE", "WHOLEHEARTEDLY", "WHOLEMEAL", "WHOLENESS", "WHOLESALE", "WHOLESALER", "WHOLESALERS", "WHOLESOME", "WHOLLY", "WHOM", "WHOOPS", "WHORE", "WHOSE", "WHY", "WHYTE", "WICKED", "WICKEDLY", "WICKEDNESS", "WICKER", "WICKET", "WICKETS", "WICKHAM", "WIDE", "WIDELY", "WIDEN", "WIDENED", "WIDENING", "WIDER", "WIDESPREAD", "WIDEST", "WIDNES", "WIDOW", "WIDOWED", "WIDOWER", "WIDOWS", "WIDTH", "WIDTHS", "WIELD", "WIELDING", "WIFE", "WIG", "WIGAN", "WIGHT", "WILBERFORCE", "WILCOX", "WILD", "WILDE", "WILDER", "WILDERNESS", "WILDEST", "WILDLIFE", "WILDLY", "WILFRED", "WILFRID", "WILFUL", "WILFULLY", "WILKIE", "WILKINS", "WILKINSON", "WILKO", "WILL", "WILLI", "WILLIAM", "WILLIAMS", "WILLIAMSON", "WILLIE", "WILLING", "WILLINGLY", "WILLINGNESS", "WILLIS", "WILLOW", "WILLOWS", "WILLS", "WILLY", "WILSON", "WILTON", "WILTS", "WILTSHIRE", "WILY", "WIMBLEDON", "WIMPEY", "WIN", "WINCED", "WINCHESTER", "WIND", "WINDFALL", "WINDING", "WINDINGS", "WINDMILL", "WINDOW", "WINDOWS", "WINDS", "WINDSCREEN", "WINDSOR", "WINDSURFING", "WINDY", "WINE", "WINES", "WING", "WINGED", "WINGER", "WINGS", "WINIFRED", "WINK", "WINKED", "WINNER", "WINNERS", "WINNIE", "WINNING", "WINNINGS", "WINS", "WINSTON", "WINTER", "WINTERS", "WINTRY", "WIPE", "WIPED", "WIPERS", "WIPING", "WIRE", "WIRED", "WIRELESS", "WIRES", "WIRING", "WIRRAL", "WIRY", "WISCONSIN", "WISDOM", "WISE", "WISELY", "WISER", "WISH", "WISHART", "WISHED", "WISHES", "WISHFUL", "WISHING", "WISTFUL", "WISTFULLY", "WIT", "WITCH", "WITCHCRAFT", "WITCHES", "WITH", "WITHAM", "WITHDRAW", "WITHDRAWAL", "WITHDRAWALS", "WITHDRAWING", "WITHDRAWN", "WITHDREW", "WITHHELD", "WITHHOLD", "WITHHOLDING", "WITHIN", "WITHINGTON", "WITHOUT", "WITHSTAND", "WITNESS", "WITNESSED", "WITNESSES", "WITNESSING", "WITNEY", "WITS", "WITTGENSTEIN", "WITTY", "WIVES", "WIZARD", "WOBBLY", "WOBURN", "WOGAN", "WOKE", "WOKEN", "WOKING", "WOLF", "WOLFE", "WOLFGANG", "WOLSEY", "WOLVERHAMPTON", "WOLVERTON", "WOLVES", "WOMAN", "WOMANHOOD", "WOMB", "WOMEN", "WON", "WONDER", "WONDERED", "WONDERFUL", "WONDERFULLY", "WONDERING", "WONDERS", "WONDROUS", "WONT", "WOO", "WOOD", "WOODCHESTER", "WOODED", "WOODEN", "WOODLAND", "WOODLANDS", "WOODS", "WOODSTOCK", "WOODVILLE", "WOODVILLES", "WOODWARD", "WOODWORK", "WOODY", "WOOL", "WOOLF", "WOOLLEN", "WOOLLEY", "WOOLLY", "WOOLWICH", "WOOLWORTH", "WOOLWORTHS", "WOOSNAM", "WOOTTON", "WORCESTER", "WORCESTERSHIRE", "WORD", "WORDING", "WORDPERFECT", "WORDS", "WORDSWORTH", "WORE", "WORK", "WORKABLE", "WORKED", "WORKER", "WORKERS", "WORKFORCE", "WORKHOUSE", "WORKING", "WORKINGS", "WORKLOAD", "WORKMAN", "WORKMANSHIP", "WORKMATES", "WORKMEN", "WORKPLACE", "WORKPLACES", "WORKS", "WORKSHEET", "WORKSHOP", "WORKSHOPS", "WORKSTATION", "WORKSTATIONS", "WORLD", "WORLDLY", "WORLDS", "WORLDWIDE", "WORM", "WORMS", "WORMWOOD", "WORN", "WORRIED", "WORRIES", "WORRY", "WORRYING", "WORSE", "WORSEN", "WORSENED", "WORSHIP", "WORSHIPPED", "WORSHIPPERS", "WORST", "WORTH", "WORTHING", "WORTHINGTON", "WORTHLESS", "WORTHWHILE", "WORTHY", "WOULD", "WOUND", "WOUNDED", "WOUNDING", "WOUNDS", "WOVEN", "WOW", "WRAP", "WRAPPED", "WRAPPERS", "WRAPPING", "WRATH", "WREATH", "WRECK", "WRECKAGE", "WRECKED", "WREN", "WRENCHED", "WRESTLING", "WRETCHED", "WREXHAM", "WRIGGLE", "WRIGGLED", "WRIGGLING", "WRIGHT", "WRINKLED", "WRINKLES", "WRIST", "WRISTS", "WRIT", "WRITE", "WRITER", "WRITERS", "WRITES", "WRITING", "WRITINGS", "WRITS", "WRITTEN", "WRONG", "WRONGFUL", "WRONGLY", "WRONGS", "WROTE", "WROUGHT", "WRY", "WRYLY", "WYATT", "WYCLIFFE", "WYCOMBE", "WYNDHAM", "WYRESDALE", "XEROX", "XIII", "YACHT", "YACHTING", "YACHTS", "YAKOVLEV", "YALE", "YAMAHA", "YANG", "YANKEE", "YANTO", "YARD", "YARDS", "YARDSTICK", "YARMOUTH", "YARN", "YARNS", "YARROW", "YATES", "YAWN", "YAWNED", "YAWNING", "YEA", "YEAH", "YEAR", "YEARLY", "YEARNING", "YEARS", "YEAST", "YEATS", "YELLED", "YELLING", "YELLOW", "YELTSIN", "YEMEN", "YEN", "YEOMAN", "YEOVIL", "YES", "YESTERDAY", "YET", "YEW", "YIELD", "YIELDED", "YIELDING", "YIELDS", "YOGA", "YOGHURT", "YOGURT", "YOKE", "YORK", "YORKS", "YORKSHIRE", "YOU", "YOUNG", "YOUNGER", "YOUNGEST", "YOUNGSTER", "YOUNGSTERS", "YOUR", "YOURS", "YOURSELF", "YOURSELVES", "YOUTH", "YOUTHFUL", "YOUTHS", "YUAN", "YUGOSLAV", "YUGOSLAVIA", "YUGOSLAVS", "YUPPIE", "YUSSUF", "YVES", "YVONNE", "ZACH", "ZAGREB", "ZAIRE", "ZAMBIA", "ZEAL", "ZEALAND", "ZEALOUS", "ZEBRA", "ZEINAB", "ZERO", "ZEST", "ZETA", "ZEUS", "ZHIVKOV", "ZIMBABWE", "ZINC", "ZIP", "ZODIAC", "ZONE", "ZONES", "ZOO", "ZOOLOGICAL", "ZOOM", "ZOOS", "ZURICH", "ZUWAYA", "ZZAP" };
char board[5][5];

vector<Trie> vec(26);
int nxt[8][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1} };
void make(Trie* t, int idx, int len) {
	if (len == strlen(word[idx]) - 1) {
		t->here = true;
		return;
	}
	if (t->child[word[idx][len + 1] - 'A'] == NULL) {
		t->child[word[idx][len + 1] - 'A'] = new Trie();
	}
	int tss = 0;
	for (int i = 0; i < 26; i++) {
		if (t->child[i] != NULL) tss++;
	}
	make(t->child[word[idx][len + 1] - 'A'], idx, len + 1);
}

set<vector<char>> rv;
int visited[5][5];
void dfs(Trie* t, int x, int y, int idx, vector<char> v) {
	int ret = 0;
	v[idx] = board[x][y];
	if (t->here) {
		rv.insert(v);
		ret++;
	}
	for (int i = 0; i < 8; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx < 0 || nx>4 || ny < 0 || ny>4 || t->child[board[nx][ny] - 'A'] == NULL || visited[nx][ny]) continue;
		visited[nx][ny] = 1;
		dfs(t->child[board[nx][ny] - 'A'],  nx, ny, idx + 1, v);
		visited[nx][ny] = 0;
	}

	return;
}

int main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cin >> board[i][j];
		}
	}

	for (i = 0; i < 24830; i++) {
		make(&vec[word[i][0]-'A'], i, 0);
	}

	for (i = 0; i < 26; i++) {
		int tmp = 0;
		for (j = 0; j < 26; j++) {
			if (vec[i].child[j] != NULL) tmp++;
		}
	}
	int ret = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			visited[i][j] = 1;
			dfs(&vec[board[i][j]-'A'], i, j, 0, vector<char>(20));
			visited[i][j] = 0;
		}
	}
	printf("%d", rv.size());
}*/

/*typedef struct roller { //6791 Oh Those Rollers
	int x;
	int y;
	int r;
}Roller;
int n, ret, visited[1081];
vector<Roller> vec;

double dist(int x1, int y1, int x2, int y2) {
	return (double)sqrt((x2-x1) * (x2 - x1) + (y2-y1) * (y2 - y1));
}

void dfs() {
	visited[ret] = 1;
	for (int i = 0; i < vec.size(); i++) {
		if (visited[i]) continue;
		if (dist(vec[ret].x, vec[ret].y, vec[i].x, vec[i].y) == (double)vec[ret].r + vec[i].r) {
			ret = i;
			dfs();
			break;
		}
	}
}
int main() {
	int i, x, y, r;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &x, &y, &r);
		vec.push_back({ x, y, r });
		if (x == 0 && y == 0) ret = i;
	}
	dfs();
	printf("%d %d", vec[ret].x, vec[ret].y);
}*/

/*typedef struct roller { // 6174 The Loathesome Hay Baler
	int x;
	int y;
	int r;
}Roller;
vector<Roller> vec;

double n, ret, xt, yt, visited[1051];

double dist(double x1, double y1, double x2, double y2) {
	return (double)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void dfs(int now, double val, double sum) {
	visited[now] = 1;
	if (vec[now].x == xt && vec[now].y == yt) {
		ret = sum;
		return;
	}
	for (int i = 0; i < vec.size(); i++) {
		if (visited[i]) continue;
		if (dist(vec[now].x, vec[now].y, vec[i].x, vec[i].y) == vec[now].r + vec[i].r) {
			double tmp = -(double)val * (double)vec[now].r / vec[i].r;
			dfs(i, tmp, sum + abs(tmp));
		}
	}
	return;
}
int main() {
	int i, now, a, b, r;
	scanf("%lf%lf%lf", &n, &xt, &yt);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &a, &b, &r);
		vec.push_back({ a, b, r });
		if (a == 0 && b == 0) now = i;
	}
	dfs(now, 10000, 10000);
	printf("%d", (int)ret);
}*/

/*int sum, n, m, cost[10000], visited[10000]; // 5033 Money Matters
vector<vector<int>> adj;

int dfs(int here) {
	visited[here] = 1;
	int ret = 1;
	sum += cost[here];
	for (auto it : adj[here]) {
		if (visited[it]) continue;
		ret += dfs(it);
	}
	return ret;
}
int main() {
	int i, a, b;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &cost[i]);
	}
	adj.resize(n + 1);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (i = 0; i < n; i++) {
		if (!visited[i]) {
			sum = 0;
			int num = dfs(i);
			if (sum % num) {
				printf("IMPOSSIBLE");
				return 0;
			}
		}
	}
	printf("POSSIBLE");
}*/

/*typedef struct road { // 1948 임계 경로
	int dest;
	int cost;
	int num;
}Road;

int n, m, x, y, visited[10001], dist[10001], maxa;
vector<vector<Road>> vec, radj;

int main() {
	int i, a, b, t;
	scanf("%d%d", &n, &m);
	vec.resize(n+1);
	radj.resize(n+1);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &t);
		vec[a].push_back({ b, t, i });
		radj[b].push_back({ a, t, i });
	}
	scanf("%d%d", &x, &y);

	for (i = 2; i <= n; i++) {
		dist[i] = -1;
	}
	priority_queue<pair<int, int>> pQue;
	pQue.emplace(0, 1);
	while (!pQue.empty()) {
		int d=pQue.top().first, here = pQue.top().second;
		pQue.pop();
		for (auto it : vec[here]) {
			if (dist[it.dest] < d + it.cost) {
				dist[it.dest] = d + it.cost;
				pQue.emplace(d+it.cost, it.dest);
			}
		}
	}

	int ret = 0;
	queue<int> que;
	que.push(y);
	while (!que.empty()) {
		int here = que.front();
		que.pop();
		for (auto it : radj[here]) {
			if (dist[here] - dist[it.dest] == it.cost) {
				ret++;
				if (!visited[it.dest]) {
					que.push(it.dest);
					visited[it.dest] = 1;
				}
			}
		}
	}
	printf("%d\n%d\n", dist[y], ret);
}*/

/*int val[100001]; // 1699 제곱수의 합
int main() {
	int i, j, n, ret=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		val[i] = 1e9;
	}
	for (i = 1; i <= 316; i++) {
		val[i * i] = 1;
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j*j <= i; j++) {
			val[i] = min(val[i], 1 + val[i-j*j]);
		}
	}
	printf("%d", val[n]);
}*/

/*int arr[31]; //2133 타일 채우기
int main() {
	int i, j, n;
	scanf("%d", &n);
	if (n % 2) printf("0");
	else {
		arr[0] = 1, arr[2]=3;
		for (i = 4; i <= n; i+=2) {
			arr[i] = arr[i - 2] * 3;
			for (j = 0; j <= i - 4; j+=2) {
				arr[i] += 2 * arr[j];
			}
		}
		printf("%d", arr[n]);
	}
}*/

/*int arr[201][201]; //2225 합 분해
int main() {
	int i, j, p, n, k;
	scanf("%d%d", &n, &k);
	for (i = 0; i <= 200; i++) {
		arr[0][i] = 0;
		arr[1][i] = 1;
		arr[i][0] = 1;
	}
	for (i = 2; i <= 200; i++) {
		for (j = 1; j <= 200; j++) {
			for (p = 0; p <= j; p++) {
				arr[i][j] += arr[i - 1][p];
				arr[i][j] %= 1000000000;
			}
		}
	}
	printf("%d", arr[k][n]);
}*/

/*typedef long long ll; //1890 점프
int n, board[100][100], nxt[2][2] = { {0, 1}, {1, 0}};
ll cache[100][100];

ll dp(int x, int y) {
	if (x == n - 1 && y == n - 1) return 1;
	ll& ret = cache[x][y];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 2; i++) {
		int nx = x + board[x][y] * nxt[i][0], ny = y + board[x][y] * nxt[i][1];
		if (nx >= n || ny >= n) continue;
		ret += dp(nx, ny);
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
			cache[i][j] = -1;
		}
	}
	printf("%lld", dp(0, 0));
}*/

/*int arr[100001][3]; //1309 동물원
int main() {
	int i, j, k, n;
	scanf("%d", &n);
	for (i = 0; i < 3; i++) {
		arr[1][i] = 1;
	}

	for (i = 1; i <= n; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				if (j != 0 && j == k) continue;
				arr[i][j] += arr[i - 1][k];
			}
			arr[i][j] %= 9901;
		}
	}
	printf("%d", (arr[n][0] + arr[n][1] + arr[n][2])%9901);
}*/

/*typedef long long ll; //5557 1학년
ll num[100], cache[100][21];
int n;

ll dp(int idx, int val) {
	if (val < 0 || val>20) return 0;
	if (idx == n - 1) {
		if (val == num[idx]) return 1;
		return 0;
	}
	ll& ret = cache[idx][val];
	if (ret != -1) return ret;
	ret = 0;
	ret += dp(idx + 1, val + num[idx]) + dp(idx + 1, val - num[idx]);
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		for(j=0; j<21; j++)cache[i][j] = -1;
	}
	printf("%lld", dp(1, num[0]));
}*/

/*int n, m, k, a, b, cache[16][16][2]; //10164 격자상의 경로

int dp(int x, int y, int chk) {
	if (x >= n || y >= m) return 0;
	if (x == n - 1 && y == m - 1) {
		return chk;
	}
	int& ret = cache[x][y][chk];
	if (ret != -1) return ret;
	if (x == a && y == b) chk = 1;
	ret = 0;
	ret += dp(x + 1, y, chk) + dp(x, y + 1, chk);
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d%d", &n, &m, &k);
	if(k) a = (k - 1) / m, b = (k - 1) % m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cache[i][j][0] = cache[i][j][1] = -1;
		}
	}
	printf("%d", dp(0, 0, 0));
}*/

/*int main() { //2631 줄 세우기
	int i, n, a;
	vector<int> lis;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		auto it = lower_bound(lis.begin(), lis.end(), a);
		if (it == lis.end()) lis.push_back(a);
		else *it = a;
	}
	printf("%d", n - lis.size());
}*/

/*typedef long long ll; // 9507 Generations of Tribbles
ll arr[68];
int main() {
	int i, t, n;
	scanf("%d", &t);
	arr[0] = arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (i = 4; i < 68; i++) arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
	while (t--) {
		scanf("%d", &n);
		printf("%lld\n", arr[n]);
	}
}*/

/*int n, s, m, arr[100], cache[100][1001]; // 1495 기타리스트

int dp(int idx, int vol) {
	if (vol<0 || vol>m) return -1;
	if (idx == n) return vol;
	int& ret = cache[idx][vol];
	if (ret!=-2) return ret;
	ret = -1;
	ret = max(ret, max(dp(idx+1, vol+arr[idx]), dp(idx+1, vol-arr[idx])));
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d%d", &n, &s, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		for (j = 0; j <= m; j++) cache[i][j] = -2;
	}
	printf("%d", dp(0, s));
}*/

/*int n, m, st[41], arr[41]; //2302 극장 좌석
int main() {
	int i, a;
	scanf("%d%d", &n, &m);
	arr[0] = 1, arr[1] = 1, arr[2] = 2;
	for (i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int prev=0, ret = 1;
	for (i = 0; i < m; i++) {
		scanf("%d", &a);
		ret *= arr[(a - prev-1)];
		prev = a;
	}
	ret *= arr[n - prev];
	printf("%d", ret);
}*/

/*int n, arr[20], cache[10001][20]; // 9084 동전

int dp(int money, int idx) {
	if (money < 0) return 0;
	if (money == 0) return 1;
	int& ret = cache[money][idx];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = idx; i < n; i++) {
		ret += dp(money - arr[i], i);
	}
	return ret;
}
int main() {
	int i, j, t, m, a;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		scanf("%d", &m);
		for(i = 0; i <= m; i++) {
			for (j = 0; j < n; j++) cache[i][j] = -1;
		}
		printf("%d\n", dp(m, 0));
	}
}*/

/*int n, m, dp[1000][1000]; //1915 가장 큰 정사각형
char board[1000][1000];
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		fgetc(stdin);
		for (j = 0; j < m; j++) {
			scanf("%c", &board[i][j]);
		}
	}
	int ret = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (i == 0 || j==0) dp[i][j] = board[i][j] - '0';
			else if(board[i][j]=='1'){
				if (dp[i - 1][j] == dp[i][j - 1]) {
					dp[i][j] = board[i - dp[i - 1][j]][j - dp[i][j - 1]] =='1' ? dp[i - 1][j] + 1 : dp[i - 1][j];
				}
				else {
					dp[i][j] = dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] + 1 : dp[i][j - 1] + 1;
				}
			}
			if (ret < dp[i][j]) ret = dp[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", dp[i][j]);
		}
		printf("\n");
	}
	printf("%d", ret*ret);
}*/

/*int dp[4000][4000]; // 5582 공통 부분 문자열
int main() {
	int i, j;
	string s, r;
	cin >> s >> r;
	int sl = s.length(), rl = r.length(), ret = 0;
	for (i = 0; i < sl; i++) {
		for (j = 0; j < rl; j++) {
			if (i == 0 || j==0) {
				if (s[i] == r[j]) dp[i][j] = 1;
			}
			else {
				if (s[i] == r[j]) dp[i][j] = 1;
				if (s[i] == r[j] && s[i-1]==r[j-1]) dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
			}
			ret = max(ret, dp[i][j]);
		}
	}

	cout << ret;
}*/

/*typedef struct imo { // 14226 이모티콘
	int num;
	int clip;
	int idx;
}Imo;
int s, cache[1031][1031];

int main() {
	int i, j;
	scanf("%d", &s);
	for (i = 0; i < 1031; i++) {
		for (j = 0; j < 1031; j++) cache[i][j] = -1;
	}
	queue<Imo> que;
	que.push({ 1, 0, 0 });
	while (!que.empty()) {
		int num = que.front().num, clipboard = que.front().clip, idx = que.front().idx;
		que.pop();
		if (num == s) {
			printf("%d", idx);
			return 0;
		}
		if (s + 30 < num || cache[num][clipboard] != -1) continue;
		cache[num][clipboard] = 1;
		if (num != clipboard) que.push({ num, num, idx + 1 });
		if (clipboard) que.push({ num + clipboard, clipboard, idx + 1 });
		que.push({ num - 1, clipboard, idx + 1 });
	}
}*/

/*int n, m, board[1000][1000], cache[1000][1000][4], nxt[3][2] = { {0, 1}, {1, 0}, {0, -1} }; // 2169 로봇 조종하기

int dp(int x, int y, int prev) {
	if (x == n - 1 && y == m - 1) return 0;
	int& ret = cache[x][y][prev];
	if (ret != -1) return ret;
	ret = -1e9;
	for (int i = 0; i < 3; i++) {	
		int nx = x + nxt[i][0], ny = y + nxt[i][1], k=0;
		if (nx<0 || nx>n - 1 || ny<0 || ny>m - 1 || (prev==0 && i==2) || (prev==2 && i==0)) continue;
		ret = max(ret, board[nx][ny] + dp(nx, ny, i));
	}
	return ret;
}

int main() {
	int i, j, k;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
			for (k = 0; k < 4; k++) cache[i][j][k] = -1;
		}
	}
	printf("%d", board[0][0] + dp(0, 0, 3));
}*/

/*int r[3], n, arr[301]; // 14697 방 배정하기
int main() {
	int i, j;
	for (i = 0; i < 3; i++) {
		scanf("%d", &r[i]);
		arr[r[i]] = 1;
	}
	scanf("%d", &n);
	for (i = 0; i < 3; i++) {
		for (j = r[i]; j <= n; j++) arr[j] += arr[j - r[i]];
	}
	printf("%d", arr[n]>0);
}*/

/*int main() { //9625 BABBA
	pair<int, int> arr[46];
	arr[0] = { 1, 0 };
	int i, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		arr[i] = { arr[i - 1].second, arr[i - 1].second + arr[i - 1].first };
	}
	printf("%d %d", arr[n].first, arr[n].second);
}*/

/*vector<char> cache[10001]; // 10826 피보나치 수 4
vector<char> vec;

vector<char> sum(vector<char> a, vector<char> b) {
	vector<char> res;
	int i, al = a.size(), bl = b.size(), carry = 0;
	if (al == bl) {
		res.resize(al);
		for (i = 0; i < al; i++) {
			int aval = a[i] - '0', bval = b[i] - '0', sum=carry + aval + bval;
			if (sum >= 10) {
				carry = 1;
				sum %= 10;
			}
			else carry = 0;
			res[i] = sum + '0';
		}
		if (carry == 1) res.push_back('1');
		return res;
	}
	else if (al < bl) {
		swap(a, b);
		swap(al, bl);
	}
	res.resize(al);
	for (i = 0; i < bl; i++) {
		int aval = a[i] - '0', bval = b[i] - '0', sum = carry + aval + bval;
		if (sum >= 10) {
			carry = 1;
			sum %= 10;
		}
		else carry = 0;
		res[i] = sum + '0';
	}
	while (i<al && carry == 1) {
		res[i] = a[i] + 1;
		if (res[i] > '9') {
			res[i] = '0';
		}
		else carry = 0;
		i++;
	}
	for (; i < al; i++) {
		res[i] = a[i];
	}
	if (i == al && carry == 1) {
		res.push_back('1');
	}
	return res;
}
vector<char> fibo(int idx) {
	if (idx <= 1) return vector<char>(1, idx+'0');
	if (cache[idx][0]!='-') return cache[idx];
	return cache[idx] = sum(fibo(idx - 1), fibo(idx - 2));
}
int main() {
	int i, n;
	for (i = 0; i < 10001; i++) {
		cache[i] = vector<char>(1);
		cache[i][0] = '-';
	}
	scanf("%d", &n);
	vector<char> ret = fibo(n);
	for (auto it = ret.rbegin(); it != ret.rend(); it++) {
		printf("%c", *it);
	}
}*/

/*int n, m, k; //1256 사전
long long arr[101][101];

void func(int an, int zn, int k) {
	if (an == 0) {
		while (zn != 0) {
			printf("z");
			zn--;
		}
		return;
	}

	if (zn == 0) {
		while (an != 0) {
			printf("a");
			an--;
		}
		return;
	}

	if (arr[an-1][zn] >= k) {
		printf("a");
		func(an - 1, zn, k);
	}
	else {
		printf("z");
		func(an, zn - 1, k-arr[an-1][zn]);
	}
}
int main() {
	int i, j;
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i <= n; i++) {
		for (j = 0; j <= m; j++) {
			if (i == 0 || j == 0) arr[i][j] = 1;
			else {
			    arr[i][j] = min((long long)2e9, arr[i - 1][j] + arr[i][j - 1]);
			}
		}
	}
	if (arr[n][m] < k) printf("-1");
	else {
		func(n, m, k);
	}
}*/

/*long long cache[81]; //13301 타일 장식물
long long fibo(int num) {
	if (num == 1) return 4;
	if (num == 2) return 6;
	if (cache[num]) return cache[num];
	return cache[num] = fibo(num - 1) + fibo(num - 2);
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", fibo(n));
}*/

/*int price[1001], dp[1001]; //16194 카드 구매하기 2
int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &price[i]);
		dp[i] = price[i];
	}
	for (i = 1; i <= n; i++) {
		for (j = i+1; j <= n; j++) {
			dp[j] = min(dp[j], price[i] + dp[j-i]);
		}
	}
	printf("%d", dp[n]);
}*/

/*int d, k; //2502 떡먹는 호랑이
pair<int, int> arr[31];

pair<int, int> sum(pair<int, int> a, pair<int, int> b) {
	return { a.first + b.first, a.second + b.second };
}
int main() {
	int i;
	scanf("%d%d", &d, &k);
	arr[1] = { 1, 0 };
	arr[2] = { 0, 1 };
	for (i = 3; i <= d; i++) {
		arr[i] = sum(arr[i - 1], arr[i - 2]);
	}
	
	int a = 1;
	while(true){
		int p = k - a * arr[d].first, q = arr[d].second;
		if (p % q == 0) {
			printf("%d\n%d\n", a, p / q);
			return 0;
		}
		a++;
	}
}*/

/*int arr[100][100][100]; // 1958 LCS 3
int func(string a, string b, string c) {
	int i, j, k, al=a.length(), bl=b.length(), cl=c.length();
	for (i = 0; i < al; i++) {
		for (j = 0; j < bl; j++) {
			for (k = 0; k < cl; k++) {
				arr[i][j][k] = 0;
			}
		}
	}
	for (i = 0; i < al; i++) {
		for (j = 0; j < bl; j++) {
			for (k = 0; k < cl; k++) {
				if (i == 0 || j == 0 || k==0) {
					if (a[i] == b[j] && b[j]==c[k]) arr[i][j][k] = 1;
					if ((i>0 && arr[i - 1][j][k] == 1) || (j>0 && arr[i][j - 1][k] == 1) || (k>0 && arr[i][j][k - 1] == 1)) arr[i][j][k] = 1;
				}
				else {
					if (a[i] == b[j] && b[j] == c[k]) {
						arr[i][j][k] = max(arr[i][j][k], arr[i - 1][j - 1][k - 1] + 1);
					}
					else arr[i][j][k] = max(arr[i][j - 1][k], max(arr[i - 1][j][k], arr[i][j][k-1]));
				}
			}		
		}
	}
	return arr[al - 1][bl - 1][cl-1];
}

int main() {
	int i, j;
	string a, b, c;
	cin >> a >> b >> c;
	cout<<func(a, b, c)<<endl;
}*/

/*int dp[100000][2], val[100000]; // 13398 연속합 2
int main() {
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &val[i]);
	}
	dp[0][0] = val[0], dp[0][1] = 0;
	int ret = dp[0][0];
	for (i = 1; i < n; i++) {
		dp[i][0] = max(dp[i - 1][0] + val[i], val[i]);
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][1] + val[i]);
		ret = max(ret, max(dp[i][0], dp[i][1]));
	}

	printf("%d", ret);
}*/

/*typedef long long ll; //4811 알약
ll cache[31][61];
ll dp(int x, int y) {
	if (x == 0 && y == 0) return 1;
	ll& ret = cache[x][y];
	if (ret != -1) return ret;
	ret = 0;
	if (x > 0) ret += dp(x - 1, y + 1);
	if (y > 0) ret += dp(x, y - 1);
	return ret;
}

int main() {
	int i, j, n;
	for (i = 0; i < 31; i++) {
		for (j = 0; j < 61; j++) {
			cache[i][j] = -1;
		}
	}
	while (true) {
		scanf("%d", &n);
		if (n == 0) break;
		printf("%lld\n", dp(n, 0));
	}
}*/

/*int main() { //2491 수열
	int i, n;
	vector<int> vec, tmp1, tmp2;
	scanf("%d", &n);
	vec.resize(n);
	for (i = 0; i < n; i++) {
		scanf("%d", &vec[i]);
	}
	
	tmp1.push_back(vec[0]);
	tmp2.push_back(vec[0]);
	int max1 = 1, max2 = 1;
	for (i = 1; i < n; i++) {
		if (tmp1.back() <= vec[i]) {
			tmp1.push_back(vec[i]);
			if(tmp1.size()==max1 + 1) max1++;
		}
		else {
			tmp1.clear();
			tmp1.push_back(vec[i]);
		}
		if (tmp2.back() >= vec[i]) {
			tmp2.push_back(vec[i]);
			if (tmp2.size() == max2 + 1) max2++;
		}
		else {
			tmp2.clear();
			tmp2.push_back(vec[i]);
		}
	}
	printf("%d", max1 > max2 ? max1 : max2);
}*/

/*int main() { // 2670 연속 최대곱
	int i, n;
	double arr[10000], dp[10000];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
	}
	double ret = dp[0] = arr[0];
	for (i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] * arr[i], arr[i]);
		ret = max(ret, dp[i]);
	}
	printf("%.3lf", ret);
}*/

/*int i, n, arr[1001]; // 9657 돌 게임 3
int main() {
	scanf("%d", &n);
	arr[1] = arr[3] = arr[4] = 1;
	for (i = 5; i <= n; i++) {
		arr[i] = ((arr[i - 1] & arr[i - 3] & arr[i - 4])+1)%2;
	}
	printf(arr[n] == 1 ? "SK" : "CY");
}*/

/*typedef long long ll; // 2688 줄어들지 않아
int t, n;
ll cache[10][64];
ll dp(int num, int idx) {
	if (idx == n) {
		return 1;
	}
	ll& ret = cache[num][idx];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = num; i <= 9; i++) {
		ret += dp(i, idx + 1);
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d", &t);
	while (t--) {
		for (i = 0; i < 10; i++) {
			for (j = 0; j < 64; j++) cache[i][j] = -1;
		}
		scanf("%d", &n);
		printf("%lld\n", dp(0, 0));
	}
}*/

/*string a, b, c; //2602 돌다리 건너기
int cache[101][20][2];
int dp(int here, int idx, int tog) {
	if (idx == a.length()) return 1;
	int& ret = cache[here + 1][idx][tog];
	if (ret != -1) return ret;
	ret = 0;
	string tmp = tog == 0 ? b : c;
	for (int i = here + 1; i < b.length(); i++) {
		if (tmp[i] == a[idx]) {
			ret += dp(i, idx + 1, (tog+1)%2);
		}
	}
	return ret;
}
int main() {
	int i, j;
	cin >> a >> b >> c;
	for (i = 0; i < 101; i++) {
		for (j = 0; j < 20; j++) {
			cache[i][j][0] = cache[i][j][1] = -1;
		}
	}
	cout << dp(-1, 0, 0) + dp(-1, 0, 1) << endl;
}*/

/*int coin[100], cNum[100], dp[10001]; //2624 동전 바꿔주기
int main() {
	int i, j, p, t, k;
	scanf("%d%d", &t, &k);
	for (i = 0; i < k; i++) {
		scanf("%d%d", &coin[i], &cNum[i]);
	}
	
	for (i = 0; i < k; i++) {
		vector<pair<int, int>> vec;
		for (j = 1; j <= t; j++) {
			if (dp[j]) {
				vec.emplace_back(j, dp[j]);
			}
		}
		for (auto it : vec) {
			int q = 0, here = coin[i];
			here += it.first;
			while (here <= t && q < cNum[i]) {
				dp[here]+=it.second;
				here += coin[i];
				q++;
			}
		}
		int q=0, here = coin[i];
		while (here <= t && q < cNum[i]) {
			dp[here]++;
			here += coin[i];
			q++;
		}
	}
	printf("%d", dp[t]);
}*/

/*int card[1000], cache[2][1000][1000]; // 11062 카드 게임

int dp(int turn, int l, int r) {
	if (l == r) {
		if (!turn) return card[l];
		else return 0;
	}
	int& ret = cache[turn][l][r];
	if (ret != -1) return ret;
	ret = 0;
	if (!turn) ret = max(card[l] + dp((turn + 1) % 2, l + 1, r), card[r] + dp((turn + 1) % 2, l, r - 1));
	else ret= min(dp((turn + 1) % 2, l + 1, r), dp((turn + 1) % 2, l, r - 1));
	return ret;
}
int main() {
	int i, j, n, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &card[i]);
		}
		memset(cache, -1, sizeof(cache));
		printf("%d\n", dp(0, 0, n - 1));
	}
}*/

/*int n, k, num[50000], sum[50000], cache[3][50000]; // 2616 소형기관차

int dp(int ni, int idx) {
	if (ni == 3) return 0;
	if (idx >= n) return -1e9;
	int& ret = cache[ni][idx];
	if (ret != -1) return ret;
	ret = 0;
	int s = 0;
	if (idx + k <= n) {
		for (int i = idx; i < idx + k; i++) {
			s += num[i];
		}
	}
	ret = max(s + dp(ni + 1, idx + k), dp(ni, idx + 1));
	return ret;
}
int main() {
	int i, j, p;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", num + i);
	}
	scanf("%d", &k);
	memset(cache, -1, sizeof(cache));
	printf("%d", dp(0, 0));
}*/

/*int main() { // 10211 Maximum Subarray
	int i, n, t, arr[1000], dp[1000];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		dp[0] = arr[0];
		for (i = 1; i < n; i++) {
			dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		}

		int m = -1e9;
		for (i = 0; i < n; i++) {
			m = max(m, dp[i]);
		}
		printf("%d\n", m);
	}
}*/

/*long long cache[101]; // 11058 크리보드
int main() {
	int i, j, n;
	scanf("%d", &n);
	cache[1] = 1;
	cache[2] = 2;
	cache[3] = 3;
	for (i = 4; i <= n; i++) {
		cache[i] = cache[i - 1] + 1;
		for (j = 3; i - j > 0; j++) {
			cache[i] = max(cache[i], cache[i - j] * (j - 1));
		}
	}
	printf("%lld", cache[n]);
}*/

/*int n, k, cache[101][101][2]; //2698 인접한 비트의 개수

int dp(int idx, int num, int prev){
	if (idx == 0) {
		if (num == 0) return 1;
		else return 0;
	}
	int& ret = cache[idx][num][prev];
	if (ret != -1) return ret;
	ret = 0;
	if (num != 0) {
		if (prev) ret += dp(idx - 1, num - 1, 1);
		else ret += dp(idx - 1, num, 1);
	}
	else {
		if (!prev) ret += dp(idx - 1, num, 1);
	}
	ret += dp(idx - 1, num, 0);
	return ret;
}
int main() {
	int t;
	scanf("%d", &t);
	memset(cache, -1, sizeof(cache));
	while (t--) {
		scanf("%d%d", &n, &k);
		printf("%d\n", dp(n, k, 0));
	}
}*/

/*string sum(string a, string b) { // 1793 타일링
	int carry=0, i, al = a.length(), bl = b.length();
	if (al < bl) {
		swap(a, b);
		swap(al, bl);
	}
	string tmp = a;
	for (i = 0; i < bl; i++) {
		tmp[i] = carry + a[i] + b[i]-'0';
		if (tmp[i] > '9') {
			carry = 1;
			tmp[i] -=10;
		}
		else carry = 0;
	}

	while (carry == 1) {
		if (i == al) {
			tmp.push_back('1');
			carry = 0;
		}
		else {
			tmp[i]++;
			if (tmp[i] == 10) tmp[i] = 0;
			else carry = 0;
			i++;
		}
	}
	return tmp;
}
int main() {
	int i, n;
	while (scanf("%d", &n)!=EOF) {
		string arr[251];
		arr[0]="1", arr[1] = "1", arr[2] = "3";
		for (i = 3; i <= n; i++) {
			string f = sum(arr[i - 2], arr[i - 2]);
			arr[i] = sum(f, arr[i - 1]);
		}
		reverse(arr[n].begin(), arr[n].end());
		cout << arr[n]<<endl;
	}
}*/

/*typedef long long ll; // 1351 무한 수열
ll n, p, q;
ll cache[1000000];
ll dp(ll here) {
	if (here == 0) return 1;
	if (here < 1000000) {
		ll& ret = cache[here];
		if (ret != -1) return ret;
		ret = 0;
		ret += dp((ll)floor((double)here / p)) + dp((ll)floor((double)here / q));
		return ret;
	}
	else {
		ll ret = 0;
		ret += dp((ll)floor((double)here / p)) + dp((ll)floor((double)here / q));
		return ret;
	}
}
int main() {
	scanf("%lld%lld%lld", &n, &p, &q);
	memset(cache, -1, sizeof(cache));
	printf("%lld", dp(n));
}*/

/*int main() { // 1269 대칭 차집합
	int i, a, b;
	scanf("%d%d", &a, &b);
	vector<int> av(a), bv(b), res(a+b), res2(a+b), res3((a+b) * 2);
	for (i = 0; i < a; i++) {
		scanf("%d", &av[i]);
	}
	for (i = 0; i < b; i++) {
		scanf("%d", &bv[i]);
	}
	sort(av.begin(), av.end());
	sort(bv.begin(), bv.end());
	auto it = set_difference(av.begin(), av.end(), bv.begin(), bv.end(), res.begin());
	res.erase(it, res.end());
	it = set_difference(bv.begin(), bv.end(), av.begin(), av.end(), res2.begin());
	res2.erase(it, res2.end());
	it = set_union(res.begin(), res.end(), res2.begin(), res2.end(), res3.begin());
	res3.erase(it, res3.end());
	printf("%d", res3.size());
}*/

/*const int MOD = 1e9; // 1788 피보나치 수의 확장
int cache[1000000];

int main() {
	int i, n;
	cache[0] = 0, cache[1] = 1;
	scanf("%d", &n);
	if (n < 0 && n % 2 == 0) printf("-1\n");
	else if (n == 0) printf("0\n");
	else printf("1\n");
	n = abs(n);
	for (i = 2; i <= n; i++) {
		cache[i] = (cache[i - 1] + cache[i - 2]) % MOD;
	}
	printf("%d\n", cache[n]);
}*/

/*int main() { //9658 돌 게임 4
	int i, n, arr[1001];
	scanf("%d", &n);
	arr[1] = arr[3] = 0;
	arr[2] = arr[4] = 1;
	for (i = 4; i <= n; i++) {
		if (arr[i - 4] == 1 && arr[i - 3] == 1 && arr[i - 1] == 1) arr[i] = 0;
		else arr[i] = 1;
	}
	printf(arr[n] ? "SK" : "CY");
}*/

/*int n, k, arr[20], cache[21][21][21]; //2666 벽장문의 이동
typedef struct closet {
	int a;
	int b;
	int idx;
	int move;
}Closet;
int main(){
	int i, a, b;
	scanf("%d%d%d%d", &n, &a, &b, &k);
	for (i = 0; i < k; i++) {
		scanf("%d", &arr[i]);
	}
	queue<Closet> que;
	que.push({ a, b, 0, 0 });
	int ret = 0;
	while (!que.empty()) {
		int one = que.front().a, two = que.front().b, idx = que.front().idx, move=que.front().move;
		if (one == arr[idx] || two == arr[idx]) {
			que.push({ one, two, idx + 1, move });
		}
		que.pop();
		if (idx == k) {
			ret = move;
			break;
		}
		if (cache[one][two][idx]) continue;
		cache[one][two][idx] = 1;
		if (one > 1) que.push({ one - 1, two, idx, move + 1 });
		if (one < n) que.push({ one + 1, two, idx, move + 1 });
		if (two > 1) que.push({ one, two - 1, idx, move + 1 });
		if (two < n) que.push({ one, two + 1, idx, move + 1 });
	}
	printf("%d", ret);
}*/

/*const int MAX = 1500000; // 15486 퇴사 2
int n, arr[MAX][2], cache[MAX];

int dp(int idx) {
	if (idx > n) return -1e9;
	if (idx == n) return 0;
	int& ret = cache[idx];
	if (ret != -1) return ret;
	ret = max(dp(idx+1), arr[idx][1] + dp(idx + arr[idx][0]));
	return ret;
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &arr[i][0], &arr[i][1]);
	}
	memset(cache, -1, sizeof(cache));
	printf("%d", dp(0));
}*/

/*int n, m, arr[100], cache[101][101]; //13302 리조트

int dp(int num, int coupon, int idx) {
	int tmp = idx;
	while (tmp<m-1 && num >= arr[tmp+1]) tmp++;
	if (num >= n+1) return 0;
	int& ret = cache[num][coupon];
	if (ret != -1) return ret;
	ret = 1e9;
	if (num == arr[tmp]) {
		ret = dp(num + 1, coupon, tmp + 1);
	}
	else {
		if (coupon>=3) ret = min(ret, dp(num + 1, coupon - 3, tmp));
		ret = min(ret, min(10000 + dp(num + 1, coupon, tmp),
					   min(25000 + dp(num + 3, coupon + 1, tmp),
						   37000 + dp(num + 5, coupon + 2, tmp))));
	}
	return ret;
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++) scanf("%d", &arr[i]);
	if (m == 0) arr[0] = -1;
	memset(cache, -1, sizeof(cache));
	printf("%d", dp(1, 0, 0));
}*/

/*const int MIN = -1e9; // 2228 구간 나누기
int n, m, arr[101], sum[101], cache[101][51];

int dp(int idx, int num) {
	if (num == m) return 0;
	if (idx > n) return MIN;
	int& ret = cache[idx][num];
	if (ret != -1) return ret;
	ret = MIN;
	ret = max(ret, dp(idx + 1, num));
	for (int i = idx; i <= n; i++) {
		ret = max(ret, sum[i]-sum[idx-1] + dp(i+2, num + 1));
	}
	return ret;
}
int main() {
	int i;
	scanf("%d%d", &n, &m);
	memset(cache, -1, sizeof(cache));
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		if (i == 1) sum[i] = arr[i];
		else sum[i] = sum[i - 1] + arr[i];
	}

	printf("%d", dp(1, 0));
}*/

/*const int MOD = 1e6; //1563 개근상
int n, cache[1000][3][4];
int dp(int idx, int l, int a) {
	if (idx == n) return 1;
	int& ret = cache[idx][l][a];
	if (ret != -1) return ret;
	ret = 0;
	ret = (ret+dp(idx + 1, l, 0))%MOD; //출석
	if (l == 0) ret = (ret + dp(idx + 1, 1, 0))%MOD; //지각
	if (a < 2) ret = (ret + dp(idx + 1, l, a + 1))%MOD; //결석
	return ret;
}
int main() {
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	printf("%d", dp(0, 0, 0));
}*/

/*int cache[30][30]; //16395 파스칼의 삼각형

int dp(int n, int k) {
	if (k == 0 || n == k) return 1;
	if (k == 1) return n;
	if (cache[n][k]) return cache[n][k];
	return cache[n][k] = dp(n - 1, k - 1) + dp(n-1, k);
}
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d", dp(n-1, k-1));
}*/

/*int n, arr[100000][3], cache[100000][3]; // 4883 삼각 그래프

int dp(int r, int c) {
	if (r == n - 1) {
		if (c == 2) return 1e9;
		if (c == 1) return arr[r][c];
	}
	int& ret = cache[r][c];
	if (ret != -1) return ret;
	ret = 1e9;
	if (c != 2) ret = min(ret, arr[r][c] + dp(r, c + 1));
	if (r != n - 1) {
		for (int i = c - 1; i <= c + 1; i++) {
			if (i < 0 || i > 2) continue;
			ret = min(ret, arr[r][c] + dp(r + 1, i));
		}
	}
	return ret;
}
int main() {
	int i, j, idx=1;
	while (true) {
		scanf("%d", &n);
		if (!n) break;
		memset(cache, -1, sizeof(cache));
		for (i = 0; i < n; i++) {
			for (j = 0; j < 3; j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		printf("%d. %d\n", idx++, dp(0, 1));
	}
}*/

/*vector<int> retV; //2662 기업투자
int n, m, arr[301][21], cache[301][21], back[301][21], maxa=0;

int dp(int money, int idx) {
	if (money == 0) return 0;
	if (idx == m + 1) return -1e9;
	int& ret = cache[money][idx];
	if (ret != -1) return ret;
	for (int i = 0; i <= money; i++) {
		int tmp = arr[i][idx] + dp(money - i, idx + 1);
		if (ret < tmp) {
			ret = tmp;
			back[money][idx] = i;
		}
	}
	return ret;
}
int main() {
	int i, j, a;
	scanf("%d%d", &n, &m);
	retV.resize(m + 1);
	memset(cache, -1, sizeof(cache));
	for (i = 1; i <= n; i++) {
		for (j = 0; j <= m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("%d\n", dp(n, 1));

	int here = n;
	for (i = 1; i <= m; i++) {
		printf("%d ", back[here][i]);
		here -= back[here][i];
	}
}*/

/*int n, health[20], pleasure[20], cache[20][101]; // 1535 안녕

int dp(int idx, int h) {
	if (h <= 0) return -1e9;
	if (idx == n) return 0;
	int& ret = cache[idx][h];
	if (ret != -1) return ret;
	ret = max(dp(idx + 1, h), pleasure[idx] + dp(idx + 1, h - health[idx]));
	return ret;
}
int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &health[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &pleasure[i]);
	}
	memset(cache, -1, sizeof(cache));
	printf("%d", dp(0, 100));
}*/

/*int n, arr[121], k[121], cache[300001]; // 1660 캡틴 이다솜
int main() {
	scanf("%d", &n);
	int i, idx = 1;
	arr[0] = 1, k[0] = 1;
	while (true) {
		arr[idx] = arr[idx - 1] + idx + 1;
		k[idx] = k[idx - 1] + arr[idx];
		if (k[idx] > n) break;
		idx++;
	}
	queue<pair<int, int>> que;
	que.emplace(n, 0);
	while (!que.empty()) {
		int here = que.front().first, num=que.front().second;
		que.pop();
		if (cache[here]) continue;
		cache[here] = 1;
		if (here == 0) {
			printf("%d", num);
			return 0;
		}
		for (i = 120; i >=0; i--) {
			if (here - k[i] < 0) continue;
			que.emplace(here - k[i], num + 1);
		}
	}
}*/

/*int i, n, a, m = 0, cache[1000001]; //7570 줄 세우기
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (cache[a - 1] == 0) cache[a] = 1;
		else cache[a] = cache[a - 1] + 1;
		if (m < cache[a]) m = cache[a];
	}
	printf("%d", n-m);
}*/

/*const int MOD = 1e9; // 2410 2의 멱수의 합
int i, j, n, cache[1000001];
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i*=2) {
		cache[i]++;
		for (j = i + 1; j <= n; j++) {
			cache[j] += cache[j-i];
			cache[j] %= MOD;
		}
	}
	printf("%d", cache[n]);
}*/

/*long long cache[36]; // 13699 점화식
long long dp(int n) {
	if (n == 0) return 1;
	if (cache[n]) return cache[n];
	long long tmp = 0;
	for (int i = 0; i < n; i++) {
		tmp += dp(i) * dp(n - i - 1);
	}
	return cache[n]=tmp;
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", dp(n));
}*/

/*int cache[101][101][101]; // 9184 신나는 함수 실행
int dp(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20) return dp(20, 20, 20);
	int& ret = cache[a + 50][b + 50][c + 50];
	if (ret) return ret;
	if (a < b && b < c) return ret = dp(a, b, c - 1) + dp(a, b - 1, c - 1) - dp(a, b - 1, c);
	else return ret = dp(a - 1, b, c) + dp(a-1, b-1, c) + dp(a - 1, b, c - 1) - dp(a - 1, b - 1, c - 1);
}
int main() {
	int a, b, c;
	while(true){
		scanf("%d%d%d", &a, &b, &c);
		if (a == -1 && b == -1 && c == -1) return 0;
		printf("w(%d, %d, %d) = %d\n", a, b, c, dp(a, b, c));
	}
}*/

/*typedef long long ll; // 17069 파이프 옮기기 2
int n, board[33][33];
ll cache[33][33][33][33];

ll dp(int ax, int ay, int bx, int by, int mod) {
	if ((ax == n && ay == n) || (bx == n && by == n)) return 1;
	ll& ret = cache[ax][ay][bx][by];
	if (ret != -1) return ret;
	ret = 0;
	switch (mod) {
	case 0: //가로
		if (by < n && board[bx][by + 1] == 0) {
			if (bx < n && board[bx + 1][by + 1] == 0 && board[bx + 1][by] == 0) {
				ret += dp(bx, by, bx + 1, by + 1, 1); //대각선
			}
			ret += dp(bx, by, bx, by + 1, 0); //가로
		}
		break;
	case 1: //대각선
		if (by < n && board[bx][by + 1] == 0) {
			if (bx < n && board[bx + 1][by + 1] == 0 && board[bx + 1][by] == 0) {
				ret += dp(bx, by, bx + 1, by + 1, 1); //대각선
			}
			ret += dp(bx, by, bx, by + 1, 0); //가로
		}
		if (bx < n && board[bx + 1][by] == 0)
			ret += dp(bx, by, bx + 1, by, 2); //세로
		break;
	case 2: //세로
		if (bx < n && board[bx + 1][by] == 0) {
			if (by < n && board[bx + 1][by + 1] == 0 && board[bx][by + 1] == 0) {
				ret += dp(bx, by, bx + 1, by + 1, 1); //대각선
			}
			ret += dp(bx, by, bx + 1, by, 2); //세로
		}
		break;
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	printf("%lld", dp(1, 1, 1, 2, 0));
}*/

/*int i, n, arr[31]; //1720 타일 코드
int main() {
	scanf("%d", &n);
	arr[0] = 1, arr[1] = 1, arr[2] = 3;
	for (i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + 2 * arr[i - 2];
	}
	int ret;
	if (n % 2) ret = arr[n / 2];
	else ret = arr[n / 2 + 1];
	printf("%d", (arr[n] + ret)/2);
}*/

/*int n, arr[100][2], cache[1001][1001]; //2643 색종이 올려놓기

int dp(int w, int h) {
	int& ret = cache[w][h];
	if (ret != -1) return ret;
	ret = 1;
	for (int i = 0; i < n; i++) {
		if ((w == arr[i][0] && h == arr[i][1]) || (h == arr[i][0] && w == arr[i][1])) continue;
		if (w >= arr[i][0] && h >= arr[i][1]) ret = max(ret, 1 + dp(arr[i][0], arr[i][1]));
		if (w >= arr[i][1] && h >= arr[i][0]) ret = max(ret, 1 + dp(arr[i][1], arr[i][0]));
	}
	return ret;
}
int main() {
	int i;
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) {
		scanf("%d%d", &arr[i][0], &arr[i][1]);
	}
	printf("%d", dp(1000, 1000)-1);
}*/

/*int n, arr[5000], cache[5000][5000]; //1695 팰린드롬 만들기

int dp(int l, int r) {
	if (l >= r) return 0;
	int& ret = cache[l][r];
	if (ret != -1) return ret;
	ret = 1e9;
	if (arr[l] != arr[r]) {
		ret = min(1 + dp(l + 1, r), 1 + dp(l, r - 1));
	}
	else ret = min(ret, dp(l + 1, r - 1));
	return ret;
}
int main() {
	int i;
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	printf("%d", dp(0, n - 1));
}*/

/*int n, arr[1000], cache[1000], minMax[1000][1000]; //2229 조 짜기

int dp(int here) {
	if (here == n) return 0;
	int& ret = cache[here];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = here; i < n; i++) {
		ret = max(ret, minMax[here][i] + dp(i+1));
	}
	return ret;
}
int main() {
	int i, j;
	memset(cache, -1, sizeof(cache));
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (i = 0; i < n; i++) {
		int mina = arr[i], maxa = arr[i];
		for (j = i; j < n; j++) {
			if (i == j) minMax[i][j] = 0;
			else {
				if (arr[j] < mina) mina = arr[j];
				if (arr[j] > maxa) maxa = arr[j];
				minMax[i][j] = maxa - mina;
			}
		}
	}
	printf("%d", dp(0));
}*/

/*int main() { //2718 타일 채우기
	int i, j, t, n, arr[25];
	scanf("%d", &t);
	arr[0]=1, arr[1] = 1, arr[2] = 5;
	for (i = 3; i < 25; i++) {
		arr[i] = arr[i - 1] + 4 * arr[i - 2];
		for (j = i - 3; j >= 0; j--) {
			if ((i+j) % 2) arr[i] += arr[j] * 2;
			else arr[i] += arr[j] * 3;
		}
	}

	while (t--) {
		scanf("%d", &n);
		printf("%d\n", arr[n]);
	}
}*/

/*int n, arr[10001], cache[10001][2]; // 2213 트리의 독립집합
vector<vector<int>> adj;
vector<int> vec;
int dp(int here, int prev, int isChk) {
	int& ret = cache[here][isChk];
	if (ret != -1) return ret;
	if (isChk) ret = arr[here];
	else ret = 0;
	for (auto it : adj[here]) {
		int tmp = 0;
		if (it==prev) continue;
		if (!isChk) tmp=dp(it, here, 1);
		tmp = max(tmp, dp(it, here, 0));
		ret += tmp;
	}
	return ret;
}

void dfs(int here, int prev, int isChk) {
	if (isChk) {
		vec.push_back(here);
	}
	for (auto it : adj[here]) {
		if (prev == it) continue;
		if (isChk || cache[it][0]>cache[it][1]) dfs(it, here, 0);
		else dfs(it, here, 1);
	}
}

int main() {
	int i, a, b;
	scanf("%d", &n);
	adj.resize(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		cache[i][0] = -1;
		cache[i][1] = -1;
	}
	adj[0].push_back(1);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int sum, p=dp(1, 0, 0), q=dp(1, 0, 1);
	sum = p > q ? p : q;
	printf("%d\n", sum);
	if (sum == q) dfs(1, 0, 1);
	else dfs(1, 0, 0);
	sort(vec.begin(), vec.end());
	for (auto it : vec) {
		printf("%d ", it);
	}
}*/

/*int main() { //14495 피보나치 비스무리한 수열
	int i, n;
	long long arr[117];
	scanf("%d", &n);
	arr[1] = arr[2] = arr[3] = 1;
	for (i = 4; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 3];
	}
	printf("%lld", arr[n]);
}*/

/*int i, j, n, arr[100001], a[2] = { 2, 5 }; // 14916 거스름돈
int main() {
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		arr[i] = 1e9;
	}
	for (i = 0; i < 2; i++) {
		arr[a[i]]=1;
		for (j = 1; j + a[i] <= n; j++) {
			if (arr[j]!=1e9) arr[j + a[i]] = min(arr[j+a[i]], 1 + arr[j]);
		}
	}
	printf("%d", arr[n]==1e9 ? -1 : arr[n]);
}*/

/*int k;
vector<vector<pair<int, int>>> adj;
int main() {
	int i, a;
	scanf("%d", &k);
	adj.resize((int)pow(2, k)-1);
	for (i = 1; i < (int)pow(2, k); i++) {
		scanf("%d", &a);
		adj[(i+1) / 2].emplace_back(i+1, a);
	}
}*/

/*int k, arr[1 << 21 + 1], leaf[1 << 20], cache[1<<21 + 1], maxa; // 13325 이진 트리
int dfs(int here) {
	if (pow(2, k)-1 <= here) return arr[here];
	int ret = 0;
	ret = arr[here] + max(dfs(here * 2 + 1), dfs(here * 2 + 2));
	cache[here+1]=ret-arr[here];
	return ret;
}

int func(int idx) {
	if (idx >= pow(2, k)) return 0;
	int ret = 0, a = idx * 2 - 1, b = idx * 2;
	ret += cache[idx]-(arr[a] + cache[idx * 2]) + cache[idx] - (arr[b]+cache[idx * 2 + 1]) + func(idx*2) + func(idx*2+1);
	return ret;
}
int main() {
	int i, sum = 0;
	scanf("%d", &k);
	for (i = 1; i < (int)pow(2, k + 1) - 1; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	maxa=dfs(0);
	printf("%d", sum + func(1));
}*/

/*long long arr[5001]; //10422 괄호
const int MOD = 1e9 + 7;
int main() {
	int i, j, t, n;
	scanf("%d", &t);
	arr[2] = 1;
	for (i = 4; i <= 5000; i++) {
		if (i % 2) arr[i] = 0;
		else {
			arr[i] = 2 * arr[i - 2];
			for (j = 4; j <= i; j += 2) {
				arr[i] += arr[i - j] * arr[j - 2];
				arr[i] %= MOD;
			}
		}
	}
	while (t--) {
		scanf("%d", &n);
		printf("%d\n", arr[n]);
	}
}*/

/*int n, m, k, adj[301][301], cache[301][301]; // 2157 여행

int dp(int here, int num) {
	if (here == n) {
		if (num <= m) return 0;
	}
	if (num > m) return -1e9;
	int& ret = cache[here][num];
	if (ret != -1) return ret;
	ret = -1e9;
	for (int i = here+1; i <= n; i++) {
		if(adj[here][i]) ret = max(ret, adj[here][i] + dp(i, num+1));
	}
	return ret;
}
int main() {
	int i, a, b, c;
	scanf("%d%d%d", &n, &m, &k);
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < k; i++) {
		scanf("%d%d%d", &a, &b, &c);
		if (adj[a][b] < c) adj[a][b] = c;
	}
	int p = dp(1, 1);
	printf("%d", p<0 ? 0 : p);
}*/

/*int arr[10001]; //4781 사탕 가게
int main() {
	int i, j, n, m, a;
	double d;
	while (true) {
		scanf("%d%lf", &n, &d);
		m = (int)(d * 100 + 0.5);
		if (n == 0 && m == 0) return 0;
		memset(arr, 0, sizeof(arr));
		for (i = 0; i < n; i++) {
			scanf("%d%lf", &a, &d);
			int t = (int)(d  * 100 + 0.5);
			arr[t]=max(arr[t], a);
			for (j = 1; j + t <= m; j++) {
				arr[j + t] = max(arr[j+t], arr[j] + a);
			}
		}
		int maxa = 0;
		for (i = 1; i <= m; i++) {
			if (arr[i] > maxa) maxa = arr[i];
		}
		printf("%d\n", maxa);
	}
}*/

/*int n, t, tm[100], score[100], cache[100][10001]; //14728 벼락치기

int dp(int idx, int w) {
	if (idx>=n || w >= t) return 0;
	int& ret = cache[idx][w];
	if (ret != -1) return ret;
	ret = 0;
	if (w + tm[idx] <= t) ret = max(dp(idx + 1, w), score[idx] + dp(idx + 1, w + tm[idx]));
	else ret = dp(idx + 1, w);
	return ret;
}
int main() {
	int i, a, b;
	scanf("%d%d", &n, &t);
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) {
		scanf("%d%d", &tm[i], &score[i]);
	}
	printf("%d", dp(0, 0));
}*/

/*string s; //2591 숫자카드
long long len, cache[40];

bool chk(int idx) {
	if (s[idx] <= '3') {
		if (s[idx] == '3') {
			if (idx < len - 1 && s[idx + 1] <= '4') return true;
			else return false;
		}
		else if (idx < len - 1) return true;
		else return false;
	}
	
	return false;
}
long long dp(int idx) {
	if (s[idx] == '0') return 0;
	if (idx == len) return 1;
	long long& ret = cache[idx];
	if (ret != -1) return ret;
	ret = 0;
	if (chk(idx)) ret += dp(idx + 2);
	ret += dp(idx + 1);
	return ret;
}
int main() {
	cin >> s;
	memset(cache, -1, sizeof(cache));
	len = s.length();
	cout << dp(0);
}*/

/*int n, num[10001], cache[10001][2]; //1949 우수 마을
vector<vector<int>> adj;

int dp(int here, int chk, int prev) {
	int &ret = cache[here][chk];
	if (ret != -1) return ret;
	ret = 0;
	for (auto it : adj[here]) {
		if (it == prev) continue;
		if (chk) ret += dp(it, 0, here);
		else ret += max(dp(it, 0, here), dp(it, 1, here) + num[it]);
	}
	return ret;
}
int main() {
	int i, a, b;
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	adj.resize(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	printf("%d", max(dp(1, 0, -1), dp(1, 1, -1) + num[1]));
}*/

/*int n, cache[1000000][2]; // 2533 사회망 서비스(SNS)
vector<vector<int>> adj;

int dp(int here, int chk, int prev) {
	int& ret = cache[here][chk];
	if (ret != -1) return ret;
	ret = 0;
	for (auto it : adj[here]) {
		if (it == prev) continue;
		if (chk) ret += min(dp(it, 0, here), dp(it, 1, here) + 1);
		else ret += dp(it, 1, here) + 1;
	}
	return ret;
}
int main() {
	int i, a, b;
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	adj.resize(n + 1);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	printf("%d", min(dp(1, 0, -1), dp(1, 1, -1) + 1));
}*/

/*const int MOD = 1e9 + 7; // 14852 타일 채우기 3
long long arr[1000001], sum[1000001];
int main() {
	int i, j, n;

	scanf("%d", &n);
	arr[0] = sum[0] = 1, arr[1] = 2, sum[1] = 3;
	for (i = 2; i <= n; i++) {
		arr[i] = (2 * arr[i - 1] + 3 * arr[i - 2]) % MOD;
		if(i != 2) arr[i] += 2 * sum[i - 3];
		arr[i] %= MOD;
		sum[i] = (sum[i - 1] + arr[i]) % MOD;
	}
	printf("%lld", arr[n]);
}*/

/*int main() { // 8394 악수
	int i, n, a, b, c;
	scanf("%d", &n);
	a = 1, b = 2;
	if (n < 3) printf("%d", n);
	else {
		for (i = 3; i <= n; i++) {
			c = a + b;
			c %= 10;
			a = b;
			b = c;
		}
		printf("%d", c);
	}
}*/

/*const int MOD = 1e9 + 7; //14494 다이나믹이 뭐에요?
long long arr[1001][1001];
int main() {
	int i, j, n, m;
	scanf("%d%d", &n, &m);

	for (i = 1; i <= n; i++) {
		arr[i][1] = 1;
	}

	for (i = 1; i <= m; i++) {
		arr[1][i] = 1;
	}

	for (i = 2; i <= n; i++) {
		for (j = 2; j <= m; j++) {
			arr[i][j] = (arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1]) % MOD;
		}
	}
	printf("%lld", arr[n][m]);
}*/

/*int n, m, board[301][301], cache[301][301]; // 14430 자원 캐기

int dp(int x, int y) {
	if (x > n || y > m) return -1e9;
	if (x == n && y == m) return board[x][y];
	int& ret = cache[x][y];
	if (ret != -1) return ret;
	ret = 0;
	ret = board[x][y] + max(dp(x + 1, y), dp(x, y + 1));
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	memset(cache, -1, sizeof(cache));
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) scanf("%d", &board[i][j]);
	}
	printf("%d", dp(1, 1));
}*/

/*int main() { //17175 피보나치는 지겨웡~
	int i, n, a, b, c, MOD=1e9+7;
	scanf("%d", &n);
	a = 1, b = 1;
	if (n < 2) printf("1");
	else {
		for (i = 2; i <= n; i++) {
			c = a + b + 1;
			c %= MOD;
			a = b;
			b = c;
		}
		printf("%d", c);
	}
}*/

/*char str[501]; //2306 유전자
int cache[501][501];

int dp(int s, int e) {
	if (s == e) return 0;
	int& ret = cache[s][e];
	if (ret != -1) return ret;
	ret = 0;
	if ((str[s] == 'a' && str[e] == 't') || (str[s] == 'g' && str[e] == 'c')) ret = dp(s + 1, e - 1) + 2;
	for (int i = s; i < e; i++) {
		ret = max(ret, dp(s, i) + dp(i + 1, e));
	}
	return ret;
}
int main() {
	memset(cache, -1, sizeof(cache));
	scanf("%s", str);
	printf("%d", dp(0, strlen(str)-1));
}*/

/*typedef struct scv { // 12869 뮤탈리스크
	int a;
	int b;
	int c;
	int num;
}SCV;
int dp[61][61][61];
int main() {
	int i, n, a, b, c = 0;
	scanf("%d", &n);
	if (n == 1) {
		scanf("%d", &a);
		printf("%d", (a - 1) / 9 + 1);
		return 0;
	}
	if (n == 2) scanf("%d%d", &a, &b);
	else scanf("%d%d%d", &a, &b, &c);
	queue<SCV> que;
	que.push({ a, b, c, 0 });
	while (!que.empty()) {
		int qa = que.front().a, qb = que.front().b, qc = que.front().c, num = que.front().num;
		que.pop();
		if (qa <= 0 && qb <= 0 && qc <= 0) {
			printf("%d", num);
			return 0;
		}
		if (dp[qa][qb][qc]) continue;
		dp[qa][qb][qc] = 1;
		if (qc == 0) {
			que.push({ max(0, qa - 9), max(0, qb - 3), qc, num + 1 });
			que.push({ max(0, qa - 3), max(0, qb - 9), qc, num + 1 });
		}
		else {
			que.push({ max(0, qa - 9), max(0, qb - 3), max(0, qc - 1), num + 1 });
			que.push({ max(0, qa - 9), max(0, qb - 1), max(0, qc - 3), num + 1 });
			que.push({ max(0, qa - 1), max(0, qb - 9), max(0, qc - 3), num + 1 });
			que.push({ max(0, qa - 3), max(0, qb - 9), max(0, qc - 1), num + 1 });
			que.push({ max(0, qa - 1), max(0, qb - 3), max(0, qc - 9), num + 1 });
			que.push({ max(0, qa - 3), max(0, qb - 1), max(0, qc - 9), num + 1 });
		}
	}
}*/

/*const int NINF = -1e9; // 14863 서울에서 경산까지
int n, k, foot[100][2], cycle[100][2], cache[100][100001];

int dp(int idx, int tm) {
	if (tm < 0) return NINF;
	if (idx == n) return 0;
	int& ret = cache[idx][tm];
	if (ret != -1) return ret;
	ret = max(foot[idx][1] + dp(idx + 1, tm - foot[idx][0]), cycle[idx][1] + dp(idx + 1, tm - cycle[idx][0]));
	return ret;
}
int main(){
	int i;
	scanf("%d%d", &n, &k);
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &foot[i][0], &foot[i][1], &cycle[i][0], &cycle[i][1]);
	}
	printf("%d", dp(0, k));
}*/

/*int prime[7] = { 2, 3, 5, 7, 11, 13, 17 }; //1344 축구
double p, q, cache[18][18][18];

double dp(int idx, int a, int b) {
	if (idx == 18) {
		for (int i = 0; i < 7; i++) {
			if (a == prime[i] || b == prime[i]) return 1;
		}
		return 0;
	}
	double& ret = cache[idx][a][b];
	if (ret != -1) return ret;
	ret = 0;
	ret += (1-p) * (1-q) * dp(idx+1, a, b) 
		+ p*q*dp(idx+1, a+1, b+1) 
		+ p *(1-q) * dp(idx+1, a+1, b)
		+ (1-p) * q * dp(idx+1, a, b+1);
	return ret;
}
int main() {
	int i, j, k, a, b;
	for (i = 0; i < 18; i++) {
		for (j = 0; j < 18; j++) {
			for (k = 0; k < 18; k++) cache[i][j][k] = -1;
		}
	}
	scanf("%d%d", &a, &b);
	p = (double)a / 100, q = (double)b / 100;
	printf("%lf", dp(0, 0, 0));
}*/

/*int m, n, board[100000], cache[100000][2]; //5721 사탕 줍기 대회
int dp(int idx, int chk) {
	if (idx >= m * n) return 0;
	if (idx % n == 0 && chk == 1) {
		return dp(idx + n, 0);
	}
	int& ret = cache[idx][chk];
	if (ret != -1) return ret;
	if ((idx + 1) % n) ret = max(board[idx] + dp(idx + 2, 1), dp(idx + 1, chk));
	else ret = max(board[idx] + dp(idx + 1, 1), dp(idx + 1, chk));
	return ret;
}
int main() {
	int i, j;
	while (true) {
		scanf("%d%d", &m, &n);
		memset(cache, -1, sizeof(cache));
		if (m == 0 && n == 0) return 0;
		for (i = 0; i < m * n; i++) {
			scanf("%d", &board[i]);
		}
		printf("%d\n", dp(0, 0));
	}
}*/

/*const int MOD = 987654321; //1670 정상 회담 2
long long arr[10001];
int main() {
	int i, j, n;
	scanf("%d", &n);
	arr[0] = arr[2] = 1;
	for (i = 4; i <= n; i += 2) {
		for (j = 2; j <= i; j += 2) {
			arr[i] += arr[j-2] * arr[i - j];
			arr[i] %= MOD;
		}
	}
	printf("%lld", arr[n]);
}*/

/*typedef struct brick {
	int area;
	int weight;
	int height;
}Brick;

Brick br[100];
int n, cache[10001][10001];
vector<int> vRet;
int dp(int a, int w, int idx, vector<int> vec) {
	int& ret = cache[a][w];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < n; i++) {
		if (a > br[i].area && w > br[i].weight) {
			vec[idx] = i+1;
			int tmp = br[i].height + dp(br[i].area, br[i].weight, idx + 1, vec);
			printf("a : %d, w : %d, idx : %d, tmp : %d\n", a, w, idx, tmp);
			if (ret < tmp) {
				ret = tmp;
				vRet.clear();
				for (auto it : vec) {
					if (it == -1) break;
					vRet.push_back(it);
				}
			}
		}
	}
	return ret;
}
int main() {
	int i;
	memset(cache, -1, sizeof(cache));
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &br[i].area, &br[i].height, &br[i].weight);
	}
	printf("%d\n", dp(1e9, 1e9, 0, vector<int>(100, -1)));
	for (auto it : vRet) {
		printf("%d\n", it);
	}
}*/

/*typedef struct brick { //2655 가장 높은 탑쌓기
	int area;
	int height;
	int weight;
	int index;
}Brick;

int n, dp[101], parent[101];
Brick br[101];

void bSort() {
	for (int i = n; i > 1; i--) {
		for (int j = 1; j < i; j++) {
			if (br[j].area > br[j + 1].area) swap(br[j], br[j + 1]);
		}
	}
}
int main() {
	int i, j, k, mh = 0, mi = 1, a, b, c;
	scanf("%d", &n);
	if (n == 0) {
		return 0;
	}
	for (i = 1; i <= n; i++) {
		scanf("%d%d%d", &a, &b, &c);
		br[i] = { a, b, c, i };
		parent[i] = i;
	}
	bSort();

	for (i = 1; i <= n; i++) {
		dp[i] = br[i].height;
	}
	for (i = 1; i <= n; i++) {
		for (j = i-1; j >= 0; j--) {
			if (br[i].weight > br[j].weight) {
				if (dp[i] < dp[j] + br[i].height) {
					dp[i] = dp[j] + br[i].height;
					parent[i] = j;
				}
			}
			if (mh < dp[i]) {
				mh = dp[i];
				mi = i;
			}
		}
	}

	
	vector<int> ret;
	while (true) {
		ret.push_back(br[mi].index);
		if (mi == parent[mi]) break;
		mi = parent[mi];
	}
	printf("%d\n", ret.size());
	reverse(ret.begin(), ret.end());
	for (auto it : ret) {
		printf("%d\n", it);
	}
}*/

/*typedef long long ll; //2300 기지국
int n;
ll cache[10000];
vector<pair<int, int>> pnt;

ll dp(int idx) {
	if (idx >= n) return 0;
	ll& ret = cache[idx];
	if (ret != -1) return ret;
	ret = 1e11;
	int dist = abs(pnt[idx].second) * 2;
	for (int i = idx; i < n; i++) {
		dist = max(dist, abs(pnt[idx].first - pnt[i].first));
		if (pnt[idx].second * pnt[i].second < 0) {
			dist = max(dist, 2*max(abs(pnt[idx].second), abs(pnt[i].second)));
		}
		else dist = max(dist, max(abs(pnt[idx].second) * 2, abs(pnt[i].second) * 2));
		ret = min(ret, dist + dp(i+1));
	}
	return ret;
}
int main() {
	int i, a, b;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		pnt.push_back({ a, b });
		cache[i] = -1;
	}
	sort(pnt.begin(), pnt.end());
	printf("%lld", dp(0));
}*/

/*int ret, n, weight[13], chk[2600001]; //17610 양팔저울

void dfs(int idx, int val) {
	if (idx == n) {
		if (val > 0 && !chk[val]) {
			ret++;
			chk[val] = 1;
		}
		return;
	}
	dfs(idx + 1, val);
	dfs(idx + 1, val + weight[idx]);
	dfs(idx + 1, val - weight[idx]);
}
int main() {
	int i, s=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &weight[i]);
		s += weight[i];
	}
	dfs(0, 0);
	printf("%d\n", s-ret);
}*/

/*const int MOD = 1e9 + 7; //15624 피보나치 수 7
int main() {
	int n, i, a=0, b=1, c;
	scanf("%d", &n);
    if(n<2){
        printf("%d", n);
        return 0;
    }
	for(i=2; i<=n; i++){
        c=(a+b)%MOD;
        a=b;
        b=c;
    }
    printf("%d", c);
}*/

/*const int DIV = 1e5; //5569 출근 경로
int w, h, cache[101][101][2][2], nxt[2][2] = { {1, 0}, {0, 1} };

int dp(int x, int y, int prevDir, int prevRotate) {
	if (x == w && y == h) return 1;
	if (x > w || y > h) return 0;
	int& ret = cache[x][y][prevDir][prevRotate];
	if (ret != -1) return ret;
	ret = 0;
	if (prevDir == -1) {
		ret += dp(x + 1, y, 0, 0) + dp(x, y + 1, 1, 0);
		ret %= DIV;
		return ret;
	}
	else {
		ret += dp(x + nxt[prevDir][0], y + nxt[prevDir][1], prevDir, 0);
		ret %= DIV;
	}
	if (!prevRotate) {
		ret += dp(x + nxt[(prevDir + 1) % 2][0], y + nxt[(prevDir + 1) % 2][1], (prevDir + 1) % 2, 1);
		ret %= DIV;
	}
	return ret;
}

int main() {
	scanf("%d%d", &w, &h);
	memset(cache, -1, sizeof(cache));
	printf("%d", dp(1, 1, -1, 0));
}*/

/*int a, b, d, n, arr[1000001]; //2560 짚신벌레
int main() {
	int i;
	scanf("%d%d%d%d", &a, &b, &d, &n);
	arr[0] = 1;
	for (i = 1; i <= n; i++) {
		if (i < a) arr[i] = arr[i - 1] % 1000;
		else if (i < b) arr[i] = (arr[i - 1] + arr[i - a]) % 1000;
		else arr[i] = (arr[i - 1] + arr[i - a] - arr[i - b]) % 1000;
	}

	printf("%d", n - d >= 0 ? (arr[n] - arr[n - d] + 1000) % 1000 : arr[n]);
}*/

/*const int INF = 1e7; //1102 발전소
int n, p, board[16][16], cache[1<<16];

int dp(int num, int bit) {
	if (num >= p) return 0;
	int& ret = cache[bit];
	if (ret != -1) return ret;
	ret = INF;
	for (int i = 0; i < n; i++) {
		if (!(bit & (1 << i))) {
			for (int t = 0; t < n; t++) {
				if (bit & (1 << t)) {
					ret = min(ret, board[t][i] + dp(num + 1, bit | (1 << i)));
				}
			}
		}	
	}
	return ret;
}

int main() {
	int i, j, num=0, bit=0;
	char init[17];
	scanf("%d", &n);
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	scanf("%s", init);
	scanf("%d", &p);
	for (i = 0; i < n; i++) {
		if (init[i] == 'Y') {
			num++;
			bit |= (1 << i);
		}
	}
	int ret = dp(num, bit);
	printf("%d", ret>1e3 ? -1 : ret);
}*/

/*int n, k, aa[26], chk[50], cache[1<<21]; //1062 가르침
string arr[50];

int dp(int num, int bit) {
	int i, j;
	if (num == k) {
		int ret = 0;
		for (i = 0; i < n; i++) {
			if ((chk[i] & bit) == chk[i]) ret++;
		}
		return ret;
	}
	int& ret = cache[bit];
	if (ret != -1) return ret;
	ret = 0;
	for (i = 0; i < 26; i++) {
		char c = i + 'a';
		if (c == 'a' || c == 'n' || c == 't' || c == 'i' || c == 'c') continue;
		if (!(bit & (1 << aa[i]))) ret = max(ret, dp(num + 1, bit | (1 << aa[i])));
	}
	return ret;
}
int main() {
	int i, j, idx=0;
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < 26; i++) {
		char c = i + 'a';
		if (c == 'a' || c == 'n' || c == 't' || c == 'i' || c == 'c') aa[i] = -1;
		else aa[i] = idx++;
	}

	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
		for (j = 0; j < arr[i].length(); j++) {
			if (arr[i][j] == 'a' || arr[i][j] == 'n' || arr[i][j] == 't' || arr[i][j] == 'i' || arr[i][j] == 'c') continue;
			chk[i] |= (1 << aa[arr[i][j] - 'a']);
		}
	}

	if (k < 5) {
		printf("0");
		return 0;
	}
	printf("%d", dp(5, 0));
}*/

/*int arr[27]; //5904 Moo 게임

char func(int n, int here) {
	if (n == 1) return 'm';
	if (n < 4) return 'o';
	char ret;
	if (n > arr[here - 1]) {
		if (n == arr[here - 1] + 1) ret = 'm';
		else if (n <= arr[here - 1] + here + 3) {
			ret = 'o';
		}
		else {
			ret = func(n - (arr[here - 1] + here + 3), here - 1);
		}
	}
	else ret = func(n, here - 1);
	return ret;
}
int main() {
	int i, n, here;
	char ret='-';
	arr[0] = 3;
	for (i = 1; i < 27; i++) {
		arr[i] = 2 * arr[i - 1] + i + 3;
	}
	scanf("%d", &n);
	
	for (i = 0; i < 27; i++) {
		if (n < arr[i]) {
			here = i;
			break;
		}
	}
	printf("%c", func(n, here));
}*/

/*long long dp[21][21][21]; //8895 막대 배치
int main() {
	int i, j, k, n;
	dp[1][1][1] = 1;
	for (i = 2; i <= 20; i++) {
		for (j = 1; j <= 20; j++) {
			for (k = 1; k <= 20; k++) {
				dp[i][j][k] = dp[i - 1][j - 1][k] + dp[i - 1][j][k - 1] + (i - 2) * dp[i - 1][j][k];
 			}
		}
	}
	scanf("%d", &n);
	for(int p=0; p<n; p++){
		scanf("%d%d%d", &i, &j, &k);
		printf("%lld\n", dp[i][j][k]);
	}
}*/

/*int idx, status[1000][2], cache[1000][16][16]; // 1633 최고의 팀 만들기
int dp(int i, int b, int w) {
	if (b==15 && w==15) return 0;
	if (i == idx) return -1e9;
	int& ret = cache[i][b][w];
	if (ret) return ret;
	ret = dp(i + 1, b, w);
	if (b < 15) ret = max(ret, status[i][1] + dp(i + 1, b + 1, w));
	if (w < 15) ret = max(ret, status[i][0] + dp(i + 1, b, w + 1));
	return ret;
}
int main() {
	int a, b;
	while (scanf("%d%d", &status[idx][0], &status[idx][1]) != EOF) {
		if (status[idx][0] == 0) break;
		idx++;
	}
	printf("%d", dp(0, 0, 0));
}*/

/*int cache[32768][4][182]; // 3933 라그랑주의 네 제곱수 정리

int dp(int num, int idx, int prev) {
	if (num == 0) return 1;
	if (idx == 4) return 0;
	int& ret = cache[num][idx][prev];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = prev; i < 182; i++) {
		if (i * i > num) break;
		ret += dp(num - i * i, idx+1, i);
	}
	return ret;
}
int main() {
	int i, j, n;
	memset(cache, -1, sizeof(cache));
	while (true) {
		scanf("%d", &n);
		if (n == 0) return 0;
		printf("%d\n", dp(n, 0, 1));
	}
}*/

/*int dp[1001][1001]; // 15483 최소 편집
int main() {
	string s, r;
	cin >> s >> r;
	int i, j, sl = s.length(), rl = r.length();
	for (i = 0; i <= sl; i++) dp[i][0] = i;
	for (i = 0; i <= rl; i++) dp[0][i] = i;
	for (i = 1; i <= sl; i++) {
		for (j = 1; j <= rl; j++) {
			dp[i][j] = min(dp[i - 1][j - 1] + !(s[i - 1] == r[j - 1]), min(dp[i - 1][j] + 1, dp[i][j - 1] + 1));
		}
	}
	cout << dp[sl][rl];
}*/

/*int dp[32][32]; //248 이진수 찾기
int main() {
	long long i, j, n, l, p;
	scanf("%lld%lld%lld", &n, &l, &p);
	for (i = 1; i <= n; i++) {
		dp[i][0] = 1;
		for (j = 1; j <= l; j++) {
			if (i == 1) dp[i][j] = 2;
			else dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
		}
	}

	int here = l;
	for (i = n; i > 1; i--) {
		if (dp[i - 1][here] < p) {
			printf("1");
			p -= dp[i - 1][here];
			here--;
		}
		else printf("0");
	}
	printf("%d", p - 1);
}*/

/*int n, m, cant[101][101][2]; // 1577 도로의 개수
long long cache[101][101];

long long dp(int x, int y) {
	if (x == n && y == m) return 1;
	if (x > n || y > m) return 0;
	long long& ret = cache[x][y];
	if (ret != -1) return ret;
	ret = 0;
	if (!cant[x][y][0]) ret += dp(x + 1, y);
	if (!cant[x][y][1]) ret += dp(x, y + 1);
	return ret;
}
int main() {
	int i, k, a, b, c, d;
	memset(cache, -1, sizeof(cache));
	scanf("%d%d%d", &n, &m, &k);
	for (i = 0; i < k; i++) {
		int p = 0;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (b != d) p = 1;
		cant[min(a, c)][min(b, d)][p] = 1;
	}
	printf("%lld", dp(0, 0));
}*/

/*const int INF = 1e9;
int m, n, l, g, cost[101][101][2], cache[101][101][200][3], r = INF;

int dp(int x, int y, int k, int pDir) {
	printf("x : %d, y : %d, k : %d, pDir : %d\n", x, y, k, pDir);
	if (x == m && y == n) return 0;
	if (x > m || y > n) return INF;
	int& ret = cache[x][y][k][pDir + 1];
	if (ret != -1) return ret;
	ret = 0;
	ret = min(cost[x][y][0] + dp(x, y + 1, k + (pDir == 1), 0), cost[x][y][1] + dp(x + 1, y, k + (pDir == 0), 1));
	return ret;
}
int main() {
	int i, j, k, t;
	scanf("%d", &t);
	while (t--) {
		r = INF;
		scanf("%d%d%d%d", &m, &n, &l, &g);
		memset(cache, -1, sizeof(cache));
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n - 1; j++) {
				scanf("%d", &cost[i][j][0]);
			}
		}

		for (i = 1; i <= m - 1; i++) {
			for (j = 1; j <= n; j++) {
				scanf("%d", &cost[i][j][1]);
			}
		}
		dp(1, 1, 0, -1);
		for (i = 1; i <= 2 * min(m, n); i++) {
			printf("%d\n", cache[1][1][0][0]);
		}
		printf("%d", r == INF ? -1 : r);
	}
}*/

/*const int INF = 1e9; // 10251 운전 면허 시험
int m, n, l, g, cost[101][101][2], cache[101][101][200][3];

int main() {
	int i, j, k, t;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d%d", &m, &n, &l, &g);
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n - 1; j++) {
				scanf("%d", &cost[i][j][0]);
			}
		}

		for (i = 1; i <= m - 1; i++) {
			for (j = 1; j <= n; j++) {
				scanf("%d", &cost[i][j][1]);
			}
		}

		int tmp = min(m, n);
		for (i = 1; i <= m; i++) {
			for (j = 1; j <= n; j++) {
				for (k = 0; k <= 2 * tmp; k++) {
					cache[i][j][k][0] = cache[i][j][k][1] = INF;
				}
			}
		}

		cache[1][1][0][0] = cache[1][1][0][1] = 0;
		for (i = 2; i <= n; i++) {
			cache[1][i][0][0] = cache[1][i - 1][0][0] + cost[1][i - 1][0];
		}
		for (i = 2; i <= m; i++) {
			cache[i][1][0][1] = cache[i - 1][1][0][1] + cost[i - 1][1][1];
		}

		for (i = 2; i <= m; i++) {
			for (j = 2; j <= n; j++) {
				for (k = 1; k <= 2 * (i - 1); k++) {
					cache[i][j][k][0] = min(cache[i][j - 1][k][0], cache[i][j - 1][k - 1][1]) + cost[i][j - 1][0];
					cache[i][j][k][1] = min(cache[i - 1][j][k][1], cache[i - 1][j][k - 1][0]) + cost[i - 1][j][1];
				}
			}
		}

		int ret = INF;
		for (k = 1; k <= 2 * (tmp - 1); k++) {
			if (cache[m][n][k][0] <= g || cache[m][n][k][1] <= g) {
				ret = (m + n - 2) * l + k;
				break;
			}
		}
		printf("%d\n", ret == INF ? -1 : ret);
	}
}*/

/*int arr[10] = { 10, 4, 8, 1, 2, 5, 9, 7, 6, 3 }, *tmp;

void qSort(int s, int e) {
	if (s >= e) return;
	int p = s, q = e, pivot=arr[(p+q)/2];
	while (p <= q) {
		while (arr[p] < pivot) p++;
		while (arr[q] > pivot) q--;
		if (p <= q) {
			int tmp = arr[p];
			arr[p] = arr[q];
			arr[q] = tmp;
			p++;
			q--;
		}
	}
	qSort(s, q);
	qSort(p, e);
}

void mSort(int s, int e) {
	if (s == e) return;
	int sz=e - s + 1, mid = s + e >> 1;
	mSort(s, mid);
	mSort(mid + 1, e);
	int idx = s, p = s, q = mid + 1;
	while (p<=mid && q<=e) {
		if (arr[p] < arr[q]) {
			tmp[idx] = arr[p];
			p++;
		}
		else {
			tmp[idx] = arr[q];
			q++;
		}
		idx++;
	}
	while (p <= mid) {
		tmp[idx++] = arr[p++];
	}
	while (q <= e) tmp[idx++] = arr[q++];
	for (int i = s; i <= e; i++) {
		arr[i] = tmp[i];
	}
	printf("s : %d, e : %d\n", s, e);
	for (auto it : arr) {
		printf("%d ", it);
	}
	printf("\n");
}
int main() {
	//qSort(0, 9);
	tmp = new int[10];
	mSort(0, 9);
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}*/

/*char board[1000][1000]; //4179 불!

typedef struct st {
	int x;
	int y;
	int mv;
}St;
int main() {
	int r, c, i, j, nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
	queue<St> man, fire;
	cin >> r >> c;
	for (i = 0; i < r; i++) {
		cin.get();
		for (j = 0; j < c; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'J') man.push({ i, j, 0 });
			if (board[i][j] == 'F') {
				fire.push({ i, j, 0 });
				board[i][j] = '#';
			}
		}
	}

	int phase = 0;
	while (true) {
		while (!fire.empty()) {
			int fx = fire.front().x, fy = fire.front().y, fmv = fire.front().mv;
			if (fmv != phase) break;
			fire.pop();
			for (i = 0; i < 4; i++) {
				int nfx = fx + nxt[i][0], nfy = fy + nxt[i][1];
				if (nfx < 0 || nfx >= r || nfy < 0 || nfy >= c || board[nfx][nfy]=='#') continue;
				board[nfx][nfy] = '#';
				fire.push({ nfx, nfy, fmv + 1 });
			}
		}
		while (!man.empty()) {
			int mx = man.front().x, my = man.front().y, mmv = man.front().mv;
			if (mx == 0 || mx == r - 1 || my == 0 || my == c - 1) {
				cout << mmv + 1 << endl;
				return 0;
			}
			if (mmv != phase) break;
			man.pop();
			for (i = 0; i < 4; i++) {
				int nmx = mx + nxt[i][0], nmy = my + nxt[i][1];
				if (nmx < 0 || nmx >= r || nmy < 0 || nmy >= c || board[nmx][nmy]!='.') continue;
				board[nmx][nmy] = 'J';
				man.push({ nmx, nmy, mmv + 1 });
			}
		}
		if (man.empty()) {
			cout << "IMPOSSIBLE";
			return 0;
		}
		phase++;
	}
}*/
/**

//Radix sort, 수 범위는 -1000000 ~ 1000000
vector<int> bucket[65536];
int main() {
	int i, arr[10] = { 4895, 3, 2984, 56, 777, 2834, 198271, -222, 93, 85 }, tmp[10];
	for (i = 0; i < 10; i++) {
		arr[i] += 1000000; //음수 제거
		cout << "bucket : " << (arr[i] & 65535) << endl;
		bucket[arr[i] & 65535].push_back(arr[i]);
	}

	int idx = 0;
	for (i = 0; i < 65536; i++) {
		for (auto val : bucket[i]) tmp[idx++] = val;
		if (idx == 10) break;
	}

	for (i = 0; i < 10; i++) {
		bucket[tmp[i] >> 16].push_back(tmp[i]);
	}
	cout << endl;
	idx = 0;
	for (i = 0; i < 65536; i++) {
		for (auto val : bucket[i]) tmp[idx++] = val;
		if (idx == 10) break;
	}

	for (i = 0; i < 10; i++) {
		arr[i] = tmp[i]-1000000;
		cout << arr[i] << " ";
	}
}*/

/*int t, hx, hy, n, board[401][401], cache[401][401][200], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; // 15938 더위 피하기
const int MOD = 1e9 + 7;
int dp(int x, int y, int tm) {
	if (tm > t) return 0;
	//cout << "x : " << x << ", y : " << y << ", hx : " << hx << ", hy : " << hy << ", tm : " << tm << endl;
	if (x == hx && y == hy) return 1;
	int& ret = cache[x][y][tm];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + nxt[i][0], ny = y + nxt[i][1];
		if (nx < 0 || nx>400 || ny < 0 || ny>400 || board[nx][ny] == -1) continue;
		ret = (ret+dp(nx, ny, tm + 1))%MOD;
	}
	return ret;
}
int main() {
	int x, y, i, a, b;
	cin >> x >> y >> t;
	cin >> hx >> hy >> n;
	memset(cache, -1, sizeof(cache));
	if (abs(x - hx) + abs(y - hy) > 200) {
		cout << 0;
		return 0;
	}
	x = x - hx + 200, y = y - hy + 200;
	for (i = 0; i < n; i++) {
		cin >> a >> b;
		int tx = a - hx + 200, ty = b - hy + 200;
		if (tx < 0 || tx>400 || ty < 0 || ty>400) continue;
		board[tx][ty] = -1;
	}
	hx = 200, hy = 200;
	cout << dp(x, y, 0) << endl;
}*/

/*int n, cache[301][3], score[300]; // 2579 계단 오르기

int dp(int idx, int oneNum) {
	if (idx == n - 1) return 0;
	int& ret = cache[idx+1][oneNum];
	if (ret != -1) return ret;
	ret = 0;
	if (oneNum != 2) ret = max(ret, score[idx + 1] + dp(idx + 1, oneNum + 1));
	else if (idx == n - 2) return -1e9;
	if(idx<n-2) ret = max(ret, score[idx + 2] + dp(idx + 2, 1));
	return ret;
}

int main() {
	int i, j;
	cin >> n;
	memset(cache, -1, sizeof(cache));
	for (i = 0; i < n; i++) {
		cin >> score[i];
	}

	cout << dp(-1, 0);
}*/

/*const int MAX = (1 << 16), INF = 1e9; //bitmasking
int n, arr[16][16], cache[16][MAX];

int func(int here, int visited, int init) {
	if (visited == (1 << n) - 1) { //전부 방문
		if (arr[here][init] == 0) return INF;
		else return arr[here][init];
	}

	int& ret = cache[here][visited];
	if (ret != -1) return ret;
	ret = INF;
	for (int i = 0; i < n; i++) {
		if (arr[here][i] && !(visited & (1 << i))) { //방문 안했고, 경로 있을 경우
			ret = min(ret, arr[here][i] + func(i, visited | (1 << i), init));
		}
	}
	return ret;
}*/

/*const int hashNum = 17, hashSize = 1000, hashLen = 1000; //해시 함수 예제 (code force)
string hashArr[hashSize][hashLen];
int hLen[hashSize], dat[hashSize][hashLen];
int getHashCode(string s) {
	int len = s.length();
	long long ret = 0;
	for (int i = 0; i < len; i++) {
		ret += (ret * hashNum) + s[i];
		ret %= hashSize;
	}
	if (ret < 0) ret = -ret;
	return (int)(ret % hashSize);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string str;
	int n, i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str;
		int hc = getHashCode(str), chk = 0;
		for (j = 0; j < hLen[hc]; j++) {
			if (str == hashArr[hc][j]) {
				dat[hc][j]++;
				break;
			}
		}
		if (hLen[hc] == 0 || j == hLen[hc]) {
			cout << "OK\n";
			hashArr[hc][hLen[hc]++] = str;
		}
		else {
			cout << str << dat[hc][j] << "\n";
		}
	}
}*/

/*typedef struct trie { //트라이 삽입, 탐색, 삭제 알고리즘
	trie* child[10];
	bool isEnd;
}Trie;

bool insert(Trie* root, string s) {
	Trie* here = root;
	for (int i = 0; i < s.length(); i++) {
		int idx = s[i] - '0';
		if (here->child[idx] == NULL) here->child[idx] = new Trie();
		here = here->child[idx];
	}
	here->isEnd = true;
	return true;
}

bool canRemove(Trie* root, string s) {
	Trie* here = root;
	int i;
	for (i = 0; i < s.length(); i++) {
		int idx = s[i] - '0';
		if (here->child[idx] == NULL) return false; //경로가 중간에 끊긴 경우, 삭제 불가
		here = here->child[idx];
	}
	if (!here->isEnd) return false; // 문자열이 끝난 지점에도 isEnd 플래그가 설정되어있지 않을 때, 삭제 불가
	for (i = 0; i < 10; i++) {
		if (here->child[i] != NULL) {
			return false; //만일 매개변수로 주어진 스트링이 끝난 지점에 또다른 자식이 있을 경우,
		}//이 경로는 다른 스트링이 이용하고 있는 경로이다. 따라서 삭제 불가
	}
	return true; //삭제 가능
}

int notDel = 0;
void remove(Trie* here, string s, int len) {
	if (len == s.length()) return; // 마지막 글자에서 리턴, 여기서부터 앞글자로 한칸씩 넘어가면서 자식 트라이 
								   // 메모리 반환
	
	Trie* ch = here->child[s[len] - '0'];
	remove(ch, s, len + 1);
	if (!notDel) {
		here->child[s[len] - '0'] = NULL;
		delete ch;
	}
	if (here->isEnd) {
		notDel = 1; // remove process is stopped when isEnd flag is true.
	}				// this means that there are some shorter words whose prefix is same as the parameter
					// string s.
}

bool find(Trie* root, string s) {
	Trie* here = root;
	for (int i = 0; i < s.length(); i++) {
		int idx = s[i] - '0';
		if (here->child[idx] == NULL) return false;
		here = here->child[idx];
	}
	if (!here->isEnd) return false;
	return true;
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<string> vec;
		string s;
		Trie* root = new Trie();
		for (i = 0; i < n; i++) {
			cin >> s;
			vec.push_back(s);
		}

		sort(vec.begin(), vec.end());
		int chk = 1;
		for (auto it : vec) {
			insert(root, it);
		}
		if (chk) cout << "YES\n";
		////////////delete process//////////////
		string test[5] = { "911", "29583", "09285", "91125426", "911" };
		for (i = 0; i < 5; i++) {
			if (canRemove(root, test[i])) {
				notDel = 0;
				remove(root, test[i], 0);
			}
		}

		for (i = 0; i < 5; i++) {
			cout << find(root, test[i]) << endl;
		}
	}
}*/

/*int n, arr[1000][3], cache[1000][4]; //RGB 거리, DP 경로 확인법

int dp(int idx, int prev = 3) {
	if (idx == n) return 0;
	int& ret = cache[idx][prev];
	if (ret != -1) return ret;
	ret = 1e9;
	for (int i = 0; i < 3; i++) {
		if (prev == i) continue;
		ret = min(ret, arr[idx][i] + dp(idx + 1, i));
	}
	return ret;
}

void track(int idx, int prev = 3) { // 경로 확인 알고리즘
	if (idx == n) return;
	for (int i = 0; i < 3; i++) {
		if (i != prev && dp(idx + 1, i) + arr[idx][i] == dp(idx, prev)) {
			cout << idx << " choice : " << i << "\n";
			track(idx + 1, i);
		}
	}
}

int main() {
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	memset(cache, -1, sizeof(cache));
	cout << dp(0) << "\n";
	track(0);
}*/

/*const int MAX = 1e6; //DP 경로 확인, 사회망 서비스(SNS)
vector<int> adj[MAX], child[MAX];
int cache[MAX][2], n, visited[MAX];
void dfs(int here) {
	visited[here] = 1;
	for (auto it : adj[here]) {
		if (visited[it]) continue;
		child[here].push_back(it);
		dfs(it);
	}
}

int dp(int here, int prev) {
	int& ret = cache[here][prev];
	if (ret != -1) return ret;

	int notPick = 1e9, pick = 1;
	for (auto it : child[here]) {
		pick += dp(it, true);
	}
	if (prev) {
		notPick = 0;
		for (auto it : child[here]) {
			notPick += dp(it, false);
		}
	}
	return ret = min(pick, notPick);
}

void track(int here, int prev) {
	int notPick = 1e9, pick = 1;
	for (auto it : child[here]) {
		pick += dp(it, true);
	}
	if (prev) {
		notPick = 0;
		for (auto it : child[here]) {
			notPick += dp(it, false);
		}
	}
	cout << "here : " << here << ", pick : " << pick << ", notPick : " << notPick << endl;
	if (pick < notPick) {
		cout << here + 1 << "th person is EA\n";
		for (auto it : child[here]) {
			track(it, true);
		}
	}
	else {
		for (auto it : child[here]) {
			track(it, false);
		}
	}
}
int main() {
	int i, u, v;
	cin >> n;
	for (i = 0; i < n - 1; i++) {
		cin >> u >> v;
		adj[u-1].push_back(v-1);
		adj[v-1].push_back(u-1);
	}
	dfs(0);
	memset(cache, -1, sizeof(cache));
	cout << dp(0, 1)<<endl;
	track(0, 1);
}*/

/*const int MAX = 200000, MAX_DEPTH = 19; //17435 합성함수와 쿼리
int hop[MAX+1][MAX_DEPTH];
int main() {
	int m, i, j, q, n, x;
	cin >> m;
	for (i = 1; i <= m; i++) cin >> hop[i][0];
	for (j = 1; j < MAX_DEPTH; j++) {
		for (i = 1; i <= m; i++) {
			hop[i][j] = hop[hop[i][j - 1]][j - 1];
		}
	}
	cin >> q;
	for (i = 0; i < q; i++) {
		cin >> n >> x;
		for (j = 18; j >= 0; j--) {
			if (n & (1 << j)) {
				n -= (1 << j);
				x = hop[x][j];
			}
		}
		cout << x << "\n";
	}
 }*/

/*const int MAX = 100000, MAX_DEPTH = 29; //3117 Youtube
int hop[MAX][MAX_DEPTH], init[MAX];
int main() {
	int n, k, m, i, j;
	cin >> n >> k >> m;
	for (i = 0; i < n; i++) cin >> init[i];
	for (i = 1; i <= k; i++) {
		cin >> hop[i][0];
	}
	for (j = 1; j < MAX_DEPTH; j++) {
		for (i = 1; i <= k; i++) hop[i][j] = hop[hop[i][j - 1]][j - 1];
	}

	for (i = 0; i < n; i++) {
		int tm = m - 1;
		for (j = MAX_DEPTH - 1; j >= 0; j--) {
			if (tm & (1 << j)) {
				tm -= (1 << j);
				init[i] = hop[init[i]][j];
			}
		}
		cout << init[i] << " ";
	}
}*/

/*int main() { //2075 N번째 큰 수
	int n, i, a;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pQue;
	for (i = 0; i < n * n; i++) {
		cin >> a;
		pQue.push(a);
		if (pQue.size() == n + 1) pQue.pop();
	}
	cout << pQue.top();
}*/

/*typedef long long ll; // 1162 도로 포장(시간초과)
const int MAX = 10001;
const long long INF = 1e12;
vector<pair<int, int>> adj[MAX];
ll dist[MAX][21];

typedef struct road{
	ll cost;
	ll here;
	ll paving;

	bool operator < (const road r) const {
		return cost < r.cost;
	}
}Road;
int main() {
	ll n, m, k, i, j, a, b, t;
	cin >> n >> m >> k;
	for (i = 0; i < m; i++) {
		cin >> a >> b >> t;
		adj[a].emplace_back(b, t);
		adj[b].emplace_back(a, t);
	}
	for (i = 1; i <= n; i++) {
		for (j = 0; j <= k; j++) dist[i][j] = INF;
	}
	dist[1][k] = 0;
	priority_queue<Road> pQue;
	pQue.push({ 0, 1, k });
	while (!pQue.empty()) {
		ll cost=-pQue.top().cost, here = pQue.top().here, paving=pQue.top().paving;
		pQue.pop();
		if (cost < dist[here][paving]) continue;
		for (auto it : adj[here]) {
			ll nxtCost = cost + it.second;
			if (paving > 0 && cost < dist[it.first][paving - 1]) {
				dist[it.first][paving - 1] = cost;
				pQue.push({ -cost, it.first, paving - 1 });
			}
			if (nxtCost < dist[it.first][paving]) {
				dist[it.first][paving] = nxtCost;
				pQue.push({ -nxtCost, it.first, paving });
			}
		}
	}
	ll ret = INF;

	for (j = 0; j <= k; j++) {
		if (ret > dist[n][j]) ret = dist[n][j];
	}
	cout << ret;
}*/

/*const int INF = 1e9; //13168 내일로 여행
double ticketDist[101][101], noTicketDist[101][101];
int main() {
	int n, m, p, r, i, j, k;
	double price;
	unordered_map<string, int> mp;
	cin >> n >> r;
	string type, s, e;
	vector<string> path;
	int idx = 1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if(i!=j) ticketDist[i][j] = noTicketDist[i][j] = INF;
		}
	}

	for (i = 1; i <= n; i++) {
		cin >> s;
		mp[s] = idx++;
	}

	cin >> m;
	for (i = 0; i < m; i++) {
		cin >> s;
		path.push_back(s);
	}
	cin >> p;
	for (i = 0; i < p; i++) {
		cin >> type >> s >> e >> price;
		int depart = mp[s], des = mp[e];
		if (type == "Mugunghwa" || type == "ITX-Saemaeul" || type == "ITX-Cheongchun") {
			ticketDist[depart][des] = min(ticketDist[depart][des], (double)0);
			ticketDist[des][depart] = min(ticketDist[des][depart], (double)0);
		}
		else if (type == "S-Train" || type == "V-Train") {
			ticketDist[depart][des] = min(ticketDist[depart][des], price/2);
			ticketDist[des][depart] = min(ticketDist[des][depart], price/2);
		}
		else {
			ticketDist[depart][des] = min(ticketDist[des][depart], price);
			ticketDist[des][depart] = min(ticketDist[des][depart], price);
		}
		noTicketDist[depart][des] = min(noTicketDist[des][depart], price);
		noTicketDist[des][depart] = min(noTicketDist[des][depart], price);
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (i == j) continue;

				if (ticketDist[i][j] > ticketDist[i][k] + ticketDist[k][j])
					ticketDist[i][j] = ticketDist[i][k] + ticketDist[k][j];

				if (noTicketDist[i][j] > noTicketDist[i][k] + noTicketDist[k][j])
					noTicketDist[i][j] = noTicketDist[i][k] + noTicketDist[k][j];
			}
		}
	}

	double ticketPrice = r, noTicketPrice = 0;
	for (i = 0; i < path.size() - 1; i++) {
		int start = mp[path[i]], end = mp[path[i + 1]];
		ticketPrice += ticketDist[start][end];
		noTicketPrice += noTicketDist[start][end];
	}
	if (ticketPrice < noTicketPrice) cout << "Yes";
	else cout << "No";
}*/

/*const int MAX = 10001; //SCC 타잔 알고리즘
int v, e, finished[MAX], dfsn[MAX], num, SN=1, sn[MAX]; //SN : SCC 갯수, sn[] : 각 정점이 속하는 SCC 번호
vector<int> adj[MAX];
vector<vector<int>> SCC;
stack<int> stk; //SCC 추출용 스택

int dfs(int here) {
	dfsn[here] = ++num; //현재 정점 번호 할당
	int ret = dfsn[here];
	stk.push(here);
	for (auto it : adj[here]) {
		if (dfsn[it] == 0) { // 인접 정점이 아직 방문을 안했을 경우
			ret = min(ret, dfs(it));
		}
		if (!finished[it]) ret = min(ret, dfsn[it]); // 아직 SCC 추출 안된 정점이 있을 경우
	}

	if (ret == dfsn[here]) { // 자신의 조상 노드로 향하는 역방향 간선이 존재하지 않음.
		vector<int> tmpScc;
		while (true) {
			int t = stk.top();
			stk.pop();
			tmpScc.push_back(t);
			finished[t] = 1;
			sn[t] = SN;
			if (t == here) break;
		}
		sort(tmpScc.begin(), tmpScc.end());
		SN++;
		SCC.push_back(tmpScc);
	}
	return ret;
}
int main() {
	int i, a, b;
	cin >> v >> e;
	for (i = 0; i < e; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
	}

	for (i = 1; i <= v; i++) {
		if (dfsn[i] == 0) dfs(i);
	}

	cout << SN - 1 << "\n";
	sort(SCC.begin(), SCC.end());
	for (auto sccs : SCC) {
		for (auto num : sccs) {
			cout << num << " ";
		}
		cout << "-1\n";
	}
}*/

/*const int MAX = 1e5 + 1; // 4196 도미노 (SCC들의 DAG 문제)
vector<int> adj[MAX];
int dfsn[MAX], finished[MAX], SN=1, cnt=1, sn[MAX], inDegree[MAX];
stack<int> stk;

int dfs(int here) {
	dfsn[here] = cnt++;
	int ret = dfsn[here];
	stk.push(here);
	for (auto it : adj[here]) {
		if (dfsn[it] == 0) { //방문 x
			ret = min(ret, dfs(it));
		}
		if (finished[it] == 0) ret = min(ret, dfsn[it]); //아직 SCC로 추출 안된 정점
	}

	if (ret == dfsn[here]) {
		while (true) {
			int t = stk.top();
			stk.pop();
			finished[t] = 1;
			sn[t] = SN;
			if (t == here) break;
		}
		SN++;
	}
	return ret;
}

int main() {
	int t, i, n, m, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		SN = 1;
		for (i = 0; i < m; i++) {
			cin >> a >> b;
			adj[a].push_back(b);
		}

		for (i = 1; i <= n; i++) {
			if (dfsn[i] == 0) dfs(i);
		}
		
		int ret = 0;
		for (i = 1; i <= n; i++) {
			for (auto it : adj[i]) {
				if (sn[i] != sn[it]) inDegree[sn[it]]++;
			}
		}

		for (i = 1; i < SN; i++) {
			if (inDegree[i] == 0) ret++;
		}

		cout << ret <<"\n";
		for (i = 1; i <= n; i++) {
			adj[i].clear();
			dfsn[i] = 0;
			finished[i] = 0;
		}
		for (i = 0; i < SN; i++) {
			inDegree[i] = 0;
		}
	}
}*/

/*const int MAX = 10001; //11266 단절점
vector<int> adj[MAX];
int dfsn[MAX], bccNum[MAX], cnt=0, BN=1;
stack<pair<int, int>> stk;
vector < vector<pair<int, int>>> BCC;
vector<int> pntVec;
bool isAP[MAX];
int dfs(int cur, int prev = -1) {
	int ret = dfsn[cur] = ++cnt;
	for (auto next : adj[cur]) {
		if (next == prev) continue; // 부모 정점 스킵
		if (dfsn[cur] > dfsn[next]) { // 아직 방문하지 않은 간선인 경우
			stk.push({ cur, next });
		}

		if (dfsn[next] > 0) { //역방향 간선
			ret = min(ret, dfsn[next]);
		}
		else { //트리 간선
			int tmp = dfs(next, cur);
			ret = min(ret, tmp);
			if (tmp >= dfsn[cur]) { // 조상 노드로 갈 수 있는 간선이 없는 경우, BCC 생성
				vector<pair<int, int>> curBCC;
				while (!stk.empty()) {
					curBCC.push_back(stk.top());
					int u = stk.top().first, v = stk.top().second;
					if (bccNum[u] != 0 && bccNum[u] < BN) isAP[u] = true;
					if (bccNum[v] != 0 && bccNum[v] < BN) isAP[v] = true;

					bccNum[u] = BN;
					bccNum[v] = BN;
					stk.pop();
					if (u == cur && v == next) break;
				}
				BCC.push_back(curBCC);
				BN++;
			}
		}
	}
	return ret;
}
int main() {
	int v, e, i, a, b;
	cin >> v >> e;
	for (i = 0; i < e; i++) {
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for (i = 1; i <= v; i++) {
		if (dfsn[i] == 0) {
			dfs(i);
		}
	}

	int ret = 0;
	for (i = 1; i <= v; i++) {
		if (isAP[i]) ret++;
	}
	cout << ret << "\n";
	for (i = 1; i <= v; i++) {
		if (isAP[i]) cout << i << " ";
	}
}*/

/*const int MAX = 10001; // 11281 2-SAT 4

int dfsn[2*MAX], finished[2*MAX], sn[2*MAX], cnt=0, snNum=1;
vector<vector<int>> SCC;
vector<int> adj[2*MAX];
stack<int> stk;
int dfs(int here) {
	int ret = dfsn[here] = ++cnt;
	stk.push(here);
	for (auto next : adj[here]) {
		if (dfsn[next] == 0) ret = min(ret, dfs(next));
		if (finished[next] == 0) ret = min(ret, dfsn[next]);
	}

	if (ret == dfsn[here]) {
		vector<int> curSCC;
		while (!stk.empty()) {
			int t = stk.top();
			stk.pop();
			curSCC.push_back(t);
			finished[t] = 1;
			sn[t] = snNum;
			if (t == here) break;
		}
		snNum++;
		SCC.push_back(curSCC);
	}

	return ret;
}

int oppo(int num) {
	return num % 2 ? num + 1 : num - 1;
}
int main() {
	int n, m, i, a, b;
	cin >> n >> m;
	for (i = 0; i < m; i++) {
		cin >> a >> b;
		int aNum = (a < 0 ? -(a + 1) * 2 + 1 : a * 2);
		int bNum = (b < 0 ? -(b + 1) * 2 + 1 : b * 2);
		adj[oppo(aNum)].push_back(bNum);
		adj[oppo(bNum)].push_back(aNum);
	}

	for (i = 1; i <= 2 * n; i++) {
		if (dfsn[i] == 0) dfs(i);
	}

	for (i = 1; i <= 2 * n; i += 2) {
		if (sn[i] == sn[i + 1]) {
			cout << "0\n";
			return 0;
		}
	}
	cout << "1\n";

	int result[MAX];
	memset(result, -1, sizeof(result));
	vector<pair<int, int>> p(n * 2 + 1);
	for (i = 1; i <= 2 * n; i++) {
		p[i] = { sn[i], i };
	}

	sort(p.begin(), p.end());

	for (i = n * 2; i > 0; i--) {
		int var = p[i].second - 1;
		if (result[var / 2 + 1] == -1) result[var / 2 + 1] = !(var % 2);
	}

	for (i = 1; i <= n; i++)
		cout << result[i] << " ";
}*/

const int MAX = 20001;
vector<int> adj[MAX];
int dfsn[MAX], finished[MAX], sn[MAX], cnt = 1, SN = 1;
stack<int> stk;

int dfs(int here) {
	int ret = dfsn[here] = cnt++;
	stk.push(here);
	for (auto it : adj[here]) {
		if (dfsn[it] == 0) ret = min(ret, dfs(it));
		if (finished[it] == 0) ret = min(ret, dfsn[it]);
	}

	if (ret == dfsn[here]) {
		while (!stk.empty()) {
			int t = stk.top();
			stk.pop();
			sn[t] = SN;
			finished[t] = 1;
			if (t == here) break;
		}
		SN++;
	}
	return ret;
}

int oppo(int num) {
	if (num % 2) return num + 1;
	else return num - 1;
}
int main() {
	int n, m, i, a, b;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> a >> b;
		int aNum = (a < 0 ? -a * 2 - 1 : a * 2);
		int bNum = (b < 0 ? -b * 2 - 1 : b * 2);
		adj[oppo(aNum)].push_back(bNum);
		adj[oppo(bNum)].push_back(aNum);
	}

	for (i = 1; i < 2 * n; i++) {
		if (dfsn[i] == 0) dfs(i);
	}

	for (i = 1; i <= 2 * n; i += 2) {
		if (sn[i] == sn[i + 1]) {
			cout << "OTL\n";
			return 0;
		}
	}
	cout << "^_^\n";
}
////////////////////////////////////////
	/*삼성 SW 역량 테스트 기출 문제*/
////////////////////////////////////////

/*char board[11][11]; //13460 구슬 탈출 2
int visited[11][11][11][11], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1 ,0} };

typedef struct ballInfo {
	int move;
	int rx;
	int ry;
	int bx;
	int by;
}BInfo;
int main() {
	int i, j, n, m, rx, ry, bx, by;
	queue <BInfo> que;
	scanf("%d%d", &n, &m);
	fgetc(stdin);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) {
			scanf("%c", &board[i][j]);
			if (board[i][j] == 'R') rx = i, ry = j;
			if (board[i][j] == 'B') bx = i, by = j;
		}
		fgetc(stdin);
	}
	que.push(BInfo{ 0, rx, ry, bx, by });

	int ret = 0;
	while (!que.empty()) {
		int move = que.front().move;
		rx = que.front().rx;
		ry = que.front().ry;
		bx = que.front().bx;
		by = que.front().by;
		que.pop();
		if (move > 10) break;
		if (board[bx][by] == 'O') continue;
		if (board[rx][ry] == 'O') {
			ret = move;
			break;
		}

		if (visited[rx][ry][bx][by]) continue;
		visited[rx][ry][bx][by] = 1;
		printf("move : %d, rx : %d, ry : %d, bx : %d, by : %d\n", move, rx, ry, bx, by);
		for (i = 0; i < 4; i++) {
			int nrx = rx, nry = ry, nbx = bx, nby = by, rchk = 0, bchk = 0;
			while (true) {
				if (board[nrx][nry] == '#') {
					nrx -= nxt[i][0], nry -= nxt[i][1];
					break;
				}
				else if (board[nrx][nry] == 'O') break;
				else if (nbx == nrx && nby == nry) {
					nrx -= nxt[i][0], nry -= nxt[i][1];
					rchk = 1;
					break;
				}
				nrx += nxt[i][0], nry += nxt[i][1];
			}

			while (true) {
				if (board[nbx][nby] == '#') {
					nbx -= nxt[i][0], nby -= nxt[i][1];
					break;
				}
				else if (nbx == nrx && nby == nry) {
					if (board[nrx][nry] != 'O') {
						nbx = nrx - nxt[i][0], nby = nry - nxt[i][1];
					}
					break;
				}
				else if (board[nbx][nby] == 'O') break;
				nbx += nxt[i][0], nby += nxt[i][1];
			}
			if (rchk) nrx = nbx - nxt[i][0], nry = nby - nxt[i][1];
			//printf("i : %d, nrx : %d, nry : %d, nbx : %d, nby : %d, rchk : %d\n", i, nrx, nry, nbx, nby, rchk);
			que.push(BInfo{ move + 1, nrx, nry, nbx, nby });
		}
	}
	printf("%d", ret == 0 ? -1 : ret);
}*/

//direction 0 : up, 1 : down, 2 : left, 3 : right
/*int func(int idx, vector<vector<int>> board) { //12100 2048 (easy)
	int i, j, k, sz = board.size(), chk = 0;
	if (idx == 5) {
		int ret = 0;
		for (i = 0; i < sz; i++) {
			for (j = 0; j < sz; j++) {
				ret = max(ret, board[i][j]);
			}
		}
		return ret;
	}

	vector<vector<int>> up(sz), down(sz), left(sz), right(sz);
	for (i = 0; i < sz; i++) {
		up[i].resize(sz);
		down[i].resize(sz);
		left[i].resize(sz);
		right[i].resize(sz);
		for (j = 0; j < sz; j++) {
			up[i][j] = down[i][j] = left[i][j] = right[i][j] = board[i][j];
		}
	}

	//up
	for (j = 0; j < sz; j++) {
		for (i = 0; i < sz - 1; i++) {
			int zero = 0;
			while (i + 1 + zero < sz && up[i + 1 + zero][j] == 0) {
				zero++;
			}
			if (up[i][j] == 0) zero++;
			if (zero) {
				int start = i + 1;
				if (up[i][j] == 0) start = i;
				for (k = start; k < sz - zero; k++) {
					while (k + zero + 1 < sz && up[k + zero][j] == 0) zero++;
					up[k][j] = up[k + zero][j];
				}
				for (k = sz - zero; k < sz; k++) up[k][j] = 0;
			}

			if (up[i][j] != 0 && up[i][j] == up[i + 1][j]) {
				up[i][j] *= 2;
				for (k = i + 1; k < sz - 1; k++) up[k][j] = up[k + 1][j];
				up[sz - 1][j] = 0;
			}
		}
	}

	//down
	for (j = 0; j < sz; j++) {
		for (i = sz - 1; i > 0; i--) {
			int zero = 0;
			while (i - 1 - zero >= 0 && down[i - 1 - zero][j] == 0) {
				zero++;
			}
			if (down[i][j] == 0) zero++;
			if (zero) {
				int start = i - 1;
				if (down[i][j] == 0) start = i;
				for (k = start; k >= zero; k--) {
					while (k - zero - 1 >= 0 && down[k - zero][j] == 0) zero++;
					down[k][j] = down[k - zero][j];
				}
				for (k = zero - 1; k >= 0; k--) down[k][j] = 0;
			}

			if (down[i][j] != 0 && down[i][j] == down[i - 1][j]) {
				down[i][j] *= 2;
				for (k = i - 1; k > 0; k--) down[k][j] = down[k - 1][j];
				down[0][j] = 0;
			}
		}
	}

	//left
	for (i = 0; i < sz; i++) {
		for (j = 0; j < sz - 1; j++) {
			int zero = 0;
			while (j + 1 + zero < sz && left[i][j + 1 + zero] == 0) {
				zero++;
			}
			if (left[i][j] == 0) zero++;
			if (zero) {
				int start = j + 1;
				if (left[i][j] == 0) start = j;
				for (k = start; k < sz - zero; k++) {
					while (k + zero + 1 < sz && left[i][k + zero] == 0) zero++;
					left[i][k] = left[i][k + zero];
				}
				for (k = sz - zero; k < sz; k++) left[i][k] = 0;
			}

			if (left[i][j] != 0 && left[i][j] == left[i][j + 1]) {
				left[i][j] *= 2;
				for (k = j + 1; k < sz - 1; k++) left[i][k] = left[i][k + 1];
				left[i][sz - 1] = 0;
			}
		}
	}

	//right
	for (i = 0; i < sz; i++) {
		for (j = sz - 1; j > 0; j--) {
			int zero = 0;
			while (j - 1 - zero >= 0 && right[i][j - 1 - zero] == 0) {
				zero++;
			}
			if (right[i][j] == 0) zero++;
			if (zero) {
				int start = j - 1;
				if (right[i][j] == 0) start = j;
				for (k = start; k >= zero; k--) {
					while (k - zero - 1 >= 0 && right[i][k - zero] == 0) zero++;
					right[i][k] = right[i][k - zero];
				}
				for (k = zero - 1; k >= 0; k--) right[i][k] = 0;
			}

			if (right[i][j] != 0 && right[i][j] == right[i][j - 1]) {
				right[i][j] *= 2;
				for (k = j - 1; k > 0; k--) right[i][k] = right[i][k - 1];
				right[i][0] = 0;
			}
		}
	}

	for (i = 0; i < sz; i++) {
		for (j = 0; j < sz; j++) {
			if (board[i][j] != up[i][j]) {
				chk |= 1;
				break;
			}
		}
		if (chk & 1) break;
	}

	for (i = 0; i < sz; i++) {
		for (j = 0; j < sz; j++) {
			if (board[i][j] != down[i][j]) {
				chk |= (1 << 2);
				break;
			}
		}
		if (chk & (1 << 2)) break;
	}

	for (i = 0; i < sz; i++) {
		for (j = 0; j < sz; j++) {
			if (board[i][j] != left[i][j]) {
				chk |= (1 << 3);
				break;
			}
		}
		if (chk & (1 << 3)) break;
	}

	for (i = 0; i < sz; i++) {
		for (j = 0; j < sz; j++) {
			if (board[i][j] != right[i][j]) {
				chk |= (1 << 4);
				break;
			}
		}
		if (chk & (1 << 4)) break;
	}
	int ret = 0;
	if (chk & 1) ret = max(ret, func(idx + 1, up));
	if (chk & (1 << 2)) ret = max(ret, func(idx + 1, down));
	if (chk & (1 << 3)) ret = max(ret, func(idx + 1, left));
	if (chk & (1 << 4)) ret = max(ret, func(idx + 1, right));
	return ret;
}

int main() {
	int i, j, a, n;
	vector<vector<int>> board;
	scanf("%d", &n);
	board.resize(n);
	for (i = 0; i < n; i++) {
		board[i].resize(n);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	int ret = func(0, board);
	if (ret == 0) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				ret = max(ret, board[i][j]);
			}
		}
	}
	printf("%d", ret);
}*/

/*int board[101][101]; //3190 뱀
int main() {
	int i, j, n, k, x, y, l, t, ret=0, direction=0; //direction 0 : right 1 : down 2 : left 3 : up
	int next[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
	queue<pair<int, int>> que;
	char dir;
	pair<int, int> tail = { 1, 1 }, head = { 1, 1 };
	vector<pair<int, char>> command;
	scanf("%d%d", &n, &k);
	for (i = 0; i < k; i++) {
		scanf("%d%d", &x, &y);
		board[x][y] = 9;
	}
	scanf("%d", &l);
	for (i = 0; i < l; i++) {
		scanf("%d %c", &t, &dir);
		command.emplace_back(t, dir);
	}
	board[1][1] = 1;
	for (auto it : command) {
		int sec = it.first;
		char dir = it.second;
		while (ret < sec) {
			ret++;
			//printf("ret : %d\n", ret);
			board[head.first][head.second] = 1;
			head.first += next[direction][0], head.second += next[direction][1];
			if (head.first<1 || head.first>n || head.second<1 | head.second>n) {
				printf("%d", ret);
				return 0;
			}
			if (board[head.first][head.second]!=0&&board[head.first][head.second]!=9) {
				printf("%d", ret);
				return 0;
			}
			int& appleChk = board[head.first][head.second];
			int chk = 0;
			if (appleChk == 9) {
				chk = 1;
			}
			board[head.first][head.second] = 2;
			que.push({ head.first, head.second });
			
			if (!chk) { //길이 안늘어남
				board[tail.first][tail.second] = 0;
				tail.first = que.front().first, tail.second = que.front().second;
				que.pop();
			}
			board[tail.first][tail.second] = -1;
		}
		if (dir == 'D') direction = (direction + 1) % 4;
		
		else {
			direction = (direction + 3) % 4;
		}
	}
	while (head.first > 0 && head.first <= n && head.second > 0 && head.second <= n) {
		ret++;
		head.first += next[direction][0], head.second += next[direction][1];
		if (board[head.first][head.second]) break;
	}
	printf("%d", ret);
}*/

/*int main() { // 13458 시험 감독
	int i, n, candid[1000000], b, c;
	long long ret;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &candid[i]);
	}
	scanf("%d%d", &b, &c);
	ret = n;
	for (i = 0; i < n; i++) {
		if (candid[i] - b < 0) continue;
		ret += (candid[i] - b) / c;
		if ((candid[i] - b) % c) ret++;
	}
	printf("%lld", ret);
}*/

/*int dice[6]; //14499 주사위 굴리기
void swap(int a, int b, int c, int d) {
	int tmp = dice[d];
	dice[d] = dice[c];
	dice[c] = dice[b];
	dice[b] = dice[a];
	dice[a] = tmp;
}
int main() {
	int i, j, n, m, x, y, k, board[20][20], tmpC, next[4][2] = { {0, 1}, {0, -1}, {-1, 0}, {1, 0} };
	scanf("%d%d%d%d%d", &n, &m, &x, &y, &k);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	for (i = 0; i < k; i++) {
		scanf("%d", &tmpC);
		tmpC--;
		int nextX = x + next[tmpC][0], nextY = y + next[tmpC][1];
		if (nextX < 0 || nextX > n - 1 || nextY < 0 || nextY > m - 1) continue; //보드 밖으로 넘어갈 경우
		switch (tmpC) {
			case 0: //동
				swap(1, 2, 3, 5);
				break;
			case 1: //서
				swap(1, 5, 3, 2);
				break;
			case 2://북
				swap(0, 5, 4, 2);
				break;
			case 3://남
				swap(0, 2, 4, 5);
				break;
		}
		if (board[nextX][nextY] == 0) { //보드 값이 0
			board[nextX][nextY] = dice[5];
		}

		else { //보드 값이 0이 아님
			dice[5] = board[nextX][nextY];
			board[nextX][nextY] = 0;
		}

		printf("%d\n", dice[2]);
		x = nextX, y = nextY;
	}
}*/

/*int n, m, board[500][500]; //14500 테트로미노
int block[19][4][2] = {{{0, 0}, {0, 1}, {0, 2}, {1, 0}}, {{0, 0}, {-1, 0}, {-2, 0}, {0, 1}}, {{ 0 ,0 }, {0, -1}, {1, 0}, {2, 0}}, {{0, 0}, {0, -1}, {0, -2}, {-1, 0}},
					   {{0, 0}, {-1, 0}, {0, 1}, {0, 2}}, {{0, 0}, {1, 0}, {2, 0}, {0, 1}}, {{0, 0}, {0, -1}, {0, -2}, {1, 0}}, {{0 ,0}, {0, -1}, {-1, 0}, {-2, 0}},
					   {{0, 0}, {0, -1}, {1, 0}, {1, 1}}, {{0, 0}, {0, -1}, {1, -1}, {-1, 0}}, {{0, 0}, {-1, 0}, {0, 1}, {1, 1}}, {{0, 0}, {0, 1}, {1, 0}, {1, -1}},
					   {{0, 0}, {-1, 0}, {-2, 0}, {1, 0}}, {{0, 0}, {0, -1}, {0, 1}, {0, 2}},
					   {{0, 0}, {0, 1}, {1, 0}, {1, 1}},
					   {{0, 0}, {1, 0}, {0, -1}, {0, 1}}, {{0, 0}, {-1, 0}, {1, 0}, {0, 1}}, {{0, 0}, {-1, 0}, {0, -1}, {0, 1}}, {{0, 0}, {0, -1}, {1, 0}, {-1, 0}}};

int getMax(int a, int b) {
	int i, j, k, ret=0;
	for (i = 0; i < 19; i++) {
		int tmp = 0, chk = 0;
		for (j = 0; j < 4; j++) {
			int x = a + block[i][j][0], y = b + block[i][j][1];
			if (x < 0 || x > n - 1 || y < 0 || y > m - 1) {
				chk = 1;
				break;
			}
			tmp += board[x][y];
		}
		if (chk) continue;
		ret = max(ret, tmp);
	}
	return ret;
}

int func(int idx) {
	if (idx >= n * m) return 0;
	int ret = -1, x=idx/m, y=idx%m, k= getMax(x, y);
	ret = max(k, func(idx + 1));
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	printf("%d", func(0));
}*/

/*int n, t[16], p[16], dp[16]; //14501 퇴사

int func(int idx) {
	int i;
	int& ret = dp[idx];
	if (ret != -1) return ret;
	ret = 0;
	for (i = idx + t[idx]; i <= n; i++) {
		if (i + t[i] > n+1) continue;
		//if (idx == 1) printf("i : %d, p[i] : %d, t[i] : %d, idx+t[i] : %d\n", i, p[i], t[i], idx+t[i]);
		ret = max(ret, p[i] + func(i));
	}
	//printf("idx : %d, ret : %d\n", idx, ret);
	return ret;
}
int main() {
	int i;
	scanf("%d", &n);
	dp[0]=-1, t[0] = 1, p[0] = 1;
	for (i = 1; i <= n; i++) {
		scanf("%d%d", &t[i], &p[i]);
		dp[i] = -1;
	}
	printf("%d", func(0));
}*/

/*int n, m, mp[8][8], nxt[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} }; //14502 연구소
vector<pair<int, int>> vec;

int func(int idx, int wall) {
	if (idx > n * m) return 0;
	if (wall == 3) {
		//갯수세기
		int i, j, ret=0;
		queue<pair<int, int>> copy;
		for(auto it : vec){
			copy.emplace(it.first, it.second);
		}

		int cpyMap[8][8];
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				cpyMap[i][j] = mp[i][j];
			}
		}
		
		while (!copy.empty()) {
			int x = copy.front().first, y = copy.front().second;
			copy.pop();
			for (i = 0; i < 4; i++) {
				int nextX = x + nxt[i][0], nextY = y + nxt[i][1];
				if (nextX<0 || nextX>n - 1 || nextY<0 || nextY>m - 1||cpyMap[nextX][nextY]) continue;
				cpyMap[nextX][nextY] = 2;
				copy.emplace(nextX, nextY);
			}
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (!cpyMap[i][j]) ret++;
			}
		}

		return ret;
	}

	int x = idx / m, y = idx % m, ret=0;
	if (mp[x][y]) ret=max(ret, func(idx + 1, wall));
	else {
		mp[x][y] = 1;
		ret=max(ret, func(idx + 1, wall + 1));
		mp[x][y] = 0;
		ret=max(ret, func(idx + 1, wall));
	}
	return ret;
}

int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &mp[i][j]);
			if (mp[i][j] == 2) vec.emplace_back(i, j);
		}
	}
	printf("%d", func(0, 0));
}*/

/*int n, m, board[50][50], nxt[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} }; //14503 로봇 청소기
int main() {
	int i, j, r, c, d;
	scanf("%d%d%d%d%d", &n, &m, &r, &c, &d); //d : 0 - 북  1 - 동  2 - 남  3 - 서
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	int rotateStk = 0, ret=0;
	while (true) {
		if (!board[r][c]) {
			board[r][c] = 2;
			ret++;
		}
		int nextDirection = (d + 3) % 4, nextX=r+nxt[nextDirection][0], nextY=c+nxt[nextDirection][1];
		if (nextX<0 || nextX>n - 1 || nextY<0 || nextY>m - 1 || board[nextX][nextY]) {
			d = nextDirection;
			rotateStk++;
			if (rotateStk == 4) {
				nextDirection = (d + 2) % 4, nextX=r+nxt[nextDirection][0], nextY=c+nxt[nextDirection][1];
				if (board[nextX][nextY]==1) {
					printf("%d", ret);
					return 0;
				}
				else {
					r = nextX, c = nextY;
					rotateStk = 0;
				}
			}
			continue;
		}
		rotateStk = 0;
		r = nextX, c = nextY, d=nextDirection;
	}
}*/

/*int board[100][100]; // 14890 경사로

int main() {
	int i, j, k, n, l, ret=0;
	scanf("%d%d", &n, &l);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	
	for (i = 0; i < n; i++) {
		for (int a = 0; a < 2; a++) {
			int h = board[i][0], chk = 0, border=-1;
			if (a) h = board[0][i];
			for (j = 1; j < n; j++) {
				int x, y;
				if (!a) x = i, y = j;
				else x = j, y = i;
				if (board[x][y] != h) {
					if (board[x][y] - 1 == h) {
						for (k = j - l; k < j; k++) {
							if (k < 0) break;
							if (!a && board[i][k] != h) break;
							else if (a && board[k][i] != h) break;
						}
						if (k != j||j-l<=border) {
							chk = 1;
							break;
						}
						h++;
						
						border = j-1;
					}

					else if (board[x][y] + 1 == h) {
						for (k = j; k < j + l; k++) {
							if (k > n - 1) break;
							if (!a && board[i][k] + 1 != h) break;
							else if (a && board[k][i] + 1 != h) break;
						}
						if (k != j + l || j <= border) {
							chk = 1;
							break;
						}
						border = j + l - 1;
						h--;
					}
					else {
						chk = 1;
						break;
					}
				}
			}
			if (!chk) {
				ret++;
			}
		}
	}
	printf("%d", ret);
}*/

/*void rotate(string &str, int dir) { //14891 톱니바퀴
	int i;
	if (dir == 1) {
		char tmp = str[7];
		for (i = 7; i > 0; i--) {
			str[i] = str[i-1];
		}
		str[0] = tmp;
	}

	else {
		char tmp = str[0];
		for (i = 0; i < 7; i++) {
			str[i] = str[i + 1];
		}
		str[7] = tmp;
	}
}
int main() {
	ios::sync_with_stdio(false);
	int i, j, k, idx, num, dir;
	string str[4];
	for (i = 0; i < 4; i++) {
		cin >> str[i];
	}
	cin >> k;
	for (i = 0; i < k; i++) {
		cin >> num >> dir;
		num--;
		int next = num + 1, prev = num - 1, chk=0, nd=-dir;
		while (next < 4) {
			if (str[next - 1][2] != str[next][6]) {
				chk |= (1 << next);
			}
			else break;
			next++;
		}
		for(j=num+1; j<4; j++){
			if (chk & (1 << j)) rotate(str[j], nd);
			nd *= -1;
		}
	
		while (prev >= 0) {
			if (str[prev][2] != str[prev + 1][6]) {
				chk |= (1 << prev);
			}
			else break;
			prev--;
		}
		nd = -dir;
		for (j = num - 1; j >= 0; j--) {
			if (chk & (1 << j)) {
				rotate(str[j], nd);
				nd *= -1;
			}
		}
		rotate(str[num], dir);
	}
	int ret = 0;
	for (i = 0; i < 4; i++) {
		ret += (str[i][0] - '0')*(1<<i);
	}
	cout << ret<<endl;
}*/

/*int n, m, idx, board[8][8]; //15683 감시
pair<int, int> cctv[8];

void chk(int x, int y, int dir, int num) {
	int i;
	if (dir == 0) {
		for (i = y + 1; i < m; i++) {//오른쪽
			if (board[x][i] == 6) break;
			else if (board[x][i] != 0) continue;
			board[x][i] = num;
		}
	}

	else if (dir == 1) {
		for (i = x + 1; i < n; i++) {//아래
			if (board[i][y] == 6) break;
			else if (board[i][y] != 0) continue;
			board[i][y] = num;
		}
	}

	else if (dir == 2) {
		for (i = y - 1; i >= 0; i--) {//왼쪽
			if (board[x][i] == 6) break;
			else if (board[x][i] != 0) continue;
			board[x][i] = num;
		}
	}

	else {
		for (i = x - 1; i >= 0; i--) {//위
			if (board[i][y] == 6) break;
			else if (board[i][y] != 0) continue;
			board[i][y] = num;
		}
	}
}

void cp(int a[][8], int b[][8]) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			b[i][j] = a[i][j];
		}
	}
}
int func(int num) {
	int i, j, ret=99999, copy[8][8];
	if (num == idx) {
		ret = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				if (!board[i][j]) ret++;
			}
		}
		return ret;
	}

	cp(board, copy);

	//0 : 오른쪽 1 : 아래 2 : 왼쪽 3 : 위
	int x = cctv[num].first, y = cctv[num].second;
	if (board[x][y] == 1) {
		chk(x, y, 0, -1);//오른쪽
		ret=min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 1, -1);//아래
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 2, -1);//왼쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 3, -1);//위
		ret = min(ret, func(num + 1));
		cp(copy, board);
	}

	else if (board[x][y] == 2) {
		chk(x, y, 0, -1);//오른쪽
		chk(x, y, 2, -1);//왼쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);
		
		chk(x, y, 3, -1);//위
		chk(x, y, 1, -1);//아래
		ret = min(ret, func(num + 1));
		cp(copy, board);
	}

	else if (board[x][y] == 3) {
		chk(x, y, 3, -1);//위
		chk(x, y, 0, -1);//오른쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 0, -1);//오른쪽
		chk(x, y, 1, -1);//아래
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 1, -1);//아래
		chk(x, y, 2, -1);//왼쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 2, -1);//왼쪽
		chk(x, y, 3, -1);//위
		ret = min(ret, func(num + 1));
		cp(copy, board);
	}

	else if (board[x][y] == 4) {
		chk(x, y, 2, -1);//왼쪽
		chk(x, y, 3, -1);//위
		chk(x, y, 0, -1);//오른쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 3, -1);//위
		chk(x, y, 0, -1);//오른쪽
		chk(x, y, 1, -1);//아래
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 0, -1);//오른쪽
		chk(x, y, 1, -1);//아래
		chk(x, y, 2, -1);//왼쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);

		chk(x, y, 1, -1);//아래
		chk(x, y, 2, -1);//왼쪽
		chk(x, y, 3, -1);//위
		ret = min(ret, func(num + 1));
		cp(copy, board);
	}

	else {
		chk(x, y, 3, -1);//위
		chk(x, y, 0, -1);//오른쪽
		chk(x, y, 1, -1);//아래
		chk(x, y, 2, -1);//왼쪽
		ret = min(ret, func(num + 1));
		cp(copy, board);
	}
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j] != 0 && board[i][j] != 6) {
				cctv[idx++] = { i, j };
			}
		}
	}
	printf("%d", func(0));
}*/

/*int n, m, h, ladder[31][10]; //15684 사다리 조작

int func(int idx, int num) {
	int i, j;
	if (idx>=(n-1)*h||num==3) {
		//조건 만족하는지 확인, 맞으면 num 출력
		for (i = 1; i <= n; i++) {
			int cur = i;
			for (j = 1; j <= h; j++) {
				if (ladder[j][cur] == 1) {
					cur++;
				}
				else if (cur > 1 && ladder[j][cur - 1] == 1) {
					cur--;
				}
			}
			if (cur != i) break;
		}
		//printf("i : %d\n", i);
		if (i == n + 1) return num;
		else return 99999;
	}

	int ret=99999, x = idx / (n-1)+1, y = idx % (n-1)+1; //왼쪽 세로선 인덱스
	if (ladder[x][y] == 1) {
		if (y < n-1)
			ret = min(ret, func(idx + 2, num));
		else
			ret = min(ret, func(idx + 1, num));
	}
	else {
		ret = min(ret, func(idx + 1, num));
		ladder[x][y] = 1;
		ret = min(ret, func(idx + 2, num + 1));
		ladder[x][y] = 0;
	}
	return ret;
}

int main() {
	int i, j, a, b;
	scanf("%d%d%d", &n, &m, &h);
	for (i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		ladder[a][b] = 1;
	}

	int ret = func(0, 0);
	if (ret == 99999) ret = -1;
	printf("%d", ret);
}*/

/*int board[101][101], nxt[4][2] = { {0, 1}, {-1, 0}, {0, -1}, {1, 0} }; //15685 드래곤 커브
int main() {
	int i, j, k, n, x, y, d, g;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d%d", &x, &y, &d, &g);
		int tailX = x + nxt[d][1], tailY = y + nxt[d][0]; //x : 3, y : 3, 오른쪽일때 tailX : 4, tailY : 3;
		board[y][x] = 1; //반대로해야됨
		board[tailY][tailX] = 1; //반대로
		vector<int> vec;
		vec.push_back((d + 2) % 4);

		for (j = 0; j < g; j++) {
			for (k = (1 << j)-1; k >= 0; k--) {
				int nextDir = (vec[k] + 3) % 4;
				tailX += nxt[nextDir][1], tailY += nxt[nextDir][0];
				if(!board[tailY][tailX]) board[tailY][tailX] = 1;
				vec.push_back((nextDir + 2) % 4);
			}
		}
	}
	int ret = 0;
	for (i = 0; i <100; i++) {
		for (j = 0; j < 100; j++) {
			if (board[i][j] && board[i + 1][j] && board[i][j + 1] && board[i + 1][j + 1]) ret++;
		}
	}
	printf("%d", ret);
}*/

/*const int INF = 999999; //치킨 배달
int n, m, mp[51][51], sz;
vector<pair<int, int>> chicken;

int func(int idx, int dNum) {
	if (idx > sz - 1 && dNum < sz - m) {
		return INF;
	}

	if (dNum == sz-m) {
		int i, j;
		//거리구하기
		vector<pair<int, int>> remainChicken, house;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (mp[i][j] == 2) remainChicken.emplace_back(i, j);
				else if (mp[i][j] == 1) house.emplace_back(i, j);
			}
		}

		int ret = 0;
		for (i = 0; i < house.size(); i++) {
			int tmp = INF;
			for (j = 0; j < remainChicken.size(); j++) {
				tmp = min(tmp, abs(house[i].first - remainChicken[j].first) + abs(house[i].second - remainChicken[j].second));
			}
			ret += tmp;
		}
		return ret;
	}

	int ret = INF, x=chicken[idx].first, y=chicken[idx].second;
	ret = min(ret, func(idx + 1, dNum));
	mp[x][y] = 0;
	ret = min(ret, func(idx + 1, dNum + 1));
	mp[x][y] = 2;
	return ret;
}
int main() {
	int i, j;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &mp[i][j]);
			if (mp[i][j] == 2) chicken.emplace_back(i, j);
		}
	}
	sz = chicken.size();
	printf("%d", func(0, 0));
}*/

/*char cube[6][3][3], test[6] = { 'w', 'y', 'r', 'o', 'g', 'b' }, cmd[1000][2]; //5373 큐빙
int idx[6][12][2] = { {{0, 0}, {0, 1}, {0, 2}, {0, 2}, {0, 1}, {0, 0}, {0, 2}, {0, 1}, {0, 0}, {0, 2}, {0, 1}, {0, 0}}, //up
				{{2, 2}, {2, 1}, {2, 0}, {2, 0}, {2, 1}, {2, 2}, {2, 0}, {2, 1}, {2, 2}, {2, 0}, {2, 1}, {2, 2}}, //down
				{{2, 0}, {2, 1}, {2, 2}, {0, 0}, {1, 0}, {2, 0}, {0, 2}, {0, 1}, {0, 0}, {2, 2}, {1, 2}, {0, 2}}, //foward
				{{0, 2}, {0, 1}, {0, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}, {2, 1}, {2, 2}, {2, 2}, {1, 2}, {0, 2}}, //behind
				{{0, 0}, {1, 0}, {2, 0}, {0, 0}, {1, 0}, {2, 0}, {0, 0}, {1, 0}, {2, 0}, {2, 0}, {1, 0}, {0, 0}}, //left
				{{2, 2}, {1, 2}, {0, 2}, {0, 2}, {1, 2}, {2, 2}, {2, 2}, {1, 2}, {0, 2}, {2, 2}, {1, 2}, {0, 2}} }; //right
				
void swap(int a, int b, int c, int d, int s, int k, int mode){
	int i, j, arr[4] = { a, b, c, d };
	char tmp1, tmp2, tmp3;
	if (mode == 0) { //시계방향 회전
		tmp1= cube[arr[3]][idx[s][9][0]][idx[s][9][1]];
		tmp2 = cube[arr[3]][idx[s][10][0]][idx[s][10][1]];
		tmp3 = cube[arr[3]][idx[s][11][0]][idx[s][11][1]];

		for (i = 11; i > 2; i -= 3) {
			int index = arr[i / 3], nextIndex = arr[i / 3 - 1];
			cube[index][idx[s][i][0]][idx[s][i][1]] = cube[nextIndex][idx[s][i - 3][0]][idx[s][i - 3][1]];
			cube[index][idx[s][i-1][0]][idx[s][i-1][1]] = cube[nextIndex][idx[s][i - 4][0]][idx[s][i - 4][1]];
			cube[index][idx[s][i-2][0]][idx[s][i-2][1]] = cube[nextIndex][idx[s][i - 5][0]][idx[s][i - 5][1]];
		}
		cube[arr[0]][idx[s][0][0]][idx[s][0][1]] = tmp1;
		cube[arr[0]][idx[s][1][0]][idx[s][1][1]] = tmp2;
		cube[arr[0]][idx[s][2][0]][idx[s][2][1]] = tmp3;
	}

	else { //반시계방향 회전
		tmp1 = cube[arr[0]][idx[s][0][0]][idx[s][0][1]];
		tmp2 = cube[arr[0]][idx[s][1][0]][idx[s][1][1]];
		tmp3 = cube[arr[0]][idx[s][2][0]][idx[s][2][1]];

		for (i = 0; i < 9; i += 3) {
			int index = arr[i / 3], nextIndex=arr[i/3+1];
			cube[index][idx[s][i][0]][idx[s][i][1]] = cube[nextIndex][idx[s][i + 3][0]][idx[s][i + 3][1]];
			cube[index][idx[s][i + 1][0]][idx[s][i + 1][1]] = cube[nextIndex][idx[s][i + 4][0]][idx[s][i + 4][1]];
			cube[index][idx[s][i + 2][0]][idx[s][i + 2][1]] = cube[nextIndex][idx[s][i + 5][0]][idx[s][i + 5][1]];
		}
		cube[arr[3]][idx[s][9][0]][idx[s][9][1]] = tmp1;
		cube[arr[3]][idx[s][10][0]][idx[s][10][1]] = tmp2;
		cube[arr[3]][idx[s][11][0]][idx[s][11][1]] = tmp3;
	}

	if (s!=3&&mode==0||s==3&&mode==1) {
		//자체 돌리기
		int tmp[2] = { cube[s][0][0], cube[s][1][0] };
		cube[s][0][0] = cube[s][2][0];
		cube[s][1][0] = cube[s][2][1];
		cube[s][2][0] = cube[s][2][2];
		cube[s][2][1] = cube[s][1][2];
		cube[s][2][2] = cube[s][0][2];
		cube[s][1][2] = cube[s][0][1];
		cube[s][0][2] = tmp[0];
		cube[s][0][1] = tmp[1];
	}

	else {
		//자체 돌리기
		int tmp[2] = { cube[s][0][0], cube[s][0][1] };
		cube[s][0][0] = cube[s][0][2];
		cube[s][0][1] = cube[s][1][2];
		cube[s][0][2] = cube[s][2][2];
		cube[s][1][2] = cube[s][2][1];
		cube[s][2][2] = cube[s][2][0];
		cube[s][2][1] = cube[s][1][0];
		cube[s][2][0] = tmp[0];
		cube[s][1][0] = tmp[1];
	}
}

int main() {
	int i, j, k, t, n;
	map<char, int> mp;
	mp['U'] = 0;
	mp['D'] = 1;
	mp['F'] = 2;
	mp['B'] = 3;
	mp['L'] = 4;
	mp['R'] = 5;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++) {
			fgetc(stdin);
			scanf("%c%c", &cmd[i][0], &cmd[i][1]);
		}

		for (i = 0; i < 6; i++) {
			for (j = 0; j < 3; j++) {
				for (k = 0; k < 3; k++) {
					cube[i][j][k] = test[i];
				}
			}
		}

		for (i = 0; i < n; i++) {
			int mode = 0;
			switch (cmd[i][0]) {
			case 'U':
				if (cmd[i][1] == '-') mode = 1;
				swap(mp['B'], mp['R'], mp['F'], mp['L'], 0, 0, mode);
				break;
			case 'D':
				if (cmd[i][1] == '-') mode = 1;
				swap(mp['B'], mp['L'], mp['F'], mp['R'], 1, 0, mode);
				break;
			case 'F':
				if (cmd[i][1] == '-') mode = 1;
				swap(mp['U'], mp['R'], mp['D'], mp['L'], 2, 0, mode);
				break;
			case 'B':
				if (cmd[i][1] == '-') mode = 1;
				swap(mp['U'], mp['L'], mp['D'], mp['R'], 3, 0, mode);
				break;
			case 'L':
				if (cmd[i][1] == '-') mode = 1;
				swap(mp['U'], mp['F'], mp['D'], mp['B'], 4, 0, mode);
				break;
			case 'R':
				if (cmd[i][1] == '-') mode = 1;
				swap(mp['U'], mp['B'], mp['D'], mp['F'], 5, 0, mode);
				break;
			}
		}
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				printf("%c", cube[0][i][j]);
			}
			printf("\n");
		}
	}
}*/

/*int board[50][50], linkChk[50][50];
int main() {
	int i, j, n, l, r;
	scanf("%d%d%d", &n, &l, &r);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	while (true) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				linkChk[i][j] = 0;
			}
		}

		for (i = 0; i < n; i++) { //국경 열기
			for (j = 0; j < n; j++) {
				int tmp;
				if (j + 1 < n) {
					tmp = abs(board[i][j] - board[i][j + 1]);
					if (tmp >= l && tmp <= r) {
						linkChk[i][j] = 1;
						linkChk[i][j + 1] = 1;
					}
				}

				if (i + 1 < n) {
					tmp = abs(board[i+1][j] - board[i][j]);
					if (tmp >= l && tmp <= r) {
						linkChk[i][j] = 1;
						linkChk[i+1][j] = 1;
					}
				}
			}
		}
	}
}*/

/*int board[50][50], cpy[50][50], parent[50], depth[50], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

void merge(int a, int b) {
	a = find(a), b = find(b);
	if (a == b) return;
	if (depth[a] < depth[b]) swap(a, b);
	if (depth[a] == depth[b]) depth[a]++;
	parent[b] = a;
}

int main() {
	int i, j, n, l, r, ret=0;
	scanf("%d%d%d", &n, &l, &r);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}

	while (true) {
		vector<pair<int, int>> vec[2500];
		for (i = 0; i < n*n; i++) {
			parent[i] = i;
			depth[i] = 1;
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cpy[i][j] = board[i][j];
			}
		}
		for (int idx = 0; idx < n * n; idx++) {
			int x = idx / n, y = idx % n;
			for (i = 0; i < 4; i++) {
				int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
				if(nxtX<0||nxtX>=n||nxtY<0||nxtY>=n||(abs(board[x][y]-board[nxtX][nxtY])<l|| abs(board[x][y] - board[nxtX][nxtY]) > r)) continue;
				merge(idx, nxtX*n+nxtY);
			}
		}
		for (i = 0; i < n*n; i++) {
			vec[find(i)].emplace_back(i, board[i / n][i % n]);
		}
		for (auto it : vec) {
			if (it.size() == 0) continue;
			int tmp = 0;
			for (auto k : it) {
				tmp += k.second;
			}
			for (auto k : it) {
				board[k.first / n][k.first % n] = tmp / it.size();
			}
		}
		int chk = 0;
		printf("====result====\n");
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				printf("%d ", board[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (board[i][j] != cpy[i][j]) {
					chk = 1;
					break;
				}
			}
			if (chk) break;
		}
		if (chk) ret++;
		else break;
	}
	printf("%d", ret);
}*/

/*int visited[50][50], board[50][50], cpy[50][50], area[2501], nxt[4][2] = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} }; //16234 인구 이동
int main() {
	int i, j, k, n, l, r;
	scanf("%d%d%d", &n, &l, &r);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &board[i][j]);
		}
	}
	int ret = 0;
	queue<pair<int, int>> que;
	while (true) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) visited[i][j] = 0;
		}
		for (i = 0; i < n * n; i++) area[i] = 0;
		int idx = 1, totalSum, num;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cpy[i][j] = board[i][j];
				if (!visited[i][j]) {
					que.emplace(i, j);
					visited[i][j] = idx;
					totalSum = 0, num=0;
					while (!que.empty()) {
						int x = que.front().first,
							y = que.front().second;
						que.pop();
						totalSum += board[x][y];
						num++;
						for (k = 0; k < 4; k++) {
							int nxtX = x + nxt[k][0], nxtY = y + nxt[k][1];
							if (nxtX < 0 || nxtX >= n || nxtY < 0 || nxtY >= n || visited[nxtX][nxtY] || abs(board[x][y] - board[nxtX][nxtY]) < l || abs(board[x][y] - board[nxtX][nxtY]) > r) continue;
							visited[nxtX][nxtY] = idx;
							que.emplace(nxtX, nxtY);
						}
					}
					area[idx] = totalSum / num;
					idx++;
				}
			}
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				board[i][j] = area[visited[i][j]];
			}
		}
		int chk = 0;
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (cpy[i][j] != board[i][j]) {
					chk = 1;
					break;
				}
			}
			if (chk) break;
		}
		if (chk) ret++;
		else break;
	}
	printf("%d", ret);
}*/

/*int board[11][11], food[11][11], nxt[8][2] = { {-1, -1}, {-1 ,0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1} }; //16235 나무 재테크
deque<pair<int, int>> tree[11][11]; //나이, 생사여부(0 : 죽음 1 : 살아있음)
vector<pair<int, int>> treePos;
int main() {
	int year, i, j, n, m, k, a, b, c; //n : 땅 가로, 세로 길이, m : 나무 갯수, k : 년수
	scanf("%d%d%d", &n, &m, &k);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &food[i][j]);
			board[i][j] = 5;
		}
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		tree[a][b].emplace_back(c, 1);
		treePos.emplace_back(a, b);
	}

	int x, y, sz;
	for (year = 0; year < k; year++) {
		//봄
		for (auto pos : treePos) {
			x = pos.first, y = pos.second;
			deque<pair<int, int>>& ref = tree[x][y];
			for (i = 0; i < ref.size(); i++) { //tree[x][y]에는 (x, y)에 있는 나무들의 나이가 오름차순으로 저장되어있음.
											   //tree[x][y].front()는 나이가 적은 나무를, tree[x][y].back()은 나이가 많은 나무를 리턴함.
				int age = ref[i].first;
				if (board[x][y] >= age) {
					board[x][y] -= age;
					ref[i].first++;
				}
				else {
					while (i < ref.size()) {
						ref[i].second = 0;
						i++;
					}
				}
			}
		}

		//여름
		for (i = 0; i < treePos.size(); i++) {
			x = treePos[i].first, y = treePos[i].second;
			deque<pair<int, int>>& ref = tree[x][y];
			for (j = ref.size()-1; j >=0; j--) {
				int isAlive = ref[j].second;
				if (!isAlive) {
					board[x][y] += ref[j].first / 2;
					ref.pop_back();
				}
				else break;
			}
			if (!ref.size()) {
				treePos.erase(treePos.begin() + i);
				i--;
			}
		}

		//가을
		for (int q = 0; q < treePos.size(); q++) {
			x = treePos[q].first, y = treePos[q].second;
			deque<pair<int, int>>& ref = tree[x][y];
			for (i = 0; i <ref.size(); i++) {
				if (!(ref[i].first % 5)) {//5의 배수
					for (j = 0; j < 8; j++) {
						int nxtX = x + nxt[j][0], nxtY = y + nxt[j][1];
						if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > n) continue;
						if (!tree[nxtX][nxtY].size()) treePos.emplace_back(nxtX, nxtY);
						tree[nxtX][nxtY].emplace_front(1, 1);
					}
				}
			}
		}

		//겨울
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				board[i][j] += food[i][j];
			}
		}
	}

	int ret = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			ret += tree[i][j].size();
		}
	}
	printf("%d", ret);
}*/

/*int board[21][21], visited[21][21], nxt[4][2] = { {-1, 0}, {0, -1}, {1, 0}, {0, 1} }, MAX=987654321; //16236 아기 상어
int main() {
	int i, j, n, curX, curY, curSize = 2;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j] == 9) {
				curX = i, curY = j;
				board[i][j] = MAX;
			}
		}
	}
	int ret = 0, stk = 0;
	while (true) {
		queue<pair<int, pair<int, int>>> que;
		que.emplace(0, make_pair(curX, curY));
		int chk = 0, shortest = -1;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) visited[i][j] = 0;
		}
		priority_queue<pair<int, int>> pQue;
		while (!que.empty()) {
			int dist = que.front().first,
				x = que.front().second.first,
				y = que.front().second.second;
			que.pop();

			if (shortest != -1 && shortest < dist) {
				break;
			}

			if (board[x][y] != 0 && board[x][y] < curSize) {
				chk = 1;
				shortest = dist;
				pQue.emplace(-x, -y);
			}
			if (visited[x][y]) continue;
			visited[x][y] = 1;
			for (i = 0; i < 4; i++) {
				int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
				if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > n || board[nxtX][nxtY] > curSize) continue;
				que.emplace(dist + 1, make_pair(nxtX, nxtY));
			}
		}
		if (!chk) break;
		else {
			board[curX][curY] = 0;
			curX = -pQue.top().first;
			curY = -pQue.top().second;
			stk++;
			if (curSize == stk) {
				curSize++;
				stk = 0;
			}
			ret += shortest;
			chk = 1;
			board[curX][curY] = MAX;
		}
	}
	printf("%d", ret);
}*/

/*int r, c, board[50][50], cpy[50][50], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }; //17144 미세먼지 안녕!

void chk(int x, int y) {
	int num = 0;
	for (int i = 0; i < 4; i++) {
		int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
		if (nxtX < 0 || nxtX >= r || nxtY < 0 || nxtY >= c||board[nxtX][nxtY]==-1) continue;
		num++;
		cpy[nxtX][nxtY] += board[x][y] / 5;
	}
	cpy[x][y] += board[x][y] - (num * (board[x][y] / 5));
}

int main() {
	int i, j, t, up=-1, down=-1;
	scanf("%d%d%d", &r, &c, &t);
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j] == -1) {
				if (up == -1) up = i;
				else down = i;
			}
		}
	}

	while (t--) {
		for (i = 0; i < r; i++) { //확산
			for (j = 0; j < c; j++) {
				if (board[i][j] == -1) {
					cpy[i][j] = -1;
				}
				else if (board[i][j] != 0) {
					chk(i, j);
				}
			}
		}

		//공기청정기
		//위
		for (i = up - 1; i > 0; i--) {
			cpy[i][0] = cpy[i - 1][0];
		}
		for (i = 0; i < c - 1; i++) {
			cpy[0][i] = cpy[0][i + 1];
		}
		for (i = 0; i < up; i++) {
			cpy[i][c - 1] = cpy[i + 1][c - 1];
		}
		for (i = c - 1; i > 1; i--) {
			cpy[up][i] = cpy[up][i - 1];
		}
		cpy[up][1] = 0;
		//아래
		for (i = down + 1; i < r-1; i++) {
			cpy[i][0] = cpy[i + 1][0];
		}
		for (i = 0; i < c-1; i++) {
			cpy[r - 1][i] = cpy[r - 1][i + 1];
		}
		for (i = r - 1; i > down; i--) {
			cpy[i][c - 1] = cpy[i - 1][c - 1];
		}
		for (i = c - 1; i > 1; i--) {
			cpy[down][i] = cpy[down][i - 1];
		}
		cpy[down][1] = 0;
		memcpy(board, cpy, sizeof(board));
		memset(cpy, 0, sizeof(cpy));
	}
	int ret = 0;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			if (board[i][j] != -1) ret += board[i][j];
		}
	}
	printf("%d", ret);
}*/

/*typedef struct shark { //17143 낚시왕
	int speed;
	int dir;
	int sz;
}Shark;
Shark board[101][101], tmpBoard[101][101];
vector<pair<int, int>> sPos, tmpVec;
int nxt[4][2] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

void erase(int x, int y) {
	for (auto it = sPos.begin(); it != sPos.end(); it++) {
		if (it->first == x && it->second == y) {
			sPos.erase(it);
			break;
		}
	}
}

void push(int x, int y, int s, int d, int sz) {
	if (tmpBoard[x][y].sz!=0 && sz > tmpBoard[x][y].sz) { //이미 해당 자리에 다른 상어가 있고, 지금 움직이는 상어가 더 클 경우
		tmpBoard[x][y] = Shark{ s, d, sz };
	}
	else if (tmpBoard[x][y].sz==0) { //상어 없을경우
		tmpVec.emplace_back(x, y);
		tmpBoard[x][y] = Shark{ s, d, sz };
	}
}
int main() {
	int i, j, r, c, m, x, y, s, d, z, ret=0;
	scanf("%d%d%d", &r, &c, &m);

	for (i = 1; i <= r; i++) {
		for (j = 1; j <= c; j++) {
			board[i][j] = Shark{0,0,0};
		}
	}

	for (i = 1; i <= m; i++) {
		scanf("%d%d%d%d%d", &x, &y, &s, &d, &z);
		board[x][y] = Shark{ s, d-1, z };
		sPos.emplace_back(x, y);
	}

	for (int people = 1; people <= c; people++) {//1. 낚시왕 이동
		for (j = 1; j <= r; j++) {//2. 상어 잡기
			if (board[j][people].sz!=0) {
				ret += board[j][people].sz;
				erase(j, people);
				board[j][people] = Shark{0, 0, 0};
				break;
			}
		}

		for (auto shk : sPos) { //3. 상어 이동
			int x = shk.first, y = shk.second,
				s = board[x][y].speed, d = board[x][y].dir,
				size = board[x][y].sz;
			int tmpX = x+s * nxt[d][0], tmpY = y+s * nxt[d][1];
			if (tmpX > 0 && tmpX <= r && tmpY > 0 && tmpY <= c) {//벽에 안닿았을 때
				push(tmpX, tmpY, s, d, size);
			}

			else {//벽에 닿았을 때
				int afterPos, remain, tmpD, afterD;
				if (d == 0) { //위
					remain = s - (x - 1), afterD = ((remain-1) / (r-1)) % 2 ? 0 : 1;
					if (afterD == 0) {
						afterPos = r - (remain % (r - 1));
						if (afterPos == r) afterPos = 1;
					}
					else {
						afterPos = (remain % (r - 1)) + 1;
						if (afterPos == 1) afterPos = r;
					}
					push(afterPos, y, s, afterD, size);
				}

				else if (d == 1) { //아래
					remain = s - (r - x), afterD = ((remain-1) / (r-1)) % 2 ? 1 : 0;
					if (afterD == 0) {
						afterPos = r - (remain % (r - 1));
						if (afterPos == r) afterPos = 1;
					}
					else {
						afterPos = (remain % (r - 1)) + 1;
						if (afterPos == 1) afterPos = r;
					}
					push(afterPos, y, s, afterD, size);
				}

				else if (d == 2) { //오른쪽
					remain = s - (c - y), afterD = ((remain - 1) / (c - 1)) % 2 ? 2 : 3;
					if (afterD == 2) {//최종 방향 오른쪽
						afterPos = (remain % (c - 1)) + 1;
						if (afterPos == 1) afterPos = c;
					}
					else {//최종 방향 왼쪽
						afterPos = c - (remain % (c - 1));
						if (afterPos == c) afterPos = 1;
					}
					push(x, afterPos, s, afterD, size);
				}

				else {//왼쪽
					remain = s - (y - 1), afterD = ((remain-1) / (c-1)) % 2 ? 3 : 2;
					if (afterD == 2) {//최종 방향 오른쪽
						afterPos = (remain % (c-1)) + 1;
						if (afterPos == 1) afterPos = c;
					}
					else {//최종 방향 왼쪽
						afterPos = c - (remain % (c-1));
						if (afterPos == c) afterPos = 1;
					}
					push(x, afterPos, s, afterD, size);
				}
			}
		}
		copy(tmpVec.begin(), tmpVec.end(), sPos.begin());
		tmpVec.clear();
		memcpy(board, tmpBoard, sizeof(board));
		for (i = 1; i <= r; i++) {
			for (j = 1; j <= c; j++) {
				tmpBoard[i][j] = Shark{ 0, 0, 0 };
			}
		}
	}
	printf("%d", ret);
}*/

/*int arr[101][101]; //17140 이차원 배열과 연산
int main() {
	int i, j, r, c, k, ret=0, curRow=0, curCol=0, row=3, col=3;
	scanf("%d%d%d", &r, &c, &k);
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	int chk[101] = { 0, };
	priority_queue<pair<int, int>> pQue;
	while (true) {
		if (ret > 100) {
			ret = -1;
			break;
		}
		if (arr[r][c] == k) break;
		if (row>=col) {//R 연산
			for (i = 1; i <= row; i++) {
				int idx = 1;
				for (j = 1; j <= col; j++) {
					chk[arr[i][j]]++;
				}
				for (j = 1; j <= 100; j++) {
					if (chk[j] != 0) {
						pQue.emplace(-chk[j], -j);
					}
				}
				while (!pQue.empty()) {
					arr[i][idx] = -pQue.top().second;
					arr[i][idx + 1] = -pQue.top().first;
					pQue.pop();
					idx += 2;
				}
				for (j = idx; j <= col; j++) arr[i][j] = 0;
				if (curCol < idx - 1) curCol = idx - 1;
				memset(chk, 0, sizeof(chk));
			}
			col = curCol;
		}
		else {//C 연산
			for (j = 1; j <= col; j++) {
				int idx = 1;
				for (i = 1; i <= row; i++) {
					chk[arr[i][j]]++;
				}
				for (i = 1; i <= 100; i++) {
					if (chk[i] != 0) {
						pQue.emplace(-chk[i], -i);
					}
				}
				while (!pQue.empty()) {
					arr[idx][j] = -pQue.top().second;
					arr[idx+1][j] = -pQue.top().first;
					pQue.pop();
					idx += 2;
				}
				for (i = idx; i <= row; i++) arr[i][j] = 0;
				if (curRow < idx - 1) curRow = idx - 1;
				memset(chk, 0, sizeof(chk));
			}
			row = curRow;
		}
		ret++;
	}
	printf("%d", ret);
}*/

/*int n, m, virNum, board[51][51], cpy[51][51], visited[51][51], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }, MAX=987654321; //17142 연구소 3
vector<vector<int>> vec;
vector<pair<int, int>> virPos;
void dfs(int idx, int ldx, int num, vector<int> tmp) {
	if (num == m) {
		vec.push_back(tmp);
		return;
	}
	for (int i = ldx + 1; i < virNum; i++) {
		tmp[idx] = i;
		dfs(idx + 1, i, num + 1, tmp);
	}
}
int main() {
	int i, j, totalcnt=0;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
			if (board[i][j] == 0) {
				totalcnt++;
			}
			else if (board[i][j] == 2) {
				virNum++;
				virPos.emplace_back(i, j);
			}
		}
	}
	dfs(0, -1, 0, vector<int>(m));
	queue<pair<int, pair<int, int>>> que;
	int ret = MAX;
	for (auto it : vec) {
		memset(visited, 0, sizeof(visited));
		memcpy(cpy, board, sizeof(cpy));
		for(auto vir : it) que.emplace(-1, virPos[vir]);
		int tmp = -1, cnt=0;
		while (!que.empty()) {
			int sec = que.front().first,
				x = que.front().second.first,
				y = que.front().second.second;
			que.pop();
			if (tmp != sec) {
				tmp = sec;
				if (cnt == totalcnt) break;
			}	
			if (visited[x][y]) continue;
			visited[x][y] = 1;
			if (cpy[x][y] == 0) cnt++;
			cpy[x][y] = 3;
			for (i = 0; i < 4; i++) {
				int nxtX = x + nxt[i][0], nxtY = y + nxt[i][1];
				if (nxtX <= 0 || nxtX > n || nxtY <= 0 || nxtY > n || board[nxtX][nxtY] == 1||board[nxtX][nxtY]==3) continue;
				que.emplace(sec + 1, make_pair(nxtX, nxtY));
			}
		}
		while (!que.empty()) que.pop();
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (cpy[i][j] == 0) {
					tmp = MAX;
					break;
				}
			}
			if (j != n + 1) break;
		}
		if (ret > tmp) ret = tmp;
	}
	printf("%d", ret==MAX ? -1 : ret);
}*/

/*int board[21][21], cpy[21][21], visited[21][21], nxt[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} }, INF=987654321; //게리맨더링 2
int main() {
	int i, j, k, l, d1, d2, n, t=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &board[i][j]);
			t += board[i][j];
		}
	}

	int point[4][2] = { {1, 1}, {1, n}, {n, 1}, {n, n} }, ret=INF;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			for (d1 = 1; d1 <= n; d1++) {	
				for (d2 = 1; d2 <= n; d2++) {
					if (i + d1 + d2 > n || j - d1 <= 0 || j + d2 > n) continue;
					memcpy(cpy, board, sizeof(cpy));
					int five = t;
					cpy[i][j] = 0;
					for (k = 1; k <= d1; k++) {
						cpy[i + k][j - k] = 0;
						cpy[i + d2 + k][j + d2 - k] = 0;
					}

					for (k = 1; k <= d2; k++) {
						cpy[i + k][j + k] = 0;
						cpy[i + d1 + k][j - d1 + k] = 0;
					}

					int maxa = -INF, mina = INF;
					int border[4][4] = { {1, i + d1, 1, j+1},
										 {1, i + d2+1, j+1, n+1},
										 {i + d1, n+1, 1, j - d1 + d2},
										 {i + d2+1, n+1, j - d1 + d2, n+1} };

					for (k = 0; k < 4; k++) {//1, 2, 3, 4 구역
						memset(visited, 0, sizeof(visited));
						queue<pair<int, int>> que;
						que.emplace(point[k][0], point[k][1]);
						int tmp = 0;
						while (!que.empty()) {
							int x = que.front().first,
								y = que.front().second;
							que.pop();
							if (visited[x][y]) continue;
							visited[x][y] = 1;
							tmp += cpy[x][y];
							five -= cpy[x][y];
							for (l = 0; l < 4; l++) {
								int nxtX = x + nxt[l][0], nxtY = y + nxt[l][1];
								if (nxtX >= border[k][0] && nxtX < border[k][1] && nxtY >= border[k][2] && nxtY < border[k][3] && cpy[nxtX][nxtY] != 0) {
									que.emplace(nxtX, nxtY);
								}
							}
						}
						maxa = max(tmp, maxa), mina = min(tmp, mina); //1, 2, 3, 4 구역에서 최소인구, 최대인구 구함
					}
					maxa = max(five, maxa), mina = min(five, mina); //1, 2, 3, 4, 5 구역에서 최소인구, 최대인구 구함
					ret = min(ret, maxa - mina);
				}
			}
		}
	}
	printf("%d", ret);
}*/

////////////////////////////////////////
			  /*별 찍기*/
////////////////////////////////////////

/*int main() { //2440 별 찍기 - 3
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2441 별 찍기 - 4
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2442 별 찍기 - 5
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < i-1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2*(n-i)+1; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2443 별 찍기 - 6
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2444 별 찍기 - 7
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * (n - i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i > 0; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2445 별 찍기 - 8
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < n - i + 1; j++) {
			printf("*");
		}
		for (j = 0; j < 2 * (i - 1); j++) {
			printf(" ");
		}
		for (j = 0; j < n - i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = n; i > 0; i--) {
		for (j = 0; j < i - 1; j++) {
			printf("*");
		}
		for (j = 0; j < 2 * (n - i + 1); j++) {
			printf(" ");
		}
		for (j = 0; j < i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2446 별 찍기 - 9
	int i, j, n;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = n-1; i > 0; i--) {
		for (j = 0; j < i - 1; j++) {
			printf(" ");
		}
		for (j = 0; j < 2 * (n - i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*char arr[6600][6600]; //2447 별 찍기 - 10
void recur(int x, int y, int n) {
	if (n == 1) {
		arr[x][y] = '*';
		return;
	}
	if (n == 3) {
		arr[x][y] = '*';
		arr[x][y + 1] = '*';
		arr[x][y + 2] = '*';
		arr[x + 1][y] = '*';
		arr[x + 1][y + 2] = '*';
		arr[x + 2][y] = '*';
		arr[x + 2][y + 1] = '*';
		arr[x + 2][y + 2] = '*';
		return;
	}
	else {
		recur(x, y, n / 3);
		recur(x, y + n/3, n / 3);
		recur(x, y + 2*n/3, n / 3);
		recur(x+ n / 3, y, n / 3);
		recur(x+ n / 3, y + 2 * n / 3, n / 3);
		recur(x+ 2 * n / 3, y, n / 3);
		recur(x+ 2 * n / 3, y + n / 3, n / 3);
		recur(x+ 2 * n / 3, y + 2 * n / 3, n / 3);
	}
}

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			arr[i][j] = ' ';
		}
	}

	recur(0, 0, n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%c", arr[i][j]);
		}
		if(i!=n-1) printf("\n");
	}
}*/

/*char board[3072][6143]; //2448 별 찍기 - 11

void func(int x, int y, int n) {
	if (n == 3) {
		board[x][y] = '*';
		board[x + 1][y] = '*';
		board[x + 1][y + 1] = ' ';
		board[x + 1][y + 2] = '*';
		for (int i = y; i < y+5; i++) {
			board[x + 2][i] = '*';
		}
		return;
	}

	func(x, y, n / 2);
	func(x + n / 2, y, n / 2);
	func(x + n / 2, y + n, n / 2);
}

int main() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n * 2 - 1; j++) {
			board[i][j] = ' ';
		}
	}
	func(0, 0, n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}

		for (j = 0; j < i * 2 + 1; j++) {
			printf("%c", board[i][j]);
		}

		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		printf("\n");
	}
}*/

/*int main() { //2522 별 찍기 - 12
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = n - i - 1; j > 0; j--) {
			printf(" ");
		}
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 0; j < n-i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2523 별 찍기 - 13
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //2556 별 찍기 - 14
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)printf("*");
		printf("\n");
	}
}*/

/*int main() { // 10990 별 찍기 - 15
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) printf(" ");
	printf("*\n");
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n - i - 2; j++) printf(" ");
		printf("*");
		for (j = 0; j < i * 2 + 1; j++) printf(" ");
		printf("*\n");
	}
}*/

/*int main() { //10991 별 찍기 - 16
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) printf(" ");
	printf("*\n");
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 2; j++) printf(" ");
		printf("*");
		for (j = 0; j < i+1; j++) {
			printf(" ");
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { //10992 별 찍기 - 17
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) printf(" ");
	printf("*\n");
	if (n == 1) return 0;
	for (i = 0; i < n - 2; i++) {
		for (j = 0; j < n - i - 2; j++) printf(" ");
		printf("*");
		for (j = 0; j < i * 2 + 1; j++) printf(" ");
		printf("*\n");
	}
	for (i = 0; i < 2 * n - 1; i++) {
		printf("*");
	}
	printf("\n");
}*/

/*int main() { //10994 별 찍기 - 19
	int i, j, n, odd=1, even=1;
	scanf("%d", &n);
	for (i = 0; i < 4 * (n - 1) + 1; i++){
		if (i == 0||i==4*(n-1)) {
			for (j = 0; j < 4 * (n - 1) + 1; j++) printf("*");
			printf("\n");
		}
		else if (i % 2) {
			if (i < 2 * (n - 1) + 1) { //윗부분
				for (j = 0; j < odd; j++) {
					printf("* ");
				}
				for (j = 0; j < 4 * (n - 1 - odd) + 1; j++) {
					printf(" ");
				}
				for (j = 0; j < odd; j++) {
					printf(" *");
				}
				printf("\n");
				odd++;
			}
			else {
				if (i == n * 2 - 1) odd--;
				for (j = 0; j < odd; j++) {
					printf("* ");
				}
				for (j = 0; j < 4 * (n - 1 - odd) + 1; j++) {
					printf(" ");
				}
				for (j = 0; j < odd; j++) {
					printf(" *");
				}
				printf("\n");
				odd--;
			}
		}
		else {//짝수
			if (i < 2 * (n - 1)+1) { //윗부분 + 중간
				for (j = 0; j < even; j++) {
					printf("* ");
				}
				for (j = 0; j < 4 * (n - 1 - even) + 1; j++) {
					printf("*");
				}
				for (j = 0; j < even; j++) {
					printf(" *");
				}
				printf("\n");
				even++;
			}
			else {
				if(i==n*2) even-=2;
				for (j = 0; j < even; j++) {
					printf("* ");
				}
				for (j = 0; j < 4 * (n - 1 - even) + 1; j++) {
					printf("*");
				}
				for (j = 0; j < even; j++) {
					printf(" *");
				}
				printf("\n");
				even--;
			}
		}
	}
}*/

/*int main() { //별 찍기 - 20
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		if (!(i % 2)) {
			printf("*");
			for (j = 0; j < n - 1; j++) {
				printf(" *");
			}
		}
		else {
			printf(" ");
			for (j = 0; j < n - 1; j++) {
				printf("* ");
			}
			printf("*");
		}
		printf("\n");
	}
}*/

/*int main() { // 10996 별 찍기 - 21
	int i, j, n;
	scanf("%d", &n);
	if (n == 1) printf("*");
	else {
		for (i = 0; i < 2 * n; i++) {
			for (j = 0; j < n; j++) {
				if ((i + j) % 2) printf(" ");
				else printf("*");
			}
			printf("\n");
		}
	}
}*/

/*int main() { //10997 별 찍기 - 22
	int i, j, n, odd=1, even=0;
	scanf("%d", &n);
	if (n == 1) printf("*");
	else {
		for (i = 0; i < n * 4 - 1; i++) {
			if (i % 2) { //홀
				if (i < (n * 2)) { //위 + 중간
					for (j = 0; j < odd; j++) printf("* ");
					if(i!=1) for (j = 0; j < 4 * (n-odd)-1; j++) printf(" ");
					if (i == n * 2 - 1) {
						printf("*");
						for (j = 0; j < odd-2; j++) printf(" *");
					}
					else for (j = 0; j < odd-1; j++) printf(" *");
					printf("\n");
					odd++;
				}
				else { //아래
					if (i == (n * 2) + 1) odd--;
					for (j = 0; j < odd-1; j++) printf("* ");
					for (j = 0; j < 4 * (n-odd) + 1; j++) printf(" ");
					for (j = 0; j < odd - 1; j++) printf(" *");
					printf("\n");
					odd--;
				}
			}
			else {//짝
				if (i < (n * 2)) { //위
					if (i == 0 || i == 2) {
						for (j = 0; j < even; j++) {
							printf("* ");
						}
						for (j = 0; j < (4 * (n-1) + 1) - i; j++) printf("*");
					}
					else {
						for (j = 0; j < even; j++) printf("* ");
						for (j = 0; j < 4 * (n - even) - 1; j++) printf("*");
						for (j = 0; j < even - 1; j++) printf(" *");
					}
					printf("\n");
					even++;
				}
				else { //아래
					if (i == (n * 2)) even--;
					for (j = 0; j < even; j++) printf("* ");
					for (j = 0; j < 4 * (n - even - 1) + 1; j++) printf("*");
					for (j = 0; j < even; j++) printf(" *");
					printf("\n");
					even--;
				}
			}
		}
	}
}*/

/*int main() { //13015 별 찍기 - 23
	int i, j, n, stk=1;
	scanf("%d", &n);
	for (i = 0; i < 2 * n - 1; i++) {
		if (i == 0 || i == 2 * n - 2) {
			for (j = 0; j < n; j++) printf("*");
			for (j = 0; j < 2 * (n - 1) - 1; j++) printf(" ");
			for (j = 0; j < n; j++) printf("*");
			printf("\n");
		}
		else if (i < n - 1) {
			for (j = 0; j < stk; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++)printf(" ");
			printf("*");
			for (j = 0; j < 2 * (n - stk - 1) - 1; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++)printf(" ");
			printf("*\n");
			stk++;
		}
		else if (i == n - 1) {
			for (j = 0; j < n - 1; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++)printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++)printf(" ");
			printf("*\n");
		}
		else {
			if (i == n) stk--;
			for (j = 0; j < stk; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++)printf(" ");
			printf("*");
			for (j = 0; j < 2 * (n - stk - 1) - 1; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++)printf(" ");
			printf("*\n");
			stk--;
		}
	}
}*/
////////////////////////////////////////
			 /*수열과 쿼리*/
////////////////////////////////////////

/*const int MAX_NODE = 100000;
int n, arr[MAX_NODE+1];

int makeTree(int start, int end, int node, int k, int* segTree) {
	if (start == end) {
		if (arr[start] > k) return segTree[node] = 1;
		else return segTree[node] = 0;
	}
	int mid = (start + end) >> 1;
	return segTree[node] = makeTree(start, mid, node * 2, k, segTree) + makeTree(mid + 1, end, node * 2 + 1, k, segTree);
}

int find(int start, int end, int node, int left, int right, int* segTree) {
	if (left > end || right < start) return 0;
	if (left <= start && right >= end) return segTree[node];
	int mid = (start + end) >> 1;
	return find(start, mid, node * 2, left, right, segTree) + find(mid + 1, end, node * 2 + 1, left, right, segTree);
}

int main() {
	int i, m, a, b, c;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		int segTree[4 * MAX_NODE + 1];
		scanf("%d%d%d", &a, &b, &c);
		makeTree(1, n, 1, c, segTree);
		printf("%d\n", find(1, n, 1, a, b, segTree));
	}
}*/

/*const int MAX_NODE = 100000; //13537 수열과 쿼리 1
int n, arr[MAX_NODE + 1];
vector<int> segTree[4 * MAX_NODE + 1];

vector<int> makeTree(int start, int end, int node) {
	vector<int>& vec = segTree[node];
	if (start == end) {
		vec.push_back(arr[start]);
		return vec;
	}
	int mid = (start + end) >> 1;
	vector<int> leftChild = makeTree(start, mid, node*2), rightChild = makeTree(mid+1, end, node*2+1);
	merge(leftChild.begin(), leftChild.end(), rightChild.begin(), rightChild.end(), back_inserter(vec));
	return vec;
}

int find(int start, int end, int node, int left, int right, int obj) {
	if (right<start || left>end) return 0;
	if (left <= start && right >= end) {
		return segTree[node].size() - (upper_bound(segTree[node].begin(), segTree[node].end(), obj)-segTree[node].begin());
	}
	int mid = (start + end) >> 1;
	return find(start, mid, node * 2, left, right, obj) + find(mid + 1, end, node * 2 + 1, left, right, obj);
}

int main() {
	int i, m, a, b, c;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	makeTree(1, n, 1);

	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		printf("%d\n", find(1, n, 1, a, b, c));
	}
}*/

/*const int MAX_NODE = 100000; //13544 수열과 쿼리 3
int n, arr[MAX_NODE+1];
vector<int> segTree[4 * MAX_NODE + 1];

vector<int> makeTree(int start, int end, int node) {
	vector<int>& vec = segTree[node];
	if (start == end) {
		vec.push_back(arr[start]);
		return vec;
	}
	int mid = (start + end) >> 1;
	vector<int> leftChild = makeTree(start, mid, node * 2), rightChild = makeTree(mid + 1, end, node * 2 + 1);
	merge(leftChild.begin(), leftChild.end(), rightChild.begin(), rightChild.end(), back_inserter(vec));
	return vec;
}

int find(int start, int end, int node, int left, int right, int obj) {
	if (right<start || left > end) return 0;
	if (left <= start && right >= end) {
		vector<int>& vec = segTree[node];
		return vec.size() - (upper_bound(vec.begin(), vec.end(), obj) - vec.begin());
	}
	int mid = (start + end) >> 1;
	return find(start, mid, node*2, left, right, obj) + find(mid + 1, end, node*2+1, left, right, obj);
}

int main() {
	int i, m, a, b, c;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}
	makeTree(1, n, 1);
	int last_ans = 0;
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d%d%d", &a, &b, &c);
		a ^= last_ans, b ^= last_ans, c ^= last_ans;
		last_ans = find(1, n, 1, a, b, c);
		printf("%d\n", last_ans);
	}
}*/


////////////////////////////////////////
			 /*트리와 쿼리*/
////////////////////////////////////////

/*const int MAX_NODE=50000, MAX_DEPTH = 16; //11437 LCA
int n, depth[MAX_NODE+1], visited[MAX_NODE+1], parent[MAX_NODE+1][MAX_DEPTH];
vector<int> adj[MAX_NODE+1];

void dfs(int here, int d) {
	visited[here] = 1;
	depth[here] = d;
	for (auto there : adj[here]) {
		if (visited[there]) continue;	
		parent[there][0] = here;
		dfs(there, d + 1);
	}
}

void lca() {
	int i, j;
	for (j = 1; j < MAX_DEPTH; j++) {
		for (i = 1; i <= n; i++) {
			parent[i][j] = parent[parent[i][j - 1]][j - 1];
		}
	}
}

void pre_processing() {
	dfs(1, 1);
	lca();
}

int func(int a, int b) {
	int i;
	if (depth[a] < depth[b]) { // a의 깊이가 더 깊도록 조정
		int tmp = a;
		a = b;
		b = tmp;
	}

	int diff = depth[a] - depth[b];
	for (i = MAX_DEPTH-1; i >= 0; i--) {
		if (diff >= (1 << i)) {
			a = parent[a][i];
			diff -= (1 << i);
		}
	}
	if (a == b) return a;
	else {
		for (i = MAX_DEPTH-1; i >= 0; i--) {
			if (parent[a][i] != parent[b][i]) {
				a = parent[a][i];
				b = parent[b][i];
			}
		}
		return parent[a][0];
	}
}
int main() {
	int i, j, a, b, m;
	scanf("%d", &n);
	for (i = 0; i < n-1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	pre_processing();

	scanf("%d", &m);
	while (m--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", func(a, b));
	}
}*/

/*const int MAX_NODE = 100000, MAX_DEPTH = 17; // 11438 LCA 2
int n, visited[MAX_NODE + 1], depth[MAX_NODE + 1], parent[MAX_NODE+1][MAX_DEPTH];
vector<int> adj[MAX_NODE+1];

void dfs(int here, int d) {
	visited[here] = 1;
	depth[here] = d;
	for (auto there : adj[here]) {
		if (visited[there]) continue;
		parent[there][0] = here;
		dfs(there, d + 1);
	}
}

void lca() {
	int i, j;
	for (j = 1; j < MAX_DEPTH; j++) {
		for (i = 1; i <= n; i++) {
			parent[i][j] = parent[parent[i][j - 1]][j - 1];
		}
	}
}

void pre() {
	dfs(1, 1);
	lca();
}

int func(int a, int b) {
	if (depth[a] < depth[b]) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	int i, diff = depth[a] - depth[b];
	for (i = MAX_DEPTH-1; i >= 0; i--) {
		if (diff >= (1 << i)) {
			a = parent[a][i];
			diff -= (1 << i);
		}
	}

	if (a == b) return a;
	for (i = MAX_DEPTH-1; i >= 0; i--) {
		if (parent[a][i] != parent[b][i]) {
			a = parent[a][i];
			b = parent[b][i];
		}
	}
	return parent[a][0];
}

int main() {
	int i, a, b, m;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	pre();

	scanf("%d", &m);
	while (m--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", func(a, b));
	}
}*/

/*const int MAX_NODE = 40000, MAX_DEPTH=16; //1761 정점들의 거리
int n, depth[MAX_NODE+1], visited[MAX_NODE+1], parent[MAX_NODE+1][MAX_DEPTH][2];
vector<pair<int, int>> adj[MAX_NODE+1];

void dfs(int here, int d) {
	visited[here] = 1;
	depth[here] = d;
	for (auto there : adj[here]) {
		int idx = there.first, dist=there.second;
		if (visited[idx]) continue;
		parent[idx][0][0] = here;
		parent[idx][0][1] = dist;
		dfs(idx, d + 1);
	}
}

void lca() {
	int i, j;
	for (j = 1; j < MAX_DEPTH; j++) {
		for (i = 1; i <= n; i++) {
			parent[i][j][0] = parent[parent[i][j - 1][0]][j - 1][0];
			if(parent[parent[i][j - 1][0]][j - 1][1]) parent[i][j][1] = parent[i][j-1][1] + parent[parent[i][j - 1][0]][j - 1][1];
		}	
	}
}

void pre() {
	dfs(1, 1);
	lca();
}

int func(int a, int b) {
	int i, ret = 0;
	if (depth[a] < depth[b]) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	int diff = depth[a] - depth[b];
	for (i = MAX_DEPTH - 1; i >= 0; i--) {
		if (diff >= (1 << i)){
			ret += parent[a][i][1];
			a=parent[a][i][0];
			diff -= (1<<i);
		}
	}
	if (a == b) return ret;
	for (i = MAX_DEPTH - 1; i >= 0; i--) {
		if (parent[a][i][0] != parent[b][i][0]) {
			ret += parent[a][i][1] + parent[b][i][1];
			a = parent[a][i][0];
			b = parent[b][i][0];
		}
	}
	ret += parent[a][0][1] + parent[b][0][1];
	return ret;
}

int main() {
	int i, a, b, dist, m;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d%d", &a, &b, &dist);
		adj[a].emplace_back(b, dist);
		adj[b].emplace_back(a, dist);
	}

	pre();
	for (i = 1; i <= n; i++) {
		for (int j = 0; j < MAX_DEPTH; j++) {
			printf("i : %d, j : %d, parent : %d, dist : %d\n", i, j, parent[i][j][0], parent[i][j][1]);
			if (!parent[i][j][0]) break;
		}
	}
	scanf("%d", &m);
	while (m--) {
		scanf("%d%d", &a, &b);
		printf("%d\n", func(a, b));
	}
}*/

/*const int MAX_NODE = 100000, MAX_DEPTH = 17; //3176 도로 네트워크
int depth[MAX_NODE + 1], visited[MAX_NODE + 1], parent[MAX_NODE+1][MAX_DEPTH][3]; //parent 0 : parent index, 1 : max dist, 2 : min dist
vector<pair<int, int>> adj[MAX_NODE + 1];
int n;

void dfs(int here, int d) {
	visited[here] = 1;
	depth[here] = d;
	for (auto there : adj[here]) {
		int idx = there.first, dist = there.second;
		if (visited[idx]) continue;
		parent[idx][0][0] = here;
		parent[idx][0][1] = dist;
		parent[idx][0][2] = dist;
		dfs(idx, d + 1);
	}
}

void lca() {
	int i, j;
	for (j = 1; j < MAX_DEPTH; j++) {
		for (i = 1; i <= n; i++) {
			parent[i][j][0] = parent[parent[i][j - 1][0]][j-1][0];
			if(parent[parent[i][j - 1][0]][j - 1][1]) parent[i][j][1] = max(parent[i][j - 1][1], parent[parent[i][j - 1][0]][j - 1][1]);
			if(parent[parent[i][j - 1][0]][j - 1][2]) parent[i][j][2] = min(parent[i][j - 1][2], parent[parent[i][j - 1][0]][j - 1][2]);
		}
	}
}

void pre() {
	dfs(1, 1);
	lca();
}

void func(int a, int b) {
	if (depth[a] < depth[b]) {
		int tmp = a;
		a = b;
		b = tmp;
	}

	int maxa=-1, mina=10e5+1, i, diff = depth[a] - depth[b];
	for (i = MAX_DEPTH - 1; i >= 0; i--) {
		if (diff >= (1 << i)) {
			maxa = max(maxa, parent[a][i][1]);
			mina = min(mina, parent[a][i][2]);
			a = parent[a][i][0];
			diff-= (1 << i);
		}
	}

	if (a == b) {
		printf("%d %d\n", mina, maxa);
		return;
	}

	for (i = MAX_DEPTH - 1; i >= 0; i--) {
		if (parent[a][i][0] != parent[b][i][0]) {
			maxa = max(maxa, max(parent[a][i][1], parent[b][i][1]));
			mina = min(mina, min(parent[a][i][2], parent[b][i][2]));
			a = parent[a][i][0];
			b = parent[b][i][0];
		}
	}
	maxa = max(maxa, max(parent[a][0][1], parent[b][0][1]));
	mina = min(mina, min(parent[a][0][2], parent[b][0][2]));
	printf("%d %d\n", mina, maxa);
}
int main() {
	int i, a, b, d, m;
	scanf("%d", &n);
	for (i = 0; i < n - 1; i++) {
		scanf("%d%d%d", &a, &b, &d);
		adj[a].emplace_back(b, d);
		adj[b].emplace_back(a, d);
	}

	pre();

	scanf("%d", &m);
	while (m--) {
		scanf("%d%d", &a, &b);
		func(a, b);
	}
}*/

/*const int MAX_NODE = 100000; // 1734 교통 체계 (어려움)
typedef struct data {
	int sTime; //방문 시작 시간
	int eTime; //방문 끝나는 시간
	int low; // 연결된 노드들 중 sTime 최솟값
	int depth; // dfs spanning tree에서의 깊이
	int parent; // dfs spanning tree에서 이 노드의 부모 노드
	vector<int> adj; //인접 노드
	vector<int> child; //dfs spanning tree에서 이 노드의 자식 노드 목록
}Data;
int n, e, vTime = 1;
vector<Data> node;


void dfs(int here) {
	Data& d = node[here];
	d.sTime = d.low = vTime++;
	//printf("here : %d, sTime : %d, low : %d\n", here, d.sTime, d.low);
	for (auto it : d.adj) {
		Data &nxt = node[it];
		if (nxt.depth!=-1) {
			if (d.parent != it) {
				d.low = min(d.low, nxt.sTime);
			}
			continue;
		}
		nxt.depth = d.depth + 1;
		//printf("next : %d, cur depth : %d, next depth : %d\n", it, d.depth, nxt.depth);
		nxt.parent = here;
		d.child.push_back(it);
		dfs(it);
		//printf("here : %d, nxt : %d, low : %d\n", here, it, nxt.low);
		if (d.low > nxt.low) {
			//printf("here : %d, change low val : %d\n", here, nxt.low);
			d.low = nxt.low;
		}
	}
	d.eTime = vTime++;
}

void yes() {
	printf("yes\n");
}

void no() {
	printf("no\n");
}

bool bypass(int a, int b) {
	return node[a].low < node[b].sTime;
}

bool isAncestor(int a, int b) { //노드 a가 노드 b의 조상인가?
	return node[a].sTime <= node[b].sTime && node[b].eTime <= node[a].eTime;
}

int findChild(int a, int b) {
	int left = 0, right = node[a].child.size() - 1;
	while (left != right) {
		int mid = (left + right) / 2, here = node[a].child[mid];
		printf("left : %d, right : %d, here : %d\n", left, right, here);
		if (node[here].eTime < node[b].sTime) left = mid + 1;
		else if (node[here].sTime > node[b].eTime) right = mid - 1;
		else return here;
	}
	return node[a].child[left];
}

int main() {
	int i, x, y, q, mode, a, b, c, d;
	scanf("%d%d", &n, &e);
	Data init = { 0, 0, 0, -1, 0, vector<int>(), vector<int>() };
	node.resize(n + 1, init);
	node[1].parent = -1;
	node[1].depth = 1;
	for (i = 0; i < e; i++) {
		scanf("%d%d", &x, &y);
		node[x].adj.push_back(y);
		node[y].adj.push_back(x);
	}

	dfs(1);

	printf("-----result-----\n");
	for (i = 1; i <= n; i++) {
		Data d = node[i];
		printf("node %d\n", i);
		printf("sTime : %d, eTime : %d, low : %d, depth : %d, parent : %d\n", d.sTime, d.eTime, d.low, d.depth, d.parent);
		printf("\nadjacent spot\n");
		for (auto it : d.adj) {
			printf("%d ", it);
		}
		printf("\n\n child node\n");
		for (auto it : d.child) {
			printf("%d ", it);
		}
		printf("\n\n");
	}
	scanf("%d", &q);
	while (q--) {
		scanf("%d", &mode);
		if (mode==1) {
			scanf("%d%d%d%d", &a, &b, &c, &d);
			if (isAncestor(d, c)) swap(c, d);
			if (node[c].depth != node[d].depth-1) { //이 경우, dfs spanning tree에 c-d 경로가 없다.
				yes();
			}

			else if (bypass(d, d)) yes();
			else if (isAncestor(d, a)==isAncestor(d, b)) yes();
			else no();
		}

		else {
			scanf("%d%d%d", &a, &b, &c);
			if (!isAncestor(c, a) && !isAncestor(c, b)) yes();
			else if(isAncestor(c, a) && isAncestor(c, b) ){
				int ac = findChild(c, a);
				int bc = findChild(c, b);
				if (ac == bc) yes();
				else if (bypass(ac, c) && bypass(bc, c)) yes();
				else no();
			}
			else {
				if (!isAncestor(c, a)) swap(a, b);
				int ac = findChild(c, a);
				if (bypass(ac, c))yes();
				else no();
			}
		}
	}
}*/

/*vector<pair<int, int>> adj[100000], edge;

void changeWeight(int f, int s, int w) { //f : adj 배열에서 값을 수정할 정점, s : 수정 대상 정점
	int left = 0, right = adj[f].size() - 1;
	while (left != right) { //이분 탐색
		int mid = (left + right) >> 1;
		if (adj[f][mid].first < s) right = mid - 1;
		else if (adj[f][mid].first > s) left = mid + 1;
		else {
			adj[f][mid].second = w;
			break;
		}
	}
	if (left == right) adj[f][left].second = w;
}

int main() {
	
}*/