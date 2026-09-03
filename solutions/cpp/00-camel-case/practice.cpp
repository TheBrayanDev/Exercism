#include <string>
#include <iostream>
#include <vector>

std::vector<std::string> to_camel_case(std::string phrase, const std::string& delimiters){
    std::vector<std::string> result{};

    size_t start = phrase.find_first_not_of(delimiters, 0); // returns an index of the first character that is not a delimiter

    int count = 0;
    while (start != std::string::npos){
        size_t end = phrase.find_first_of(delimiters, start);

        if (count > 0){
            phrase[start] = std::toupper(phrase[start]);
        }
        
        result.push_back(phrase.substr(start, end - start));

        start = phrase.find_first_not_of(delimiters, end);
        count++;
    }
    return result;
}

int main() {
    std::string delims = "-_ ";
    auto result = to_camel_case("ye old-_-sea  faring_buccaneer_-_with a - peg__leg----and a_parrot_ _named- _squawk", delims);

    for (auto& c: result){
        std::cout << c;
    }
    std::cout << std::endl;
}