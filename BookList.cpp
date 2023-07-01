#include "BookList.h"

BookList::BookList()
{
	capacity = 0;
	BookCount = 0;
}

BookList::BookList(int c)
{
		capacity = c;
		books = new Book[capacity];
		BookCount = 0;
	
}

BookList::~BookList()
{
	delete[]books;
}

void BookList::addBook(const Book& obj)
{
	if (BookCount < capacity)
	{
		books[BookCount] = obj;
		books[BookCount].set_id(BookCount + 1);
		BookCount++;
	}
	else
	{
		cout << "Range out capacity...\n";
	}

}

Book* BookList::SearchBook(string name)
{
	for (int i = 0; i < BookCount; i++)
	{
		if (books[i].get_title() == name)
		{
			return &books[i];
		}
	}
	return nullptr;
}

Book* BookList::SearchBook(int id)
{
	for (int i = 0; i < BookCount; i++)
	{
		if (books[i].get_id() == id)
		{
			return &books[i];
		}
	}
	return nullptr;
}

void BookList::deleteBook(int id)
{
	for (int i = 0; i < BookCount; i++)
	{
		while (i < BookCount-1)
		{
			books[i] = books[i + 1];
			books[i].set_id(i + 1);
			i++;
		}
		capacity--;
		BookCount--;
		break;
	}
}

Book BookList::get_the_highest_rated_book()
{
	double max_rating = -1;
	int index = 0;
	for (int i = 0; i < BookCount; i++)
	{
		if (books[i].get_averageRating() > max_rating)
		{
			max_rating = books[i].get_averageRating();
			index = i;
		}
	}
	return books[index];
}

void BookList::get_box_for_user(const User& obj)
{
	bool found = false;
	for (int i = 0; i < BookCount; i++)
	{
		if (books[i].get_author() == obj)
		{ 
			found = true;
			cout << books[i] << "\n";
		}
	}
	if (!found)
	{
		cout << "The author has not books.....\n";
	}
}

Book& BookList::operator[](int position)
{
	if (position < 0 || position >= BookCount)
	{
		cout << "Error! position...\n";
		exit(1);
	}

}

ostream& operator<<(ostream& output, const BookList& list)
{
	for (int i = 0; i < list.BookCount; i++)
	{
		output << list.books[i] << "\n";
	}
	return output;
}
