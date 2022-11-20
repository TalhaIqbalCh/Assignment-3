//#include<iostream>
//using namespace std;
//
//int main() {
//	//black cross sign
//	int i, j, n, count = 0;
//	char c;
//
//	cout << "Enter number of rows\t";
//	cin >> n;
//	cout << "Enter the character\t";
//	cin >> c;
//
//
//	for (i = 1; i <= n / 2 + 1; i++) {
//		for (j = 1; j <= i; j++) {
//			if (i == j) {
//				cout << " ";
//			}
//			else {
//				cout << c;
//			}
//		}
//		for (j = n; j >= (2 * i); j--) {
//			cout << c;
//		}
//		for (j = 1; j <= i; j++) {
//			if (n % 2 == 0) {
//				if (j == 1 && i != n / 2 + 1) {
//					cout << " ";
//				}
//				else {
//					if (i == n / 2 + 1 && j == n / 2 + 1) {
//						cout << " ";
//					}
//					else {
//						cout << c;
//					}
//				}
//			}
//			else {
//				if (j == 1) {
//					cout << " ";
//				}
//				else {
//					cout << c;
//				}
//			}
//			}
//		cout << endl;
//		}
//
//
//	for (i = n / 2; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			if (i == j) {
//				cout << " ";
//			}
//			else {
//				cout << c;
//			}
//		}
//		for (j = n; j >= (2 * i); j--) {
//			cout << c;
//		}
//		for (j = 1; j <= i; j++) {
//			if (j == 1) {
//				cout << " ";
//			}
//			else {
//				cout << c;
//			}
//		}
//		cout << endl;
//	}
//
//	return 0;
//}