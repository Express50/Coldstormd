#pragma once

#ifdef DEBUGSTATEMENTS
#define DEBUG printf("%s - %i\n", __FILE__, __LINE__)
#else
#define DEBUG ;
#endif

#include<cstdio>
#include "general/mystring.h"
using namespace std;
namespace ColdstormD{
    enum {
        LOGIN_NONE=0,
        LOGIN_GUEST,
        LOGIN_FULL
    };

    enum {
        ACCESS_NONE=0,
        ACCESS_VOP=1,
        ACCESS_HOP=2,
        ACCESS_AOP=4,
        ACCESS_SOP=8,
        ACCESS_BANNED=16,
        ACCESS_MUTED=32,
        ACCESS_ANY=0xFFFFFFF
    };
    enum{
        ERROR_NONE=0,
        ERROR_ALREADYDONE,
        ERROR_PARAM,
        ERROR_PERMISSION,
        ERROR_NOTFOUND,
        ERROR_INVALID
    };
    enum{
        USER_NULL=0,
        USER_SERVER
    };
    enum{
        OPTION_NONE=0,
        OPTION_INVITEONLY=1,
        OPTION_DENYNONE=2,
        OPTION_DENYVOICE=4,
        OPTION_DENYHOP=8,
        OPTION_DENYAOP=16
    };
}
