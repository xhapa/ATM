#include "dataBase.h"

bool dataBase::verfiUser(Users *obj)
{
	for (int i = 0; i < MyData.size(); i++)
	{
		if ( MyData[i]->getUsername()==obj->getUsername()) {
			return false;
		}
	}
    return true;
}

bool dataBase::verfiUserLog(Users *obj)
{
	for (int i = 0; i < MyData.size(); i++)
	{
		if (MyData[i]->getUsername() == obj->getUsername()) {
			if (MyData[i]->getPassword()==obj->getPassword())
			{
				return true;
			}
		}
	}
	return false;
}

void dataBase::addUser(Users* obj)
{
	MyData.push_back(obj);
}

void dataBase::saveData()
{
	remove("DATAATMB.txt");
	ofstream file;
	file.open("DATAATMB.txt");
	for (int i = 0; i < MyData.size(); i++)
	{
		file << MyData[i]->getUsername()+"\n";
		file << MyData[i]->getPassword()+"\n";
		file << to_string(MyData[i]->getAmount())+"\n";
	}
	file.close();
}

void dataBase::readData()
{
			string userName, password, amount,line;
			ifstream reader;
			reader.open("DATAATMB.txt",ios::in);

			if (reader.is_open())
			{
				while (!reader.eof())
				{
					Users* auxUser = new Users();;
					getline(reader,userName);
					getline(reader, password);
					getline(reader, amount);
					if (amount != ""&& userName!="" && password!="") {
						auxUser->setUsername(userName);
						auxUser->setPassword(password);
						auxUser->addAmount(stod(amount));
						this->addUser(auxUser);
					}
				}
			}
			else
			{
				cout << "¡Error! El archivo no pudo ser abierto." << endl;
			}
			reader.close();
}

int dataBase::getIndex(Users* obj)
{
	for (int i = 0; i < MyData.size(); i++)
	{
		if (MyData[i]->getUsername() == obj->getUsername()) {
			return i;
		}
	}
	return -1;
}

vector<Users*> dataBase::getData()
{
	return this->MyData;
}
