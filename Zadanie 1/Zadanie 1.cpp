// Zadanie 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iostream>
using namespace std;

int main() {

    char op;
    float num1, num2;

    cout << "wybierz typ działania : +, -, *, /: ";
    cin >> op;

    cout << "Podaj liczbe nr1 ";
    cin >> num1;
    cout << "Podaj liczbe nr2 ";
    cin >> num2;

    switch (op) {

    case '+'://addition
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;


    case '-'://subtraction
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;


    case '*'://multiplication
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;


    case '/'://Division
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;


    default:
        // If the operator is wrong an error message is shown
        cout << "podany zly typ dzialania";
        break;
    }

    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
