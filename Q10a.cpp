//#include<iostream>
//using namespace std;
//
//int main() {
//	//hollow diamond pattern
//	int i, j, n;
//
//	cout << "Enter number of rows\t";
//	cin >> n;
//
//	for (i = 1; i <= n; i++) {
//		for (j = n; j >= i; j--) {
//			cout << "* ";
//		}
//		for (j = 1; j < i; j++) {
//			cout << "  ";
//		}
//		for (j = 1; j < i; j++) {
//			cout << "  ";
//		}
//		for (j = n; j >= i; j--) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//
//	for (i = n; i >= 1; i--) {
//		for (j = n; j >= i; j--) {
//			cout << "* ";
//		}
//		for (j = 1; j < i; j++) {
//			cout << "  ";
//		}
//		for (j = 1; j < i; j++) {
//			cout << "  ";
//		}
//		for (j = n; j >= i; j--) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}