#include "c_point.h"
int main() {
	fraction r1,r2,result; // дроби
	const int choice = 200; // основний кейс меню
	const int task_list = 30; 
	r1.set_p(1);
	r1.set_q(2);
	r2.set_p(3);
	r2.set_q(4);
	int menu = choice; // вибір позиції в меню, також використовується як тимчасова змінна
	do {
		switch (menu)
		{
		case 200:
			menu_print();
			do
			{
				cin >> menu;
				if (menu < 0 || menu > task_list)cout << "you nead enter number in menu\n";
			} while (menu < 0 || menu > task_list);
			system("cls");
			break;
		case 1:
			cout << "1 - get\nenter\n1 - r1.p\n2 - r1.q\n3 - r2.p\n4 - r2.q\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 4);
			if (menu == 0)menu = choice;
			else if (menu == 1)cout << "r1.p: " << r1.get_p();
			else if (menu == 2)cout << "r1.q: " << r1.get_q();
			else if (menu == 3)cout << "r2.p: " << r2.get_p();
			else cout << "r2.q: " << r2.get_q();
			menu = choice;
			
			break;
		case 2:
			cout << "2 - set\nenter\n1 - r1.p\n2 - r1.q\n3 - r2.p\n4 - r2.q\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 4);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				cout << "r1.p: ";
				cin >> menu;
				r1.set_p(menu);
				menu = choice;
			}
			else if (menu == 2) {
				cout << "r1.q: ";
				cin >> menu;
				r1.set_q(menu);
				menu = choice;
			}
			else if (menu == 3) {
				cout << "r2.p: ";
				cin >> menu;
				r2.set_p(menu);
				menu = choice;
			}
			else {
				cout << "r2.q: ";
				cin >> menu;
				r2.set_q(menu);
				menu = choice;
			}
			break;
		case 3:
			cout << "3 - consol input\nenter\n1 - r1\n2 - r2\n3 - all\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 3);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				cout << "r1";
				r1.console_input();
				menu = choice;
			}
			else if (menu == 2) {
				cout << "r2";
				r2.console_input();
				menu = choice;
			}
			else {
				cout << "r1";
				r1.console_input();
				cout << "r2";
				r2.console_input();
				menu = choice;
			}
			menu = choice;
			break;
		case 4:
			cout << "4 - consol output\nr1: ";
			r1.console_output();
			cout << "\nr2: ";
			r2.console_output();
			menu = choice;
			break;
		case 5:
			cout << "5 - equals\nr1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			if(r1.equals(r2))cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 6:
			cout << "6 - not equal\nr1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			if (r1.not_equals(r2))cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 7:
			cout << "7 - less\nr1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			if (r1.less(r2))cout << "the fraction r1 is less r2";
			else cout << "the fraction r1 is not less r2";
			menu = choice;
			break;
		case 8:
			cout << "8 - less equal\nr1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			if (r1.less_equal(r2))cout << "the fraction r1 is less r2 or equals";
			else cout << "the fraction r1 is not less r2 and equals";
			menu = choice;
			break;
		case 9:
			cout << "9 - greater\nr1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			if (r1.greater(r2))cout << "the fraction r1 is greater r2";
			else cout << "the fraction r1 is not greater r2";
			menu = choice;
			break;
		case 10:
			cout << "10 - greater equal\nr1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			if (r1.greater_equals(r2))cout << "the fraction r1 is greater r2 or equals";
			else cout << "the fraction r1 is not greater r2 and equals";
			menu = choice;
			break;
		case 11:
			cout << "11 - operator\n1 - plus\n2 - minus\n3 - multiple\n4 - divide\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 4);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				cout << "r1: ";
				r1.output();
				cout << "r2: ";
				r2.output();
				result = r1.plus(r2);
				cout << "\nplus fraction: " << result.get_p() << "/" << result.get_q() << endl;
			}
			else if (menu == 2) {
				cout << "r1: ";
				r1.output();
				cout << "r2: ";
				r2.output();
				result = r1.minus(r2);
				cout << "\nminus fraction: " << result.get_p() << "/" << result.get_q() << endl;
			}
			else if (menu == 3) {
				cout << "r1: ";
				r1.output();
				cout << "r2: ";
				r2.output();
				result = r1.multiple(r2);
				cout << "\nmultiple fraction: " << result.get_p() << "/" << result.get_q() << endl;
			}
			else {
				cout << "r1: ";
				r1.output();
				cout << "r2: ";
				r2.output();
				result = r1.divide(r2);
				cout << "\ndivide fraction: " << result.get_p() << "/" << result.get_q() << endl;
			}
				menu = choice;
			break;
		case 12:
			cout << "12 - pow\n";
			cout << "r1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			cout << "enter number pow: ";
			cin >> menu;
			result = r1.pow(menu);
			cout << "\npow fraction r1: " << result.get_p() << "/" << result.get_q() << endl;
			result = r2.pow(menu);
			cout << "\npow fraction r2: " << result.get_p() << "/" << result.get_q() << endl;
			menu = choice;
			break;
		case 13:
			cout << "13 - negate\n";
			cout << "r1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			result = r1.negate();
			cout << "\nnegate fraction r1: " << result.get_p() << "/" << result.get_q() << endl;
			result = r2.negate();
			cout << "\nnegate fraction r2: " << result.get_p() << "/" << result.get_q() << endl;
			menu = choice;
			break;
		case 14:
			cout << "14 - simplification\n";
			cout << "r1: ";
			r1.output();
			cout << "r2: ";
			r2.output();
			r1 = r1.simplification();
			cout << "\nsimplification fraction r1: " << r1.get_p() << "/" << r1.get_q() << endl;
			r2 = r2.simplification();
			cout << "\nsimplification fraction r2: " << r2.get_p() << "/" << r2.get_q() << endl;
			menu = choice;
			break;
		case 15:
			cout << "15 - prefix ++\n";
			r1.output_all(r2);
			cout << "\n1 - ++r1\n2 - ++r2\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 2);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				++r1;
				cout << "result\n";
				r1.output_all(r2);
			}
			else  {
				++r2;
				cout << "result\n";
				r1.output_all(r2);
				}
			menu = choice;
			break;
		case 16:
			cout << "16 - postfix ++\n";
			r1.output_all(r2);
			cout << "\n1 - r1++\n2 - r2++\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 2);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				r1++;
				cout << "result\n";
				r1.output_all(r2);
			}
			else {
				r2++;
				cout << "result\n";
				r1.output_all(r2);
			}
			menu = choice;
			break;
		case 17:
			cout << "17 - prefix --\n";
			r1.output_all(r2);
			cout << "\n1 - --r1\n2 - --r2\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 2);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				--r1;
				cout << "result\n";
				r1.output_all(r2);
			}
			else {
				--r2;
				cout << "result\n";
				r1.output_all(r2);
			}
			menu = choice;
			break;
		case 18:
			cout << "18 - postfix --\n";
			r1.output_all(r2);
			cout << "\n1 - r1--\n2 - r2--\n0 - exit\n";
			do {
				cin >> menu;
			} while (menu < 0 || menu > 2);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				r1--;
				cout << "result\n";
				r1.output_all(r2);
			}
			else {
				r2--;
				cout << "result\n";
				r1.output_all(r2);
			}
			menu = choice;
			break;
		case 19:
			cout << "19 - operator + (result = r1 + r2)\n";
			r1.output_all(r2);
			result = r1 + r2;
			cout << "result: ";
			result.output();
			menu = choice;
			break;
		case 20:
			cout << "20 - operator - (result = r1 - r2)\n";
			r1.output_all(r2);
			result = r1 - r2;
			cout << "result: ";
			result.output();
			menu = choice;
			break;
		case 21:
			cout << "21 - operator / (result = r1 / r2)\n";
			r1.output_all(r2);
			result = r1 / r2;
			cout << "result: ";
			result.output();
			menu = choice;
			break;
		case 22:
			cout << "22 - operator * (result = r1 * r2)\n";
			r1.output_all(r2);
			result = r1 * r2;
			cout << "result: ";
			result.output();
			menu = choice;
			break;
		case 23:
			cout << "23 - equals bool = r1 == r2\n";
			r1.output_all(r2);
			if (r1 == r2)cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
		case 24:
			cout << "24 - equals bool = r1 != r2\n";
			r1.output_all(r2);
			if (r1 != r2)cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 25:
			cout << "25 - less bool = r1 < r2\n";
			r1.output_all(r2);
			if (r1 < r2)cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 26:
			cout << "26 - less equals bool = r1 <= r2\n";
			r1.output_all(r2);
			if (r1 <= r2)cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 27:
			cout << "27 - greater bool = r1 > r2\n";
			r1.output_all(r2);
			if (r1 != r2)cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 28:
			cout << "28 - greater equals bool = r1 >= r2\n";
			r1.output_all(r2);
			if (r1 >= r2)cout << "the fraction equals is true";
			else cout << "the fraction equals is false";
			menu = choice;
			break;
		case 29:
			cout << "29 - - and +\n";
			cout << "\n1 - +\n2 - -\n0 - exit\n";
			do {
				cin >> menu;
				system("cls");
			} while (menu < 0 || menu > 2);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				cout << "1 - r1\n2 - r2\n0 - exit\n";
		    	r1.output_all(r2);
				do {
					cin >> menu;
				system("cls");
				} while (menu < 0 || menu > 2);
				if (menu == 0)menu = 29;
				else if (menu == 1) {
					+r1;
					cout << "result\n";
					r1.output_all(r2);
				}
				else {
					+r2;
					cout << "result\n";
					r1.output_all(r2);
				}
			}
			else {
				cout << "\n1 - r1\n2 - r2\n0 - exit\n";
				r1.output_all(r2);
				do {
					cin >> menu;
				system("cls");
				} while (menu < 0 || menu > 2);
				if (menu == 0)menu = 29;
				else if (menu == 1) {
					-r1;
					cout << "result\n";
					r1.output_all(r2);
				}
				else {
					-r2;
					cout << "result\n";
					r1.output_all(r2);
				}
			}
			menu = choice;
			break;
		case 30:
			cout << "30 - more...\n";
			do {
				menu_print2();
				r1.output_all(r2);
				cin >> menu;
				system("cls");
			} while (menu < 0 || menu > 7);
			if (menu == 0)menu = choice;
			else if (menu == 1) {
				r1 += r2;
				menu = 30;
			}
			else if (menu == 2) {
				r1 -= r2;
				menu = 30;
			}
			else if (menu == 3) {
				r1 *= r2;
				menu = 30;
			}
			else if (menu == 4) {
				r1 /= r2;
				menu = 30;
			}
			else if (menu == 5) {
				cout << "1 - cout << r1\n2 - cout << r2\n0 - exit\n";
				do {
					cin >> menu;
				} while (menu < 0 || menu > 2);
				if (menu == 0)menu = 30;
				else if (menu == 1)cout << r1;
				else if (menu == 2)cout << r2;	
				menu = 30;
			}
			else if (menu == 6) {
				cout << "1 - cin >> r1\n2 - cin >> r2\n0 - exit\n";
				do {
					cin >> menu;
				} while (menu < 0 || menu > 2);
				if (menu == 0)menu = 30;
				else if (menu == 1)cin >> r1;
				else if (menu == 2)cin >> r2;
				menu = 30;
			}
			else if (menu == 7) {

				cout << "failed to implement\n";  
				//cout << r1["numerator"]; щось я роблю не так
				menu = 30;
			}
			break;
		default:
			break;
		}
	} while (menu);
	return 0;
}