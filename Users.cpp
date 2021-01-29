#include "Users.h"

void Users::setUsername(string _username)
{
	username = _username;
}

void Users::setPassword(string _password)
{
	password = _password;
}

void Users::addAmount(double _amount)
{
	amount += _amount;
}

void Users::removeAmount(double _amount)
{
	amount -= _amount;
}

string const Users::getUsername()
{
	return username;
}

string const Users::getPassword()
{
	return password;
}

double const Users::getAmount()
{
	return amount;
}
