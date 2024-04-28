#pragma once
#include <vector>
#include <iostream>
#include <initializer_list>
#include "Book.h"

class Catalog
{
private:
	std::vector<Book> catalog;

public:
	Catalog(): catalog(){}
	Catalog(std::initializer_list<Book> data) : catalog(data) {}
	~Catalog(){}
	void showCatalog();
	void addBook(Book book);
	void deleteBook(const Book &book);
};

