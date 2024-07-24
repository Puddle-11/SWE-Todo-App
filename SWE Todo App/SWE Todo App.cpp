
#include <iostream>
#include "HelperMethods.h"

HelperMethods* instance;
int main()
{
    instance = HelperMethods::MakeInstance();
    TodoList newList;
    newList.AddCard(TodoList::Card("Test", "", false));
    newList.AddCard(TodoList::Card("Test1", "", true));
    newList.AddCard(TodoList::Card("Test2", "", false));
    newList.AddCard(TodoList::Card("Test3", "", false));

    instance->DisplayUI();
    instance->DisplayTodoList(newList);


}
