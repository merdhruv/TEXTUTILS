#include <bits/stdc++.h>

using namespace std;
struct val{
	int value, weight;
	val(int value, int weight){
	this->value=value;
	this->weight=weight;
	}
};

bool cmp(struct val a, struct val b){
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}

double fractionalKnapsack(int W, struct val arr[], int n){
	sort(arr, arr + n, cmp);
	int curWeight = 0; 
	double finalvalue = 0.0;
	for (int i = 0; i < n; i++) {
		if (curWeight + arr[i].weight <= W) {
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}
		else {
			int remain = W - curWeight;
			finalvalue += arr[i].value
						* ((double)remain
							/ (double)arr[i].weight);
			break;
		}
	}
	return finalvalue;
}

int main(){
	int W = 50;
	val arr[] = { { 55, 15 }, { 150, 30 }, { 220, 45 } };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "\n\nMaximum value we can obtain = "
		<< fractionalKnapsack(W, arr, n);
	return 0;
}
