#include <iostream>
#include <string>
#include "Users.h"

User::User(string typeParam, string nameParam, string passwordParam)
{
	type = typeParam;
	name = nameParam;
	password = passwordParam;
}

string User::getType() const
{
	return type;
}

string User::getName() const
{
	return name;
}

string User::getPassword() const
{
	return password;
}

User* User::getNext() const
{
	return next;
}

void User::setNext(User* nextParam)
{
	next = nextParam;
}

User* User::getPrevious() const
{
	return previous;
}

void User::setPrevious(User* previousParam)
{
	previous = previousParam;
}

void User::printDetails() const
{
	cout<<"Type: "<<type<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Password: "<<password<<endl;
	cout<<"\n---------------\n"<<endl;
}