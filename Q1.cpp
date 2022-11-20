//#include <iostream>
//#include<conio.h>
//#include<random>
//using namespace std;
//
//int main() {
//	//Snakes and ladders
//	srand(time(0));
//	int turn1, turn2, total1 = 0, total2 = 0, dice;
//
//	cout << "Welcome to Snakes And Ladders (obv without them)\n ";
//	
//	do{ 
//		cout << "\nPlayer 1 Turn:\t";
//		_getch();
//		dice = (rand() % 6 + 1);
//		cout << dice;
//		cout << "\nPlayer 1 Total:\t";
//
//		if ((total1 + dice) < 20) {
//			total1 += dice;
//			cout << total1;
//		}
//		else if ((total1 + dice) == 20) {
//			total1 += dice;
//			break;
//		}
//		else {
//			total1 += 0;
//			cout << total1 << " (move not possible)";
//		}
//
//		cout << "\nPlayer 2 Turn:\t";
//		_getch();
//		dice = (rand() % 6 + 1);
//		cout << dice;
//		cout << "\nPlayer 2 Total:\t";
//
//		if ((total2 + dice) < 20) {
//			total2 += dice;
//			cout << total2 << endl;
//		}
//		else if ((total2 + dice) == 20) {
//			total2 += dice;
//			break;
//		}
//		else {
//			total2 += 0;
//			cout << total2 << " (move not possible)" << endl;
//		}
//
//	} while (total1 != 20 || total2 != 20);
//
//
//	if (total1 == 20) {
//		cout << "PLAYER 1 WON!!!!!!!";
//	}
//	else if (total2 == 20) {
//		cout << "PLAYER 2 WON!!!!!!!";
//	}
//
//
//	return 0;
//}