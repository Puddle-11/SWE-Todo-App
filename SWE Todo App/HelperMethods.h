#pragma once
#include <iostream>
#include <vector>

class HelperMethods
{
public:
	HelperMethods();
	~HelperMethods();
	static HelperMethods* MakeInstance();
	void DisplayUI();

private:
	static HelperMethods* instance;
};

