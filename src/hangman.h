#ifndef HANGMAN_H_INCLUDED
#define HANGMAN_H_INCLUDED
#include <iostream>
#include <cstdlib>


class Hangman {

    private:

            std::string word;
            int laenge;
            int versuche;

    public:
            void loesen(std::string, int, int);

            std::string getword();
            std::string setword();

            int getlong();
            int setlong();

            int gettry();
            int settry();
};
#endif // HANGMAN_H_INCLUDED
