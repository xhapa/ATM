#ifndef DATABASE_H
#define DATABASE_H

#include "Users.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
class dataBase
{
private:
	vector<Users*> MyData;
public:
	dataBase(){}
	~dataBase(){}
	bool verfiUser(Users *obj);
	bool verfiUserLog(Users *obj);
	void addUser(Users *obj);
	void saveData();
	void readData();
	int getIndex(Users *obj);
	vector<Users*> getData();
	
};
#endif

