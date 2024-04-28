#include "Book.h"

void Book::bookInfo() {
	std::cout << "���������� ��� �����: " << std::endl;
	std::cout << "����� �����: " << nameBook << std::endl;
	std::cout << "����� �����: " << authorBook << std::endl;
	std::cout << "г� ���������: " << yearOfCreate << std::endl;
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
bool Book::operator==(const Book& other) const {
	if (authorBook == other.authorBook && nameBook == other.nameBook && yearOfCreate == other.yearOfCreate)
	return true;
	else { return false; }
}