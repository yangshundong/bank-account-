#ifndef _ACCOUNT_
#define _ACCOUNT_

class save {
private:
	int id;
	double balance;
	double rate;
	int lastdate;
	double accumulation;
	static double total;
	void record(int date, double amount);
	double accumulate(int date)const {
		return accumulation + balance * (date - lastdate);
	}

public:
	save(int date, int id, double rate);
	int getid() const { return id; };
	double getbalance()const { return balance; }
	double getrate()const { return rate; };
	static double gettotal() { return total; }
	void deposit(int date, double amount);
	void withdraw(int date, double amount);
	void settle(int date);
	void show();
};
#endif
