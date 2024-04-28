#pragma once
#include <string>
#include <iostream>

class Book
{
private:
	std::string nameBook;
	std::string authorBook;
	int yearOfCreate;
public:
	Book()
	{
		nameBook = "unknown";
		authorBook = "unknown";
		yearOfCreate = -1;
	}
	Book(std::string name, std::string author, int year) {
		nameBook = name;
		authorBook = author;
		yearOfCreate = year;
	}
	~Book(){}

	void bookInfo();
	void setName_book(std::string name);
	void setAuthor_book(std::string author);
	void setYear_book(int year);
	std::string getName_book();
	std::string getAuthor_book();
	int getYear_book();
	bool operator==(const Book& other) const;
};

