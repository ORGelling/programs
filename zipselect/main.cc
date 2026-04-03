#include "main.ih"

namespace {
    
    char const *zipComs[] = 
    {
        "zip",
        "-r",
        "-i",
        "*.cc",
        "*.i",
        "*.l",
        "*.p",
        "*.h",
        "*.ih",
        "*.txt",
    };
    
    constexpr size_t comSize = sizeof(zipComs) / sizeof(zipComs[0]);
    
    
    vector<string> makeStrArgs(int argc, char **argv)
    {
        vector<string> strArgs;
        vector<string> commands(argv + 1, argv + argc);
    
        for (size_t idx = 0; idx != 2; ++idx)   // initial command and flag
            strArgs.push_back(zipComs[idx]);
        
        for (string const &name : commands)     // passed .zip package name
            strArgs.push_back(name);
        
        for (size_t idx = 2; idx != comSize; ++idx)   // all the extensions
            strArgs.push_back(zipComs[idx]);
        
        return strArgs;
    }
    
    vector<char *> makeArgs(vector<string> &strArgs)
    {
        vector<char *> argTmp;
        
        for (string &entry : strArgs)
            argTmp.push_back(entry.data());
        argTmp.push_back(0);
        
        return argTmp;
    }
    
}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        cerr << "Usage: " << argv[0] 
             << " <destination.zip> <target1> [target2] ...\n";
        return 1;
    }
    
    vector<string> strArgs = makeStrArgs(argc, argv);
    vector<char *> args = makeArgs(strArgs);
    
    execvp("zip", args.data());
    perror("execvp");
}
