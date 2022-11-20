//#include <iostream>
//#include <cstdlib>
//#include <math.h>
//#define pi 3.141592653589793238
//using namespace std;
//
//int main() {
//	//Buffon Needle Experiment
//	double starting_pos, angle_x, ylow, yhigh, hits = 0, tries = 0;
//	double degree_to_rad = 0;
//	srand(time(0));
//
//	starting_pos = rand();
//
//	for (int i = 1; i <= 500; i++) {
//		angle_x = 1 + (rand() % (180 - 1 + 1));
//		degree_to_rad = pi / 180 * angle_x;
//		ylow = 0 + (rand() % (2 - 0 + 1));
//		yhigh = ylow + sin(degree_to_rad);
//		tries++;
//
//		if (yhigh >= 2) {
//			hits++;
//		}
//	}
//	if (hits == 0) {
//		cout << "\nQuotient is not possible as hits are 0\n";
//	}
//
//	cout << "Tries = " << tries << endl;
//	cout << "Hits = " << hits << endl;
//	cout << "Quotient = " << tries / hits << endl;
//
//	return 0;
//}