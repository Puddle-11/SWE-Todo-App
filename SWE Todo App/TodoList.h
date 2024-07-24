#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

class TodoList
{
public:

	struct Card {

		Card(std::string _newName = "", std::string _newDesc = "", bool _newChecked = false) {
			_name = _newName;
			_description = _newDesc;
			_checked = _newChecked;
		}

		std::string _name = "";
		std::string _description = "";
		bool _checked = false;
	};
	TodoList();
	~TodoList();
	std::vector<Card> GetTodoList();
	void SetTodoList(std::vector<Card> _input);
	bool SetIndex(Card _input, int _index);
	bool GetIndex(int _index, Card& _output);
	void AddCard(Card _input);
	void ClearMainList();
	void SaveList();
	void LoadList();

private:
	bool IsValidIndex(int _index);
	std::vector < Card> mainList;
};

