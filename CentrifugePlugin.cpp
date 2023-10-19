#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "CentrifugePlugin.h"



void CentrifugePlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void CentrifugePlugin::run() {}

void CentrifugePlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "centrifuge";
myCommand += " -x ";
myCommand += PluginManager::addPrefix(myParameters["index"]);
myCommand += " -U ";
myCommand += PluginManager::addPrefix(myParameters["sequences"]);
myCommand += " -f ";
 system(myCommand.c_str());
}

PluginProxy<CentrifugePlugin> CentrifugePluginProxy = PluginProxy<CentrifugePlugin>("Centrifuge", PluginManager::getInstance());
