#pragma once
#include <vector>
#include <string>

class Studentas
{
  private:
    std::string name = "";
    std::string surename = "";
    std::vector<double> hw;
    int egzam;
    int size = 0;
    double mediana = 0;
}

struct mokinys
{
    std::string name = "", surename = "";
    std::vector<double> hw;
    int egzam;
    int size = 0;
    double mediana = 0;
};