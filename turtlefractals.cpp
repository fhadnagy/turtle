#include "turtlefractals.h"

void Turtle::opf(const std::string &fname)
{
    file.open(fname);
    write = true;
}

void Turtle::clf(const std::string &fname)
{
    file.close();
    write = false;
}

void Turtle::rt(const int &x)
{
    if (write)
    {
        file << r << " " << x << " ";
    }
    else
    {
        std::cout << "cant wrtie, no file" << std::endl;
    }
}

void Turtle::lt(const int &x)
{
    if (write)
    {
        file << l << " " << x << " ";
    }
    else
    {
        std::cout << "cant wrtie, no file" << std::endl;
    }
}

void Turtle::fw(const int &x)
{
    if (write)
    {
        file << f << " " << x << " ";
    }
    else
    {
        std::cout << "cant wrtie, no file" << std::endl;
    }
}

void Turtle::bw(const int &x)
{
    if (write)
    {
        file << b << " " << x << " ";
    }
    else
    {
        std::cout << "cant wrtie, no file" << std::endl;
    }
}

void Turtle::up()
{
    if (write)
    {
        file << pu << " ";
    }
    else
    {
        std::cout << "cant wrtie, no file" << std::endl;
    }
}

void Turtle::down()
{
    if (write)
    {
        file << pu << " ";
    }
    else
    {
        std::cout << "cant wrtie, no file" << std::endl;
    }
}