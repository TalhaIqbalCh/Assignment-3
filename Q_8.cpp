//#include <iostream>
//#include <random>
//using namespace std;
//
//int main() {
//	//Marbles Game
//	int marbles, first_turn, comp_playstyle, comp_stupid_turn, player_turn, comp_smart_turn;
//	bool comp_first_turn = false, comp_stupid = false, comp_smart = false, comp_win = false, player_win = false;
//	srand(time(0));
//
//	marbles = 10 + (rand() % (100 - 10 + 1));
//	first_turn = 0 + (rand() % (1 - 0 + 1));
//	comp_playstyle = 0 + (rand() % (1 - 0 + 1));
//
//	cout << "@@@@@@@@@@@@Welcome To The Marbles Game@@@@@@@@@@@@\n";
//	cout << "The Size of Pile of Marbles = " << marbles;
//
//	if (first_turn == 0) {
//		comp_first_turn = true;
//	}
//	if (comp_playstyle == 0) {
//		comp_stupid = true;
//	}
//	else {
//		comp_smart = true;
//	}
//	while (marbles > 0) {
//
//		if (comp_first_turn == true) {
//			if (comp_stupid == true) {
//				comp_stupid_turn = (rand() % ((marbles/2) - 1 + 1)) + 1;
//
//				cout << "\nComputer's Turn : " << comp_stupid_turn;
//				if ((marbles - comp_stupid_turn) == 1) {
//					comp_win = true;
//				}
//				if (comp_win == true) {
//					marbles -= comp_stupid_turn;
//					cout << "\nMarbles Left : " << marbles;
//					break;
//				}
//				marbles -= comp_stupid_turn;
//				cout << "\nMarbles Left : " << marbles;
//
//				label1 :  cout << "\nYour Turn : ";
//						  cin >> player_turn;
//
//				if (player_turn > (marbles / 2) || player_turn < 1) {
//					cout << "\nInvalid Input";
//					goto label1;
//				}
//				else {
//
//					if ((marbles - player_turn) == 1) {
//						player_win = true;
//					}
//					if (player_win == true) {
//						marbles -= player_turn;
//						cout << "\nMarbles Left : " << marbles;
//						break;
//					}
//					marbles -= player_turn;
//					cout << "\nMarbles Left : " << marbles;
//				}
//			}
//			else {
//				if (comp_smart == true) {
//					int power = (rand() % (6 - 2 + 1)) + 2;
//					if (marbles == 3 || marbles == 7 || marbles == 15 || marbles == 31 || marbles == 63) {
//						comp_smart_turn = (rand() % (6 - 1 + 1)) + 1;
//					}
//					else {
//						int smart_move = (int)log2(marbles);
//						comp_smart_turn = marbles - (pow(2, smart_move) - 1);
//					}
//					cout << "\nComputer's Turn : " << comp_smart_turn;
//					if ((marbles - comp_smart_turn) == 1) {
//						comp_win = true;
//					}
//					if (comp_win == true) {
//						marbles -= comp_smart_turn;
//						cout << "\nMarbles Left : " << marbles;
//						break;
//					}
//					marbles -= comp_smart_turn;
//					cout << "\nMarbles Left : " << marbles;
//
//				label2:  cout << "\nYour Turn : ";
//						 cin >> player_turn;
//
//					if (player_turn > (marbles / 2) || player_turn < 1) {
//						cout << "\nInvalid Input";
//						goto label2;
//					}
//					else {
//
//						if ((marbles - player_turn) == 1) {
//							player_win = true;
//						}
//						if (player_win == true) {
//							marbles -= player_turn;
//							cout << "\nMarbles Left : " << marbles;
//							break;
//						}
//						marbles -= player_turn;
//						cout << "\nMarbles Left : " << marbles;
//					}
//				}
//			}
//		}
//		else {
//
//		label3:  cout << "\nYour Turn : ";
//			     cin >> player_turn;
//
//			if (player_turn > (marbles / 2) || player_turn < 1) {
//				cout << "\nInvalid Input";
//				goto label3;
//			}
//			else {
//
//				if ((marbles - player_turn) == 1) {
//					player_win = true;
//				}
//				if (player_win == true) {
//					marbles -= player_turn;
//					cout << "\nMarbles Left : " << marbles;
//					break;
//				}
//				marbles -= player_turn;
//				cout << "\nMarbles Left : " << marbles;
//			}
//
//			if (comp_stupid == true) {
//				comp_stupid_turn = (rand() % ((marbles / 2) - 1 + 1)) + 1;
//
//				cout << "\nComputer's Turn : " << comp_stupid_turn;
//				if ((marbles - comp_stupid_turn) == 1) {
//					comp_win = true;
//				}
//				if (comp_win == true) {
//					marbles -= comp_stupid_turn;
//					cout << "\nMarbles Left : " << marbles;
//					break;
//				}
//				marbles -= comp_stupid_turn;
//				cout << "\nMarbles Left : " << marbles;
//
//			}
//			else {
//				if (comp_smart == true) {
//					int power = (rand() % (6 - 2 + 1)) + 2;
//					if (marbles == 3 || marbles == 7 || marbles == 15 || marbles == 31 || marbles == 63) {
//						comp_smart_turn = (rand() % (6 - 1 + 1)) + 1;
//					}
//					else {
//						int smart_move = (int)log2(marbles);
//						comp_smart_turn = marbles - (pow(2, smart_move) - 1);
//					}
//					cout << "\nComputer's Turn : " << comp_smart_turn;
//					if ((marbles - comp_smart_turn) == 1) {
//						comp_win = true;
//					}
//					if (comp_win == true) {
//						marbles -= comp_smart_turn;
//						cout << "\nMarbles Left : " << marbles;
//						break;
//					}
//					marbles -= comp_smart_turn;
//					cout << "\nMarbles Left : " << marbles;
//
//				}
//			}
//		}
//	}
//
//	if (player_win == true) {
//		cout << "\n\nCONGO!!! YOU WON!! EAT A COOKIE\n";
//	}
//	if (comp_win == true) {
//		cout << "\n\nComputer Won ,Maybe Get Gud\n";
//	}
//	return 0;
//}