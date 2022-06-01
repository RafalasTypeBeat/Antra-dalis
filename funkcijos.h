#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <vector>
#include <fstream>
#include <algorithm>
#include <stdexcept>
#include <numeric>
#include <chrono>
#include <sstream>
#include "mokiniai.h"

using std::string;
using std::cin;
using std::cout;
using std::setw;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::vector;
using hrClock = std::chrono::high_resolution_clock;
using std::istream;
using std::stringstream;

void input(vector<mokinys>& mok, int vieta);
void print(vector<mokinys> mok);
istream& readHw(istream& in, mokinys& temp);
istream& readData(istream& in, mokinys& temp);
void generate(int &FileSkc);
bool gavoSkola(mokinys& mok);
vector<mokinys> sortByGrades(vector<mokinys>& mok);
void readAndSort(int FileSkc);
bool compareName(const mokinys&x , const mokinys& y);
void writeSorted(vector<mokinys> &fail,vector<mokinys> &pass, int FileNr);