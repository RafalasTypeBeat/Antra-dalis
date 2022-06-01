#include "funkcijos.h"
#include "mokiniai.h"

int main()
{
    auto ProgramosStart = hrClock::now();
    vector<mokinys> mok;
    mokinys temp;
    int vieta = 0, choice; 
    cout<<"Ar norite duomenis ivesti ranka, skaityti is failo ar generuoti?(1/2/3)";
    while(choice != 1 && choice!= 2 && choice!= 3)cin>>choice; 
    if (choice == 1)//ivedimas ranka
    {
        input(mok, vieta);
        sort(mok.begin(), mok.end(), compareName);
        try
        {
            //print(mok);
        }
        catch(std::domain_error e)
        {
            cout<<endl<<e.what();
        }
        return 0;
    }
    else if(choice == 2)//skaitymas is failo
    {
        int fileSkc;
        cout<<"Kiek failu norite nuskaityti? "; cin>>fileSkc;
        readAndSort(fileSkc);
    }
    else //failu generavimas
    {
        int FileSkc;
        generate(FileSkc);
    }
    auto pabaiga = hrClock::now();
    std::chrono::duration<double> trukme = pabaiga - ProgramosStart;
    cout<<"Programa veike "<< std::setprecision(2) <<trukme.count()<<" sekundziu."<<endl;
}