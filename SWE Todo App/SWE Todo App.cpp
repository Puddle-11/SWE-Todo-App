
#include <iostream>
#include "HelperMethods.h"
HelperMethods* instance;
int main()
{
    instance = HelperMethods::MakeInstance();

    instance->DisplayUI();

}
