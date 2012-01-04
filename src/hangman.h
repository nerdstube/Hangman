#ifndef HANGMAN_H_INCLUDED
#define HANGMAN_H_INCLUDED
#include <iostream>
#include <cstdlib>

using namespace std;

class Hangman {

    private:

            string word;
            int laenge;
            int versuche;

    public:
            void loesen();

            string getword();
            void setword(string);

            int getlong();
            void setlaenge(int);

            int gettry();
            void settry(int);
};
#endif // HANGMAN_H_INCLUDED
