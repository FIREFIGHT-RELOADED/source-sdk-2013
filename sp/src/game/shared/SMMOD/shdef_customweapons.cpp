#include "cbase.h"
#include "filesystem.h"
#include "weapon_parse.h"
#if defined(CLIENT_DLL)
	#include "SMMOD/c_weapon_custom.h"
	#include "c_weapon__stubs.h"
#else
	#include "SMMOD/weapon_custom.h"
#endif
// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"


#ifdef CLIENT_DLL
CustomWeapon_IMPLEMENT(1)
CustomWeapon_IMPLEMENT(2)
CustomWeapon_IMPLEMENT(3)
CustomWeapon_IMPLEMENT(4)
CustomWeapon_IMPLEMENT(5)
CustomWeapon_IMPLEMENT(6)
CustomWeapon_IMPLEMENT(7)
CustomWeapon_IMPLEMENT(8)
CustomWeapon_IMPLEMENT(9)
CustomWeapon_IMPLEMENT(10)
CustomWeapon_IMPLEMENT(11)
CustomWeapon_IMPLEMENT(12)
CustomWeapon_IMPLEMENT(13)
CustomWeapon_IMPLEMENT(14)
CustomWeapon_IMPLEMENT(15)
CustomWeapon_IMPLEMENT(16)
CustomWeapon_IMPLEMENT(17)
CustomWeapon_IMPLEMENT(18)
CustomWeapon_IMPLEMENT(19)
CustomWeapon_IMPLEMENT(20)
CustomWeapon_IMPLEMENT(21)
CustomWeapon_IMPLEMENT(22)
CustomWeapon_IMPLEMENT(23)
CustomWeapon_IMPLEMENT(24)
CustomWeapon_IMPLEMENT(25)
CustomWeapon_IMPLEMENT(26)
CustomWeapon_IMPLEMENT(27)
CustomWeapon_IMPLEMENT(28)
CustomWeapon_IMPLEMENT(29)
CustomWeapon_IMPLEMENT(30)
#else
//._. Cheap, but effective.
CustomWeaponAdd( 1 )
CustomWeaponAdd( 2 )
CustomWeaponAdd( 3 )
CustomWeaponAdd( 4 )
CustomWeaponAdd( 5 )
CustomWeaponAdd( 6 )
CustomWeaponAdd( 7 )
CustomWeaponAdd( 8 )
CustomWeaponAdd( 9 )
CustomWeaponAdd( 10 )
CustomWeaponAdd( 11 )
CustomWeaponAdd( 12 )
CustomWeaponAdd( 13 )
CustomWeaponAdd( 14 )
CustomWeaponAdd( 15 )
CustomWeaponAdd( 16 )
CustomWeaponAdd( 17 )
CustomWeaponAdd( 18 )
CustomWeaponAdd( 19 )
CustomWeaponAdd( 20 )
CustomWeaponAdd( 21 )
CustomWeaponAdd( 22 )
CustomWeaponAdd( 23 )
CustomWeaponAdd( 24 )
CustomWeaponAdd( 25 )
CustomWeaponAdd( 26 )
CustomWeaponAdd( 27 )
CustomWeaponAdd( 28 )
CustomWeaponAdd( 29 )
CustomWeaponAdd( 30 )
#endif