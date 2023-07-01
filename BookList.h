#pragma once
#include <iostream>
#include<string>
using namespace std;
#include"Book.h"
#include"stdlib.h"
class BookList
{
private:
	Book* books;
	int capacity;
	int BookCount;
public:
	BookList();
	BookList(int c);
	~BookList();
	void addBook(const Book&);
	Book* SearchBook(string name);
	Book* SearchBook(int id);
	void deleteBook(int id);
	friend ostream& operator<<(ostream&, const BookList&);
	Book get_the_highest_rated_book();
	void get_box_for_user(const User&);
	Book& operator[](int position);
};

