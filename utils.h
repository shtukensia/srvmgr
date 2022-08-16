#pragma pack(1)
#define _DWORD __int32
#define _WORD __int16
#define _BYTE char

struct T_ID
{
  _WORD id;
  _WORD type;
};

struct T_INVENTORY_ITEM
{
  _DWORD dword0;
  _BYTE gap4[8];
  _WORD wordC;
  _BYTE gapE[22];
  _DWORD dword24;
  _DWORD dword28;
  _DWORD dword2C;
  _DWORD dword30;
  struct CPlex *pcplex34;
  _DWORD dword38;
  _DWORD dword3C;
  unsigned __int16 id;
  _WORD amount;
  _BYTE byte44;
  _BYTE byte45;
  _BYTE byte46;
  _WORD word48;
  _WORD word4A;
  _BYTE byte4C;
  _BYTE byte4D;
  _BYTE gap4E[6];
  _DWORD dword54;
};

struct __declspec(align(4)) T_SRV_LINKED_NODE
{
  T_SRV_LINKED_NODE *next;
  T_SRV_LINKED_NODE *prev;
  T_INVENTORY_ITEM* value;
};
struct __declspec(align(4)) T_LINKEDLIST
{
  _BYTE gap0[4];
  T_SRV_LINKED_NODE *first_node;
  T_SRV_LINKED_NODE *last_node;
  __int32 size;
  _DWORD dword10;
  struct CPlex *pcplex14;
  _DWORD dword18;
  int maxInd;
  _DWORD dword20;
};
struct __declspec(align(4)) T_PLAYER_1{

};
struct T_UNIT;
struct  T_PLAYER
{
    _BYTE gap0[4];
    T_ID id_ext;
    _BYTE gap1[16];
    _DWORD dword18;
    _BYTE gap2[8];
    _DWORD dword24;
    _DWORD dword28;
    int unitType;
    _BYTE gap3[2];
    _WORD word32;
    _BYTE gap4[4];
    T_UNIT * pt_srv_unit38;
    _DWORD dword3C;
    _BYTE gap5[2];
    _BYTE byte42;
    _BYTE gap6[2565];
    _DWORD dwordA48;
    _DWORD dwordA4C;
    _BYTE gap7[4];
    _DWORD dwordA54;
    _DWORD dwordA58;
    _BYTE gap8[4];
    _DWORD dwordA60;
};


struct __declspec(align(4)) T_UNIT
{
  void *clazz;
  T_ID id_ext;
  _BYTE gap0[6];
  _WORD wordE;
  _DWORD position;
  T_PLAYER *unknown_struct;
  _BYTE gap1[12];
  int *pint24;
  _DWORD dword28;
  _DWORD dword2C;
  _DWORD dword30;
  CPlex *pcplex34;
  _BYTE gap2[4];
  _DWORD dword3C;
  _BYTE gap3[2];
  _WORD word42;
  _BYTE gap4[6];
  _BYTE byte4A;
  _BYTE byte4B;
  _BYTE unit_attrs;
  _BYTE gap5[3];
  _DWORD dword50;
  _DWORD unit_state;
  void *pcobject58;
  void *pcobject5C;
  _BYTE byte60;
  _BYTE byte61;
  _BYTE gap6[2];
  void *piunknownvtbl64;
  void *piunknownvtbl68;
  _BYTE byte6C;
  _BYTE gap7[3];
  _DWORD dword70;
  T_INVENTORY_ITEM *weapon;
  T_INVENTORY_ITEM *shield;
  T_LINKEDLIST *inventory;
  _BYTE gap44[20];
  _WORD word94;
  _WORD word96;
  _BYTE gap55[30];
  _BYTE byteB6;
  _BYTE gap66[121];
  _DWORD exp;
  _BYTE gap77[12];
  _DWORD dword140;
  _BYTE gap8[8];
  _WORD word14C;
  _BYTE gap9[82];
  _DWORD dword1A0;
};


#pragma pack()