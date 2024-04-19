#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	const int N = 10;
	int A[N];
	int i, j, keyLeft,keyRight;
	srand(17);
	for (i = 0; i < N; i++) {
		A[i] = rand() % 40 - 20;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
	cout << '\n';
	for (i = 0; i < N; i++) {
		if (A[i] < 0) {
			keyLeft = i;
			break;
		}
	}
	for (i = N - 1; i > 0; i--) {
		if (A[i] < 0) {
			keyRight = i;
			break;
		}
	}
	for (i = keyLeft; i < keyRight; i++) {
		int jmin = i;
		for (j = i + 1; j < keyRight+1; j++) {
			if (A[j] < A[jmin]) {
				jmin = j;
			}
		}
		int temp;
		temp = A[i];
		A[i] = A[jmin];
		A[jmin] = temp;
	}
	for (j = 0; j < N; j++) {
		cout << A[j] << "\t";
	}
}