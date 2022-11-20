//#include<iostream>
//using namespace std;
//
//int main() {
//	//sum of 2 prime numbers
//	int n;
//	bool is_prime = true, is_prime2 = true, both_prime = false;
//
//	label : cout << "Enter a positive number\t";
//			cin >> n;
//			
//	if (n > 0) {
//		for (int i = 2; i <= n / 2; i++) {
//			is_prime = true;
//			is_prime2 = true;
//
//			for (int j = 2; j < i; j++) {
//				if (i % j == 0) {
//					is_prime = false;
//				}
//			}
//			for (int j = 2; j < n - i; j++) {
//				if ((n - i) % j == 0) {
//					is_prime2 = false;
//				}
//			}
//			if (is_prime == true && is_prime2 == true)
//			{
//				cout << n << " = " << i << " + " << n - i << endl;
//				both_prime = true;
//			}
//		}
//
//		if (both_prime == false) {
//			cout << "\nThe number " << n << " has no sum of 2 prime numbers";
//		}
//		
//
//	}
//	else {
//		cout << "Invalid Input";
//		goto label;
//	}
//
//	return 0;
//}