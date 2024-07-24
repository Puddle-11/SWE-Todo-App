#pragma once
#include <vector>
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
		std::ofstream file("list.txt");

		if (file.is_open())
		{
			for (int index = 0; index < mainList.size(); index++)
			{
				file << mainList[index];
			}

			file.close();
		}
	}

	void LoadList()
	{
		std::ifstream file("list.txt");
		std::string reader = "";

		if (file.is_open())
		{
			while (!file.eof())
			{
				getline(file, reader);

				mainList.push_back("- " + reader);
			}

			file.close();
		}
	}

private:

};

