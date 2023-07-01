#pragma once
#include <iostream>
#include<string>
using namespace std;
#include"User.h"
class UserList
{
private:
	User* users;
	int capacity;
	int UsersCount;
public:
	UserList();
	UserList(int c);
	void addUser(const User&);
	User* SearchUser(string name);
	User* SearchUser(int id);
	void deleteUser(int id);
	friend ostream& operator<<(ostream&, const UserList&);
	~UserList();
};

