// ProtoType.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "Resume.h"

int main(int argc, char* argv[])
{
	Resume* a = new Resume("�Ծ�");
	a->SetPersonalInfo("Ů",31,"15091182250");
	a->SetWorkExperience("2011.10-2012.3","XX��˾");

	Resume* b = (Resume*)a->Clone();
	b->SetWorkExperience("2012.3-2013.10","XX��˾");

	Resume* c = (Resume*)a->Clone();
	c->SetWorkExperience("2013.10-2016.4","XX��˾");

	a->Display();
	b->Display();
	c->Display();

	cin.ignore();

	return 0;
}

