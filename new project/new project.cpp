#include <iostream>
#include <Windows.h>
#include "Book.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Book A = { "Кобзар", "Тарас Шевченко", 1800 };
    A.bookInfo();
    std::cout << std::endl << "Стара назва: "  << A.getName_book();
    A.setName_book("Заповіт");
    std::cout << std::endl << "Нова назва: " << A.getName_book();
    return 0;
    }

