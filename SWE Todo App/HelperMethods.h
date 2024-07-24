#pragma once
#include <iostream>
#include <vector>
#include "TodoList.h"
class HelperMethods
{
public:
	HelperMethods();
	~HelperMethods();
	static HelperMethods* MakeInstance();
	void DisplayUI();
	void DisplayTodoList(TodoList _list);

private:
	static HelperMethods* instance;
};

