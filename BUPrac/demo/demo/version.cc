#include "main.ih"
#include "icmconf"

#ifdef USE_VERSION
#include "VERSION"
#endif

#ifndef AUTHOR
#define AUTHOR ""
#endif

#ifndef VERSION
#define VERSION "1.02.00"
#endif

#ifndef YEARS
#define YEARS "2025"
#endif

namespace Icmake
{
    char version[]  = VERSION;
    char years[]    = YEARS;
    char author[]   = AUTHOR;
}
