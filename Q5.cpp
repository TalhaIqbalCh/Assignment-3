//#include <iostream>
//using namespace std;
//
//int main() {
//	//Permutation, combination and factorial
//	int choice, nPr = 0, nCr_1 = 0, nCr_2 = 0;
//	int n, num, r;
//	long series = 1, series_n = 1, series_nr = 1, series_r = 1;
//
//	while(true){
//
//	do {
//		cout << "On '1' print factorial of a number\n";
//		cout << "On '2' print print nPr\n";
//		cout << "On '3' print nCr\n";
//		cout << "On '4' print nCr in another way\n";
//		cout << "On '5' Exit Program\n";
//
//		cout << "\nEnter Your choice\t";
//		cin >> choice;
//
//	} while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5);
//
//	switch (choice) {
//
//	case 1:
//
//		cout << "Enter a number\t";
//		cin >> num;
//
//		if (num >= 0) {
//
//			for (int i = num; i >= 1; i--) {
//				series *= i;
//			}
//			cout << "Factorial of " << num << " is " << series << "\n\n";
//		}
//
//		break;
//
//
//	case 2:
//
//		cout << "Enter value of n\t";
//		cin >> n;
//		cout << "Enter value of r\t";
//		cin >> r;
//
//		if (n > 0 && r > 0) {
//			for (int i = n; i >= 1; i--) {
//				series_n *= i;
//			}
//			for (int i = n - r; i >= 1; i--) {
//				series_nr *= i;
//			}
//
//			nPr = series_n / series_nr;
//
//			cout << "The number of Permutations are " << nPr << "\n\n";
//		}
//
//		break;
//
//
//	case 3:
//
//		cout << "Enter value of n\t";
//		cin >> n;
//		cout << "Enter value of r\t";
//		cin >> r;
//
//		for (int i = n; i >= 1; i--) {
//			series_n *= i;
//		}
//		for (int i = n - r; i >= 1; i--) {
//			series_nr *= i;
//		}
//		for (int i = r; i >= 1; i--) {
//			series_r *= i;
//		}
//
//		nCr_1 = series_n / (series_nr * series_r);
//
//		cout << "The number of Combinations are " << nCr_1 << "\n\n";
//
//		break;
//
//
//	case 4:
//
//		cout << "Enter value of n\t";
//		cin >> n;
//		cout << "Enter value of r\t";
//		cin >> r;
//
//		for (int i = n; i >= 1; i--) {
//			series_n *= i;
//		}
//		for (int i = n - r; i >= 1; i--) {
//			series_nr *= i;
//		}
//		for (int i = r; i >= 1; i--) {
//			series_r *= i;
//		}
//
//		nPr = series_n / series_nr;
//		nCr_2 = nPr / series_r;
//
//		cout << "The number of Combinations are " << nCr_2 << "\n\n";
//
//		break;
//
//
//	case 5:
//		break;
//
//	}
//
//	if (choice == 5) {
//		break;
//	}
//
//	}
//
//	return 0;
//}