#include "turtlefractals.h"

void Turtle::opf(const std::string &fname)
{
    file.open(fname);
    write = true;
}

void Turtle::clf()
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

void Turns::iterate(const std::string &fname, const int &n)
{
    //std::cout << "iterate" << std::endl;
    char c = ' ';
    if (norm)
    {
        otmp.open(str1);
    }
    else
    {
        otmp.open(str2);
    }
    otmp << startstr;
    otmp.close();
    for (int i = 0; i < n; i++)
    {
        change();
    }
    t.opf(fname);
    if (norm)
    {
        itmp.open(str1);
    }
    else
    {
        itmp.open(str2);
    }

    while (c != escape)
    {
        //std::cout << "itmp" << std::endl;
        itmp >> c;
        switch (c)
        {
        case 'x':
            t.fw(dt);
            t.rt(angle);
            break;

        default:

            break;
        }
    }

    itmp.close();
    t.clf();
}

void Turns::change()
{
    //std::cout << "change" << std::endl;
    char c = ' ';
    if (norm)
    {
        itmp.open(str1);
        otmp.open(str2);
    }
    else
    {
        itmp.open(str2);
        otmp.open(str1);
    }
    otmp << "x";
    while (c != escape)
    {
        //std::cout << "itmp" << std::endl;
        itmp >> c;
        switch (c)
        {
        case 'x':
            otmp << "x";
            break;

        default:
            otmp << c;
            break;
        }
    }

    norm = norm ? 0 : 1;
    itmp.close();
    otmp.close();
}