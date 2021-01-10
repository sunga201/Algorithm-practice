#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

/*int arr[502], sum[502]; //2019 KAKAO BLIND RECRUITMENT - ½ÇÆÐÀ²

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