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

	while (city != "Я не знаю") {
		getline(cin, city);
		if (city != "Я не знаю") {
			len = city.length();
			posl_buk = city.erase(0, len - 1);
			transform(posl_buk.begin(), posl_buk.end(), posl_buk.begin(), tolower);
			if (posl_buk == "а") {
				posl_buk = "А";
			}
			else if (posl_buk == "б") {
				posl_buk = "Б";
			}
			else if (posl_buk == "в") {
				posl_buk = "В";
			}
			else if (posl_buk == "г") {
				posl_buk = "Г";
			}
			else if (posl_buk == "д") {
				posl_buk = "Д";
			}
			else if (posl_buk == "е") {
				posl_buk = "Е";
			}
			else if (posl_buk == "ё") {
				posl_buk = "Ё";
			}
			else if (posl_buk == "ж") {
				posl_buk = "Ж";
			}
			else if (posl_buk == "з") {
				posl_buk = "З";
			}
			else if (posl_buk == "и") {
				posl_buk = "И";
			}
			else if (posl_buk == "й") {
				posl_buk = "Й";
			}
			else if (posl_buk == "к") {
				posl_buk = "К";
			}
			else if (posl_buk == "л") {
				posl_buk = "Л";
			}
			else if (posl_buk == "м") {
				posl_buk = "М";
			}
			else if (posl_buk == "н") {
				posl_buk = "Н";
			}
			else if (posl_buk == "о") {
				posl_buk = "О";
			}
			else if (posl_buk == "п") {
				posl_buk = "П";
			}
			else if (posl_buk == "р") {
				posl_buk = "Р";
			}
			else if (posl_buk == "с") {
				posl_buk = "С";
			}
			else if (posl_buk == "т") {
				posl_buk = "Т";
			}
			else if (posl_buk == "у") {
				posl_buk = "У";
			}
			else if (posl_buk == "ф") {
				posl_buk = "Ф";
			}
			else if (posl_buk == "х") {
				posl_buk = "Х";
			}
			else if (posl_buk == "ц") {
				posl_buk = "Ц";
			}
			else if (posl_buk == "ч") {
				posl_buk = "Ч";
			}
			else if (posl_buk == "ш") {
				posl_buk = "Ш";
			}
			else if (posl_buk == "щ") {
				posl_buk = "Щ";
			}
			else if (posl_buk == "ъ") {
				posl_buk = "Ъ";
			}
			else if (posl_buk == "ы") {
				posl_buk = "Ы";
			}
			else if (posl_buk == "ь") {
				posl_buk = "Ь";
			}
			else if (posl_buk == "э") {
				posl_buk = "Э";
			}
			else if (posl_buk == "ю") {
				posl_buk = "Ю";
			}
			else if (posl_buk == "я") {
				posl_buk = "Я";
			}
			cout << posl_buk;

		}
	}
	return 0;
}