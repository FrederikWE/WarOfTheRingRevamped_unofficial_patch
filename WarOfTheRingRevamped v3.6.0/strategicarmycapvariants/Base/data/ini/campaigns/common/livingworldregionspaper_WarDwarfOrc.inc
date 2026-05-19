//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										ENEDWAITH REGION - 8 TERRITORIES - 2 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// DUNLAND SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Dunfearn
;////////////////////////////
Region Dunfearn
	DisplayName				= LW:DisplayNameDunfearn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor dunfearn"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DUNFEARN
	RegionPortrait			= MPDunfearn

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dunland
		End
		Connection
			Region		= Ost_In_Edhil
		End
		Connection
			Region		= Swanfleet
		End	
		Connection
			Region		= Tharbad
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-990 Y:570
	HeroArmySpot			= X:-1090 Y:605
	HeroArmySpot			= X:-1125 Y:575
	HeroArmySpot			= X:-1095 Y:535
	HeroArmySpot			= X:-1050 Y:535
	GarrisonArmySpot		= X:-1065 Y:570
	BuildingSpot			= X:-950 Y:560
	;BuildingSpot			= X:-890 Y:570

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Dunland
;////////////////////////////
Region Dunland
	DisplayName				= LW:DisplayNameDunland
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor dunland"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DUNLAND
	RegionPortrait			= MPDunland

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dunfearn
		End			
		Connection
			Region		= Gap_Of_Rohan
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-960 Y:412
	HeroArmySpot			= X:-1010 Y:320
	HeroArmySpot			= X:-970 Y:320
	HeroArmySpot			= X:-945 Y:350
	HeroArmySpot			= X:-920 Y:390
	GarrisonArmySpot		= X:-980 Y:370
	BuildingSpot			= X:-1020 Y:450
	;BuildingSpot			= X:-950 Y:450

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										EREBOR REGION - 9 TERRITORIES - 3 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// IRON HILLS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Ironfoot Halls
;////////////////////////////
Region Ironfoot_Halls
	DisplayName				= LW:DisplayNameIronfootsHalls
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ironfoots halls"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= IRONFOOTS_HALLS
	RegionPortrait			= MPIronfootHalls
	FertileTerritoryBonus 	= 500

	ConnectsTo			=
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Iron_Foothills
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:940 Y:1310
	HeroArmySpot			= X:910 Y:1330
	HeroArmySpot			= X:880 Y:1300
	HeroArmySpot			= X:860 Y:1255
	HeroArmySpot			= X:900 Y:1245
	GarrisonArmySpot		= X:950 Y:1350

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPEreborFortress
	FortressDisplayName			= LW:DisplayNameIronfootsHalls
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
End
;////////////////////////////
;// Iron Foothills
;////////////////////////////
Region Iron_Foothills
	DisplayName				= LW:DisplayNameIronFoothills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor iron foothills"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= IRON_FOOTHILLS
	RegionPortrait			= MPIronFoothills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Ironfoot_Halls
		End	
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Eastern_Wastes
		End	
		Connection
			Region		= Vales_Celduin
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:800 Y:1130
	HeroArmySpot			= X:700 Y:1150
	HeroArmySpot			= X:740 Y:1165
	HeroArmySpot			= X:790 Y:1180
	HeroArmySpot			= X:850 Y:1200
	GarrisonArmySpot		= X:800 Y:1160
	BuildingSpot			= X:760 Y:1080
	BuildingSpot			= X:830 Y:1130

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Iron Hills
;////////////////////////////
Region Iron_Hills
	DisplayName				= LW:DisplayNameIronHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor iron hills"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= IRON_HILLS
	RegionPortrait			= MPIronHills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End	
		Connection
			Region		= Targul
		End
		Connection
			Region		= Ironfoot_Halls
		End
		Connection
			Region		= Iron_Foothills
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:785 Y:1330
	HeroArmySpot			= X:861 Y:1391
	HeroArmySpot			= X:754 Y:1380
	HeroArmySpot			= X:827 Y:1323
	HeroArmySpot			= X:714 Y:1244
	GarrisonArmySpot		= X:780 Y:1313
	BuildingSpot			= X:726 Y:1292

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Targul
;////////////////////////////
Region Targul
	DisplayName				= LW:DisplayNameTargul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor targul"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= TARGUL
	RegionPortrait			= MPTargulQuarry

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Withered_Heath
		End		
		Connection
			Region		= Iron_Hills
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:600 Y:1360
	HeroArmySpot			= X:530 Y:1320
	HeroArmySpot			= X:570 Y:1300
	HeroArmySpot			= X:600 Y:1295
	HeroArmySpot			= X:640 Y:1320
	GarrisonArmySpot		= X:590 Y:1340
	BuildingSpot			= X:570 Y:1400
	BuildingSpot			= X:630 Y:1400

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// KINGDOM OF EREBOR AND DALE SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Eastern Wastes
;////////////////////////////
Region Eastern_Wastes
	DisplayName				= LW:DisplayNameEasternWastes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor eastern wastes"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= EASTERN_WASTES
	RegionPortrait			= MPEasternWastes

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Esgaroth
		End	
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Iron_Foothills
		End	
		Connection
			Region		= Vales_Celduin
		End				
		Connection
			Region		= Targul
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:600 Y:1145
	HeroArmySpot			= X:510 Y:1070
	HeroArmySpot			= X:570 Y:1070
	HeroArmySpot			= X:630 Y:1070
	HeroArmySpot			= X:675 Y:1085
	GarrisonArmySpot		= X:585 Y:1125
	BuildingSpot			= X:580 Y:1195

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Esgaroth
;////////////////////////////
Region Esgaroth
	DisplayName				= LW:DisplayNameEsgaroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor esgaroth"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= ESGAROTH
	RegionPortrait			= MPEsgaroth

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Vales_Celduin
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:400 Y:1200
	HeroArmySpot			= X:455 Y:1230
	HeroArmySpot			= X:450 Y:1185
	HeroArmySpot			= X:440 Y:1145
	HeroArmySpot			= X:410 Y:1110
	GarrisonArmySpot		= X:385 Y:1185

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPEreborFortress
	FortressDisplayName			= LW:DisplayNameEsgaroth
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
	

End

//-------------------------------------------------------------------------------------------------
// RIVERLANDS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Vales of Celduin
;////////////////////////////
Region Vales_Celduin
	DisplayName				= LW:DisplayNameValesofCelduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor vales of celduin"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= VALES_OF_CELDUI
	RegionPortrait			= MPValesCelduin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End	
		Connection
			Region		= Iron_Foothills
		End	
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Esgaroth
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:545 Y:875
	HeroArmySpot			= X:405 Y:940
	HeroArmySpot			= X:440 Y:910
	HeroArmySpot			= X:470 Y:875
	HeroArmySpot			= X:500 Y:840
	GarrisonArmySpot		= X:530 Y:880
	BuildingSpot			= X:590 Y:940
	BuildingSpot			= X:650 Y:880

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										ERIADOR REGION - 12 TERRITORIES - 4 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// CARDOLAN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Swanfleet
;////////////////////////////
Region Swanfleet
	DisplayName				= LW:DisplayNameSwanfleet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor swanfleet"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= SWANFLEET
	RegionPortrait			= MPSwanfleet

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Ost_In_Edhil
		End
		Connection
			Region		= Dunfearn
		End
		Connection
			Region		= Tharbad
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-870 Y:730
	HeroArmySpot			= X:-930 Y:760
	HeroArmySpot			= X:-895 Y:780
	HeroArmySpot			= X:-845 Y:795
	HeroArmySpot			= X:-810 Y:780	
	GarrisonArmySpot		= X:-870 Y:745
	BuildingSpot			= X:-875 Y:685

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Tharbad
;////////////////////////////
Region Tharbad
	DisplayName				= LW:DisplayNameTharbad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor tharbad"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= THARBAD
	RegionPortrait			= MPTharbad

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Swanfleet
		End
		Connection
			Region		= Dunfearn
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-990 Y:690
	HeroArmySpot			= X:-1020 Y:670
	HeroArmySpot			= X:-1050 Y:695
	HeroArmySpot			= X:-1015 Y:715
	HeroArmySpot			= X:-980 Y:730	
	GarrisonArmySpot		= X:-995 Y:690
	BuildingSpot			= X:-960 Y:660

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-------------------------------------------------------------------------------------------------
// EREGION SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Eregion
;////////////////////////////
Region Eregion
	DisplayName				= LW:DisplayNameEregion
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor eregion"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= EREGION
	RegionPortrait			= MPEregion

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Hollin
		End	
		Connection
			Region		= Ost_In_Edhil
		End
		Connection
			Region		= Caradhras
		End	
		Connection
			Region		= Swanfleet
		End		
		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-675 Y:874
	HeroArmySpot			= X:-630 Y:930
	HeroArmySpot			= X:-615 Y:900
	HeroArmySpot			= X:-665 Y:940
	HeroArmySpot			= X:-700 Y:930
	GarrisonArmySpot		= X:-670 Y:890
	BuildingSpot			= X:-710 Y:840

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Hollin
;////////////////////////////
Region Hollin
	DisplayName				= LW:DisplayNameHollin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor hollin"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= HOLLIN
	RegionPortrait			= MPHollin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Caradhras
		End	
		Connection
			Region		= Fords_Bruinen
		End	
		Connection
			Region		= Eregion
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-621 Y:984
	HeroArmySpot			= X:-660 Y:1020
	HeroArmySpot			= X:-710 Y:1010
	HeroArmySpot			= X:-700 Y:980
	HeroArmySpot			= X:-660 Y:980
	GarrisonArmySpot		= X:-640 Y:990
	BuildingSpot			= X:-580 Y:970

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Ost-in-Edhil
;////////////////////////////
Region Ost_In_Edhil
	DisplayName				= LW:DisplayNameOstinEdhil
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ost in edhil"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= OST_IN_EDHIL
	RegionPortrait			= MPOstInEdhil

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Dunfearn
		End				
		Connection
			Region		= Swanfleet
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:-750 Y:690
	HeroArmySpot			= X:-760 Y:785
	HeroArmySpot			= X:-715 Y:780
	HeroArmySpot			= X:-695 Y:750
	HeroArmySpot			= X:-770 Y:755
	GarrisonArmySpot		= X:-740 Y:730
	BuildingSpot			= X:-775 Y:660	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-------------------------------------------------------------------------------------------------
// RIVENDELL SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Fords of Bruinen
;////////////////////////////
Region Fords_Bruinen
	DisplayName				= LW:DisplayNameFordsofBruinen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor fords of bruinen"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORDS_OF_BRUINE
	RegionPortrait			= MPFordsOfBruinen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= High_Pass
		End	
		Connection
			Region		= Hollin
		End
		Connection
			Region		= Coldfells
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:-566 Y:1109
	HeroArmySpot			= X:-630 Y:1068
	HeroArmySpot			= X:-596 Y:1133
	HeroArmySpot			= X:-538 Y:1152
	HeroArmySpot			= X:-562 Y:1187
	BuildingSpot			= X:-566 Y:1109
	GarrisonArmySpot		= X:-576 Y:1083

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

End
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										FORODWAITH REGION - 6 TERRITORIES - 2 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// NORTHERN WASTES SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Forodwaith
;////////////////////////////
Region Forodwaith
	DisplayName				= LW:DisplayNameForodwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor forodwaith"
	SkirmishStillImage		= WOR_Forodwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORODWAITH
	RegionPortrait			= MPForodwaith

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Jotunstath
		End
		Connection
			Region		= Northtarn
		End
		Connection
			Region		= Carn_Dum
		End
		Connection
			Region		= Gundabad
		End	
		Connection
			Region		= Grey_Mountains
		End			
		
		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-491 Y:1792
	HeroArmySpot			= X:-660 Y:1994
	HeroArmySpot			= X:-303 Y:1637
	HeroArmySpot			= X:-472 Y:1710
	HeroArmySpot			= X:-602 Y:1758
	GarrisonArmySpot		= X:-491 Y:1792
	BuildingSpot			= X:-400 Y:1670

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Jotunstath
;////////////////////////////
Region Jotunstath
	DisplayName				= LW:DisplayNameJotunstath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor jotunstath"
	SkirmishStillImage		= WOR_Forodwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= JOTUNSTATH
	RegionPortrait			= MPJotunstath

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Northtarn
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-829 Y:1907
	HeroArmySpot			= X:-804 Y:1878
	HeroArmySpot			= X:-877 Y:1869
	HeroArmySpot			= X:-882 Y:1902
	HeroArmySpot			= X:-843 Y:1941
	GarrisonArmySpot		= X:-829 Y:1907
	BuildingSpot			= X:-785 Y:1946

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Northtarn
;////////////////////////////
Region Northtarn
	DisplayName				= LW:DisplayNameNorthtarn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor northtarn"
	SkirmishStillImage		= WOR_Forodwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTHTARN
	RegionPortrait			= MPNorthtarn

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carn_Dum
		End	
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Jotunstath
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-877 Y:1743
	HeroArmySpot			= X:-795 Y:1811
	HeroArmySpot			= X:-992 Y:1772
	HeroArmySpot			= X:-959 Y:1719
	HeroArmySpot			= X:-853 Y:1714
	GarrisonArmySpot		= X:-877 Y:1743
	BuildingSpot			= X:-795 Y:1763

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										MISTY MOUNTAINS REGION - 13 TERRITORIES - 4 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// ANGMAR SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Angmar
;////////////////////////////
Region Angmar
	DisplayName				= LW:DisplayNameAngmar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor angmar"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= ANGMAR
	RegionPortrait			= MPAngmar

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
		Connection
			Region		= Gundabad
		End
		Connection
			Region		= Mount_Gram
		End
		Connection
			Region		= Ettenmoors
		End	
		Connection
			Region		= Carn_Dum
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-670 Y:1530
	HeroArmySpot			= X:-735 Y:1560
	HeroArmySpot			= X:-790 Y:1540
	HeroArmySpot			= X:-820 Y:1515
	HeroArmySpot			= X:-780 Y:1500
	GarrisonArmySpot		= X:-730 Y:1530
	BuildingSpot			= X:-650 Y:1520
	BuildingSpot			= X:-600 Y:1500		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Ettenmoors
;////////////////////////////
Region Ettenmoors
	DisplayName				= LW:DisplayNameEttenmoors
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ettenmoors"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= ETTENMOORS
	RegionPortrait			= MPEttenmoors

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
		Connection
			Region		= Carn_Dum
		End
		Connection
			Region		= Angmar
		End	
		Connection
			Region		= Mount_Gram
		End
		Connection
			Region		= Coldfells
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-940 Y:1485
	HeroArmySpot			= X:-955 Y:1580
	HeroArmySpot			= X:-1025 Y:1590
	HeroArmySpot			= X:-1085 Y:1570
	HeroArmySpot			= X:-1040 Y:1525
	GarrisonArmySpot		= X:-990 Y:1550
	BuildingSpot			= X:-935 Y:1460
	BuildingSpot			= X:-905 Y:1380		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Mount Gram
;////////////////////////////
Region Mount_Gram
	DisplayName				= LW:DisplayNameMountGram
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor mount gram"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MOUNT_GRAM
	RegionPortrait			= MPMountGram

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Angmar
		End
		Connection
			Region		= Coldfells
		End
		Connection
			Region		= Ettenmoors
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-722 Y:1424
	HeroArmySpot			= X:-634 Y:1434
	HeroArmySpot			= X:-638 Y:1395
	HeroArmySpot			= X:-704 Y:1390
	HeroArmySpot			= X:-784 Y:1395
	GarrisonArmySpot		= X:-797 Y:1438
	BuildingSpot			= X:-722 Y:1424	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

End

;////////////////////////////
;// Coldfells
;////////////////////////////
Region Coldfells
	DisplayName				= LW:DisplayNameColdfells
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor coldfells"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= COLDFELLS
	RegionPortrait			= MPColdfells

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
		Connection
			Region		= Mount_Gram
		End
		Connection
			Region		= Goblin_Town
		End
		Connection
			Region		= High_Pass
		End	
		Connection
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Ettenmoors
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-635 Y:1300
	HeroArmySpot			= X:-760 Y:1330
	HeroArmySpot			= X:-710 Y:1340
	HeroArmySpot			= X:-670 Y:1345
	HeroArmySpot			= X:-720 Y:1300
	GarrisonArmySpot		= X:-675 Y:1310
	BuildingSpot			= X:-630 Y:1270
	BuildingSpot			= X:-565 Y:1265		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Carn Dum
;////////////////////////////
Region Carn_Dum
	DisplayName				= LW:DisplayNameCarnDum
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor carn dum"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= CARN_DUM
	RegionPortrait			= MPCarnDum

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
		Connection
			Region		= Northtarn
		End
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Gundabad
		End	
		Connection
			Region		= Angmar
		End
		Connection
			Region		= Ettenmoors
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-860 Y:1620
	HeroArmySpot			= X:-860 Y:1590
	HeroArmySpot			= X:-830 Y:1590
	HeroArmySpot			= X:-790 Y:1600
	HeroArmySpot			= X:-760 Y:1620
	GarrisonArmySpot		= X:-820 Y:1620
	BuildingSpot			= X:-880 Y:1640
	BuildingSpot			= X:-940 Y:1640		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// GUNDABAD SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Gundabad
;////////////////////////////
Region Gundabad
	DisplayName				= LW:DisplayNameMountGundabad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor mount gundabad"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MOUNT_GUNDABAD
	RegionPortrait			= MPGundabad

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			= 
		Connection
			Region		= Carn_Dum
		End
		Connection
			Region		= Angmar
		End
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= Forodwaith
		End				
		Connection
			Region		= Goblin_Town
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-540 Y:1575
	HeroArmySpot			= X:-680 Y:1617
	HeroArmySpot			= X:-640 Y:1618
	HeroArmySpot			= X:-536 Y:1574
	HeroArmySpot			= X:-500 Y:1539
	GarrisonArmySpot		= X:-562 Y:1590		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMountGundabad
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	

End

;////////////////////////////
;// Grey Mountains
;////////////////////////////
Region Grey_Mountains
	DisplayName				= LW:DisplayNameGreyMountains
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor grey mountains"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= GREY_MOUNTAINS
	RegionPortrait			= MPGreyMountains

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Withered_Heath
		End
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= Gundabad
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-205 Y:1510
	HeroArmySpot			= X:-249 Y:1504
	HeroArmySpot			= X:-284 Y:1478
	HeroArmySpot			= X:-335 Y:1505
	HeroArmySpot			= X:-238 Y:1500
	GarrisonArmySpot		= X:-325 Y:1484
	BuildingSpot			= X:-117 Y:1522
	BuildingSpot			= X:-60 Y:1538		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Withered Heath
;////////////////////////////
Region Withered_Heath
	DisplayName				= LW:DisplayNameWitheredHeath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor withered heath"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= WITHERED_HEATH
	RegionPortrait			= MPWitheredHeath

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
		Connection
			Region		= Grey_Mountains
		End	
		Connection
			Region		= Targul
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:365 Y:1515
	HeroArmySpot			= X:150 Y:1530
	HeroArmySpot			= X:190 Y:1495
	HeroArmySpot			= X:240 Y:1460
	HeroArmySpot			= X:355 Y:1465
	GarrisonArmySpot		= X:265 Y:1505
	BuildingSpot			= X:390 Y:1520
	BuildingSpot			= X:470 Y:1520		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-------------------------------------------------------------------------------------------------
// HIGH PASS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// High Pass
;////////////////////////////
Region High_Pass
	DisplayName				= LW:DisplayNameFoundations
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR foundations of stone"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= HIGH_PASS
	RegionPortrait			= MPFoundations

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Old_Ford_Anduin
		End			
		Connection
			Region		= Coldfells
		End	
		Connection
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Goblin_Town
		End		
		Connection
			Region		= Caradhras
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-395 Y:1215
	HeroArmySpot			= X:-465 Y:1213
	HeroArmySpot			= X:-415 Y:1220
	HeroArmySpot			= X:-383 Y:1215
	HeroArmySpot			= X:-337 Y:1173
	GarrisonArmySpot		= X:-336 Y:1200
	BuildingSpot			= X:-358 Y:1208

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

Region Goblin_Town
	DisplayName				= LW:DisplayNameGoblinTown
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor goblin town"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= GOBLIN_TOWN
	RegionPortrait			= MPGoblinTown

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Coldfells
		End
		Connection
			Region		= High_Pass
		End	
		Connection
			Region		= Gundabad
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-462 Y:1286
	HeroArmySpot			= X:-410 Y:1280
	HeroArmySpot			= X:-500 Y:1270
	HeroArmySpot			= X:-436 Y:1295
	HeroArmySpot			= X:-518 Y:1252
	GarrisonArmySpot		= X:-462 Y:1286
	BuildingSpot			= X:-500 Y:1300

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

//-------------------------------------------------------------------------------------------------
// MORIA SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Caradhras
;////////////////////////////
Region Caradhras
	DisplayName				= LW:DisplayNameSilvertine
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor silvertine"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= CARADHRAS
	RegionPortrait			= MPSilvertine

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dimrill_Dale
		End		
		Connection
			Region		= Eregion
		End	
		Connection
			Region		= Hollin
		End				
		Connection
			Region		= Taur_Hith
		End			
		Connection
			Region		= High_Pass
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-509 Y:827
	HeroArmySpot			= X:-449 Y:810
	HeroArmySpot			= X:-468 Y:753
	HeroArmySpot			= X:-528 Y:801
	HeroArmySpot			= X:-598 Y:846
	GarrisonArmySpot		= X:-509 Y:827
	BuildingSpot			= X:-555 Y:873

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

End

;////////////////////////////
;// Dimrill Dale
;////////////////////////////
Region Dimrill_Dale
	DisplayName				= LW:DisplayNameDimrillDale
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor dimrill dale"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaGood23
	SubObject				= DIMRILL_DALE
	RegionPortrait			= MPDimrillDale

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Caradhras
		End
		Connection
			Region		= Moria
		End
		Connection
			Region		= Nan_Celebrant
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:-532 Y:716
	HeroArmySpot			= X:-553 Y:747
	HeroArmySpot			= X:-517 Y:741
	HeroArmySpot			= X:-561 Y:696
	HeroArmySpot			= X:-555 Y:720
	GarrisonArmySpot		= X:-532 Y:716
	BuildingSpot			= X:-539 Y:696

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Moria
;////////////////////////////
Region Moria
	DisplayName				= LW:DisplayNameMoria
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor moria"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MORIA
	RegionPortrait			= MPMoria

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= 500

	ConnectsTo			=
		Connection
			Region		= Dimrill_Dale
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-611 Y:750
	HeroArmySpot			= X:-599 Y:711
	HeroArmySpot			= X:-646 Y:738
	HeroArmySpot			= X:-638 Y:731
	HeroArmySpot			= X:-577 Y:770
	GarrisonArmySpot		= X:-611 Y:750
	BuildingSpot			= X:-600 Y:787

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// 										ROHAN REGION - 15 TERRITORIES - 4 SUB-REGIONS
//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// ISENGARD SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Eaves of Fangorn
;////////////////////////////
Region Eaves_Fangorn
	DisplayName				= LW:DisplayNameEavesofFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor eaves of fangorn"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAVES_OF_FANGOR
	RegionPortrait			= MPEavesOfFangorn

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Westfold
		End		
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Fangorn
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-620 Y:400
	HeroArmySpot			= X:-610 Y:380
	HeroArmySpot			= X:-580 Y:365
	HeroArmySpot			= X:-575 Y:395
	HeroArmySpot			= X:-600 Y:420
	GarrisonArmySpot		= X:-605 Y:395
	BuildingSpot			= X:-650 Y:395		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Fords of Isen
;////////////////////////////
Region Fords_Isen
	DisplayName				= LW:DisplayNameFordsofIsen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fords of Isen"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORDS_OF_ISEN
	RegionPortrait			= MPFordsOfIsen

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Eaves_Fangorn
		End		
		Connection
			Region		= Westfold
		End
		Connection
			Region		= Gap_Of_Rohan
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-735 Y:335
	HeroArmySpot			= X:-750 Y:365
	HeroArmySpot			= X:-720 Y:365
	HeroArmySpot			= X:-710 Y:335
	HeroArmySpot			= X:-720 Y:300
	GarrisonArmySpot		= X:-730 Y:350
	BuildingSpot			= X:-755 Y:315		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Gap of Rohan
;////////////////////////////
Region Gap_Of_Rohan
	DisplayName				= LW:DisplayNameGapofRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Gap of Rohan"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= GAP_OF_ROHAN
	RegionPortrait			= MPGapOfRohan

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Fords_Isen
		End		
		Connection
			Region		= Dunland
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-850 Y:330
	HeroArmySpot			= X:-850 Y:370
	HeroArmySpot			= X:-820 Y:350
	HeroArmySpot			= X:-810 Y:310
	HeroArmySpot			= X:-840 Y:310
	GarrisonArmySpot		= X:-850 Y:340
	BuildingSpot			= X:-880 Y:320		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Westfold
;////////////////////////////
Region Westfold
	DisplayName				= LW:DisplayNameWestfold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Westfold"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= WESTFOLD
	RegionPortrait			= MPWestfold

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Eaves_Fangorn
		End		
		Connection
			Region		= Fords_Isen
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-670 Y:305
	HeroArmySpot			= X:-670 Y:340
	HeroArmySpot			= X:-640 Y:350
	HeroArmySpot			= X:-610 Y:345
	HeroArmySpot			= X:-580 Y:330
	GarrisonArmySpot		= X:-650 Y:325
	BuildingSpot			= X:-700 Y:255		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										RHOVANION REGION - 24 TERRITORIES - 5 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// ANDUIN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Vale of Anduin
;////////////////////////////
Region Vale_Anduin
	DisplayName				= LW:DisplayNameValeAnduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor vale of anduin"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= VALE_OF_ANDUIN
	RegionPortrait			= MPValeAnduin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Old_Ford_Anduin
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Taur_Hith
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-195 Y:940
	HeroArmySpot			= X:-195 Y:990
	HeroArmySpot			= X:-155 Y:990
	HeroArmySpot			= X:-130 Y:960
	HeroArmySpot			= X:-130 Y:930
	GarrisonArmySpot		= X:-185 Y:955
	BuildingSpot			= X:-240 Y:915

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Carrock
;////////////////////////////
Region Carrock
	DisplayName				= LW:DisplayNameCarrock
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the carrock"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_CARROCK
	RegionPortrait			= MPCarrock

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= Old_Ford_Anduin
		End	
		Connection
			Region		= High_Pass
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-190 Y:1205
	HeroArmySpot			= X:-210 Y:1130
	HeroArmySpot			= X:-160 Y:1140
	HeroArmySpot			= X:-130 Y:1160
	HeroArmySpot			= X:-130 Y:1190
	GarrisonArmySpot		= X:-190 Y:1170
	BuildingSpot			= X:-240 Y:1270
	BuildingSpot			= X:-170 Y:1270

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Framsburg
;////////////////////////////
Region Framsburg
	DisplayName				= LW:DisplayNameFramsburg
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Framsburg"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= FRAMSBURG
	RegionPortrait			= MPFramsburg

	;ResourceBonus			= 0
	;LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 		= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo				=
        Connection
			Region = Grey_Mountains
		End
        Connection
			Region = Carrock
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-240 Y:1380
    HeroArmySpot			= X:-280 Y:1330
    HeroArmySpot			= X:-240 Y:1340
    HeroArmySpot			= X:-200 Y:1340    
    HeroArmySpot			= X:-190 Y:1370
    GarrisonArmySpot		= X:-240 Y:1370

    CPLimit					= 1000
    AllyCPLimit				= 500
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPRohanFortress
	FortressDisplayName			= LW:DisplayNameFramsburg
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

End
;////////////////////////////
;// Gladden Fields
;////////////////////////////
Region Gladden_Fields
	DisplayName				= LW:DisplayNameGladdenFields
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Gladden Fields"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= GLADDEN_FIELDS
	RegionPortrait			= MPGladdenFields

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Vale_Anduin
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Taur_Hith
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-205 Y:790
	HeroArmySpot			= X:-210 Y:850
	HeroArmySpot			= X:-170 Y:850
	HeroArmySpot			= X:-165 Y:820
	HeroArmySpot			= X:-230 Y:820
	GarrisonArmySpot		= X:-200 Y:800
	BuildingSpot			= X:-215 Y:745

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Old Fords of Anduin
;////////////////////////////
Region Old_Ford_Anduin
	DisplayName				= LW:DisplayNameOldFordAnduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor old ford of anduin"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= OLD_FORD_OF_AND
	RegionPortrait			= MPOldFordAnduin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= High_Pass
		End
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Vale_Anduin
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-155 Y:1060
	HeroArmySpot			= X:-200 Y:1030
	HeroArmySpot			= X:-150 Y:1030
	HeroArmySpot			= X:-105 Y:1040
	HeroArmySpot			= X:-90 Y:1065
	GarrisonArmySpot		= X:-135 Y:1050
	BuildingSpot			= X:-185 Y:1070

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
//-------------------------------------------------------------------------------------------------
// BROWN LANDS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Fangorn
;////////////////////////////
Region Fangorn
	DisplayName				= LW:DisplayNameFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fangorn"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= FANGORN
	RegionPortrait			= MPFangorn

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Nan_Celebrant
		End
		Connection
			Region		= Eaves_Fangorn
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-540 Y:470
	HeroArmySpot			= X:-550 Y:425
	HeroArmySpot			= X:-520 Y:405
	HeroArmySpot			= X:-470 Y:405
	HeroArmySpot			= X:-470 Y:440
	GarrisonArmySpot		= X:-520 Y:450
	BuildingSpot			= X:-570 Y:500

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
//-------------------------------------------------------------------------------------------------
// LOTHLORIEN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Field of Celebrant
;////////////////////////////
Region Field_Celebrant
	DisplayName				= LW:DisplayNameFieldCelebrant
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Field of Celebrant"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= FIELD_OF_CELEBR
	RegionPortrait			= MPFieldCelebrant

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Nan_Celebrant
		End
		Connection
			Region		= Taur_Hith
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-280 Y:635
	HeroArmySpot			= X:-300 Y:690
	HeroArmySpot			= X:-240 Y:680
	HeroArmySpot			= X:-180 Y:680
	HeroArmySpot			= X:-200 Y:645
	GarrisonArmySpot		= X:-260 Y:650
	BuildingSpot			= X:-310 Y:610

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Nan_Celebrant
;////////////////////////////
Region Nan_Celebrant
	DisplayName				= LW:DisplayNameNanCelebrant
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor nan celebrant"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= NIMRODEL
	RegionPortrait			= MPNanCelebrant

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Fangorn
		End
		Connection
			Region		= Dimrill_Dale
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-465 Y:600
	HeroArmySpot			= X:-515 Y:645
	HeroArmySpot			= X:-480 Y:635
	HeroArmySpot			= X:-440 Y:635
	HeroArmySpot			= X:-425 Y:610
	GarrisonArmySpot		= X:-470 Y:605
	BuildingSpot			= X:-475 Y:575

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Taur Hithlin
;////////////////////////////
Region Taur_Hith
	DisplayName				= LW:DisplayNameTaurHithlin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor taur hithlin"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= TAUR_HITH
	RegionPortrait			= MPTaurHithlin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Vale_Anduin
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Caradhras
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-320 Y:790
	HeroArmySpot			= X:-300 Y:850
	HeroArmySpot			= X:-285 Y:820
	HeroArmySpot			= X:-290 Y:780
	HeroArmySpot			= X:-300 Y:750
	GarrisonArmySpot		= X:-310 Y:790
	BuildingSpot			= X:-340 Y:810

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
//-------------------------------------------------------------------------------------------------
// WOODLAND REALM SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Mirkwood
;////////////////////////////
Region Mirkwood
	DisplayName				= LW:DisplayNameMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mirkwood"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= MIRKWOOD
	RegionPortrait			= MPMirkwood

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Old_Ford_Anduin
		End
		Connection
			Region		= Vales_Celduin
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:149 Y:994
	HeroArmySpot			= X:110 Y:855
	HeroArmySpot			= X:115 Y:795
	HeroArmySpot			= X:175 Y:775
	HeroArmySpot			= X:235 Y:790
	GarrisonArmySpot		= X:160 Y:840
	BuildingSpot			= X:50 Y:1050
	BuildingSpot			= X:160 Y:1050

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: EREBOR
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Iron Hills
ConcurrentRegionBonus
	Territory				= LW:SubRegionIronHills
	;EffectName				= EREBOR
	Regions					= Ironfoot_Halls Iron_Foothills Iron_Hills Targul
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:860 Y:1240
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End
;// Sub-Region : Kingdom of Erebor and Dale
ConcurrentRegionBonus
	Territory				= LW:SubRegionEreborDale
	;EffectName				= EREBOR
	Regions					= Eastern_Wastes Esgaroth
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:520 Y:1280
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End
;// Sub-Region : Riverlands
ConcurrentRegionBonus
	Territory				= LW:SubRegionRiverlands
	;EffectName				= EREBOR
	Regions					= Vales_Celduin
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:850 Y:930
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.18
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryErebor
	;EffectName				= EREBOR
	Regions					= Ironfoot_Halls Iron_Foothills Iron_Hills Targul Eastern_Wastes Esgaroth Vales_Celduin
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	ExtraStartResourcesBonus = 200
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:860 Y:1200
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.3
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: MISTY MOUNTAINS
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Angmar
ConcurrentRegionBonus
	Territory				= LW:SubRegionAngmar
	;EffectName				= 
	Regions					= Angmar Ettenmoors Mount_Gram Coldfells Carn_Dum
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-820 Y:1515
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Sub-Region : Gundabad
ConcurrentRegionBonus
	Territory				= LW:SubRegionGundabad
	;EffectName				= 
	Regions					= Gundabad Grey_Mountains Withered_Heath
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-130 Y:1825
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.3
End

;// Sub-Region : High_Pass
ConcurrentRegionBonus
	Territory				= LW:SubRegionHighPass
	;EffectName				= 
	Regions					= Goblin_Town High_Pass
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-420 Y:1213
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.10
End

;// Sub-Region : Moria
ConcurrentRegionBonus
	Territory				= LW:SubRegionMoria
	;EffectName				= 
	Regions					= Caradhras Dimrill_Dale Moria
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-570 Y:799
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.1
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryMistyMountains
	;EffectName				= MISTY_MOUNTAINS
	Regions					= Angmar Ettenmoors Mount_Gram Coldfells Carn_Dum Gundabad Grey_Mountains Withered_Heath Goblin_Town High_Pass Caradhras Dimrill_Dale Moria
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	BuildingDiscountBonus 	= 200
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-541 Y:1390
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.39
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: RHOVANION
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Anduin
ConcurrentRegionBonus
	Territory				= LW:SubRegionAnduin
	;EffectName				= 
	Regions					= Vale_Anduin Carrock Framsburg Gladden_Fields Old_Ford_Anduin
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-250 Y:1240
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.32
End

;// Sub-Region : Lothlorien
ConcurrentRegionBonus
	Territory				= LW:SubRegionLothlorien
	;EffectName				= 
	Regions					= Field_Celebrant Nan_Celebrant Taur_Hith Fangorn
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-370 Y:675
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryRhovanion
	;EffectName				= RHUN
	Regions					= Vale_Anduin Carrock Framsburg Gladden_Fields Old_Ford_Anduin Fangorn Field_Celebrant Nan_Celebrant Taur_Hith Mirkwood
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 5
	DiscountedBarracksUnitsBonus = 100
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:50 Y:1140
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.49
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: ROHAN
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// Sub-Region : Isengard
ConcurrentRegionBonus
	Territory				= LW:SubRegionIsengard
	;EffectName				= 
	Regions					= Eaves_Fangorn Fords_Isen Gap_Of_Rohan Westfold
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-800 Y:355
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.13
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: FORODWAITH
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// Sub-Region : Northern Wastes
ConcurrentRegionBonus
	Territory				= LW:SubRegionNorthernWastes
	;EffectName				= 
	Regions					= Forodwaith Jotunstath Northtarn
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-700 Y:2000
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.25
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: ERIADOR
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Cardolan
ConcurrentRegionBonus
	Territory				= LW:SubRegionCardolan
	;EffectName				= 
	Regions					= Swanfleet Tharbad
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 5
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1520 Y:570
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.25
End

;// Sub-Region : Eregion
ConcurrentRegionBonus
	Territory				= LW:SubRegionEregion
	;EffectName				= 
	Regions					= Eregion Hollin Ost_In_Edhil
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-850 Y:820
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.20
End