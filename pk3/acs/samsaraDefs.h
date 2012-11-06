#define SAMSARA_ENTER               213
#define SAMSARA_RESPAWN             218
#define SAMSARA_DEATH               219
#define SAMSARA_OPEN                223
#define SAMSARA_SPAWN               224
#define SAMSARA_DISCONNECT          217
#define SAMSARA_WOLFMOVE            273

#define SAMSARA_CONFIRMCLASS        206
#define SAMSARA_DECORATE            215
#define SAMSARA_GIVEWEAPON          229
#define SAMSARA_GIVEUNIQUE          231
#define SAMSARA_CLIENT_WEAPONPICKUP 216
#define SAMSARA_CLIENT_UNIQUEPICKUP 233
#define SAMSARA_MARATHON            209

#define SAMSARA_PUKE                226
#define SAMSARA_OPEN_CLIENT         205
#define SAMSARA_ENTER_CLIENT        221
#define SAMSARA_DISCONNECT_CLIENT   222
#define SAMSARA_CLIENT_CLASS        228

#define SAMSARA_CL_VERSION          26

#define LMSMODES            6

#define CLASSCOUNT          7
#define SLOTCOUNT           9
#define CHOICECOUNT         5

#define CLASS_DOOMGUY   0
#define CLASS_CHEX      1
#define CLASS_CORVUS    2
#define CLASS_WOLFEN    3
#define CLASS_HEXEN     4
#define CLASS_DUKE      5
#define CLASS_MARATHON  6

#define S_WEP               0
#define S_AMMO1             1
#define S_AMMO2             2
#define S_CHECKITEM         3
#define S_CHECKFAILITEM     4

#define SPEED_FORWARD       15
#define SPEED_SIDE          13

#define WEPFLAGS_GOTWEAPON  1
#define WEPFLAGS_WEAPONSTAY 2

int HELPSTR = 
"Welcome to the Wheel of Samsara! There are a few optional RCon commands you may want to consider.\n\
samsara_banjetpack 0/1: Toggles whether Duke is allowed to pick up his jetpack or not.\n\
samsara_sogravity 0/1: Toggles whether the Security Officer operates off Marathon or Doom gravity.\n\
samsara_permault 0/1: Toggles whether the Weapon VII is persistent or vanishes on pickup.\n\
samsara_lmslife [0-5]: Affects how much health/armor people have on LMS spawn/respawn.\n\
samsara_lmsult 0/1: Toggles whether or not players get their VII in LMS mode.";

int LMSArmors[LMSMODES] = 
{
    "",
    "GreenArmor",
    "BlueArmor",
    "LMSArmor", 
    "LMSArmor2",
    "LMSArmor3",
};

int ClassItems[CLASSCOUNT] =
{
    "DoomguyClass",
    "ChexClass",
    "CorvusClass",
    "WolfenClass",
    "HexenClass",
    "DukeClass",
    "MarathonClass",
};

int PickupStates[CLASSCOUNT][4] = 
{
    {"Doomguy", "DoomFull",     "DoomEmpty",        "DoomSpecial"},
    {"Chexguy", "ChexFull",     "ChexEmpty",        "ChexSpecial"},
    {"Heretic", "HereticFull",  "HereticEmpty",     "HereticSpecial"},
    {"Wolfguy", "WolfFull",     "WolfEmpty",        "WolfSpecial"},
    {"Hexen",   "HexenFull",    "HexenEmpty",       "HexenSpecial"},
    {"Dukeguy", "DukeFull",     "DukeEmpty",        "DukeSpecial"},
    {"Marathon","MarathonFull", "MarathonEmpty",    "MarathonSpecial"},
};

int ItoSArray[7] = {1, 3, 4, 5, 6, 7, 8};
int StoIArray[SLOTCOUNT] = {-1, 1, -1, 2, 3, 4, 5, 6, 7};

int ClassFades[CLASSCOUNT][5] =
{
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {0,   255, 0,   0.4, 8},
};

int SlotItems[SLOTCOUNT] = 
{
    "",
    "GotWeapon0",
    "",
    "GotWeapon2",
    "GotWeapon3",
    "GotWeapon4",
    "GotWeapon5",
    "GotWeapon6",
    "GotWeapon7",
};

int LMSItems[CLASSCOUNT] =
{
    "",
    "",
    "PortGhostly",
    "WolfenAmmoCrate",
    "",
    "",
    "",
};
