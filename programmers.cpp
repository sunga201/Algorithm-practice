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