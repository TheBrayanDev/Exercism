#include "grade_school.h"

#include <algorithm>

namespace grade_school {

// TODO: add your solution here

school::school()
{
}

void school::add(std::string name, int grade)
{
    this->roster_x[grade].push_back(name);
    std::sort(this->roster_x[grade].begin(), this->roster_x[grade].end());
}

std::vector<std::string> school::grade(int grade) const
{
    const auto found = this->roster_x.find(grade);
    return found == this->roster_x.end() ? std::vector<std::string>{}
                                         : found->second;
}

std::map<int, std::vector<std::string>> school::roster() const
{
    return this->roster_x;
}

} // namespace grade_school
