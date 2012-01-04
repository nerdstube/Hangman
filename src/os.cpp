#include <iostream>
#include <cstdlib>
#include "os.h"

void clear()
{
#ifdef WIN32
system("cls");
#else
system("clear");
#endif
}

void ending()
{
#ifdef WIN32
system("stop");
#else
#endif
}
