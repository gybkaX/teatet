#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

string perevod(int b, int n) {
    // n это число в 10 b система в которую нужно перевести

    string result = "";

    for (int i = 0; n > 0; i++) {
        if (10 == b) {
            result = result;
            break;
        }

        else {
            if (n % b > 9) {
                result = char('A' + (n % b) - 10) + result;
            }
            else {
                result = char((n % b) + '0') + result;
            }
        }

        n /= b;
    }

    return result;
}

int desiti(string num, int a) {
    char z;
    int x;
    int result = 0;
    if (a == 10) {
        for (int i = 0; i <= num.length(); i++) {
            z = num[i];
            if (z >= '0' && z <= '9' && (z - '0')) {
                result = result +( z - '0') * (pow(a, num.length() - i - 1));
            }
        }
        return result;
    }
    else {
        for (int i = 0; i <= num.length(); i++) {
            z = num[i];
            int step = num.length() - i;
            if (z >= '0' && z <= '9' && (z - '0')) {
                result = result + (z - '0') * (pow(a, num.length() - i - 1));
            }
            if(z >= 'A' && z <= 'Z' && (z - 'A')) {
                result = result + (z - 'A' + 10) * (pow(a, num.length() - i - 1));
            }
            if (z == 'A') {
                result = result + 10 * (pow(a, num.length() - i - 1));
            }
        }
        return result;
    }
}



int main()
{
    string Num,NumZ;
    char Z;
    int A, B;
    cout << "Vvedi Sistem iz kakaoi\n";
    cin >> A;
    cout << "V kakiy?\n";
    cin >> B;
    cout << "Chislo do tochki?\t Vvodi bykvi tolko zaglavnimi\n";
    cin >> Num;
    cout << "Chislo posle tochki?\t Vvodi bykvi tolko zaglavnimi\n";
    cin >> NumZ;
    int x = desiti(Num, A);
    int y = desiti(NumZ, A);
    cout <<"desitichai\t" << x << "." << y << "\n";
    cout << "itog\t" << perevod(B, x) << "." << perevod(B, y);
}