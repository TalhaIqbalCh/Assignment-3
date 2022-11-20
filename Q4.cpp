//#include<iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	//Babylonian Algorithm
//	double N = 0, A, B = 0, contin = 0;
//
//	while (true) {
//
//		cout << "Enter a Number 'N'\t";
//		cin >> N;
//		cout << "\nEnter Your Guess 'A'\t";
//		cin >> A;
//
//		if (A > 0 && N > 0) {
//			for (int i = 1; i <= 10; i++) {
//				B = (A + N / A) / 2;
//
//				cout << "The next better approximation is (" << A << "+" << N << "/" << A << ") /2 = " << setprecision(7) << B << endl;
//				A = B;
//			}
//		}
//		else {
//			cout << "Invalid Input\n";
//		}
//
//		cout << "\nContinue? (-1 to exit)\t";
//		cin >> contin;
//
//		if (contin == -1) {
//			break;
//		}
//	}
//
//
//	return 0;
//}