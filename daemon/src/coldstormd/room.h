#pragma once
namespace ColdstormD{ struct room; }
#include "coldstormd/constants.h"
#include "general/mystring.h"
#include<vector>
#include "coldstormd/database.h"
#include "coldstormd/utility.h"

namespace ColdstormD{
    struct room{
        String name;
        String starowner;
        vector<int> users;
        vector<int> accesslist;
        vector<int> usershave;
        String motd;
        vector<String> motdhist;
        int motdsetby;
        int motdseton;
        int canjoin( int usr );
        int adduser( int usr, int access = ACCESS_NONE, bool forcejoin = true );
        int partuser( int usr, bool supress = false );
        int removeuser( int usr );
        int privmsg( int usr, String msg );
        int notice( int usr, String msg );
        int sendinfo(int usr);
        int sendwho(int usr);
        int useraccess(int usr);
        int setmotd(int usr, String mo);
        int invite(int usr, int target);

        void broadcast(int usr, String message, bool supressecho = true);

        int write( FILE* f );
        int read( FILE* f );
    };
}
