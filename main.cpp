#include "PascalsTriangle.h"
#include <iostream>
#include <list>

int main()
{
    std::cout << "Enter the row of Pascal's Triangle you wish to see: ";
    uint64_t rowNumber;
    std::cin >> rowNumber;

    std::list<uint64_t> row = getPascalsTriangleRow(rowNumber);
    std::cout << "The row " << rowNumber << " of Pascal's Triangle is: ";

    for (const auto &elem : row) std::cout << elem << " ";

    std::cout << std::endl;

    return 0;
}
