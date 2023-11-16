/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <algorithm>
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

struct Coins {
    double denomination;
};

void selectionSort(std::vector<Coins>& coins) {
    int n = coins.size();
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (coins[j].denomination < coins[min].denomination) {
                min = j;
            }
        }
        if (min != i) {
            std::swap(coins[i], coins[min]);
        }
    }
}

void displayCoins(const std::vector<Coins>& coins) {
    for (const auto& coin : coins) {
        std::cout  <<coin.denomination << std::endl;
    }
}

void Swap(std::vector<int>& soldiers) {
    int n = soldiers.size();
    for (int i = 0; i < n - 1; i += 2) {
        std::swap(soldiers[i], soldiers[i + 1]);
    }
}

void displaySwap(const std::vector<int>& soldiers) {
    for (int soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << std::endl;
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
    std::vector<Coins> currencies = {
        {100.0},
        {50.0},
        {20.0},
        {10.0}
    };

    std::cout << "Coins before sorting:" << std::endl;
    displayCoins(currencies);

    selectionSort(currencies);

    std::cout << "\nCoins after sorting:" << std::endl;
    displayCoins(currencies);
    std::cout << "Task 3" << std::endl;
    std::vector<int> soldiers = {1, 2, 3, 4, 5, 6, 7, 8};

    std::cout << "Soldiers before rearranging:" << std::endl;
    displaySwap(soldiers);

    Swap(soldiers);

    std::cout << "\nSoldiers after rearranging:" << std::endl;
    displaySwap(soldiers);
    std::cout << "Task 4" << std::endl;
    // call for task 4
    std::cout << "Task 5" << std::endl;
    // call for task 5
    return 0;
}
