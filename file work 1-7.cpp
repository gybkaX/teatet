/*
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void createFile() {
	ofstream file;
	file.open("test.dat");
	file << "abcd";
	file.close();

}
void createBin() {
	char data[9]{ "0PQRSTUV" };
	ofstream file("data.bin", ios_base::binary);
	file.write((char*)&data, sizeof(string));
	file.close();
}
void testOpen() {
	ifstream file("test.dat");
	if (!file.is_open()) {
		cout << "Error file cant open";
	}
	else {
		cout << "file opened";
	}
}

void biteInfile() {
	char ch;
	int n = 0;

	ifstream file("test.dat");
	if (file.is_open() == true) {
		while (file.get(ch)) {
			cout << (int)ch << ":" << n << "\t";
			n++;
		}
	}
}

void wordInfile() {
	char ch;
	int n = 1;

	ifstream file("test.dat");
	if (file.is_open() == true) {
		while (file.get(ch)) {
			if ((int)ch == 32) {
				while ((int)ch == 32) {
					file.get(ch);
				}
				n++;
			}
		}

		cout << n;
	}
}

void addRectangle() {
	int w, h;
	char ch;
	cin >> w >> h;
	ofstream input("test.dat");
	input << "rectangle: " << w << "; " << h;
	input.close();

	ifstream file("test.dat");
	if (file.is_open() == true) {
		while (file.get(ch)) {
			cout << (char)ch;
		}
	}
}


void addArray() {
	ifstream file("test.dat");
	double numb;
	int i = 0;
	double arr[7];
	while (!file.eof()) {
		file >> numb;
		arr[i] = numb;
		i++;
	}
	for (int j = 0; j < 7; j++) {
		cout << arr[j] << "\t";
	}
	cout << endl;
	for (int j = 0; j < 7; j++) {
		if (arr[j] >= 0) {
			cout << arr[j] << "\t";
		}
	}
}

void deleteTransfer() {
	setlocale(LC_ALL, "Russian");
	string line;
	vector <string> text;
	int i = 0;
	ifstream file("test.dat");
	if (file.is_open() == true) {
		while (!file.eof()) {
			getline(file, line);
			text.push_back(line);
			i++;
		}
		int maxLine = text.size();
		for (i = 0; i < maxLine; i++) {
			cout << text[i] << endl;
		}
	}
}


struct box {
	int id;
	int w;
	int d;
	int h;
};
int main() {
	deleteTransfer();
	*/
	/*
	* Задание 6
	* 
	box box;
	ifstream file("test.dat");
	double numb;
	char ch;
	int i = 0;
	double arr[4];
	while (!file.eof()) {
		while (i != 4) {
			file >> numb;
			file.get(ch);
			arr[i] = numb;
			i++;
		}
		break;
	}
	box.id = arr[0];
	box.w = arr[1];
	box.h = arr[2];
	box.d = arr[3];
	
	cout << "box " << box.id << ":\t";
	cout << box.w << " x ";
	cout << box.h << " x ";
	cout << box.d;

	*/
//}
