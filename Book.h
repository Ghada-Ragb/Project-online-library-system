#pragma once
#include <iostream>
#include<string>
using namespace std;
#include"User.h"
class Book
{
private:
	string title;
	string isbn;
	int id;
	string category;
	double averageRating;
	int num = 0;
	double sum = 0.0;
	User author;
	//bool hasAuthor;

public:
	static int count;
	Book();
	Book(string t, string i, int ID, string c, double a);
	Book(const Book&);
	void set_title(string t);
	string get_title()const;
	void set_isbn(string i);
	string get_isbn()const;
	void set_id(int ID);
	int get_id()const;
	void set_category(string c);
	string get_category();
	void set_averageRating(double a);
	double get_averageRating();
	void set_author(const User&);
	User get_author()const;
	void ratebook(double r);
	bool operator==(const Book&);
	friend istream& operator >>(istream&, Book&);
	friend ostream& operator <<(ostream&, const Book&);


};

