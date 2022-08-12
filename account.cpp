#include <iostream>
#include <cmath>
#include <string>
#include "account.h"
using namespace std;




void save::record(int date, double amount) {
	accumulation = accumulate(date);
	lastdate = date;
	amount = floor(amount * 100 + 0.5) / 100;
	balance += amount;
	cout << date << "\t # " << id << "\t£¤" << amount << "\tbalance: " << balance << endl;

}

save::save(int date, int id, double rate) :id(id),
balance(0), rate(rate), lastdate(date), accumulation(0) {
	cout << date << "\t#" << id << "\tis created" << endl;
}
void save::deposit(int date, double amount) {
	record(date, amount);
}
void save::withdraw(int date, double amount) {
	if (amount > getbalance())cout << "not enough money" << endl;
	else record(date, -amount);
}
void save::settle(int date) {
	double interest = accumulate(date) * rate / 365;
	if (interest != 0)record(date, interest);
	accumulation = 0;
}

void save::show() {
	cout << "#" << id << "\tbalance: " << balance << endl;
}