// Generated by unRap v1.06 by Kegetys
#include "script_macros_config.hpp"

class CfgVehicles {

    //////////////////////////////////////////////////////////////////////////////////////
	//TODO: Balance out the space marines so a Lucius pattern lasgun can't one shot them//
	//////////////////////////////////////////////////////////////////////////////////////

	
    class ThingX;	// External class reference
	class CAManBase;	// External class reference
	
	class SoldierWB : CAManBase {
		class HeadLimits;	// External class reference
	};
	
	class TIOWSpaceMarine_Base : SoldierWB {
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=10;
				minimalHit=0;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=20.5;
				minimalHit=0;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=20.5;
				minimalHit=0;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=1;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=50;
				visual="injury_body";
				minimalHit=0;
			};
			class HitAbdomen: HitPelvis
			{
				armor=1;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15;
				explosionShielding=50;
				visual="injury_body";
				minimalHit=0;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=1;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15;
				explosionShielding=100.2;
				visual="injury_body";
				minimalHit=0;
			};
			class HitChest: HitDiaphragm
			{
				armor=1;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15;
				explosionShielding=100.2;
				visual="injury_body";
				minimalHit=0;
			};
			class HitBody: HitChest
			{
				armor=1;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=100.2;
				visual="injury_body";
				minimalHit=0;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};

    
    class B_Soldier_F;
	class Strategic;
	class ReammoBox: Strategic {};
	class Bag_Base: ReammoBox {};
	class B_AssaultPack_Base: Bag_Base {};
    
    class TIOW_CadBackpack: B_AssaultPack_Base
	{
		displayName="[Cadian] Infantry Backpack";
	};
    class TIOW_CadMedicaeBackpack: B_AssaultPack_Base
	{
		maximumLoad = 240;
	};

	class TIOW_CadMedicaeBackpack_Winter: B_AssaultPack_Base
	{
		maximumLoad = 240;
	};

    class VNG_CadATBackpack: TIOW_CadBackpack
	{
		displayName="[Cadian] Infantry AT Backpack";
	    maximumLoad = 320;
	};

    class B_Soldier_base_F;

    class DKoK_GM_1: B_Soldier_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
		linkedItems[]=
		{
			"DKOKTroopMask",
			"DKoK_GM_Helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VNG_Krieg_Armor"
		};
		RespawnLinkedItems[]=
		{
			"DKOKTroopMask",
			"DKoK_GM_Helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VNG_Krieg_Armor"
		};
	};
    class TIOW_Comissar: B_Soldier_base_F
	{
		respawnLinkedItems[]=
		{
			"TIOW_Bionic_Eye",
			"TIOW_Comissar_Cap",
			"VNG_Commissar_Armor"
		};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
    class TIOW_IG_Captain_667: B_Soldier_base_F
	{
		respawnLinkedItems[]=
		{
			"TIOW_Bionic_Eye",
			"TIOW_Comissar_Cap",
			"VNG_Captain_Armor"
		};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
    class TIOW_Priest: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
    class TIOW_Mordian_Trooper_1_Blu: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class CadTroopBase: B_Soldier_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class TIOW_Fire_Warrior: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class TIOW_Valhallan_Trooper_1_Blu: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	class TIOW_Pathfinder: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.12;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			ADD_ACE_HITPOINTS(1,1);
			class ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
	};
	
	class TIOW_Tau_Bck_Strike_VL;
    class VNG_Viorla_radioback: TIOW_Tau_Bck_Strike_VL
    {
        displayName = "Vior'la backpack radio";
        author = "firdon and dolf";
        mass = 50;
        maximumLoad = 260;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
    };

	class TIOW_CadKasrkinBackpack_836th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
	class TIOW_CadKasrkinBackpack_776th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
	class TIOW_CadKasrkinBackpack_700th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
	class TIOW_CadKasrkinBackpack_667th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
};