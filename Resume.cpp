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
	cout<<"姓名："<<name<<endl;
	cout<<"年龄："<<age<<endl;
	cout<<"性别："<<sex<<endl;
	cout<<"电话号码："<<phoneNumber<<endl;
	cout<<"工作单位："<<we->GetCompany()<<endl;
	cout<<"工作起止时间："<<we->GetTimeArea()<<endl;
}

Prototype* Resume::Clone()
{
	Resume* obj = new Resume(this->we);
	obj->sex = this->sex;
	obj->age = this->age;
	obj->phoneNumber = this->phoneNumber;
	return obj;
}
