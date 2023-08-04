/*
Program losuje haslo
skladajce sie z duzych i malych liter oraz liczb
*/


#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int kod_ascii;
    int przedzial_ascii;
    char znak;
    int haslo[8];

    srand(time(NULL));

    for(int i = 0; i< 8; i++)
    {
        przedzial_ascii = rand()%3+1;

        switch(przedzial_ascii)
        {
            case 1:
                kod_ascii = rand()%26+65; //losowanie duzych liter
                znak = (char)kod_ascii;
                cout << znak;
                break;
            case 2:
                kod_ascii = rand()%26+97; //losowanie malych liter
                znak = (char)kod_ascii;
                cout << znak;
                break;
            case 3:
                kod_ascii = rand()%10+48;  //losowanie liczb
                znak = (char)kod_ascii;
                cout << znak;
                break;
        }

    }

    return 0;
}
