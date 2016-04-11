// ProtoType.cpp : 定义控制台应用程序的入口点。
//
#include "Resume.h"

int main(int argc, char* argv[])
{
	Resume* a = new Resume("赵娟");
	a->SetPersonalInfo("女",31,"15091182250");
	a->SetWorkExperience("2011.10-2012.3","XX公司");

	Resume* b = (Resume*)a->Clone();
	b->SetWorkExperience("2012.3-2013.10","XX公司");

	Resume* c = (Resume*)a->Clone();
	c->SetWorkExperience("2013.10-2016.4","XX公司");

	a->Display();
	b->Display();
	c->Display();

	cin.ignore();

	return 0;
}

