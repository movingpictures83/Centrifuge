#ifndef CENTRIFUGEPLUGIN_H
#define CENTRIFUGEPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class CentrifugePlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Centrifuge";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
