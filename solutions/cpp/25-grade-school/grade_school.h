#pragma once
#include <map>
#include <string>
#include <vector>

namespace grade_school {

class school {
public:
    school();
    void add(std::string name, int grade);
    std::vector<std::string> grade(int grade) const;
    std::map<int, std::vector<std::string>> roster() const;

private:
    std::map<int, std::vector<std::string>> roster_x;
};

}  // namespace grade_school
