#ifndef TURLTLEFRACTALS_H
#define TURLTLEFRACTALS_H
#include <string>
#include <fstream>
#include <iostream>
class Turtle
{
private:
    std::string r = "tr",
                l = "tl", f = "fw",
                b = "bw", pu = "pu",
                pd = "pd";
    bool write = false;
    std::ofstream file;

public:
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
    void clf();

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

class Pattern
{
protected:
    std::string startstr = "x#";
    const char escape='#';
    std::ofstream otmp;
    std::ifstream itmp;
    Turtle t;
    std::string str1 = "tmpfile1.txt", str2 = "tmpfile2.txt";

public:
    Pattern(std::string _r, std::string _l,
            std::string _f, std::string _b,
            std::string _pu, std::string _pd)
        : t(_r, _l, _f, _b, _pu, _pd)
    {
    }
    void opf(const std::string &fname)
    {
        t.opf(fname);
    }
    void clf()
    {
        t.clf();
    }
    virtual void iterate(const std::string &fname, const int &n) = 0;
    virtual void change() = 0;
};

class Turns : public Pattern
{
private:
    int angle = 78;
    int dt = 10;
    bool norm=true;
public:
    Turns(std::string _r, std::string _l,
          std::string _f, std::string _b,
          std::string _pu, std::string _pd,
          const int &_angle, const int &_dt)
        : Pattern(_r, _l, _f, _b, _pu, _pd)
    {
        angle = _angle;
        dt = _dt;
    }
    void iterate(const std::string &fname, const int &n);
    void change();
};

#endif // !TURLTLEFRACTALS_H