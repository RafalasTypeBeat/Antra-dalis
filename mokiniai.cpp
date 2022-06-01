
#include "mokiniai.h"


void mokinys::IsvalykPazymius()
{
    hw.clear();
}


double mokinys::galutinis(double egz, const vector<double>& hw, double (*kriterijus)(vector<double>))
{
    if(hw.size() == 0)
        throw std::domain_error("Negalima skaiciuoti galutinio ivertinimo, nes nera namu darbu ivertinimu! ");
    return galutinis(egz, kriterijus(hw));
}

double mokinys::galutinis(double egz, double hw)
{
    return 0.6 * egz + 0.4 * hw;
}

double mokinys::medianaFunk(vector<double> hw)
{
    typedef vector<int>::size_type vecSize;
    vecSize size = hw.size();
    cout<<size<< " ";
    if (size == 0)
        throw std::domain_error("Negalima skaiciuoti medianos, kai vektorius tuscias! ");
    sort(hw.begin(), hw.end());
    vecSize vid = size / 2;
    return size % 2 == 0 ? (hw[vid] + hw[vid - 1]) / 2 : hw[vid];
}

double mokinys::vidurkis(vector<double> hw)
{
    if (hw.size() == 0)
        throw std::domain_error("Negalima skaiciuoti vidurkio, kai vektorius tuscias! ");
    return std::accumulate(hw.begin(), hw.end(), 0.0) / hw.size();
}

mokinys::mokinys(string name, string surename){
    this->name = name;
    this->surename = surename;
}

mokinys mokinys::operator=(const mokinys& fromMok) { // priskyrimo operatorius
    // tikrina ar priskiriamas sau
    if (&fromMok == this) return *this;

    this->name = fromMok.name;
    this->surename = fromMok.surename;
    this->mediana = fromMok.mediana;

    return *this;
}

mokinys::mokinys(const mokinys& fromMok){ // kopijavimo
    this->name = fromMok.name;
    this->surename = fromMok.surename;
    this->mediana = fromMok.mediana;
}
