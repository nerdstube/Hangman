#ifndef OS_H_INCLUDED
#define OS_H_INCLUDED

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
#endif // OS_H_INCLUDED
