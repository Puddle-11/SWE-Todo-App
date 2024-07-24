#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
class TodoList
{
public:
	TodoList();
	~TodoList();

	std::vector<std::string> mainList;

	void DisplayList()
	{
		for (int index = 0; index < mainList.size(); index++)
		{
			std::cout << "- " << mainList[index] << std::endl;
		}
	}

	void SaveList()
	{
		
	}

private:

};

