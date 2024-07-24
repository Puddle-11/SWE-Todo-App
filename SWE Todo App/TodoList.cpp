#include "TodoList.h"

TodoList::TodoList() {

}
TodoList::~TodoList() {

}

std::vector<TodoList::Card> TodoList::GetTodoList() {
	return mainList;
}
void TodoList::SetTodoList(std::vector<Card> _input) {
	mainList = _input;
}

bool TodoList::SetIndex(Card _input, int _index) {
	if (!IsValidIndex(_index)) return;

	mainList[_index] = _input;
}
bool TodoList::GetIndex(int _index, Card& _output) {
	if (!IsValidIndex(_index)) return false;

	return false;
	_output = mainList[_index];
}
bool TodoList::IsValidIndex(int _index) {

	if (_index < 0 || _index >= mainList.size()) return false;
	return true;

}
