#pragma once
#include <vector>
#include <string>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <numeric>
using std::string;
using std::vector;
using std::sort;
using std::cout;
using std::vector;

class zmogus
{
    protected:
    std::string name;
    std::string surename;

    public:

    string getName() const { return name; }
    void setName(string name) { this->name = name; } 

    string getSurename() const { return surename; }
    void setSurename(string surename) { this->surename = surename; }
    virtual void AbstractMemberFunction() = 0;
};




class mokinys : public zmogus
{
  private:
    double mediana;
    std::vector<double> hw;
    int size;
    int egzam;
    
  public:
    mokinys() //default konstruktorius
    {
      egzam = 0;
      mediana = 0;
    }

    int getEgzam() const { return egzam; }
    void setEgzam(int egzam) { this->egzam = egzam; }

    int getHw(int i) const { return hw[i]; }
    std::vector<double> getHwAll() const { return hw; }
    int getSize() const { return size; }
    void setHw(int pazymys) { hw.push_back(pazymys); }
    void setSize(int size) { this->size = size; }
    void removeHw() { hw.pop_back(); }

    void setMediana(double mediana) { this->mediana = mediana; }
    double getMediana() const { return mediana; }
    void IsvalykPazymius();

    // ~mokinys(){}; // destruktorius
    // mokinys(const mokinys& fromMok); // copy konstruktorius
    // mokinys& operator=(const mokinys& fromMok); // assign operatorius
    static double medianaFunk(vector<double> hw);
    static double galutinis(double egz, const vector<double>& hw, double (*kriterijus)(vector<double>) = medianaFunk);
    static double galutinis(double egz, double hw);
    static double vidurkis(vector<double> hw);
    virtual void AbstractMemberFunction() {};
};




// struct mokinys
// {
//     std::string name = "", surename = "";
//     std::vector<double> hw;
//     int egzam;
//     int size = 0;
//     double mediana = 0;
// };