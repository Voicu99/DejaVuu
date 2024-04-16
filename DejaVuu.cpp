// DejaVuu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

bool hasDuplicates(const std::string& str) {
    std::vector<int> charCount(26, 0); // Initializam toate frecventele la 0

    for (char c : str) {
        if (isalpha(c)) { // Verificam daca caracterul este o litera
            int index = c - 'a'; // Calculam indexul corespunzator in vector pentru litera curenta
            charCount[index]++; // Incrementam frecventa caracterului
            if (charCount[index] > 1) { // Daca gasim un caracter cu o frecventa mai mare decat 1, returnam true
                return true;
            }
        }
    }

    return false; // Daca nu gasim niciun caracter repetat, returnam false
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    if (hasDuplicates(input)) {
        std::cout << "Deja Vu" << std::endl;
    }
    else {
        std::cout << "Caractere unice" << std::endl;
    }

    return 0;
}