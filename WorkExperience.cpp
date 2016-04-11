#include "WorkExperience.h"


WorkExperience::WorkExperience(string time,string com):timeArea(time),company(com)
{
}


WorkExperience::~WorkExperience(void)
{
}

WorkExperience::WorkExperience(const WorkExperience& we)
{
	this->timeArea = we.timeArea;
	this->company = we.company;
}

string WorkExperience::GetTimeArea()
{
	return timeArea;
}

string WorkExperience::GetCompany()
{
	return company;
}

void WorkExperience::SetWorkExperience(string time,string com)
{
	this->timeArea = time;
	this->company = com;
}

Prototype* WorkExperience::Clone()
{
	return new WorkExperience(*this);
}