#pragma once
#include "funkcijos.h"
#include <vector>
#include <string>
using std::string;
using std::vector;

class mokinys
{
  private:
    std::string name;
    std::string surename;
    std::vector<double> hw;
    int size;
    int egzam;
    double mediana;
  public:
    mokinys() 
    {
      egzam = 0;
      mediana = 0;
    }

    string getName() const { return name; }
    void setName(string name) { this->name = name; } 

    string getSurename() const { return surename; }
    void setSurename(string surename) { this->surename = surename; }

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
    static double medianaFunk(vector<double> hw);
    static double galutinis(double egz, const vector<double>& hw, double (*kriterijus)(vector<double>) = medianaFunk);
    static double galutinis(double egz, double hw);
    static double vidurkis(vector<double> hw);
};




// struct mokinys
// {
//     std::string name = "", surename = "";
//     std::vector<double> hw;
//     int egzam;
//     int size = 0;
//     double mediana = 0;
// };