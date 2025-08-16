#include "mssleep.h"
#include <ctime>
using namespace std;

void ms_sleep(unsigned int milliseconds)
{
    struct timespec ts = {.tv_sec  = milliseconds / 1000,
                          .tv_nsec = (milliseconds % 1000) * 1000000};
    nanosleep(&ts, NULL);
}
