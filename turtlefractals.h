#ifndef TURLTLEFRACTALS_H
#define TURLTLEFRACTALS_H
#include <string>
#include <fstream>
#include <iostream>
class Turtle
{
public:
    std::string r = "tr",
                l = "tl", f = "fw",
                b = "bw", pu = "pu",
                pd = "pd";
    bool write = false;
    std::ofstream file;
    Turtle(){};
    Turtle(std::string _r, std::string _l, std::string _f, std::string _b, std::string _pu, std::string _pd)
    {
        r = _r;
        l = _l;
        f = _f;
        b = _b;
        pu = _pu;
        pd = _pd;
    }
    /**
     * @brief
     * opens -fname- file for logging turtle moves
     * @param fname
     * name of the file with txt extension
     */
    void opf(const std::string &fname);
    /**
     * @brief
     * closes -fname- file for logging turtle moves
     * @param fname
     * name of the file with txt extension
     */
    void clf(const std::string &fname);

    /// turn x degrees right
    void rt(const int &x);
    /// turn x degrees right
    void lt(const int &x);

    /// moves x tiles foward
    void fw(const int &x);
    /// moves x tiles backward
    void bw(const int &x);

    /// pen up
    void up();
    /// pen down
    void down();
};

#endif // !TURLTLEFRACTALS_H