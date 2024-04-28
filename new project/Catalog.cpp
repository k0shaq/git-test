#include "Catalog.h"
#include <algorithm>

void Catalog::showCatalog() {
	for (auto& book : catalog) {
		book.bookInfo();
		std::cout << std::endl;
	}
}
void Catalog::addBook(Book book) {
	catalog.push_back(book);
}

void Catalog::deleteBook(const Book &book) {
	catalog.erase(std::remove(catalog.begin(), catalog.end(), book), catalog.end());
}