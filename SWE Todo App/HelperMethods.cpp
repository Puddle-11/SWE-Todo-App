#include "HelperMethods.h"

void HelperMethods::ConsoleClear()
{


	std::system("cls");
}
void HelperMethods::DisplayError() {
	ConsoleClear();
	std::cout << "ERROR: Invalid input.\n";

	std::system("pause");
}

int HelperMethods::GetUserInput() {
	std::string userinput;
	std::cin >> userinput;
	if (std::isdigit(userinput[0])) {
		int filter = std::stoi(std::to_string(userinput[0]));
		if (filter <= 6 && filter > 0) return filter;
	}
		return -1;
}

void HelperMethods::DisplayUI() {
	std::cout << std::endl
		<< "=================================================" << "\n"
		<< "                    Todo List" << "\n"
		<< "=================================================" << "\n"
		<< "Press 1: To Add to the list\n"
		<< "Press 2: To Remove from the list\n"
		<< "Press 3: To Check or Uncheck an item\n"
		<< "Press 4: To Save the list (Saved lists can be found in the project folder under the name 'list.txt')\n"
		<< "Press 5: To Import a list\n"
		<< "Press 6: To Clear the list\n"
		<< "-------------------------------------------------" << "\n\n";
}
 HelperMethods* HelperMethods::MakeInstance() {
	if (instance == nullptr) {
		instance = new HelperMethods();
	}
	return instance;
}
 void HelperMethods::DisplayTodoList(TodoList _list) {
	 std::cout << std::endl;
	 std::vector<TodoList::Card> _mainList = _list.GetTodoList();
	 for (size_t i = 0; i < _mainList.size(); i++)
	 {
		 std::cout << i+1 << " | " << _mainList[i]._name + "\t" <<" | " << (_mainList[i]._checked == true ? "O" : "X") << std::endl;
	 }

 }

HelperMethods* HelperMethods::instance = nullptr;
HelperMethods::HelperMethods() {

}
HelperMethods::~HelperMethods() {

}

