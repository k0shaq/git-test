#include <iostream>
#include <Windows.h>
#include "Book.h"
#include "Catalog.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Book A = { "Кобзар", "Тарас Шевченко", 1800 };
    Book B = { "Кайдашева сім'я", "Іван Нечуй-Левицький", 1950 };
    Book C = { "Філософія", "Жак Фреско", 1250 };
    Catalog catal = { A, B };
    catal.showCatalog();
    std::cout << std::endl << std::endl << "Update" << std::endl << std::endl;
    catal.addBook(C);
    catal.showCatalog();
    std::cout << std::endl << std::endl << "Update" << std::endl << std::endl;
    catal.deleteBook(B);
    catal.showCatalog();
    return 0;
    }

