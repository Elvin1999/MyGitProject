#pragma once
#include<iostream>
using namespace std;

class Teacher {
	string name;
	string email;
public:
	Teacher()
	{

	}

	string getName()const {
		return name;
	}
	string getEmail()const {
		return email;
	}
};