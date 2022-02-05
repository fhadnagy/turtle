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
    Turtle t;
    t.opf("tekn.txt");
    t.fw(8);
    Turns trn("tr","tl","fw","bw","pu","pd",78,10);
    trn.iterate("trns.txt",2);
    return 0;
}