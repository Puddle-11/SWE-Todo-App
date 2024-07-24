#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>

class TodoList
{
public:

	struct Card {
		std::string _name = "";
		std::string _description = "";
		bool _checked = false;
	};
	TodoList();
	~TodoList();
	std::vector<Card> GetTodoList();
	void SetTodoList(std::vector<Card> _input);
	void SetIndex(Card _input, int _index);
	bool GetIndex(int _index, Card& _output);
	bool AddCard(Card _input);
	void SaveList();
	void LoadList();

private:
	bool IsValidIndex(int _index);
	std::vector < Card> mainList;
};

