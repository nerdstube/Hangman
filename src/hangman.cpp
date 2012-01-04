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
    string ergebnis[Hangman::getlong()];
    char buchstabe;
    int vergleich;
    int wh=0;
    for (int i = 0; i < Hangman::getlong(); i++)
    ergebnis[i]="?";
    while(wh<Hangman::gettry())
    {
        if (wh == 0)
        cout <<"Lets go!"<<endl;
        else
         for (int i = 0; i < Hangman::getlong(); i++)
         cout<<ergebnis[i];
         cout<<endl;

     cout<<"Bitte geben Sie ihren Buchstaben ein: "<<endl;
     cin>>buchstabe;
     clear();
        for (int i = 0; i < Hangman::getlong(); i++)
        {
            if (word[i] == buchstabe)
                {
                vergleich=1;
                ergebnis[i]=buchstabe;
                break;
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
