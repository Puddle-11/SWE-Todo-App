#include "HelperMethods.h"


void HelperMethods::DisplayUI() {
	std::cout << std::endl;

	std::cout << "test";
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
		 std::cout << _mainList[i]._name + "\t" + (_mainList[i]._checked == true? "O" : "X") << std::endl;
	 }

 }

HelperMethods* HelperMethods::instance = nullptr;
HelperMethods::HelperMethods() {

}
HelperMethods::~HelperMethods() {

}

