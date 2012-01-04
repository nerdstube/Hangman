#include "hangman.h"

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

}
