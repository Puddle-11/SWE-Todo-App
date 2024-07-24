#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>
#include "TodoList.h"
#include <Windows.h>

enum ConsoleColor
{
	Black = 0,
	DarkBlue = FOREGROUND_BLUE,
	DarkGreen = FOREGROUND_GREEN,
	DarkCyan = FOREGROUND_GREEN | FOREGROUND_BLUE,
	DarkRed = FOREGROUND_RED,
	DarkMagenta = FOREGROUND_RED | FOREGROUND_BLUE,
	DarkYellow = FOREGROUND_RED | FOREGROUND_GREEN,
	Gray = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	DarkGray = FOREGROUND_INTENSITY,
	Blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Green = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	Cyan = FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Red = FOREGROUND_RED | FOREGROUND_INTENSITY,
	Magenta = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
	Yellow = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
	White = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY,
};


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

