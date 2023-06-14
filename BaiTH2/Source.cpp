#include<iostream>
using namespace std;

int giaiThua(int n) {
	int kq = 1;
	do {
		kq *= n;
		if (n == 1)
			break;
	} while (n--);
	return kq;
}

double toHop(double n, double k) {
	return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}

double chinhHop(double n, double k) {
	return giaiThua(n) / giaiThua(n - k);
}

int chuViHCN(int cd, int cr) {
	return (cd + cr) * 2;
}

int dienTichHCN(int cd, int cr) {
	return cd * cr;
}

float chuViHinhTron(float r) {
	return 2 * 3.14 * r;
}

float dienTichHinhTron(float r) {
	return 3.14 * r * r;
}

double tinhXMuN(int x, int n) {
	double kq = 1;
	for (int i = 0; i < n; i++) {
		kq *= x;
	}
	return kq;
}

bool isPrime(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

bool soChinhPhuong(int n) {
	if (n < 10) {
		if (n != 1 && n != 4 && n != 9)
			return false;
	}

	if (sqrt(n) != (int)sqrt(n)) {
		return false;
	}

	return true;
}

bool soHoanThien(int n) {
	int sum = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n && sum != 0)
		return true;
	return false;
}

int main() {
	bool stop = false;
	while (!stop) {
		cout << "-----------------------------------------------------------------" << endl;
		cout << "1.Viet chuong trinh tinh to hop va chinh hop khi nhap vao n va k."
			" Dieu kien n >= k va n, k la so nguyen duong." << endl;
		cout << "2.Viet chuong trinh tinh dien tich va chu vi hinh chu nhat voi "
			"chieu dai va chieu rong duoc nhap tu ban phim." << endl;
		cout << "3.Viet chuong trinh tinh dien tich va chu vi hinh tron voi ban"
			"kinh duoc nhap tu ban phim." << endl;
		cout << "4.Viet chuong trinh gom co ham tinh gia tri X n voi X la so thuc,"
			"n la so nguyen duong." << endl;
		cout << "5.Viet chuong trinh co ham kiem tra so n nguyen duong co phai la "
			"so nguyen to hay khong?" << endl;
		cout << "6.Nhap so nguyen duong n. Liet ke tat ca cac so nguyen to nho hon n." << endl;
		cout << "7.Viet chuong trinh co ham kiem tra so n nguyen duong co phai la "
			"so chinh phuong hay khong?" << endl;
		cout << "8.Nhap so nguyen duong n. Liet ke n so chinh phuong dau tien." << endl;
		cout << "9.Viet chuong trinh co ham kiem tra so n nguyen duong co phai la "
			"so hoan thien hay khong?" << endl;
		cout << "10.Nhap so nguyen duong n. Dem xem co bao nhieu so hoan thien nho hon n." << endl;
		cout << "0.Dung chuong trinh" << endl;
		cout << "-----------------------------------------------------------------" << endl;

		int choice;
		cout << "Nhap lua chon: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			int n, k;
			cout << "Nhap n: ";
			cin >> n;
			cout << "Nhap k: ";
			cin >> k;
			cout << "To hop chap " << k << " cua " << n << " la: " << toHop(n, k) << endl;
			cout << "Chinh hop chap " << k << " cua " << n << " la: " << chinhHop(n, k) << endl;
			break;
		}
		case 2:
		{
			int cd, cr;
			cout << "Nhap chieu dai: ";
			cin >> cd;
			cout << "Nhap chieu rong: ";
			cin >> cr;
			cout << "Chu vi hcn la: " << chuViHCN(cd, cr) << endl;
			cout << "Dien tich hcn la: " << dienTichHCN(cd, cr) << endl;
			break;
		}
		case 3:
		{
			float r;
			cout << "Nhap ban kinh: ";
			cin >> r;
			cout << "Chu vi hinh tron: " << chuViHinhTron(r) << endl;
			cout << "Dien tich hinh tron: " << dienTichHinhTron(r) << endl;
			break;
		}
		case 4:
		{
			int x, n;
			cout << "Nhap x: ";
			cin >> x;
			cout << "Nhap n: ";
			cin >> n;
			cout << x << "^" << n << " = " << tinhXMuN(x, n) << endl;
			break;
		}
		case 5:
		{
			int n;
			cout << "Nhap n: ";
			cin >> n;
			if (isPrime(n))
				cout << n << " la so nguyen to" << endl;
			else
				cout << n << " khong phai la so nguyen to" << endl;
			break;
		}
		case 6:
		{
			int n;
			cout << "Nhap n: ";
			cin >> n;
			for (int i = 2; i < n; i++) {
				if (isPrime(i))
					cout << i << " ";
			}
			cout << endl;
			break;
		}
		case 7:
		{
			int n;
			cout << "Nhap n: ";
			cin >> n;
			if (soChinhPhuong(n))
				cout << n << " la so chinh phuong" << endl;
			else
				cout << n << " khong phai la so chinh phuong" << endl;
			break;
		}
		case 8:
		{
			int n;
			cout << "Nhap n: ";
			cin >> n;
			int c = 1;
			int i = 1;
			while (c <= n) {
				if (soChinhPhuong(i)) {
					cout << i << " ";
					c++;
				}
				i++;
			}
			cout << endl;
			break;
		}
		case 9:
		{
			int n;
			cout << "Nhap n: ";
			cin >> n;
			if (soHoanThien(n))
				cout << n << " la so hoan thien" << endl;
			else
				cout << n << " khong phai la so hoan thien" << endl;
			break;
		}
		case 10:
		{
			int n;
			cout << "Nhap n: ";
			cin >> n;
			int c = 0;
			int t = n;
			while (t--) {
				if (soHoanThien(t)) {
					cout << t << " ";
					c++;
				}
			}
			cout << endl;
			cout << "Co " << c << " so hoan thien nho hon " << n << endl;
			break;
		}
		case 0:
			cout << "Dung chuong trinh" << endl;
			stop = true;
			break;
		default:
			cout << "Khong co lua chon " << choice << endl;
		}
	}
}