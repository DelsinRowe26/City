#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;
int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string city, city_per, city_per1, posl_buk, posl_buk_per, povt;
	ofstream cities, povtorki;
	city = "";
	{
		povtorki.open("povtorki.txt");
		povtorki << city;
		povtorki.close();
		cities.open("cities_a.txt");
		cities << "����� ������ ������ �������� ������� ������ ���-���� ������ ������� ������� ������ ����� ����� �����-����� �������� �������� ��������� ���� ��-������� ���� ����� ����� ����� ������ ������ ��������� ������� ����� ������ ����������� ����� ����������� ������������� �������������-����������� ���������� ������� ����� ������� ������ ����������� ����� ��������� ������ ����� ������� ����� ������� ���������� ������-�������� ����� ������ ������� ������������ ��������� ������� ������� ���� ��������� ��������� ������� ����� ������� ����� ������� ������� ���� ������� ����� �������� ���� �������� ���������� ����������� ������ ����� ������ ��������� �������� ������� ������ ����� ��������� ��������� ������ ��� ����� ������� �������";
		cities.close();
		cities.open("cities_b.txt");
		cities << "������� �������� ����� ������ ������������� ������ ��������� ������ ����� ������ ���� ���������� �������� ������� �������� ������� ����� �������� ������� �������� ������� ������� ��������� ������� ����������� ��������� ����� ������� ������ ������ ������ ������ �����-������� �����-�������� �������� ������� ������� ���� ��������� ������ ��������� ��������� ���������� ��������� �������� ����������� ��������� ���������� ����-�������� ������� ����� ������ ������ ��������� ���������� ���� ������ ������ ����� ����� �������� ��������� ��������� ���������� ����� ��������� ����� ������ ������������ ����������� ���� ������ �������� ���������� ���������� ��������� ������ ������� ������� ������� ������������ ������ ������� �������� �������� ������ �������-������ ��� ����� ����� ������� ������������ �������� ������� �������� ����� �������� ���������� ������ ����� ������ ����� ������� �������� ���� �������� ������ �������� ������ �������� ���������� �������� ��������� ������� ������ ��� �������� ������ ������������ ������ �������� ������-����� ������";
		cities.close();
		cities.open("cities_v.txt");
		cities << "�������� ������ �������� ������� ����� ������� ��������� ������ ����� �������-���� �������-�������� �������-����� ���������� ������ ���� ������� ���� ���������� ���������� ����� ����������� ������������� �������-����� �������-������ �������-����� �������-����� �������-���� ���������� ��������� ���������� ������� ������ ������� ������� ��������� ������� ��������� ������ ����������� ����������� �������� ��������� ���������� ������������ ������ �������� ������� ��������� ����������� �������� ������ �������� ������ ������� ������� ������ ����������� �������� ������� ���������� ������ ������ ����� ��������� ������ ������� ������ ������� ��������� ������� ������ �������-������";
		cities.close();
		cities.open("cities_g.txt");
		cities << "����� ������ ��������-����� ��������-�� ������� ����� ��� ����� ����� ������� �������� ������ ������� ����� ����������� ��������� ��������� ������� ���� ��������� ���� ���������� ø������ ����� ������ ������ �������� ������� ������ �������� �����-������� ������������ ������ ������� �������� ������������� ��������� �������-���� ��������� ���� ���� ���������� ������ ������� ��������� ����� �������� �������� �������� ������ ������ ���������� �������� ����������� ���������� �������� ����� ����������� ����-����������� �����";
		cities.close();
		cities.open("cities_d.txt");
		cities << "����������� ������������-���� ����� ����� ������ ��������� ����������� ������������� ������ ������ ������� ������ ���-��-����� ���������� �������� ������� ����� ���� ������� ������� ���������� ������� �������� ��������� ����������� ���������� ������ ������������ ��������-��������� ������� ��������� ����� ��� �������� ������������ ������� ���������� ������ ������� ��������� ������� ������ ����� ����� ������ ����� ������� ��������� ������� ��������� ������� ������� ������� ����������� ��������";
		cities.close();
		cities.open("cities_e.txt");
		cities << "��������� ��������� ���� ������������ ������� ���� ������� ����� ����������� ���� �������� ������ ����� ��������� �������";
		cities.close();
		cities.open("cities_zh.txt");
		cities << "������������ ������������-�������� ��������������� ������ �������� �������� ������ �������� ������� ����� ������� ���������";
		cities.close();
		cities.open("cities_z.txt");
		cities << "��������� ������������ �������� �������� ������ ������� ������ ��������� �������� ������� ��������-����� ���������� ��������� ������� �������� �������� ������� ��������� ���������� ������� ������ ����������� ����������� ���������� ������������ ������������ ����������� ��������� ��� ���� ������-����� �������� ������ ����������� �������� ������ ������";
		cities.close();
		cities.open("cities_i.txt");
		cities << "������ ��������� ������� �����-��������� ���������� ������ ������ ��������� ������ �������� ����� ���������� �������� ������ ���� ����� ������� ���� ������ �������� �������� ������� ����� ������� ��������� ������� �������� ��������� ���-����� ����� ������� ���� �������";
		cities.close();
		cities.open("cities_iy.txt");
		cities << "���� ������� ���� ������������ ������-��� �������";
		cities.close();
		cities.open("cities_k.txt");
		cities << "�������� ����� �������� ������ ���� �������� ����� �����-��-���� ��������� ���� ���� ����������� ��������� ������ ������ ��������� ������ ������� �������� �������� ������� ������������ �������-��������� �������-���������� ������-��-��� ��������� ������� ������� �������� ����� ���������� �����-(����) ������ ����� ���� ���������� ������� ��������� ��������� ������� ������� ������� ���������� ������� ������ ������ ��������� ��������� ������� ���� �������� �������� �������� ��������� ������� ���������� ������� ����� �������� �����-�������� ������� �������� ������ ������� �������� ����� ������ ������� �������� �������� ���� �����-���� ʸ��� ����-���� ���� ����� �������� ������ ���� ������� ����� ��������� ������ ������� ������� �������� �������� ����� ������� ������ �������� ������ ����� ��������� ���������� ������-������ ������� ������� ���� �������� ������-����� �������� ���������� ���� ������� �������� �������� �������� ���� ������ ��������� ���� ������ �������� ������ ��������� ������� ������� �������� �������� �������������� ������ ���� �������� ������� ��������� ������� ���������� �������� �������� ����������� �����������-��-����� �������� ������� ��������� �������� �������������� ������� ���������� ��������� ������� ��������� ������� ������ ������ �������� ������� �������� ���������� �������� ���������� ������������ ��������� ������ ������ ������� ����� ������ ��������� ������������� ������������� ������������� ����������� ��������� �������-���� ������������� �������������� �������������� ������������� ����������� �������������� �������������� �������������� ������������� ������������ ���������� ������� ��� �������-����� �������-���� ������� ��������� ��������� ������ ������ �����-������ ������� �������� ��������� �������� ������� �������� �������� ������ ������� ������ ������ ���������� �������� ������� ��������� ����� �������� �������� ���� �������� ����� ����� ������ �����";
		cities.close();
		cities.open("cities_l.txt");
		cities << "��-��� ������� ���������� ������ ����� ������� ������� ������� �������� �������� ��c-����� ����������� ����� �������� ������ ������� �������� ��-��� ����������� ������� �������-��������� ����� ��������� ������ ����������� ����������� ��������� ����� ���� ������-����� ����� ���� �������� ����� ��������� ���� ���� ������ ����� ����� �������� ���������� ����� ��������-���� ������� ��������� ������ ���-�������� ������-���������� ������ ����� ���� ������� �������� ���� �������� �������� ���� ������� ������ ��������� ����� ������ ������� ����� ���������� ������ ������";
		cities.close();
		cities.open("cities_m.txt");
		cities << "�������� ��������� ������� ����� ��������� ������������ ������ ������ ������ ������� ������-��� �������� �������� ������ �����-������ �������� ������ ��������������� ������������� ������� �������� ������ ������ ��������� ��������� ������ ��������� �������� ����������-����� ����� �������� ������� ������� ��������� ����� ������ ����� ������������� �������� ���������� ������ �������� ������������ ������ ������� ������ �������� ����������� ���������� ������ ������ ������� ����� ���������� ������ ����� ��������� �����������-���� ����� ��������� ������ ������ ������ �������� ���������� ���������� ���������� ��������� ������ ������ ������� ����� ������ �������� ���������� ��������� ������ ���������� ��������� �������� �������� ������ ���������� ���� ������ ������ ���������� ������ �������� ����� ������ ����� ������ ������ ������";
		cities.close();
		cities.open("cities_n.txt");
		cities << "����������-����� �������� �������� ����� ������ ����� ������� �������� ������� ���������� ��������� ������� ������� ������ ������� ����� ��������� ����-������� �������� ������-��� ����� ���������� ������� ������� ������ �������� ������������ �������� �������� ����� ������� �������� �������� �������������� ������ �������� ���������� ���������� ���������� ����������� ��� ������������� ���������� ����������� ������-����� ������-����� ������-�������� ������-����� ������-����� ������-���� �������� ���������� ����������-��-����� �������� ���������� ������� ����� �����-������ �����-���� ����������������� ����������� ������������� ����������� ���������� ���������� ����������� ����������� �������������� ������������� ������������ ������������ �������� ������������ ����������� �������� �������������� ���������� ���������� ������������� ����������� ���������� �������������� ������������ ������������ �����-����� �����-������� ������� ������� �������� �������� ��������� ������ ���-���� ���-���� ����� ����� ������ ������������ �������";
		cities.close();
		cities.open("cities_o.txt");
		cities << "������� ������� ������ ��� ������ �������� �������� ����� ����� ���� ������ ��������� ����������� �������� �������� ���������� ������� ������ ������� �������� ���� ����� ��������� ����� ������ ��� �������� �������-����� ����� ���� ����� ��� ����� �������� ���� �������� ������ ��������� ���������� �������� �������� ������ ��� ������ ���� ��";
		cities.close();
		cities.open("cities_p.txt");
		cities << "������� ��������-(���.���.) �������� ����������-����� �������� ��������� ������� ���������� ������ ��������� ����� ���������� ����� ����� ���������� ������������ ������� �������� ����������-��������� ����� ����� ���� ������� �����-����� ��������/����������� ������-��� �������� ��������-������������� ������������ �������������-���������� �������� ������� ������ ������ ������� ���������� ���������� ��� ������ ����� �������� �������� ���������� ������� ������ ������ �������� ��������� ������� ������ ������� ��������� ��������-���� �������� ��������� �������� �����-������ ������ ������� ����������� ����� ������� ��������� ��������� ����� ��������� �������� �������� ���������-������� ��������� ��������� ����������� ���������� �������� ���������� ����� ������� ����� ���� ����� �������� ����� ������ ������� ������ ������ ������� �������� ����-�� ���������";
		cities.close();
		cities.open("cities_r.txt");
		cities << "����� �������� �������� ���������� ��������� ���������� ����� ��� ������� ����� ������ ������ ���� ���� ��� ���-��-������� ������� �����-��-���� ����� ������� �������� ������� ������ ������-��-���� ������ ��������� ������ ������� �������� ����� ���� �������� ������� ������ ������ ����� ������";
		cities.close();
		cities.open("cities_s.txt");
		cities << "������� ������ �������� �������� ������� ���� ������ ������ ��������� ���-������� ���-����� �����-��������� ���-����� �����-������� �������� ���-��������� ���-���� ���-����� ������� ������� ������� ������� ����� ������ ����� �������� ���������� ������ ����������� ���������� ������� ���������� ������ ��������� ����� ����������� ������-�������� ��������������� ������������ ����������� ������������� ������� ����� ������ ������ �������� ������ ������������� �������� ������������� �������� ����-��� ����������� ������ ������� ����� �������� ����� �������� ��������� ���������� ���� ����� ����� ������ �������� ��� ����������� �������� ����������� ������ ��������� ������ ��������-��-������ ������ ���������� �������� �������� �������� ����������� ������� ������� ��������� ������ ��������� ����� ���������� ��������� ��������� ������������� ����-����� ������������� ����-����-���� ������ ��������� ����� ��������� ��������� �������� ������������ ��������-��� ���������� ����� ���� ����-������� ����-������� ������ ������-������� ������-��������� ����� ���������� ������������� ������������� �������� ���������� ������� ������-������� ������-����� ������� �������� ������ ����� ����������� ����������� ��������� ��������� ��������� ��������� �������� ������� ������� ����� ������� ������� ���� ������� ������� ����� ����� ������ ���������� ����� ������� �������� ����� ��� �����-(������) ������ ������� ��������� ������� ������� ������ ���������";
		cities.close();
		cities.open("cities_t.txt");
		cities << "����� �������� ������ ����� ������ ������� ����� ������ ������ ������-(�������) ������ ������ ������� ������� ���� �����-���� ����� ������ ������� ������� �������� ������� ������ ����� ������� ������ ������� ������� ����-���� �������� ������ ����� ��������� ������ ������� ��������� ��������� ������ �������� �������� ������� ����� ������ �������� ������ ������ ����� ����� ������ ������� ������� ����� ������ ��������� ������ ������ ����� �������� ��������� ������ ������� ���� ������ ����� ����� ������� ������ ����� �������� ���� ������ ��������� ������ ���������";
		cities.close();
		cities.open("cities_u.txt");
		cities << "������� ��������� ����� ������� ������ ������� ���� ������� ����-��� ��������� ����� ���� ������ ����� ����� ������ ����-������ �������� ������ ������ ������ ������-��������� ��������� ����-������� ����-������ ����-����������� ����-����� ����-��� ����-������� ������� ������ ��� ����� ���� ����� ������� ���";
		cities.close();
		cities.open("cities_f.txt");
		cities << "����� ���������� �������� ����������� ������ ��������� ������ ���������-��-����� ���������-��-����� ������� �������� ������� ������� �������� ������";
		cities.close();
		cities.open("cities_h.txt");
		cities << "��������� ������ ��������� ���������� ����� ������ ����� ����� �����-�������� ������� �������� ������ ������ ������ ������� ������� �������� ������ ������ ��������� ������ ����������� �������� ����� ����� �������� ����������� ���� ������ ����� �������� ������� �������";
		cities.close();
		cities.open("cities_c.txt");
		cities << "������� ���� ������� �������� ����� ����� �������� �������� ������ ������� ������ ������";
		cities.close();
		cities.open("cities_ch.txt");
		cities << "����� ���������� ����� �������� �������� �������� ��������� ��������� ����� ������� ��������� ������� ��������� ���������� ��������� �������� �������� ������ �������� �������� ������������ ���������� �������� ���������� ����� ������ ��������� ���� ��������� �������� ������-��� ������ ����� ������ ������� ������� �����";
		cities.close();
		cities.open("cities_sh.txt");
		cities << "������� �������� ���� ������ ������ �������� ����� �������� ����� ����� ������ ������� ����� ������� ���� ������ �������� �������� ������� �������� ������� ����� ��������� ������ ����� ������������ �������� ������� ������ ��� ������� ������";
		cities.close();
		cities.open("cities_sha.txt");
		cities << "�������� ����� ٸ���� ٸ����� ����� ������� �����";
		cities.close();
		cities.open("cities_ii.txt");
		cities << "����� ����� ����� �������� ����� ����� ������ ����-������� ����������� ������� ���������� ������� �������� ����� ���������� �������";
		cities.close();
		cities.open("cities_ie.txt");
		cities << "����� ��������� ������������ ������������ ����������� ������ ���-���� ���-������ ������� ������� ��-���� ������ ������ ������ ����� �����";
		cities.close();
		cities.open("cities_iyu.txt");
		cities << "��������� ������ ��� ����-��������� ����-��������� ����������� ���� ������ �����-�������� ������� ������� �����";
		cities.close();
		cities.open("cities_ya.txt");
		cities << "����� ������ ���� ���������� ����� ����� ������ ������ ��������� ������ ��������� ����� ������";
		cities.close();
	}
	int len, len_1, pos, kol_pov = 0;
	while (city != "� ������") {
		getline(cin, city);
		city_per = city;
		if (city != "� ������") {
			len = city.length();
			posl_buk = city.erase(0, len - 1);
			transform(posl_buk.begin(), posl_buk.end(), posl_buk.begin(), tolower);
			if (kol_pov != 0) {
				for (int i = 0; i < kol_pov; i++) {
					ifstream povtorki;
					povtorki.open("povtorki.txt");
					povtorki >> povt;
					if (city == povt) {
						break;
					}
				}
			}
			if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_a.txt");
				for (int i = rand()% 88+1 ; i < 89; i++) {
					cities >> city;
				}
				cout << city;
			} else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_b.txt");
				for (int i = rand() % 123 + 1; i < 124; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_v.txt");
				for (int i = rand() % 72 + 1; i < 73; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_g.txt");
				for (int i = rand() % 60 + 1; i < 61; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_d.txt");
				for (int i = rand() % 55 + 1; i < 56; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_e.txt");
				for (int i = rand() % 15 + 1; i < 16; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_zh.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_z.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_i.txt");
				for (int i = rand() % 33 + 1; i < 34; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_iy.txt");
				for (int i = rand() % 6 + 1; i < 7; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_k.txt");
				for (int i = rand() % 214 + 1; i < 215; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_l.txt");
				for (int i = rand() % 69 + 1; i < 70; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_m.txt");
				for (int i = rand() % 95 + 1; i < 96; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_n.txt");
				for (int i = rand() % 99 + 1; i < 100; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_o.txt");
				for (int i = rand() % 46 + 1; i < 47; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_p.txt");
				for (int i = rand() % 90 + 1; i < 91; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_r.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_s.txt");
				for (int i = rand() % 154 + 1; i < 155; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_t.txt");
				for (int i = rand() % 74 + 1; i < 75; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_u.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_f.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_h.txt");
				for (int i = rand() % 33 + 1; i < 34; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_c.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_ch.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_sh.txt");
				for (int i = rand() % 32 + 1; i < 33; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_sha.txt");
				for (int i = rand() % 7 + 1; i < 8; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_ii.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}	
			else if (posl_buk == "�") {
				pos = city_per.find("�");
				city_per1 = city_per.erase(pos, 1);
				len_1 = city_per1.length();
				posl_buk_per = city_per.erase(0, len_1 - 1);
				if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_a.txt");
					for (int i = rand() % 88 + 1; i < 89; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_b.txt");
					for (int i = rand() % 123 + 1; i < 124; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_v.txt");
					for (int i = rand() % 72 + 1; i < 73; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_g.txt");
					for (int i = rand() % 60 + 1; i < 61; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_d.txt");
					for (int i = rand() % 55 + 1; i < 56; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_e.txt");
					for (int i = rand() % 15 + 1; i < 16; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_zh.txt");
					for (int i = rand() % 12 + 1; i < 13; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_z.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_i.txt");
					for (int i = rand() % 33 + 1; i < 34; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_iy.txt");
					for (int i = rand() % 6 + 1; i < 7; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_k.txt");
					for (int i = rand() % 214 + 1; i < 215; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_l.txt");
					for (int i = rand() % 69 + 1; i < 70; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_m.txt");
					for (int i = rand() % 95 + 1; i < 96; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_n.txt");
					for (int i = rand() % 99 + 1; i < 100; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_o.txt");
					for (int i = rand() % 46 + 1; i < 47; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_p.txt");
					for (int i = rand() % 90 + 1; i < 91; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_r.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_s.txt");
					for (int i = rand() % 154 + 1; i < 155; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_t.txt");
					for (int i = rand() % 74 + 1; i < 75; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_u.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_f.txt");
					for (int i = rand() % 16 + 1; i < 17; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_h.txt");
					for (int i = rand() % 33 + 1; i < 34; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_c.txt");
					for (int i = rand() % 12 + 1; i < 13; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_ch.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_sh.txt");
					for (int i = rand() % 32 + 1; i < 33; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_sha.txt");
					for (int i = rand() % 7 + 1; i < 8; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
					ifstream cities;
					cities.open("cities_ii.txt");
					for (int i = rand() % 16 + 1; i < 17; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "�") {
				ifstream cities;
				cities.open("cities_ie.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}
				else if (posl_buk_per == "�") {
				ifstream cities;
				cities.open("cities_iyu.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
				else if (posl_buk_per == "�") {
				ifstream cities;
				cities.open("cities_ya.txt");
				for (int i = rand() % 13 + 1; i < 14; i++) {
					cities >> city;
				}
				cout << city;
			}
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_ie.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_iyu.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "�") {
				ifstream cities;
				cities.open("cities_ya.txt");
				for (int i = rand() % 13 + 1; i < 14; i++) {
					cities >> city;
				}
				cout << city;
			}
			povt = city;
			ofstream povtorki;
			povtorki.open("povtorki.txt");
			povtorki << povt;
			povtorki.close();
			if (kol_pov == 0) {
				kol_pov++;
				/*int i = 0;
				while (i < kol_pov) {
					ifstream povtorki;
					povtorki.open("povtorki.txt");
					povtorki >> city;
				}*/
			}
			
		}
	}
	return 0;
}
/*strcpy(bukvi, posl_buk.c_str());
		if (bukvi >= 'a' && bukvi <= 'z') {
			int alnum = bukvi - 'a';
			bukvi = 'A' + alnum;
		}*/
		/*if (posl_buk >= "�" && posl_buk <= "�" && posl_buk != "\0")
		{
			int temp = (int)n[i] - 32;
			cout << (char)temp;
		}

		/*ofstream city_pervie_bukvi;
		city_pervie_bukvi.open("pervie_bukvi.txt");
		city_pervie_bukvi << "� � � � � � � � � � � � � � � � � � � � � � � � � � � � � �";
		city_pervie_bukvi.close();

		ifstream city_pervie_bukvi_s;
		city_pervie_bukvi_s.open("pervie_bukvi.txt");
		for (int i = 0; i < 30; i++) {
			city_pervie_bukvi_s >> bukvi;
			if (bukvi == "�") {

			}
		}*/
		//city_pervie_bukvi_s >> bukvi;