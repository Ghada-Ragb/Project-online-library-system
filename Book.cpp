#include "Book.h"
 int Book::count = 0;

 Book::Book()
 {
	 count++;
	 title = "unknown";
	 isbn = "unknown";
	 id = count;
	 category = "unknown";
	 averageRating = 0.0;
	 num = 0;
	 sum = 0.0;
	// User author;
	 //hasAuthor = false;
 }

 Book::Book(string t, string i,int ID, string c, double a)
 {
	 count++;
	 title = t;
	 isbn = i;
	 id = count;
	 category = c;
	 averageRating = a;
	 num = 0;
	 sum = 0.0;
	 //User author;
	 //hasAuthor = false;

 }

 Book::Book(const Book& obj)
 {
	 title = obj.title;
	 isbn = obj.isbn;
	 id = obj.id;
	 category = obj.category;
	 averageRating = obj.averageRating;
	 num = obj.num;
	 sum = obj.sum;
	 author = obj.author;
	 
 }

 void Book::set_title(string t)
 {
	 title = t;
 }

 string Book::get_title() const
 {
	 return title;
 }

 void Book::set_isbn(string i)
 {
	 isbn = i;
 }

 string Book::get_isbn() const
 {
	 return isbn;
 }

 void Book::set_id(int ID)
 {
	 id = ID;
 }

 int Book::get_id() const
 {
	 return id;
 }

 void Book::set_category(string c)
 {
	 category = c;
 }

 string Book::get_category()
 {
	 return category;
 }

 void Book::set_averageRating(double a)
 {
	 averageRating = a;
 }

 double Book::get_averageRating()
 {
	 return averageRating;
 }

 void Book::set_author(const User& s)
 {
	 //hasAuthor = true;
	 //author = new User(s);
	 author = s;
 }

 User Book::get_author() const
 {
	 
	 return author;
 }

 void Book::ratebook(double r)
 {
	//static int num = 0;
	//static double sum = 0.0;
	num++;
	sum += r;
	averageRating = sum / num;
 }

 bool Book::operator==(const Book& bo)
 {
	 if (title == bo.title && isbn == bo.isbn && id == bo.id && category == bo.category && averageRating == bo.averageRating && author == bo.author)
	 {
		 return true;
	 }
	 return false;
 }

 istream& operator>>(istream& input, Book& bo)
 {
	 cout << "*******************************************\n";
	 cout << "Please, the information book....\n";
	 cout << "Title " << "Isbn " << "Category " <<"AverageRating " << "\n";
	 input >> bo.title >> bo.isbn >> bo.category>>bo.averageRating;
	 cout << "********************************************************\n";
	 cout << "\n";
	 return input;

	 
 }

 ostream& operator<<(ostream& output, const Book& obj)
 {
	 cout << "The informations " << obj.id << " book is ....\n";
	 output <<"Title : " << obj.title << "\n";
	 output <<"Isbn : " << obj.isbn << "\n";
	 output <<"ID : " << obj.id << "\n";
	 output << "Category : " << obj.category << "\n";
	 output <<"Average Rating : " << obj.averageRating << "\n";
	 if (obj.author.get_name()!="unknown") 
	 {
		 output << "Auhtor :   \n";
		 output<< (obj.author) << "\n";
	 }
	 cout << "======================================================\n";
	 return output;
 }
