/*
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	const int N = 10;
	int A[N];
	int i, j, max;
	srand(12);
	for (i = 0; i < N; i++) {
		A[i] = rand() % 18 - 3;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
	cout << '\n';
	for (i = N-1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (A[j] > A[j + 1]) {
				int tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
}
*/