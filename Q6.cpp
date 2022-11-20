//#include<iostream>
//using namespace std;
//
//int main() {
//	//credit card validity
//	int num, rem1 = 0, rem2 = 0, sum1 = 0, sum2 = 0, actual_sum = 0, last_dig = 0;
//
//	cout << "Enter an 8-digit number\t";
//	cin >> num;
//
//	int count1 = num;
//
//	for (int i = 1; i <= 4; i++) {
//		rem1 = count1 % 10;
//		count1 /= 100;
//		sum1 += rem1;
//	}
//
//	int count2 = num;
//	count2 /= 10;
//
//	for (int i = 1; i <= 4; i++) {
//
//		rem2 = count2 % 10;
//		rem2 *= 2;
//		count2 /= 100;
//
//	int rem3 = rem2 % 10;
//		rem2 /= 10;
//		rem3 += rem2;
//		sum2 += rem3;
//	}
//
//	actual_sum = sum1 + sum2;
//
//	if (actual_sum % 10 == 0) {
//		cout << "\nThe Credit Card Number is Valid";
//	}
//	else {
//		int act_sum_last_dig = 0;
//		act_sum_last_dig = actual_sum % 10;
//
//		int valid_last_digit_1 = (num % 10) + (10 - act_sum_last_dig);
//		int valid_last_digit_2 = (num % 10) - act_sum_last_dig;
//
//		if (valid_last_digit_1 >= 0 && valid_last_digit_1 < 10) {
//			cout << "\nThe Credit Card Number is NOT Valid\nThe value of check digit should be " << valid_last_digit_1 << " to make it valid";
//		}
//		if (valid_last_digit_2 >= 0 && valid_last_digit_2 < 10) {
//			cout << "\nThe Credit Card Number is NOT Valid\nThe value of check digit should be " << valid_last_digit_2 << " to make it valid";
//		}
//
//		cout << "";
//	}
//	
//
//	return 0;
//}