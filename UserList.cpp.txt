#include "UserList.h"

UserList::UserList()
{
	capacity = 0;
	UsersCount = 0;
}

UserList::UserList(int c)
{
	capacity = c;
	users = new User[capacity];
	UsersCount = 0;
}

UserList::~UserList()
{
	delete []users;
}

void UserList::addUser(const User& obj)
{
	if (UsersCount < capacity)
	{
		users[UsersCount] = obj;
		users[UsersCount].set_id(UsersCount+1);
		UsersCount++;
	}
	else
	{
		cout << "Range out capacity...\n";
	}
}

User* UserList::SearchUser(string name)
{
	for (int i = 0; i < UsersCount; i++)
	{
		if (users[i].get_name() == name)
		{
			return &users[i];
		}
	}
	return nullptr;
    
}

User* UserList::SearchUser(int id)
{
	for (int i = 0; i < UsersCount; i++)
	{
		if (users[i].get_id() == id)
		{
			return &users[i];
		}
	}
	return nullptr;
}

void UserList::deleteUser(int id)
{
	for (int i = 0; i < UsersCount; i++)
	{
		if (users[i].get_id() == id)
		{
			while (i < UsersCount - 1)
			{
				users[i] = users[i + 1];
				i++;
			}
			UsersCount--;
			capacity--;
			break;
		}
	}
}

ostream& operator<<(ostream& output, const UserList& obj)
{
	for (int i = 0; i < obj.UsersCount; i++)
	{
		output << obj.users[i] << "\n";
	}
	return output; 
}
