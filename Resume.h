#ifndef RESUME_H
#define RESUME_H

#include "prototype.h"
#include "WorkExperience.h"
#include <string>
#include <iostream>

using namespace std;

class Resume : public Prototype
{
public:
	Resume(string n);
	~Resume(void);
public:
	void SetPersonalInfo(string sex,int age,string phone);
	void SetWorkExperience(string time,string com);
	void Display();
	virtual Prototype* Clone();
private:
	Resume(WorkExperience* we);
private:
	string name;
	string sex;
	int age;
	string phoneNumber;
	WorkExperience* we;
};

#endif

