#ifndef INCLUDED_ZIPPER_
#define INCLUDED_ZIPPER_
#include "../../FBC++/part2/set4/31/fork/fork.h"
#include <string>

// Add /home/olivier/orgutility location to icmconf lib paths
// make sure if actually works as library

class Zipper: public Fork
{
    std::string const d_destination;
    std::string const d_targets;
    
    public:
        Zipper(std::string const &dest, std::string const &targ);
        
    private:
        void childProcess() override;
        void parentProcess() override;
};
        
#endif
