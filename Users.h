#ifndef USERS_H
#define USERS_H
#include <string.h>
#include <iostream>
using namespace std;
class Users
{
private:
	string username;
	string password;
	double amount;
public:
	Users() : amount(0.00){}
	~Users(){}
	void setUsername(string _username);
	void setPassword(string _password);
	void addAmount(double _amount);
	void removeAmount(double _amount);
	string const getUsername();
	string const getPassword();
	double const getAmount();
};

#endif 