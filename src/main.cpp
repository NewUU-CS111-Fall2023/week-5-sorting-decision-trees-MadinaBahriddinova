/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"

struct bookName {
    std::string title;
};

void bubbleSort(std::vector<bookName>& books) {
    int n = books.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (books[j].title > books[j + 1].title) {
                std::swap(books[j], books[j + 1]);
            }
        }
    }
}

void displayBookNames(const std::vector<bookName>& books) {
    for (const auto& book : books) {
        std::cout << "Title: " << book.title << std::endl;
    }
}

int main() {
    std::cout << "Task 1" << std::endl;
    std::vector<bookName> books = {
        {"Dreams"},
        {"The fault in our stars"},
        {"1984"},
        {"Brave New World"}
    };

    std::cout << "Name of the books: " << std::endl;
    displayBookNames(books);
    std::cout<<std::endl;

    bubbleSort(books);

    std::cout << "Books after sorting:" << std::endl;
    displayBookNames(books);
    std::cout << "Task 2" << std::endl;
    // call for task 2
    std::cout << "Task 3" << std::endl;
    // call for task 3
    std::cout << "Task 4" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
