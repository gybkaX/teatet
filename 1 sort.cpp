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
		A[i] = rand() % 19 + 1;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
	cout << '\n';
	for (i = 0; i < N-1; i++) {
		int jmax = i;
		for (j = i + 1; j < N; j++) {
			if (A[j] > A[jmax]) {
				jmax = j;
			}
		}
		int temp;
		temp = A[i];
		A[i] = A[jmax];
		A[jmax] = temp;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
}
*/