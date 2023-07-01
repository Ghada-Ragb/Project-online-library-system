#pragma once
#include <iostream>
#include<string>
using namespace std;
class User
{
private:
    string name;
    int age;
    int id;
    string password;
    string email;
public:
    static int count;
    User();
    ~User();
    User(string n, int a, int i, string p, string e);
    User(const User&);
    bool operator==(const User&);
    void set_name(string n);
    string get_name()const;
    void set_age(int a);
    int get_age()const;
    void set_id(int i);
    int get_id()const;
    void set_password(string p);
    string get_password()const;
    void set_email(string e);
    string get_email()const;
    void Display();
    friend istream& operator >> (istream&, User&);
    friend ostream& operator << (ostream&,const User&);

};


