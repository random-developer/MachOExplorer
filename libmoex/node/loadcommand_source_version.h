//
// Created by everettjf on 2017/3/31.
//

#ifndef MACHOEXPLORER_LOADCOMMAND_SOURCE_VERSION_H
#define MACHOEXPLORER_LOADCOMMAND_SOURCE_VERSION_H


#include "loadcommand.h"

MOEX_NAMESPACE_BEGIN

class LoadCommand_LC_SOURCE_VERSION : public LoadCommandImpl<source_version_command>{
public:
    std::string GetTypeName() override{ return "source_version_command";}
};


MOEX_NAMESPACE_END

#endif //MACHOEXPLORER_LOADCOMMAND_SOURCE_VERSION_H
