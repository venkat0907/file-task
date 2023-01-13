#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[])



    std::ifstream file(argv[1]);
    if (!file) {
        std::cout << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }


    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }


    file.close();

    return 0;
}

