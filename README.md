# Pažymiu skaičiuoklė
Programa skirta apskaičiuoti vieno ar kelių moksleivių pažymių galutinį balą.

# Programos veikimas
Atsidarius programą galima pasirinkti tarp skirtingų veiksmų:
1. Programa gali apskaičiuoti ir išvesti vartotojo įvestų mokinių pažymius ir vidurkius.
2. Programa gali nuskaityti duomenis apie mokinius iš failo
3. Programa gali pati sugeneruoti skirtingų dydžių studentų failus ir juos surušiuoti pagal pažymius


# Testavimas su skirtigais konteineriais:
--------Naudojant vector--------
Nuskaitymas:
Su 1000 0.03s
Su 10000 0.37s
Su 100000 3.7s
Su 1000000 37s
Rušiavimas:
Su 1000 0.0009s
Su 10000 0.01s
Su 100000 0.14s
Su 1000000 1.3s
--------Naudojant list--------
Nuskaitymas:
Su 1000 0.03s
Su 10000 0.38s
Su 100000 3.8s
Su 1000000 38s
Rušiavimas:
Su 1000 0.005s
Su 10000 0.051s
Su 100000 0.49s
Su 1000000 4.6s
--------Naudojant deque--------
Nuskaitymas:
Su 1000 0.03s
Su 10000 0.36s
Su 100000 3.6s
Su 1000000 37s
Rušiavimas:
Su 1000 0.002s
Su 10000 0.016s
Su 100000 0.18s
Su 1000000 1.7s

Sistemos parametrai: 
CPU: AMD Ryzen 5 2600
RAM: 16GB DDR4 3200MHz
Disk: SSD

Testavimo išvada:
Naudojant skirtingus konteinerius programos sparta kinta labai minimaliai.

Versija 1.0
Padaryta naudojant 1 strategija naudojami isviso 3 vektoriai

Naudojant 2 strategija su 2 vektoriais:
Rušiavimas:
Su 1000 0.001s
Su 10000 0.009s
Su 100000 0.094s
Su 1000000 0.93s

Naudojant 2 strategija su 2 deque:
Rušiavimas:
Su 1000 0.001s
Su 10000 0.011s
Su 100000 0.11s
Su 1000000 1.1s

Naudojant 2 strategija su 2 list:
Rušiavimas:
Su 1000 0.002s
Su 10000 0.023s
Su 100000 0.22s
Su 1000000 2.3s

# V1.1 versijos testavimas:
Naudojant struct ir vektorius
Nuskaitymas:
Su 1000 0.03s
Su 10000 0.37s
Su 100000 3.7s
Su 1000000 37s
Rušiavimas:
Su 1000 0.001s
Su 10000 0.009s
Su 100000 0.094s
Su 1000000 0.93s

Naudojant class ir vektorius
Nuskaitymas:
Su 1000 0.04s
Su 10000 0.5s
Su 100000 5.3s
Su 1000000 56s
Rušiavimas:
Su 1000 0.002s
Su 10000 0.013s
Su 100000 0.12s
Su 1000000 1.2s

Išvada: su struc programa veikia sparčiau.

Optimizacijos flag tyrimas:
nenaudojant jokio flag:
Nuskaitymas:
Su 1000 0.04s
Su 10000 0.5s
Su 100000 5.3s
Su 1000000 56s
Rušiavimas:
Su 1000 0.002s
Su 10000 0.013s
Su 100000 0.12s
Su 1000000 1.2s

Naudojant -O1
Nuskaitymas:
Su 1000 0.04s
Su 10000 0.48s
Su 100000 5.3s
Su 1000000 56s
Rušiavimas:
Su 1000 0.001s
Su 10000 0.013s
Su 100000 0.13s
Su 1000000 1.2s

Naudojant -O2
Nuskaitymas:
Su 1000 0.034s
Su 10000 0.37s
Su 100000 3.7s
Su 1000000 37s
Rušiavimas:
Su 1000 0.001s
Su 10000 0.013s
Su 100000 0.13s
Su 1000000 1.2s

Naudojant -O3
Nuskaitymas:
Su 1000 0.034s
Su 10000 0.37s
Su 100000 3.7s
Su 1000000 37s
Rušiavimas:
Su 1000 0.001s
Su 10000 0.012s
Su 100000 0.12s
Su 1000000 1.2s

Išvada: Perėjus prie -O2 paspartejo nuskaitymas iš failo 

# V1.2 versijos kompiliavimas:
Windows sistemai:

    g++ -c main.cpp includes/functions.cpp includes/students.cpp
    g++ -o main main.o functions.o students.o
      
Linux sistemai:

    make
    ./main

