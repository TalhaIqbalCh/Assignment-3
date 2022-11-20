//#include <iostream>
//using namespace std;
//
//int main() {
//	//Collatz Conjecture
//	int num, steps = 0, temp, count = 2, largest_step = 0, largest_count = 0;
//
//	cout << "Enter a number\t";
//	cin >> num;
//
//	temp = num;
//	while (count <= num) {
//		temp = count;
//		steps = 0;
//
//		while (temp != 1) {
//			if (temp % 2 != 0) {
//				temp = (3 * temp) + 1;
//				steps++;
//			}
//			else {
//				temp /= 2;
//				steps++;
//			}
//		}
//
//		if (steps > largest_step) {
//			largest_step = steps;
//			largest_count = count;
//		}
//		count++;
//	}
//	cout << "Collatz sequence for n = " << largest_count << " is largest containing " << largest_step << " steps and is longest for n <= " << num;
//
//	return 0;
//}