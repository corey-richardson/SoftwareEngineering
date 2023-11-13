#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class ModuleRecord
{
private:

	string moduleName;
	string moduleSubjectArea;
	unsigned int moduleCode;
	unsigned int moduleCredits;
	unsigned int moduleNumSemesters;


	void updateModuleName() {
		moduleName = moduleSubjectArea + to_string(moduleCode);
	}

public:

	ModuleRecord(int code, string subjectArea = "COMP", unsigned int credits = 20, unsigned int numSemesters = 1) {
		moduleSubjectArea = subjectArea;
		moduleCode = code;
		moduleCredits = credits;
		moduleNumSemesters = numSemesters;

		updateModuleName();
	}


	~ModuleRecord() {
		cout << moduleName << " has fallen out of scope and was garbage collected." << endl;
	}


	string moduleSummary() {
		stringstream s;
		s << moduleName << " is worth " << moduleCredits << " credits. \nIt is taken over " << moduleNumSemesters << " semesters." << endl;
		return s.str();
	}


	int totalCredits() {
		return moduleCredits * moduleNumSemesters;
	}
};

