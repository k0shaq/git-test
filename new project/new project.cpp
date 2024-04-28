#include <iostream>
#include <Windows.h>
#include "Book.h"
#include "Catalog.h"


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Book A = { "������", "����� ��������", 1800 };
    Book B = { "��������� ��'�", "���� �����-���������", 1950 };
    Book C = { "Գ�������", "��� ������", 1250 };
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

