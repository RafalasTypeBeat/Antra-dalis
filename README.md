# Pažymiu skaičiuoklė
Programa skirta apskaičiuoti vieno ar kelių moksleivių pažymių galutinį balą.

doxygen dokumentacija yra: doxygen dokumentacija/html/index.html

# Programos veikimas
Atsidarius programą galima pasirinkti tarp skirtingų veiksmų:
1. Programa gali apskaičiuoti ir išvesti vartotojo įvestų mokinių pažymius ir vidurkius.
2. Programa gali nuskaityti duomenis apie mokinius iš failo
3. Programa gali pati sugeneruoti skirtingų dydžių studentų failus ir juos surušiuoti pagal pažymius


# Testavimas su skirtigais konteineriais:
--------Naudojant vector--------
Nuskaitymas:

Su 1000 0.046s

Su 10000 0.38s

Su 100000 3.7s

Su 1000000 36s

Rušiavimas:

Su 1000 0.0037s

Su 10000 0.014s

Su 100000 0.1s

Su 1000000 0.88s

--------Naudojant list--------

Nuskaitymas:

Su 1000 0.031s

Su 10000 0.37s

Su 100000 3.5s

Su 1000000 38s

Rušiavimas:

Su 1000 0.0076s

Su 10000 0.044s

Su 100000 0.38s

Su 1000000 3.7s

--------Naudojant deque--------

Nuskaitymas:

Su 1000 0.034s

Su 10000 0.39s

Su 100000 3.7s

Su 1000000 37s

Rušiavimas:

Su 1000 0.001s

Su 10000 0.016s

Su 100000 0.097s

Su 1000000 1.1s

Sistemos parametrai: 
CPU: AMD Ryzen 5 2600
RAM: 16GB DDR4 3200MHz
Disk: SSD

Testavimo išvada:
Naudojant skirtingus konteinerius programos sparta kinta labai minimaliai.

# Versija 1.0
Padaryta naudojant 2 rusiavimo strategija. Naudojami isviso 2 vektoriai

Naudojant 1 strategija su 3 vektoriais:

Rušiavimas:

Su 1000 0.001s

Su 10000 0.02s

Su 100000 0.15s

Su 1000000 1.4s

Naudojant 1 strategija su 3 deque:

Rušiavimas:

Su 1000 0.001s

Su 10000 0.017s

Su 100000 0.16s

Su 1000000 1.7s

Naudojant 1 strategija su 3 list:

Rušiavimas:

Su 1000 0.0082s

Su 10000 0.039s

Su 100000 0.46s

Su 1000000 4.5s

Išvada: naudojant 2 strategiją programa truputi spartesnė

# V1.1 versijos testavimas:
Naudojant struct ir vektorius

Nuskaitymas:

Su 1000 0.046s

Su 10000 0.38s

Su 100000 3.7s

Su 1000000 36s

Rušiavimas:

Su 1000 0.0037s

Su 10000 0.014s

Su 100000 0.1s

Su 1000000 0.88s

Naudojant class ir vektorius

Nuskaitymas:

Su 1000 0.036s

Su 10000 0.41s

Su 100000 4s

Su 1000000 38s

Rušiavimas:

Su 1000 0.0058s

Su 10000 0.0055s

Su 100000 0.13s

Su 1000000 1.2s

Išvada: su struc programa veikia sparčiau.

# Optimizacijos flag tyrimas:

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

Su 1000 0.034s

Su 10000 0.37s

Su 100000 3.8s

Su 1000000 37s

Rušiavimas:

Su 1000 0.001s

Su 10000 0.026s

Su 100000 0.12s

Su 1000000 1.2s

Naudojant -O2

Nuskaitymas:

Su 1000 0.034s

Su 10000 0.38s

Su 100000 3.7s

Su 1000000 37s

Rušiavimas:

Su 1000 0.001s

Su 10000 0.014s

Su 100000 0.13s

Su 1000000 1.2s

Naudojant -O3

Nuskaitymas:

Su 1000 0.033s

Su 10000 0.37s

Su 100000 3.8s

Su 1000000 37s

Rušiavimas:

Su 1000 0.001s

Su 10000 0.0082s

Su 100000 0.12s

Su 1000000 1.2s

Išvada: optimizacijos flags nepaspartino programos


