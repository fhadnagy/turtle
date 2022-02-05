#include "turtlefractals.h"
/*
class Apple
{
private:
    std::string pstr = "";

public:
    Apple(std::string _str) : pstr(_str) {}
    ~Apple() { std::cout << "destruct" << std::endl; }
    void setps(const std::string &st);
    void getps();
};

void Apple::setps(const std::string &st)
{
    pstr = st;
}
void Apple::getps()
{
    std::cout << "\n"
              << pstr << std::endl;
}
*/
int main(int argc, char const *argv[])
{
    std::cout << "start" << std::endl;
    Turns trn("tr","tl","fw","bw","pu","pd",78,50);
    trn.iterate("trns.txt",40);
    return 0;
}