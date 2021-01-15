#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

/*int arr[502], sum[502]; //2019 KAKAO BLIND RECRUITMENT - ������

bool cmp(pair<double, int> a, pair<double, int> b) {
	if (a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}
vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	for (auto it : stages) {
		arr[it]++;
	}
	int i;
	sum[N + 1] = arr[N + 1];
	for (i = N; i >= 1; i--) {
		sum[i] = sum[i + 1] + arr[i];
	}
	vector<pair<double, int>> proc;
	for (i = 1; i <= N; i++) {
		if (sum[i] == 0) proc.emplace_back(0.0, i);
		else proc.emplace_back((double)arr[i] / sum[i], i);
	}

	sort(proc.begin(), proc.end(), cmp);
	for (auto it : proc) {
		answer.push_back(it.second);
	}

	return answer;
}*/

/*vector<string> solution(vector<string> record) { // 2019 KAKAO BLIND RECRUITMENT - ����ä�ù�
	vector<string> answer;
	vector<pair<int, string>> log;
	unordered_map<string, string> mappingInfo;

	for (auto str : record) {
		vector<string> tokenList;
		string token;
		stringstream ss(str);

		while (ss >> token) {
			tokenList.push_back(token);
		}

		switch (tokenList[0][0]) {
		case 'E': //enter
			mappingInfo[tokenList[1]] = tokenList[2];
			log.emplace_back(0, tokenList[1]);
			break;
		case 'L': //leave
			log.emplace_back(1, tokenList[1]);
			break;

		case 'C': //change
			mappingInfo[tokenList[1]] = tokenList[2];
			break;
		}
	}

	for (auto it : log) {
		string nick = mappingInfo[it.second];
		if (it.first == 0) { //enter
			answer.push_back(nick + "���� ���Խ��ϴ�.");
		}
		else {//leave
			answer.push_back(nick + "���� �������ϴ�.");
		}
	}
	return answer;
}*/

/*vector<vector<string>> rel; // 2019 KAKAO BLIND RECRUITMENT - �ĺ�Ű
vector<vector<int>> candidate[9];
// candidate[i]���� �÷� i���� ���� �ĺ�Ű���� ����.

int answer = 0, rowLen, colLen;

void dfs(int idx, int num, int max, vector<int> colList) {
	if (num == max) {
		// Ű���� �������� Ȯ��
		vector<vector<string>> vec;
		for (auto row : rel) {
			vector<string> tmp;
			for (auto col : colList) {
				tmp.push_back(row[col - 1]);
			}
			for (auto exist : vec) {
				if (includes(tmp.begin(), tmp.end(), exist.begin(), exist.end()))
					return;
			}
			vec.push_back(tmp);
		}

		// �ĺ�Ű���� Ȯ��
		for (int i = 1; i <= max; i++) {
			for (auto part : candidate[i]) {
				if (includes(colList.begin(), colList.end(), part.begin(), part.end())) { 
				//part�� colList�� �κ��������� Ȯ���Ѵ�.
					return;
				}
			}
		}
		candidate[max].push_back(colList);
		answer++;
		return;
	}

	for (int i = idx + 1; i <= colLen; i++) {
		colList[num] = i;
		dfs(i, num + 1, max, colList);
	}
}

int solution(vector<vector<string>> relation) {
	rel = relation;
	int i, j;
	colLen = relation[0].size(), rowLen = relation.size();

	for (i = 1; i <= colLen; i++) {
		dfs(0, 0, i, vector<int>(i)); //dfs(idx, num, max, colList);
	}
	return answer;
}*/

/*typedef long long ll; //2019 KAKAO BLIND RECRUITMENT - ������ �Թ� ���̺�

int solution(vector<int> food_times, ll k) {
	int answer = 0;
	ll sum = 0;
	for (auto time : food_times) {
		sum += time;
	}

	if (sum <= k) answer = -1;
	else {
		int i, foodNum = food_times.size();

		//1. ������ ������ �� �Դµ� �ɸ��� �ð��� ���ʴ�� �����.
		vector<ll> border;
		vector<int> tmp = food_times;
		sort(tmp.begin(), tmp.end());
		border.push_back(foodNum * tmp[0]);

		for (i = 1; i < tmp.size(); i++) {
			border.push_back(border[i - 1] + (foodNum - i) * (tmp[i] - tmp[i - 1]));
		}

		//2. k�� ���� �԰� �����ִ� ���� ��, ���̺� ȸ�� ��, �׸��� ã�� ������ ��ȣ�� ���Ѵ�.
		//   ���⼭ ���� ��ȣ�� �� ���� ������ �������� �ʰ� �ű���̹Ƿ�, �ٽ� food_items �迭�� ��ȸ�ϸ�
		//   ���̺� ȸ�� �� ������ ���ĵ��� �ɷ����� ��ȣ�� �ٽ� �ű�� ���� ���� ���� �� �ִ�.
		ll rotateNum = 0, eatenFoodNum = 0, last = 0, findNum = -1;
		for (i = 0; i < border.size(); i++) {
			if (k > border[i]) {
				eatenFoodNum++;
				last = border[i];
				rotateNum = tmp[i];
			}
			else break;
		}

		ll div = (foodNum - eatenFoodNum);
		findNum = (k - last - 1) % div;
		findNum = (findNum + 1) % div;

		//3. �� ���� ���ĵ��� �ɷ����� �ٽ� ��ȣ�� �Ű� ���� ���� ã�´�.
		for (i = 0; i < food_times.size(); i++) {
			if (food_times[i] <= rotateNum) continue;
			if (findNum == 0) {
				answer = i + 1;
				break;
			}
			findNum--;
		}
	}
	return answer;
}*/

/*
//KMP failure function
vector<int> getFailure(const string& str) {
	int i, j = 0, len = str.length();
	vector<int> ret(len, 0);
	for (i = 1; i < len; i++) {
		while (j > 0 && str[i] != str[j]) j = ret[j - 1];
		if (str[i] == str[j]) ret[i] = ++j;
	}
	return ret;
}

//KMP
vector<int> kmp(const string & a, const string & b, vector<int> failure) { // a �ȿ��� b�� ã��, �� ���� ������ �ε����� ������ �迭�� �����Ѵ�.

	vector<int> ret;
	int i, j = 0, aLen = a.length(), bLen = b.length();
	for (i = 0; i < aLen; i++) {
		while (j > 0 && a[i] != b[j]) j = failure[j - 1];
		if (a[i] == b[j]) {
			if (j == bLen - 1) {
				ret.push_back(i - bLen + 1);
				j = failure[j];
			}
			else ++j;
		}
	}
	return ret;
}

void toLowerCase(string & str) { // �빮�� -> �ҹ��ڷ� ��ȯ
	for (auto& ch : str) {
		if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
	}
}

bool isAlphabet(char ch) {
	return ch >= 'a' && ch <= 'z';
}

bool cmp(pair<int, double> a, pair<int, double> b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

//��� page �� word�� �ܾ�� �ҹ��ڷ� ��ȯ�Ѵ�.
int solution(string word, vector<string> pages) {
	int i, idx = 0, wLen = word.length();
	toLowerCase(word);
	unordered_map<string, double> base, totalScore;
	vector<string> urlList;
	vector<string>* pageWordList = new vector<string>[pages.size()]; //�� �������� �ܾ���� ����Ǵ� �迭

	// 1. ��ũ ���ؼ� �����ϱ�
	for (auto page : pages) {
		stringstream ss(page);
		string tmp;
		vector<string>& wordList = pageWordList[idx];
		while (ss >> tmp) {
			wordList.push_back(tmp);
		}

		for (i = 0; i < wordList.size(); i++) {
			if (wordList[i] == "<meta") {
				while (wordList[i][wordList[i].length() - 1] != '>') i++;
				if (wordList[i].substr(0, 7) == "content") {
					int idx = 9, urlLen = 1;
					while (wordList[i][idx] != '"') {
						idx++;
						urlLen++;
					}

					string url = wordList[i].substr(8, urlLen + 1);
					totalScore[url] = 0.0;
					base[url] = 0.0;
					urlList.push_back(url);
				}
			}
		}
		idx++;
	}

	idx = 0;
	//2. �������� �⺻���� ���ϱ�
	for (auto page : pages) {
		int pLen = page.length(), baseScore = 0;
		toLowerCase(page);

		//2-1. KMP �˰����� �̿��� �⺻ ���� ���ϱ�
		vector<int> failure = getFailure(word);
		vector<int> kmpVec = kmp(page, word, failure);
		for (auto idx : kmpVec) {
			if ((idx > 0 && isAlphabet(page[idx - 1])) || ((idx + wLen < pLen) && isAlphabet(page[idx + wLen]))) { // not word
				continue;
			}
			baseScore++;
		}
		base[urlList[idx]] = baseScore;
		idx++;
	}


	for (auto it : urlList) {
		totalScore[it] = base[it];
	}
	idx = 0;

	//3. �ܺ� ��ũ ���ϰ�, ���� �ѷ��ֱ�
	for (auto page : pages) {
		vector<string>& wordList = pageWordList[idx], outLinkList;
		for (i = 0; i < wordList.size(); i++) {
			if (wordList[i].size() > 5 && wordList[i].substr(0, 5) == "href=") { //href
				if (wordList[i - 1].substr(wordList[i - 1].length() - 2, 2) != "<a") continue;
				//"href="�� a �±װ� �ƴ� �ٸ� �±׿� ������� ��� �н�
				int idx = 6, urlLen = 1;
				while (wordList[i][idx] != '"') {
					idx++;
					urlLen++;
				}
				string outLink = wordList[i].substr(5, urlLen + 1);
				outLinkList.push_back(outLink);
			}
		}
		double outScore = base[urlList[idx]] * 1.0 / outLinkList.size();

		for (auto out : outLinkList) {
			totalScore[out] += outScore;
		}
		idx++;
	}

	vector<pair<int, double>> rank;
	for (i = 0; i < urlList.size(); i++) {
		string url = urlList[i];
		rank.emplace_back(i, totalScore[url]);
	}

	sort(rank.begin(), rank.end(), cmp);
	int answer = rank[0].first;
	return answer;
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

int main() {
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
}