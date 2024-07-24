#pragma once
#include <vector>
#include <iostream>
class TodoList
{
public:
	TodoList();
	~TodoList();
	std::vector<std::string> GetTodoList();
	void SetTodoList(std::vector<std::string> _input);
	bool SetIndex(std::string _input, int _index);
	std::string GetIndex(int _index);
private:
	bool IsValidIndex(int _index);
	std::vector < std::string> mainList;
};

