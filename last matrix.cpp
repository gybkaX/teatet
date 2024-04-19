/*
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	const int N = 7;
	int A[N][N];
	int i, j, max;
	max = 0;
	srand(11);
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			A[i][j] = rand()%101;
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if ((j >= i) and (j < N - i)) {
				if (max < A[i][j]) {
					max = A[i][j];
				}
			}
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n" << max;
}
*/
