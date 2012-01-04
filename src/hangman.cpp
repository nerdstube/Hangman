#include "hangman.h"
#include "os.h"

using namespace std;

void Hangman::setword(string w)
{
    word = w;
}

string Hangman::getword()
{
return word;
}

void Hangman::setlaenge(int l)
{
    laenge = l;
}

int Hangman::getlong()
{
return laenge;
}


int Hangman::gettry()
{
return versuche;
}

void Hangman::settry(int l)
{
    versuche = l;
}

void Hangman::loesen()
{
    char buchstabe;
    int vergleich;
    int wh=0;
    while(wh<Hangman::gettry())
    {
     cout<<"Bitte geben Sie ihren Buchstaben ein: "<<endl;
     cin>>buchstabe;
        for (int i = 0; i < Hangman::getlong(); i++)
        {
            if (word[i] == buchstabe)
                {
                vergleich=1;
                }
            else
                {
                vergleich=0;
                }
        }
        if (vergleich == 1)
            cout<<"Treffer"<<endl;
        else
            cout<<"Kein Treffer"<<endl;
        wh++;
    }
}
