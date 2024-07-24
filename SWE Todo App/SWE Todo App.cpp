
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
        instance->DisplayTodoList(newList);
        int res = instance->GetUserInput();
        int userIndexSel = 0;
        switch (res)
        {
        case 1:
            instance->DisplayAddCard(&newList);
            break;
        case 2:
            instance->DisplayRemoveCard(&newList);

            break;
        case 3:
            userIndexSel = instance->DisplayIndexSelection(newList.GetTodoList());

            break;
        case 4:
            userIndexSel = instance->DisplayIndexSelection(newList.GetTodoList());

            break;
        case 5:
            break;
        case 6:

            break;
        case -1:
            instance->DisplayError();
            break;

        default:
            break;
        }
       
        instance->DisplayTodoList(newList);
        newList.SaveList();
    }
}

