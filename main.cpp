#include <iostream>
#include <cmath>
#include <string>
#include "account.h"
using namespace std;


int main() {
	save sa1(1, 59800431, 0.015);

	sa1.deposit(5, 500);
	sa1.show();
	sa1.deposit(50, 100);


	sa1.show();
	sa1.withdraw(60, 50);
	sa1.show();

}

