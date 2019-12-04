#ifndef GRADE_H
#define GRADE_H

#include <string>
#include <map>
using namespace std;

class GradeManager {
	string program;
	map<string, int> scoreMap;
	bool checkInputError();
	void insert();
	void search();
public:
	GradeManager(string name);
	void run();
};

#endif
