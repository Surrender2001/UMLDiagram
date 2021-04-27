#include<iostream>
#include<map>
#include <tuple>
#include <list>
#include<vector>

using namespace std;

struct DataBase
{
	static list<Student> studList;
	static list<Teacher> teacherList;
};





struct Zachetka
{
	map<string,int> marks;
	string tname;
	void Add(string subj, int mark, string teacher)
	{
		marks.emplace(subj, mark);
	}
};


class IUser
{
public:
	void virtual PrintAllMarks(string name) = 0;
};

class Teacher :public IUser
{

public:
	string name;
	string subj;
	Teacher(string name)
	{
		this->name = name;
	}
	void PrintAllMarks(string n) override
	{
	}
	void SetMark(Student s, int m)
	{
		s.zachetka.Add(subj, m, name);
	}
	void PrintStudListWithMarks(string subject)
	{

	}
	void PrintAllStudents()
	{

	}
};

class Admin :public IUser
{
	string name;
public:
	Admin(string name)
	{
		this->name = name;
	}
	void AddTeacher(Teacher t)
	{
		DataBase::teacherList.push_back(t);
	}
	void AddStudent(Student s) 
	{
		DataBase::studList.push_back(s);
	}
	void PrintAllMarks(string n) override
	{

	}
	void PrintAllStudents()
	{

	}
	void PrintStudListWithMarks(string subject)
	{

	}
};

class Student :public IUser
{
public:
	Zachetka zachetka;
	string name;
	Student(string name)
	{
		this->name = name;
	}
	void PrintAllMarks(string n) override
	{


	}




};
















int main()
{

	Admin a1("Иннокентий");
	Student s1("Акакий");
	Teacher t1("Рексар");
	DataBase db;




	return 0;
}
