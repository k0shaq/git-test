#include "Book.h"

void Book::bookInfo() {
	std::cout << "Інформація про книгу: " << std::endl;
	std::cout << "Назва книги: " << nameBook << std::endl;
	std::cout << "Автор книги: " << authorBook << std::endl;
	std::cout << "Рік написання: " << yearOfCreate << std::endl;
}
void Book::setName_book(std::string name) {
	nameBook = name;
}
void Book::setAuthor_book(std::string author) {
	authorBook = author;
}
void Book::setYear_book(int year) {
	yearOfCreate = year;
}
std::string Book::getName_book() {
	return nameBook;
}
std::string Book::getAuthor_book() {
	return authorBook;
}
int Book::getYear_book() {
	return yearOfCreate;
}