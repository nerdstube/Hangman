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

void Hangman::loesen(char w)
{
    char bustabe;
    bustabe = w;
    cout<<bustabe;
    clear();
}
