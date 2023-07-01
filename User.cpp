#include "User.h"
int User::count = 0;

User::User()
{
	count++;
	name = "unknown";
	age = 0;
	id = count;
	password = "unknown";
	email = "unknown";
}

User::~User()
{
}

User::User(string n, int a,int i, string p, string e)
{
	name = n;
	age = a;
	password = p;
	email = e;
	count++;
	i = count;
}

User::User(const User& obj)
{
	name = obj.name;
	age = obj.age;
	id = obj.id;
	password = obj.password;
	email = obj.email;
}

bool User::operator==(const User& obj1)
{
	if (name != obj1.name || age != obj1.age ||id!=obj1.id ||password !=obj1.password || email!=obj1.email )
	{
		return false;
	}
	return true;
}

void User::set_name(string n)
{
	name = n;
}

string User::get_name() const
{
	return name;
}

void User::set_age(int a)
{
	age = a;
}

int User::get_age() const
{
	return age;
}

void User::set_id(int i)
{
	id = i;
}

int User::get_id() const
{
	return id;
}

void User::set_password(string p)
{
	password = p;
}

string User::get_password() const
{
	return password;
}

void User::set_email(string e)
{
	email = e;
}

string User::get_email() const
{
	return email;
}

void User::Display()
{
	cout << "=======================================\n";
	cout << "Name : " << name << "\n";
	cout << "Age : " << age << "\n";
	cout << "ID : " << id << "\n";
	cout << "Email : " << email << "\n";
	cout << "=======================================\n";
}

istream& operator>>(istream& input, User& obj)
{
	cout << "****************************************************\n";
	cout << "Please, Enter the information..\n";
	cout << "Name " << "Age " << "Password " << " Email "<<"\n";
	input >> obj.name >> obj.age >> obj.password >> obj.email;
	cout << "\n";
	return input;
}
ostream& operator<<(ostream& output, const User& se)
{
	output << "User " << se.id << "  Information :.............\n";
	output << "Name : " << se.get_name() << "\n";
	output << "Age : " << se.get_age() << "\n";
	output << "ID : " << se.get_id() << "\n";
	output << "Email : " << se.get_email() << "\n";
	cout << "=======================================\n";
	return output;
}
