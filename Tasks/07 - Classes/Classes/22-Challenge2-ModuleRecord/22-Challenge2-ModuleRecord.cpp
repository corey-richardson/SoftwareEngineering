// 22-Challenge2-ModuleRecord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ModuleRecord.h"
#include <iostream>

int main()
{
    ModuleRecord myDefaultModule = ModuleRecord(1000);
    ModuleRecord myCustomModule = ModuleRecord(1000, "CUST", 10, 2);

    cout << myDefaultModule.moduleSummary();
    cout << myDefaultModule.totalCredits() << endl;

    cout << myCustomModule.moduleSummary();
    cout << myCustomModule.totalCredits() << endl;
}

