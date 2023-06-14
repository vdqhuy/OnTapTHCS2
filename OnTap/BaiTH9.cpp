#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string chuanHoaChuoi(string s) {
	int c = 0;
	string r = "";
	
	if (s[0] >= 65 && s[0] <= 90) {
		s[0] += 32;
	}

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			s[i] += 32;
		}
		
		if (s[i] == ' ' && c != 0) {
			continue;
		}
		else if (s[i] != ' ' && c != 0) {
			c = 0;
			r += s[i];
		}
		else if (s[i] == ' ' && c == 0) {
			if (i == 0 || r == "") {
				continue;
			}
			r += s[i];
			c++;
		}
		else {
			r += s[i];
		}
	}
	return r;
}

string taoEmail(string s) {
	s = chuanHoaChuoi(s);
	string e = "";
	e += s[0];

	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == ' ') {
			e += s[i];
		}
	}

	int c = s.length() - 1;
	while (s[c] != ' ') {
		if (c == 0)
			break;
		c--;
	}

	if (c != 0) {
		e += s.substr(c + 2, s.length() - 1);
	}
	e += "@ptit.edu.vn";
	return e;
}

int main() {
	bool stop = false;
	while (!stop) {
		cout << "1.Dich trai" << endl;
		cout << "2.So khong giam" << endl;
		cout << "3.Tao dia chi email" << endl;
		cout << "0.Dung chuong trinh" << endl;
		cout << "Nhap lua chon: ";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			int n, arr[100], p;
			cin >> n;
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}
			cin >> p;
			for (int i = p; i < n; i++) {
				cout << arr[i] << " ";
			}
			for (int i = 0; i < p; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
			break;
		case 2:
		{
			int t;
			cin >> t;
			for (int i = 1; i <= t; i++) {
				string s, result = "";
				cin >> s;
				for (int i = 0; i < s.length() - 1; i++) {
					if (s[i] > s[i + 1]) {
						result = "NO";
						break;
					}
				}
				if (result == "") {
					result = "YES";
				}
				cout << result << endl;
			}
			break;
		}
		case 3:
		{
			string s;
			cin.ignore();
			getline(cin, s);
			cout << taoEmail(s) << endl;
			break;
		}
		case 0:
			cout << "Dung chuong trinh" << endl;
			stop = true;
			break;
		default:
			cout << "Khong co lua chon " << choice;
		}
	}
}