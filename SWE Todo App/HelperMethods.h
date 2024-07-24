#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "TodoList.h"


class HelperMethods
{
public:
  
	HelperMethods();
	~HelperMethods();
    void ConsoleClear();
	static HelperMethods* MakeInstance();
	void DisplayUI();
	void DisplayTodoList(TodoList _list);
	int GetUserInput();
	void DisplayError();

private:
	static HelperMethods* instance;
};

