﻿#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int column = 1, row = 1;
	while (column<=10) {
		row = 1;
		while (row<=10) {
			int num;
			num = (row == column ? 1 : 0);
				cout << setw(4) << num;
			row++;
		}
		cout << endl;
		column++;	
	}
	return 0;
}