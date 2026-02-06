#include "zipper.ih"

    // by 

void Zipper::parentProcess()
{
    d_childExit = waitForChild();
}
