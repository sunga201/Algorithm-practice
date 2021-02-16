#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <sstream>
#include <queue>
using namespace std;

/*int arr[502], sum[502]; //2019 KAKAO BLIND RECRUITMENT - 실패율

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

/*vector<string> solution(vector<string> record) { // 2019 KAKAO BLIND RECRUITMENT - 오픈채팅방
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
			answer.push_back(nick + "님이 들어왔습니다.");
		}
		else {//leave
			answer.push_back(nick + "님이 나갔습니다.");
		}
	}
	return answer;
}*/

/*vector<vector<string>> rel; // 2019 KAKAO BLIND RECRUITMENT - 후보키
vector<vector<int>> candidate[9];
// candidate[i]에는 컬럼 i개로 만든 후보키들이 들어간다.

int answer = 0, rowLen, colLen;

void dfs(int idx, int num, int max, vector<int> colList) {
	if (num == max) {
		// 키값이 유일한지 확인
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

		// 후보키인지 확인
		for (int i = 1; i <= max; i++) {
			for (auto part : candidate[i]) {
				if (includes(colList.begin(), colList.end(), part.begin(), part.end())) { 
				//part가 colList의 부분집합인지 확인한다.
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

/*typedef long long ll; //2019 KAKAO BLIND RECRUITMENT - 무지의 먹방 라이브

int solution(vector<int> food_times, ll k) {
	int answer = 0;
	ll sum = 0;
	for (auto time : food_times) {
		sum += time;
	}

	if (sum <= k) answer = -1;
	else {
		int i, foodNum = food_times.size();

		//1. 각각의 음식을 다 먹는데 걸리는 시간을 차례대로 기록함.
		vector<ll> border;
		vector<int> tmp = food_times;
		sort(tmp.begin(), tmp.end());
		border.push_back(foodNum * tmp[0]);

		for (i = 1; i < tmp.size(); i++) {
			border.push_back(border[i - 1] + (foodNum - i) * (tmp[i] - tmp[i - 1]));
		}

		//2. k초 동안 먹고 남아있는 음식 수, 테이블 회전 수, 그리고 찾는 음식의 번호를 구한다.
		//   여기서 구한 번호는 다 먹은 음식을 생각하지 않고 매긴것이므로, 다시 food_items 배열을 순회하며
		//   테이블 회전 수 이하인 음식들을 걸러내고 번호를 다시 매기면 최종 답을 구할 수 있다.
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

		//3. 다 먹은 음식들은 걸러내고 다시 번호를 매겨 최종 답을 찾는다.
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
vector<int> kmp(const string & a, const string & b, vector<int> failure) { // a 안에서 b를 찾고, 그 시작 지점의 인덱스를 저장한 배열을 리턴한다.

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

void toLowerCase(string & str) { // 대문자 -> 소문자로 변환
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

//모든 page 및 word의 단어는 소문자로 변환한다.
int solution(string word, vector<string> pages) {
	int i, idx = 0, wLen = word.length();
	toLowerCase(word);
	unordered_map<string, double> base, totalScore;
	vector<string> urlList;
	vector<string>* pageWordList = new vector<string>[pages.size()]; //각 페이지의 단어들이 저장되는 배열

	// 1. 링크 구해서 매핑하기
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
	//2. 페이지별 기본점수 구하기
	for (auto page : pages) {
		int pLen = page.length(), baseScore = 0;
		toLowerCase(page);

		//2-1. KMP 알고리즘을 이용해 기본 점수 구하기
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

	//3. 외부 링크 구하고, 점수 뿌려주기
	for (auto page : pages) {
		vector<string>& wordList = pageWordList[idx], outLinkList;
		for (i = 0; i < wordList.size(); i++) {
			if (wordList[i].size() > 5 && wordList[i].substr(0, 5) == "href=") { //href
				if (wordList[i - 1].substr(wordList[i - 1].length() - 2, 2) != "<a") continue;
				//"href="가 a 태그가 아닌 다른 태그에 들어있을 경우 패스
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

// 2021 KAKAO BLIND RECRUITMENT
/* string solution(string new_id) { // 1 - 신규 아이디 추천
	int i, sz = new_id.length();
	//1단계
	for (i = 0; i < sz; i++) {
		if (new_id[i] >= 'A' && new_id[i] <= 'Z') new_id[i] = new_id[i] - 'A' + 'a';
	}

	//2단계
	string tmp = "";
	for (i = 0; i < sz; i++) {
		if (new_id[i] == '-' ||
			new_id[i] == '_' ||
			new_id[i] == '.' ||
			(new_id[i] >= 'a' && new_id[i] <= 'z') ||
			(new_id[i] >= '0' && new_id[i] <= '9'))
			tmp += new_id[i];
	}
	new_id = tmp;

	//3단계
	sz = new_id.length();
	int seq = 0;
	for (i = 0; i < sz; i++) {
		if (new_id[i] == '.') seq++;
		else {
			if (seq >= 2) {
				new_id = new_id.substr(0, i - seq + 1) + new_id.substr(i);
				sz = new_id.length();
				i = i - seq;
			}
			seq = 0;
		}
	}
	if (seq >= 2) {
		new_id = new_id.substr(0, i - seq + 1) + new_id.substr(i);
	}
	seq = 0;
	sz = new_id.length();

	//4단계
	if (new_id[0] == '.') {
		new_id = new_id.substr(1);
		sz--;
	}
	if (new_id[sz - 1] == '.') {
		new_id = new_id.substr(0, sz - 1);
		sz--;
	}

	//5단계
	if (sz == 0) {
		new_id = "a";
		sz++;
	}

	//6단계
	if (sz >= 16) {
		if (new_id[14] == '.') {
			new_id = new_id.substr(0, 14);
			sz = 14;
		}
		else {
			new_id = new_id.substr(0, 15);
			sz = 15;
		}
	}

	//7단계
	if (sz <= 2) {
		char ch = new_id[sz - 1];
		while (sz != 3) {
			new_id += ch;
			sz++;
		}
	}
	return new_id;
}*/

/*unordered_map<string, int> mp; // 2 - 메뉴 리뉴얼
vector<string> vec;
priority_queue<pair<int, string>> pQue[11];
void dfs(int idx, int start, int num, string order, string str) {
	if (idx == num) { // 다채움
		if (mp.count(str)) { // 이 조합은 이미 저장되어 있음
			mp[str]++;
		}
		else {
			mp[str] = 1;
			vec.push_back(str);
		}
		return;
	}

	for (int i = start; i < order.length(); i++) {
		str[idx] = order[i];
		dfs(idx + 1, i + 1, num, order, str);
	}
}

vector<string> solution(vector<string> orders, vector<int> course) {
	int i;
	for (auto order : orders) {
		sort(order.begin(), order.end());
		for (auto num : course) {
			if (order.length() >= num)
				dfs(0, 0, num, order, string("", num));
		}
	}
	vector<string> answer;
	for (auto str : vec) {
		if (mp[str] >= 2) pQue[str.length()].emplace(mp[str], str);
	}

	for (i = 0; i < 11; i++) {
		if (!pQue[i].empty()) {
			int num = pQue[i].top().first;
			string s = pQue[i].top().second;
			pQue[i].pop();
			answer.push_back(s);
			while (!pQue[i].empty()) {
				int tmpNum = pQue[i].top().first;
				if (num != tmpNum) break;
				string tmpS = pQue[i].top().second;
				pQue[i].pop();
				answer.push_back(tmpS);
			}
		}
	}

	sort(answer.begin(), answer.end());
	return answer;
}*/

/*unordered_map<string, vector<int>> mp; // 3 - 순위 검색
unordered_map<string, int> isSorted;
vector<string> vec; // query에서 and 제외한 단어들 넣기

int func(int idx, string s) {
	if (idx == 4) { // 점수 부분
		int target = stoi(vec[idx]);
		vector<int>& scoreList = mp[s];
		int l = 0, r = scoreList.size(), mid;
		if (!isSorted[s]) { // 이미 정렬 되어있는가?
			sort(scoreList.begin(), scoreList.end());
			isSorted[s] = 1;
		}
		while (l < r) {
			mid = (l + r) >> 1;
			if (scoreList[mid] < target) l = mid + 1;
			else r = mid;
		}
		return scoreList.size() - l;
	}

	int ret = 0;
	if (vec[idx] == "-") {
		switch (idx) {
		case 0:
			ret += func(idx + 1, s + "java") +
				func(idx + 1, s + "cpp") +
				func(idx + 1, s + "python");
			break;

		case 1:
			ret += func(idx + 1, s + "backend") +
				func(idx + 1, s + "frontend");
			break;

		case 2:
			ret += func(idx + 1, s + "junior") +
				func(idx + 1, s + "senior");
			break;

		case 3:
			ret += func(idx + 1, s + "chicken") +
				func(idx + 1, s + "pizza");
			break;
		}
	}
	else {
		ret += func(idx + 1, s + vec[idx]);
	}
	return ret;
}

vector<int> solution(vector<string> info, vector<string> query) {
	int i;
	vector<int> answer;
	//info의 원소들을 tokenizer로 분리하고, 점수를 제외한 단어들을 붙여서 하나의 string으로 만들어 map의 키로 사용한다. 점수는 따로 빼서 int형으로 변환하고 map의 value에 있는 벡터에 push해서 나중에 이분탐색 수행
	for (auto str : info) {
		string tmp = "", token;
		stringstream ss(str);
		for (i = 0; i < 4; i++) {
			ss >> token;
			tmp += token;
		}
		ss >> token;
		int score = stoi(token);
		mp[tmp].push_back(score);
	}

	for (auto q : query) {
		stringstream ss2(q);
		string token2;
		while (ss2 >> token2) {
			if (token2 == "and") continue;
			vec.push_back(token2);
		}
		answer.push_back(func(0, ""));
		vec.clear();
	}

	return answer;
}*/

/*const int INF = 1e9; // 4 - 합승 택시 요금
int dist[201][201];
int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
	int i, j, k, answer = 0;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) dist[i][j] = INF;
	}

	for (auto fare : fares) {
		dist[fare[0]][fare[1]] = fare[2];
		dist[fare[1]][fare[0]] = fare[2];
	}

	for (k = 1; k <= n; k++) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (i != j && dist[i][j] >= dist[i][k] + dist[k][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	for (i = 1; i <= n; i++) dist[i][i] = 0;

	int noShare = dist[s][a] + dist[s][b], share = INF;
	for (i = 1; i <= n; i++) {
		if (dist[s][i] == INF || dist[i][a] == INF || dist[i][b] == INF) continue;
		share = min(share, dist[s][i] + dist[i][a] + dist[i][b]);
	}

	return noShare > share ? share : noShare;
}*/

const int MAX = 360001;
int secArr[MAX], preSum[MAX];

int toInt(string time) {
	int hour = stoi(time.substr(0, 2)) * 3600;
	int minute = stoi(time.substr(3, 2)) * 60;
	int second = stoi(time.substr(6, 2));
	return hour + minute + second;
}

string toTime(int sec) {
	string hour = to_string(sec / 3600);
	if (sec / 3600 < 10) hour = "0" + hour;

	string minute = to_string((sec % 3600) / 60);
	if ((sec % 3600) / 60 < 10) minute = "0" + minute;

	string second = to_string(sec % 60);
	if (sec % 60 < 10) second = "0" + second;

	return hour + ":" + minute + ":" + second;
}

string solution(string play_time, string adv_time, vector<string> logs) {
	string answer = "";
	int i, j;
	int totLen = toInt(play_time), advLen = toInt(adv_time);
	for (auto it : logs) {
		string start = it.substr(0, 8), end = it.substr(9, 8);
		int sTime = toInt(start), eTime = toInt(end);
		secArr[sTime + 1]++;
		secArr[eTime + 1]--;
	}

	preSum[0] = secArr[0];
	for (i = 1; i <= totLen; i++) { // 매 초마다 겹치는 구간의 수 구하기
		preSum[i] = secArr[i] + preSum[i - 1];
	}

	for (i = 1; i <= totLen; i++) { // prefix sum
		preSum[i] += preSum[i - 1];
	}

	int maxa = 0;
	for (i = 0; i + advLen <= totLen; i++) {
		if (i == 0) {
			if (maxa < preSum[advLen]) {
				maxa = preSum[advLen];
				answer = toTime(i);
			}
		}
		else {
			if (maxa < preSum[i + advLen] - preSum[i]) {
				maxa = preSum[i + advLen] - preSum[i];
				answer = toTime(i);
			}
		}
	}
	return answer;
}