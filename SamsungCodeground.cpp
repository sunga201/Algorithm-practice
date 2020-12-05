#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
/*int Answer; //���� ��󳻱� (�� Ǯ��, map �̿�)

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = -1;
		int i, n;
		unsigned int* arr;
		map<int, int> mp;
		cin >> n;
		arr = new unsigned int[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
			if (mp.count(arr[i])) {
				mp[arr[i]]++;
			}
			else mp.insert(make_pair(arr[i], 1));
		}

		for (i = 0; i < n; i++) {
			auto num = mp.find(arr[i]);
			if (num->second % 2 != 0) {
				if (Answer == -1) Answer = arr[i];
				else Answer ^= arr[i];
			}
		}
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}*/

/*int main(int argc, char** argv) //���� ��󳻱�(�� �� ������ ���. ������ ���� XOR �� �� �ϸ� 0�̵ǹǷ�, XOR�� ¦������ �˾Ƽ� �ɷ��ش�.)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		int Answer = 0;
		int i, n, input;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> input;
			Answer ^= input;
		}
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}*/

/*int Answer; //���α׷��� ������ȸ

int main(int argc, char** argv)
{
	int T, test_case;

	 // freopen("input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		 // Print the answer to standard output(screen).

		int i, n, val;
		vector<int> vec;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> val;
			vec.push_back(val);
		}
		sort(vec.begin(), vec.end());
		int maxa = -1;
		for (i = 0; i < n; i++) {
			if (vec[i] + n - i > maxa) maxa = vec[i] - n - i;
		}

		for (i = 0; i < n; i++) {
			if (vec[i] + n >= maxa) Answer++;
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}*/

/*int Answer; //���� ����

bool desc(int a, int b) {
	return a > b;
}

int main(int argc, char** argv)
{
	int T, test_case;
	 // freopen("input.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		int i, n, k, num;
		vector<int> vec;
		cin >> n >> k;
		for (i = 0; i < n; i++) {
			cin >> num;
			vec.push_back(num);
		}

		sort(vec.begin(), vec.end(), desc);
		for (i = 0; i < k; i++) {
			Answer += vec[i];
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}*/

/*int Answer; //��Ʈ ����
int score[20] = { 6, 13, 4, 18, 1, 20, 5, 12, 9, 14, 11, 8, 16, 7, 19, 3, 17, 2, 15, 10 };
const double PI = 3.1415926535;
double getSqrt(int x, int y) {
	return sqrt(x * x + y * y);
}

double getScore(int x, int y) {
	double arc = atan2(y, x)*180/PI;
	if (arc < 0) arc += 360;
	int i, idx = 0;
	idx=(int)((arc+9)/18)%20;
	return score[idx];
}

int main(int argc, char** argv)
{
	int T, test_case;

	 // freopen("input.txt", "r", stdin);

	cin >> T;

	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		 // Print the answer to standard output(screen).

		int i, n, x, y;
		double br, tsr, ter, dsr, der;
		vector<pair<int, int>> point;
		cin >> br >> tsr >> ter >> dsr >> der >> n;
		for (i = 0; i < n; i++) {
			cin >> x >> y;
			double rad = getSqrt(x, y);
			if (rad <= br) Answer += 50;
			else if (rad < tsr) {
				Answer += getScore(x, y);
			}
			else if (rad < ter) {
				Answer += 3 * getScore(x, y);
			}
			else if (rad < dsr) {
				Answer += getScore(x, y);
			}
			else if (rad < der) {
				Answer += 2 * getScore(x, y);
			}
		}


		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}*/

/*int Answer; //���װ���� ��
const int DIV = 1000000007;
const int MAX = 2000002;
int fac[2000003];
long long facInv[2000003];

long long getInvN(long long x, int n) {
	if (n == 0) return 1;
	if (n == 1) return x;
	if (n % 2 == 0) return getInvN((x * x)%DIV, n / 2)%DIV;
	else return (x * getInvN((x * x)%DIV, (n - 1) / 2))%DIV;
}

void getInv() {
	int i;
	facInv[MAX] = getInvN(fac[2000002], DIV - 2);
	for (i=MAX-1; i > 0; i--) {
		facInv[i] = ((i + 1) * facInv[i + 1])%DIV;
	}
}

int getBinary(int x, int y) {
	return (fac[x + y + 2] * ((facInv[x + 1] * facInv[y + 1])%DIV))%DIV;
}

int main(int argc, char** argv)
{
	int T, test_case;
	 // freopen("input.txt", "r", stdin);

	int i, b1 = 1, b2 = 1;
	long long top=1;
	for (i = 1; i <= MAX; i++) {
		fac[i]=(top=(top*i) % DIV);
	}
	getInv();

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		 // Print the answer to standard output(screen).
		int n, m;
		cin >> n >> m;	
		Answer = getBinary(n, m)-1;
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}*/

/*int main(int argc, char** argv) //�̱� ���� ��
{
	int i, T, test_case;
	cin >> T;

	for (test_case = 0; test_case < T; test_case++)
	{
		int n, k;
		cin >> n >> k;
		char tmp[300000]; // direction �����
		cin >> tmp;
		int x = 0, y = 0; //�ʱ� ��ġ
		int rd = -1, base = 0; // ud : �Ʒ��� ���������� �̵��� �� 1, ���� �������� �̵��� �� 0
		long long Answer = 1; //�ʱ� ��ġ 1���� ������ ���Եȴ�.
		for (i = 0; i < k; i++) {
			switch (tmp[i]) {
			case 'U':
				x--;
				rd = 0;
				break;

			case 'D':
				x++;
				rd = 1;
				break;

			case 'L':
				y--;
				rd = 0;
				break;

			case 'R':
				y++;
				rd = 1;
				break;
			}
			int pointSum = x + y; //udlr : ���� ��ġ�� ���� �Ʒ����� ������ ���� ���� �밢���� �� �� ��°������ Ȯ���Ѵ�.
			if (pointSum < n) { //���� �ﰢ��
				if (rd) base += pointSum; //base : ���ϴ� �밢�� ���κ��� �� ��ȣ �� �ִ�
				else base -= pointSum + 1;
				if (pointSum % 2 == 0) Answer += base + y + 1;
				else Answer += base + x + 1;
			}
		
			else { //�Ʒ��� �ﰢ��
				if (rd) base += 2 * n - pointSum;
				else base -= 2 * n - (pointSum + 1);
				if (pointSum % 2 == 0) Answer += base + n - x;
				else Answer += base + n - y;
			}
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}
	return 0;//Your program should return 0 on normal termination.
}*/

/*int Answer, arr[5000], chk[200000]; //���� ��(ù �ڵ�, �ð� �ʰ�)

void getGoodNum(int objIdx, int prev, int idx, int sum) {
	if (chk[objIdx]) return;
	if (idx == 3) {
		if (sum == arr[objIdx]) {
			Answer++;
			chk[objIdx] = 1;
		}
		return;
	}
	for (int i = prev; i < objIdx; i++) {
		getGoodNum(objIdx, i, idx+1, sum + arr[i]);
	}
}

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		memset(chk, 0, sizeof(chk));
		Answer = 0;
		int i, n;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (i = 1; i < n; i++) {
			getGoodNum(i, 0, 0, 0);
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}*/

/*int Answer, arr[5000], chk[400001]; //���� ��

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;
		int i, j, n;
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		memset(chk, 0, sizeof(chk));
		for (i = 0; i < n; i++) {
			for (j = 0; j < i; j++) { // �� ���� ���� �����ϴ� �迭�� ä���.
				if (!chk[arr[i-1] + arr[j]+200000]) chk[arr[i-1] + arr[j] + 200000] = 1;
			}

			for (j = 0; j < i; j++) {
				if (chk[arr[i] - arr[j] + 200000]) {
					Answer++;
					break;
				}
			}
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}*/

/*int Answer; // �� ���ֱ�(�ð� �ʰ�)

int main(int argc, char** argv)
{
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		int i, n, blk[100002], change[100002];
		long long sum = 0LL;
		cin >> n;
		for (i = 1; i <= n; i++) {
			cin >> blk[i];
			sum +=(long long)blk[i];
		}
		blk[0] = blk[n+1] = 0;
		for (i = 1; i <= n; i++) {
			cout << blk[i] << " ";
		}
		cout << endl;
		int start = 1, end = n;
		while (sum!=0) {
			for (i = start; i <=end; i++) {
				if (!blk[i]) continue;
				int cmp = min(blk[i - 1], blk[i + 1]);
				if (cmp >= blk[i]) {
					change[i]=blk[i]-1;
					sum -= 1;
				}
				else {
					sum -= blk[i]-cmp;
					change[i] = cmp;
				}
			}

			if (sum == 0) {
				Answer++;
				break;
			}
			for (i = start; i <= end; i++) {
				blk[i] = change[i];
			}

			for (i = start; i <= end; i++) {
				if (blk[i] != 0) {
					start = i;
					break;
				}
			}
			int endtmp=-1;
			for (i = start; i <= end; i++) {
				if (blk[i] != 0) {
					endtmp = i;
				}
			}
			end = endtmp;
			if (end == -1) {
				return -1;
			}
			Answer++;
		}
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}*/

/*int Answer; // �� ���ֱ�

int main(int argc, char** argv){
	int T, test_case;

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{

		Answer = 0;
		int i, n, arr[100002];
		fill(arr, arr + 100002, 0);
		cin >> n;
		for (i = 1; i <= n; i++) {
			cin >> arr[i];
		}

		for (i = 0; i < n; i++) {
			if (arr[i] + 1 < arr[i + 1]) arr[i + 1] = arr[i] + 1;
		}

		for (i = n+1; i > 1; i--) {
			if (arr[i] + 1 < arr[i - 1]) arr[i - 1] = arr[i] + 1;
		}

		cout << "Case #" << test_case + 1 << endl;
		cout << *(max_element(arr, arr + n+1))<<endl;
	}
	return 0;
}*/