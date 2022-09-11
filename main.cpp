#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; //pontosvessző hiányzik a végéről, stringhez duplaaposztróf szükséges
    for (int i = 0; i < N_ELEMENTS; i++) //hiányos ciklus feltétel, feltételvizsgálat hiányzik, végrehajtandó lépés minden iterációban (i++)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //i<N_ELEMENTS, hibás feltételvizsgálat
    {
        std::cout << "Ertek:"<< b[i]<< std::endl; // hiányzik az endline és a pontosvessző, illetve a kiírandó érték változója
    }    
    std::cout << "Atlag szamitasa: " << std::endl; 
    double atlag; //double
    for (int i = 0; i < N_ELEMENTS; i++) //pontosvessző a sima vessző helyett
    {
        atlag += b[i]; //nincs pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
