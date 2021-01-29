#include "MenuLogIn.h"
#include "dataBase.h"
using namespace ATM;
int main() {
	dataBase* dt = new dataBase();
	dt->readData();
	for (int i = 0; i < dt->getData().size(); i++) {
		cout << dt->getData()[i]->getUsername();
	}
	cout << dt->getData().size();
	Application::EnableVisualStyles();
	Application::Run(gcnew MenuLogIn(dt));
	return 0;
}
