#include <iostream>
#include <fstream>
#include <string>
#include <map>

int main(int argc, char* argv[]) {

    std::ifstream file(argv[1]);
    if (!file) {
        std::cout << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }

    std::string word;
    std::map<std::string, int> word_count;
    int total_word_count = 0;
    while (file >> word) {
        word_count[word]++;
        total_word_count++;
    }

    for (const auto &[word, count] : word_count) {
        std::cout << word << ": " << count << std::endl;
    }
    std::cout << "Total number of words: " << total_word_count << std::endl;

    file.close();

    return 0;
}
