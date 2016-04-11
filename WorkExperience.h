#ifndef WORKEX_H
#define WORKEX_H

#include <string>


using namespace std;

#include "Prototype.h"

class WorkExperience  : public Prototype
{
public:
	WorkExperience(string time,string com);
	~WorkExperience(void);
	WorkExperience(const WorkExperience& we);
public:
	string GetTimeArea();
	string GetCompany();
	void SetWorkExperience(string time,string com);
	virtual Prototype* Clone();
private:
	string timeArea;
	string company;
};

#endif

