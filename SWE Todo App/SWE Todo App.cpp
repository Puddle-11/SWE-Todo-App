
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
            instance->DisplayCheckCard(&newList);

            break;
        case 4:
            newList.ClearMainList();
            break;
        default:
            instance->DisplayError();
            break;

        }
       
        instance->DisplayTodoList(newList);
        newList.SaveList();
    }
}

