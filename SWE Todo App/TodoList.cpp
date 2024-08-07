#include "TodoList.h"

TodoList::TodoList() {
	LoadList();
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
	if (!IsValidIndex(_index)) return false;

	mainList[_index] = _input;
	return true;

}
bool TodoList::GetIndex(int _index, Card& _output) {
	if (!IsValidIndex(_index)) return false;

	return false;
	_output = mainList[_index];
}

void TodoList::AddCard(Card _input) {
	mainList.push_back(_input);
}
bool TodoList::RemoveCard(int _index) {
	if (_index < 0 || _index >= mainList.size()) return false;

	mainList.erase(mainList.begin() + _index);
	return true;
}
void TodoList::ClearMainList() {
	mainList.clear();
}

bool TodoList::IsValidIndex(int _index) {

	if (_index < 0 || _index >= mainList.size()) return false;
	return true;

}
bool TodoList::CheckCard(int _index) {
	if (_index < 0 || _index >= mainList.size()) return false;

	mainList[_index]._checked = mainList[_index]._checked ? false : true;
		return true;
}

void TodoList::SaveList()
{
	std::ofstream file("list.txt");
	if (file.is_open())
	{
		for (Card index : mainList)
		{
			file << index._name;
			file << '&';
			file << index._description;
			file << '&';
			file << index._checked;
			file << "\n";
		}
		
		file.close();
	}
}

void TodoList::LoadList()
{
	std::ifstream file("list.txt");
	std::string reader = "";

	if (file.is_open())
	{
		while (!file.eof())
		{
			Card newCard;

			getline(file, reader, '&');
			newCard._name = reader;
			getline(file, reader, '&');
			newCard._description;
			getline(file, reader);
			if (reader == "0") { newCard._checked = 0; }
			else { newCard._checked = 1; }

			mainList.push_back(newCard);
		}
		mainList.pop_back();
		file.close();
	}
}

