#include "say.h"
#include <stdexcept>

/*
eighty-
n =
987654321123 % 1000 ^ n
*/
namespace say
{
    std::string numbers_in_english(char t)
    {
        switch (t)
        {
        case '1':
            return "one";
        case '2':
            return "two";
        case '3':
            return "three";
        case '4':
            return "four";
        case '5':
            return "five";
        case '6':
            return "six";
        case '7':
            return "seven";
        case '8':
            return "eight";
        case '9':
            return "nine";
        default:
            return "";
        }
    }

    std::string tens_in_english(std::string t)
    {
        if (t == "10")
        {
            return "ten";
        }
        else if (t == "11")
        {
            return "eleven";
        }
        else if (t == "12")
        {
            return "twelve";
        }
        else if (t == "13")
        {
            return "thirteen";
        }
        else if (t == "14")
        {
            return "fourteen";
        }
        else if (t == "15")
        {
            return "fifteen";
        }
        else if (t == "16")
        {
            return "sixteen";
        }
        else if (t == "17")
        {
            return "seventeen";
        }
        else if (t == "18")
        {
            return "eighteen";
        }
        else if (t == "19")
        {
            return "nineteen";
        }

        std::string answer{};
        switch (t[0])
        {
        case '2':
            answer += "twenty";
            break;
        case '3':
            answer += "thirty";
            break;
        case '4':
            answer += "forty";
            break;
        case '5':
            answer += "fifty";
            break;
        case '6':
            answer += "sixty";
            break;
        case '7':
            answer += "seventy";
            break;
        case '8':
            answer += "eighty";
            break;
        case '9':
            answer += "ninety";
            break;
        default:
            return "";
        }

        auto n = t[1];

        n == '0' ? answer += "" : answer += "-" + numbers_in_english(n);
        return answer;
    }

    std::string in_english(long long int x)
    {
        if (x > 999999999999 || x < 0)
        {
            throw std::domain_error("numbers below zero and above than 999,999,999,999 are out of range");
        }

        int digits = std::to_string(x).size();

        std::string number = std::to_string(x);
        
        std::string answer{};

        if (digits % 3 == 2)
        {
            answer += tens_in_english(number.substr(0, 2));
        }
        else if (digits % 3 == 1 && number[0] != '0')
        {
            answer += numbers_in_english(number[0]);
        }
        else
        {
            return "zero";
        }

        return answer;
    }

} // namespace say
