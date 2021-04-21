#include <iostream>
#include "Jobs.h"
#include "Magazine.h"
#include "Mall.h"

int main()
{
    Restaurant restaurant1("KFC", 1, 2020, 1);
    restaurant1.afisare();
    Moda moda("H&M", 0, 2021, 0);
    std::cout << moda;
    Manager manager1("George", "Georgel", 2015);
    manager1.afisare_personal();
    manager1.ajustari_salariu();

     Mall mall(2, 3);
     mall.adaugare_magazin(restaurant1);
     mall.adaugare_magazin(moda);

     try
     {
         mall.adaugare_angajati(manager1);
     }
     catch ( std::bad_alloc& exceptie )
     {
         std::cerr << "Avem o exceptie: " << exceptie.what() << std::endl;
     }
    

     mall.afisare_locatii();
     mall.afisare_angajati();
  
}