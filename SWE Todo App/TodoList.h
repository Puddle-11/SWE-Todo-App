#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
class TodoList
{
public:
	TodoList();
	~TodoList();
	std::vector<Card> GetTodoList();
	void SetTodoList(std::vector<Card> _input);
	bool SetIndex(Card _input, int _index);
	bool GetIndex(int _index, Card& _output);
	void SaveList();
	void LoadList();
private:

};

