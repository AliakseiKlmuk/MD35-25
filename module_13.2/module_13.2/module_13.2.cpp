//Алексей

// Создайте класс Book:

// приватные поля: title, pages

// публичные методы setData() и print()


//-------
// Создайте абстрактный класс Item:
// чисто виртуальный метод print() = 0
// Сделайте класс Book производным от Item.
// В main():
// создайте указатель Item*
// сохраните в него объект Book
// вызовите print() через указатель.

//-----------
// Создайте класс Author (поля: name, year), метод print() (обычный, не виртуальный).
// Доработайте Book:
// внутри Book хранится объект Author (поле author)
// Book::print() выводит информацию о книге и об авторе
// В main():
// создайте Item* на объект Book
// вызовите print() через базовый указатель.

#include <iostream>
#include <string>

#include "Book.h"
#include "Author.h"
#include "Item.h"

int main() {

	Item* itemPtr = new Book("Hobbit", "Tolkin", 2001, 326);

	itemPtr->print();

	delete itemPtr;
}
