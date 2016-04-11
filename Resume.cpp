#include "Resume.h"


Resume::Resume(string n):name(n)
{
	we = new WorkExperience("","");
}

Resume::Resume(WorkExperience* we)
{
	this->we = (WorkExperience*)we->Clone();
}

Resume::~Resume(void)
{
	delete we;
}

void Resume::SetPersonalInfo(string sex,int age,string phone)
{
	this->sex = sex;
	this->age =age;
	this->phoneNumber = phone;
}

void Resume::SetWorkExperience(string time,string com)
{
	we->SetWorkExperience(time,com);
}

void Resume::Display()
{
	cout<<"������"<<name<<endl;
	cout<<"���䣺"<<age<<endl;
	cout<<"�Ա�"<<sex<<endl;
	cout<<"�绰���룺"<<phoneNumber<<endl;
	cout<<"������λ��"<<we->GetCompany()<<endl;
	cout<<"������ֹʱ�䣺"<<we->GetTimeArea()<<endl;
}

Prototype* Resume::Clone()
{
	Resume* obj = new Resume(this->we);
	obj->sex = this->sex;
	obj->age = this->age;
	obj->phoneNumber = this->phoneNumber;
	return obj;
}
