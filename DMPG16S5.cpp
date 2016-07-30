#include "stdafx.h"
#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

int N, K, pizza[MAX]; long large = 0;

int main() {
	cin.sync_with_stdio(0); cin.tie(0); cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> pizza[i];
	for (int i = 1; i <= N; i++) pizza[i] = pizza[i] + pizza[i - 1];
	for (long i = 1; i < N; i++) if (pizza[i] - pizza[i - 1] > large) large = i; 
	return 0;
}