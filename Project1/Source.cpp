#include <iostream>
#include <algorithm>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string city, posl_buk, bukvi;
	int len;

	while (city != "� �� ����") {
		getline(cin, city);
		if (city != "� �� ����") {
			len = city.length();
			posl_buk = city.erase(0, len - 1);
			transform(posl_buk.begin(), posl_buk.end(), posl_buk.begin(), tolower);
			if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			else if (posl_buk == "�") {
				posl_buk = "�";
			}
			cout << posl_buk;

		}
	}
	return 0;
}