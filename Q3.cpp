//#include<iostream>
//using namespace std;
//
//int main()
//{	//kite
//	int i, j, n;
//
//	cout << "Enter height of the upper portion of kite\t";
//	cin >> n;
//
//	for (i = 1; i < n; i++) {
//		for (j = n; j >= i; j--) {
//			cout << "  ";
//		}
//		for (j = 1; j < i; j++) {
//			if (j == 1) {
//				cout << "* ";
//			}
//			else {
//				cout << "  ";
//			}
//		}
//		for (j = 1; j <= i; j++) {
//			if (i != 1 && j == 1) {
//				cout << "| ";
//			}
//			else if (i == j) {
//				cout << "* ";
//			}
//			else {
//				cout << "  ";
//			}
//		}
//		cout << endl;
//	}
//
//	for (i = 1; i <= (2 * n) - 1; i++) {
//		for (j = 1; j <= (n*2) - 1; j++) {
//			if (i == j) {
//				cout << "  *";
//			}
//			else {
//				if (j == (n * 2) - 1 && i != (2 * n) - 1) {
//					cout << "|";
//				}
//
//				else {
//					if (i == 1 && j != (2 * n) - 1) {
//						cout << "-";
//					}
//					else {
//						cout << " ";
//					}
//				}
//			}
//		}
//		for (j = (2 * n) - 2; j > i; j--) {
//			if (i == 1) {
//				cout << "-";
//			}
//			else {
//				cout << " ";
//			}
//		}
//		for (j = 1; j <= i; j++) {
//			if (j == 1 && i != (2 * n) - 1) {
//				cout << "* ";
//			}
//			else {
//				cout << " ";
//			}
//		}
//		
//
//
//		cout << endl;
//	}
//	return 0;
//}