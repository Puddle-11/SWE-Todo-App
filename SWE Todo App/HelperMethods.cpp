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
void HelperMethods::DisplayAddCard(TodoList* _list) {
	ConsoleClear();

	std::cout << "Enter the name of your Card\n"
		<< "--------------------------\n\n";
	std::string cardName;
	std::cin >> cardName;
	_list->AddCard(TodoList::Card(cardName));
}
void HelperMethods::DisplayCheckCard(TodoList* _list) {
	ConsoleClear();

	std::cout << "Enter the Index of the card to check or uncheck\n"
		<< "--------------------------\n\n";
	int index = DisplayIndexSelection(_list->GetTodoList());
	if (!_list->CheckCard(index - 1)) {
		DisplayError();
	}



}
void HelperMethods::DisplayRemoveCard(TodoList* _list) {
	ConsoleClear();

	std::cout << "Enter the Index of the card to remove\n"
		<< "--------------------------\n\n";
	int index = DisplayIndexSelection(_list->GetTodoList());
	if (!_list->RemoveCard(index - 1)) {
		DisplayError();
	}

}

int HelperMethods::DisplayIndexSelection(std::vector<TodoList::Card> _inputVec) {
	ConsoleClear();

	std::cout << "Please select an index\n"
		<< "--------------------------\n\n";
	DisplayTodoList(_inputVec);
	std::cout << "\n";
	return HelperMethods::GetUserInput();
}

int HelperMethods::GetUserInput() {
	std::string userinput;
	std::cin >> userinput;
	if (std::isdigit(userinput[0])) {

	std::string temp(1,userinput[0]);
		int filter = std::stoi(temp);
		if (filter <= 5 && filter > 0) return filter;
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
		<< "Press 4: To Clear the list\n"
		<< "-------------------------------------------------" << "\n\n";
}
 HelperMethods* HelperMethods::MakeInstance() {
	if (instance == nullptr) {
		instance = new HelperMethods();
	}
	return instance;
}
 void HelperMethods::DisplayTodoList(TodoList _list) {
	 std::vector<TodoList::Card> _mainList = _list.GetTodoList();
	 DisplayTodoList(_mainList);

 }
 void HelperMethods::DisplayTodoList(std::vector<TodoList::Card> _list) {
	 std::cout << std::endl;
	 for (size_t i = 0; i < _list.size(); i++)
	 {
		 std::cout << i + 1 << " | " << _list[i]._name + "\t" << " | " << (_list[i]._checked == true ? "O" : "X") << std::endl;
	 }

 }
HelperMethods* HelperMethods::instance = nullptr;
HelperMethods::HelperMethods() {

}
HelperMethods::~HelperMethods() {

}

