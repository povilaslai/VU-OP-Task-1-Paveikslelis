#include <iostream>
#include <string>

bool isEdge(int i, int rowCount, int j, int columnCount) {
    return i == 0 || i == rowCount - 1 || j == 0 || j == columnCount - 1;
}

bool isMale(std::string name) {
    const int stringLenght(name.length());
    const char lastCharacter(name[stringLenght - 1]);

    return tolower(lastCharacter) == 's';
}

void PrintFrame(std::string name, int marginSize = 0) {
    const std::string greeting(isMale(name) ? "Sveikas" : "Sveika");
    const std::string sentence(greeting + ", " + name + "!");
    if (marginSize == 0) {
        std::cout << sentence << std::endl;
        return;
    }

    const char edge('*');
    const char space(' ');
    const int sentenceLength(sentence.length());
    const int marginSizeDouble(marginSize * 2);
    const int rowCount(marginSizeDouble + 1);
    const int columnCount(sentenceLength + marginSizeDouble);

    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < columnCount; j++) {
            if (i == marginSize && j == marginSize) {
                std::cout << sentence;
                j += sentenceLength - 1;
            } else {
                std::cout << (isEdge(i, rowCount, j, columnCount) ? edge : space);
            }
        }

        std::cout << std::endl;
    }
}

int main() {
    std::string name;
    std::cout << "Please enter your name: ";
    std::cin >> name;

    const int minValue = 0;
    const int maxValue = 10;

    int marginSize;
    std::cout << "Please enter margin size (" << minValue << "-" << maxValue << "): ";
    std::cin >> marginSize;

    if (marginSize < 0 || marginSize > 10) {
        std::cout << "Error: margin size " << marginSize
                  << " is out of range (" << minValue << "-" << maxValue << ")"
                  << std::endl;
        exit(1);
    }

    PrintFrame(name, marginSize);

    return 0;
}