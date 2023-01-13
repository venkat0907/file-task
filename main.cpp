#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {


    std::ifstream file(argv[1]);
    if (!file) {
        std::cout << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }

    int total_word_count = 0;
    std::string line;
    while (std::getline(file, line)) {
        int word_count = 0;
        std::stringstream ssin(line);
        std::string word;
        while (ssin >> word) {
            word_count++;
        }
        std::cout << "Line has " << word_count << " words." << std::endl;
        total_word_count += word_count;
    }
    std::cout << "Total number of words: " << total_word_count << std::endl;

   
    file.close();

    return 0;
}
