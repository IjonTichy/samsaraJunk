int ClassUniques[CLASSCOUNT][CHOICECOUNT] = 
{
    {"DoomguyBerserker",    "", "", "", ""},
    {"ChexSoulsphere",      "", "", "", ""},
    {"ArtiEgg2",            "", "", "", ""},
    {"WolfExtraLife",       "", "", "", ""},
    {"PortMysticAmbit",     "", "", "", ""},
    {"DukeJetpack",         "DukeJetpackFuel", "", "", ""},
    {" Alien Weapon ",      "", "", "", ""},
};

int UniqueMaxes[CLASSCOUNT][3] = 
{
    {0,     0,      0},
    {0,     0,      0},
    {16,    0,      0},
    {9,     0,      0},
    {16,    0,      0},
    {0,     100,    0},
    {0,     50,     50},
};

int ClassWeapons[CLASSCOUNT][SLOTCOUNT][CHOICECOUNT] = 
{
    {   // Doomguy
        {" Fist ",                          "",             "",             "", ""},
        {" Chainsaw ",                      "",             "",             "", ""},
        {" Pistol ",                        "",             "",             "", ""},
        {" Shotgun ",                       "AmmoShell",    "",             "", ""},
        {"Super Shotgun",                   "AmmoShell",    "",             "", ""},
        {" Chaingun ",                      "Clip",         "",             "", ""},
        {"Rocket Launcher",                 "RocketAmmo",   "",             "", ""},
        {"Plasma Rifle",                    "Cell",         "",             "", ""},
        {"B.F.G. 9000",                     "Cell",         "",             "", ""},
    },

    {   // Chexguy
        {" Bootspoon ",                     "",             "",             "", ""},
        {"Super Bootspork",                 "",             "",             "", ""},
        {"Mini-Zorcher",                    "",             "",             "", ""},
        {"Large Zorcher",                   "AmmoShell",    "",             "", ""},
        {"Super Large Zorcher",             "AmmoShell",    "",             "", ""},
        {"Rapid Zorcher",                   "Clip",         "",             "", ""},
        {"Zorch Propulsor",                 "RocketAmmo",   "",             "", ""},
        {"Phasing Zorcher",                 "Cell",         "",             "", ""},
        {"LAZ Device",                      "Cell",         "",             "", ""},
    },

    {   // Corvus
        {" Staff ",                         "",             "",             "", ""},
        {"Gauntlets of the Necromancer",    "",             "",             "", ""},
        {"Elven Wand",                      "",             "",             "", ""},
        {" Firemace ",                      "AmmoShell",    "",             "", ""},
        {"Ethereal Crossbow",               "AmmoShell",    "",             "", ""},
        {"Dragon Claw",                     "Clip",         "",             "", ""},
        {"Phoenix Rod",                     "RocketAmmo",   "",             "", ""},
        {"Hellstaff",                       "Cell",         "",             "", ""},
        {"PortTomeCoop",                    "",             "",             "", ""},
    },

    {   // B.J.
        {"Knife",                           "",             "",             "", ""},
        {"GotWeapon0",                      "",             "",             "", ""},
        {"Luger",                           "",             "",             "", ""},
        {"Machine Gun",                     "Clip",         "",             "", ""},
        {"Machine Gun",                     "Clip",         "",             "", ""},
        {"  Chaingun  ",                    "Clip",         "",             "", ""},
        {" Rocket Launcher ",               "RocketAmmo",   "",             "", ""},
        {" Flamethrower ",                  "Cell",         "",             "", ""},
        {"Spear of Destiny",                "Cell",         "",             "", ""},
    },

    {   // Parias
        {"Mace of Contrition",              "",             "",             "", ""},
        {"PortFlechette",                   "",             "",             "", ""},
        {"Sapphire Wand",                   "",             "",             "", ""},
        {"Frost Shards",                    "AmmoShell",    "",             "", ""},
        {"Timon's Axe",                     "AmmoShell",    "",             "", ""},
        {"Serpent Staff",                   "Clip",         "",             "", ""},
        {"Hammer of Retribution",           "RocketAmmo",   "",             "", ""},
        {"Firestorm",                       "Cell",         "",             "", ""},
        {"Wraithverge",                     "Cell",         "",             "", ""},
    },

    {   // Duke
        {"Mighty Boot",                     "",             "",             "", ""},
        {"Pipebombs",                       "RocketAmmo",   "",             "", ""},
        {"M1911",                           "",             "",             "", ""},
        {"  Shotgun  ",                     "AmmoShell",    "",             "", ""},
        {"Explosive Shotgun",               "RocketAmmo",   "",             "", ""},
        {"Chaingun Cannon",                 "Clip",         "",             "", ""},
        {"RPG",                             "RocketAmmo",   "",             "", ""},
        {"Freezethrower",                   "Cell",         "",             "", ""},
        {"Devastator",                      "Cell",         "",             "", ""},
    },

    {   // Security Officer
        {"Steel Knuckles",                  "",             "",             "",                 ""},
        {"KKV-7 SMG Flechette",             "Clip",         "",             "CanDualPistols",   ""},
        {".44 Magnum Mega Class A1",        "",             "",             "",                 ""},
        {"WSTE-M5 Combat Shotgun",          "AmmoShell",    "",             "CanDualShotties",  "LevelLimiter"},
        {"Fusion Pistol",                   "FusionBullet", "Cell",         "",                 ""},
        {"MA-75B Assault Rifle",            "RifleBullet",  "Clip",         "",                 ""},
        {"SPNKR-XP SSM Launcher",           "SpankerAmmo",  "RocketAmmo",   "",                 ""},
        {"TOZT-7 Napalm Unit",              "NapalmInTank", "",             "",                 ""},
        {"ONI-71 Wave Motion Cannon",       "Cell",         "RocketAmmo",   "",                 ""},
    }
};

int ClassScripts[CLASSCOUNT][SLOTCOUNT] = 
{
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,0,                   0,  0,0,0,0,0,0},
    {0,SAMSARA_MARATHON,    0,  SAMSARA_MARATHON,0,0,0,0,0},
};

int ClassPickupSounds[CLASSCOUNT][SLOTCOUNT] = 
{
    {
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
        "doomguy/weaponget",
    },
    {
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
        "chex/weaponget",
    },
    {
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
        "heretic/weaponget",
    },
    {
        "wolfen/knifeget",
        "wolfen/knifeget",
        "wolfen/itemget",
        "wolfen/mgunget",
        "wolfen/mgunget",
        "wolfen/weaponget",
        "wolfen/rocketget",
        "wolfen/flameget",
        "wolfen/spearget",
    },
    {
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
        "hexen/weaponget",
    },
    {
        "duke/weaponget",
        "duke/itemget",
        "duke/weaponget",
        "duke/mosspump2",
        "duke/xshotgunpump",
        "duke/weaponget",
        "duke/weaponget",
        "duke/weaponget",
        "duke/weaponget",
    },
    {
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/itemget",
        "marathon/bigitemget",
    },
};

int ClassUniqueSounds[CLASSCOUNT] = 
{
    "doomguy/itemget",
    "chex/weaponget",
    "heretic/itemget",
    "wolfen/lifeget",
    "hexen/artiget",
    "duke/itemget",
    "marathon/itemget",
};
