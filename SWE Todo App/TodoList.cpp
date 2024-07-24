#include "TodoList.h"

TodoList::TodoList() {

}
TodoList::~TodoList() {

}

std::vector<std::string> TodoList::GetTodoList() {
	return mainList;
}
void TodoList::SetTodoList(std::vector<std::string> _input) {
	mainList = _input;
}

bool TodoList::SetIndex(std::string _input, int _index) {
	if (!IsValidIndex(_index)) return;

	mainList[_index] = _input;
}
std::string TodoList::GetIndex(int _index) {
	if (!IsValidIndex(_index)) return "";

	return mainList[_index];
}
bool TodoList::IsValidIndex(int _index) {

	if (_index < 0 || _index >= mainList.size()) return false;
	return true;

}
