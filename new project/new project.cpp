#include <iostream>
#include <Windows.h>
#include "Book.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Book A = { "������", "����� ��������", 1800 };
    A.bookInfo();
    std::cout << std::endl << "����� �����: "  << A.getName_book();
    A.setName_book("������");
    std::cout << std::endl << "���� �����: " << A.getName_book();
    return 0;
    }

