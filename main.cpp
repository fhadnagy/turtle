#include "turtlefractals.h"

std::string one = "-";

std::string doublereverse(const std::string &str);

int main(int argc, char const *argv[])
{
    std::cout << "start" << std::endl;
    Turtle t;
    // Turns trn("tr", "tl", "fw", "bw", "pu", "pd", 78, 50);
    // trn.iterate("trns.txt", 40);
    for (int i = 0; i < 20; i++)
    {
        one = one + '-' + doublereverse(one);
    }
    t.opf("dragon.txt");
    for (int i = 0; i < one.size() - 1; i++)
    {
        t.fw(4);
        switch (one[i])
        {
        case '-':
            t.lt(90);
            break;
        case '+':
            t.rt(90);
            break;
        default:
            break;
        }
    }
    t.fw(4);
    t.clf();
    return 0;
}

std::string doublereverse(const std::string &str)
{
    std::string op = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] == '-')
        {
            op += "+";
        }
        else
        {
            op += "-";
        }
    }

    return op;
}