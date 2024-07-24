
#include <iostream>
#include "HelperMethods.h"

HelperMethods* instance;
int main()
{

        instance = HelperMethods::MakeInstance();
        TodoList newList;
    while (true)
    {
        
        instance->ConsoleClear();
        instance->DisplayUI();
        int res = instance->GetUserInput();
        if (res == -1) {
            instance->DisplayError();
        }
        else {

        }
        instance->DisplayTodoList(newList);
        newList.SaveList();
    }
}

