/*
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	const int N = 10;
	int A[N];
	int i, j, max;
	srand(12);
	for (i = 0; i < N; i++) {
		A[i] = rand() % 40 + 10;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
	cout << '\n';
	for (i = 1; i < N; i++) {
		max = A[i];
		j = i - 1;
		while (j >= 0 && A[j] < max) {
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = max;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
}
*/
