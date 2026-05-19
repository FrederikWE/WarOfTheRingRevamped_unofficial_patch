//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										ARNOR REGION - 12 TERRITORIES - 4 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// ARTHEDAIN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Annuminas
;////////////////////////////
Region Annuminas
	DisplayName				= LW:DisplayNameAnnuminas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor annuminas"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANNUMINAS
	RegionPortrait			= MPAnnuminas

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Fornost
		End		
		Connection
			Region		= Grey_Havens
		End			
		Connection
			Region		= Hills_Evendim
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= The_Shire
		End
		Connection
			Region		= Tower_Hills
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1491 Y:1224
	HeroArmySpot			= X:-1600 Y:1250
	HeroArmySpot			= X:-1570 Y:1250
	HeroArmySpot			= X:-1600 Y:1220
	HeroArmySpot			= X:-1570 Y:1220
	GarrisonArmySpot		= X:-1540 Y:1250
	BuildingSpot			= X:-1405 Y:1280
	BuildingSpot			= X:-1370 Y:1230	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Fornost
;////////////////////////////
Region Fornost
	DisplayName				= LW:DisplayNameFornost
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fornost"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORNOST
	RegionPortrait			= MPDeadmansDike

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Annuminas
		End	
		Connection
			Region		= Buckland
		End		
		Connection
			Region		= North_Downs
		End		
		Connection
			Region		= Weather_Hills
		End
		Connection
			Region		= The_Shire
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1240 Y:1250
	HeroArmySpot			= X:-1240 Y:1260
	HeroArmySpot			= X:-1210 Y:1260
	HeroArmySpot			= X:-1240 Y:1230
	HeroArmySpot			= X:-1210 Y:1230
	GarrisonArmySpot		= X:-1250 Y:1260
	BuildingSpot			= X:-1290 Y:1230	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Hills of Evendim
;////////////////////////////
Region Hills_Evendim
	DisplayName				= LW:DisplayNameHillsofEvendim
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor hills of evendim"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= HILLS_OF_EVENDI
	RegionPortrait			= MPHillsEvendim

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Annuminas
		End
		Connection
			Region		= Ered_Luin_Highlands
		End		
		Connection
			Region		= Ettenmoors
		End		
		Connection
			Region		= Grey_Havens
		End		
		Connection
			Region		= Ice_Bay_Of_Forochel
		End
		Connection
			Region		= tuli_Ma
		End	
		Connection
			Region		= North_Downs
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1430 Y:1440
	HeroArmySpot			= X:-1420 Y:1470
	HeroArmySpot			= X:-1390 Y:1470
	HeroArmySpot			= X:-1420 Y:1440
	HeroArmySpot			= X:-1390 Y:1440
	GarrisonArmySpot		= X:-1360 Y:1470
	BuildingSpot			= X:-1545 Y:1460
	BuildingSpot			= X:-1545 Y:1400	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// North Downs
;////////////////////////////
Region North_Downs
	DisplayName				= LW:DisplayNameNorthDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR North Downs"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTH_DOWNS
	RegionPortrait			= MPNorthDowns

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Annuminas
		End	
		Connection
			Region		= Ettenmoors
		End		
		Connection
			Region		= Fornost
		End		
		Connection
			Region		= Hills_Evendim
		End	
		Connection
			Region		= Weather_Hills
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1120 Y:1410
	HeroArmySpot			= X:-1200 Y:1400
	HeroArmySpot			= X:-1170 Y:1400
	HeroArmySpot			= X:-1200 Y:1370
	HeroArmySpot			= X:-1170 Y:1370
	GarrisonArmySpot		= X:-1140 Y:1400
	BuildingSpot			= X:-1100 Y:1470	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// BREE-LAND SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Barrow-downs
;////////////////////////////
Region Barrow_Downs
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor barrow downs"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= BARROW_DOWNS
	RegionPortrait			= MPBarrowDowns

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Bree
		End	
		Connection
			Region		= Weathertop
		End		
		Connection
			Region		= Cardolan
		End		
		Connection
			Region		= Minhiriath
		End	
		Connection
			Region		= Sarn_Ford
		End
		Connection
			Region		= Old_Forest
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1230 Y:940
	HeroArmySpot			= X:-1175 Y:990
	HeroArmySpot			= X:-1130 Y:970
	HeroArmySpot			= X:-1100 Y:940
	HeroArmySpot			= X:-1140 Y:920
	GarrisonArmySpot		= X:-1180 Y:955
	BuildingSpot			= X:-1270 Y:900
	BuildingSpot			= X:-1320 Y:900		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Bree
;////////////////////////////
Region Bree
	DisplayName				= LW:DisplayNameBree
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor bree"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= BREE
	RegionPortrait			= MPBree

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Buckland
		End	
		Connection
			Region		= Weather_Hills
		End		
		Connection
			Region		= Weathertop
		End		
		Connection
			Region		= Barrow_Downs
		End	
		Connection
			Region		= Old_Forest
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1200 Y:1060
	HeroArmySpot			= X:-1255 Y:1065
	HeroArmySpot			= X:-1230 Y:1045
	HeroArmySpot			= X:-1200 Y:1054
	HeroArmySpot			= X:-1170 Y:1074
	GarrisonArmySpot		= X:-1230 Y:1060
	BuildingSpot			= X:-1171 Y:1071	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Sarn Ford
;////////////////////////////
Region Sarn_Ford
	DisplayName				= LW:DisplayNameSarnFord
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor sarn ford"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= SARN_FORD
	RegionPortrait			= MPSarnFord

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= The_Shire
		End	
		Connection
			Region		= Old_Forest
		End		
		Connection
			Region		= Barrow_Downs
		End		
		Connection
			Region		= Minhiriath
		End	
		Connection
			Region		= Harlindon
		End
		Connection
			Region		= Tower_Hills
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1490 Y:875
	HeroArmySpot			= X:-1490 Y:980
	HeroArmySpot			= X:-1450 Y:970
	HeroArmySpot			= X:-1405 Y:960
	HeroArmySpot			= X:-1420 Y:920
	GarrisonArmySpot		= X:-1480 Y:910
	BuildingSpot			= X:-1550 Y:800
	BuildingSpot			= X:-1485 Y:790		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-------------------------------------------------------------------------------------------------
// THE SHIRE SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Buckland
;////////////////////////////
Region Buckland
	DisplayName				= LW:DisplayNameBuckland
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor buckland"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= BUCKLAND
	RegionPortrait			= MPBuckland

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Fornost
		End	
		Connection
			Region		= Weather_Hills
		End		
		Connection
			Region		= Bree
		End		
		Connection
			Region		= Old_Forest
		End	
		Connection
			Region		= The_Shire
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1260 Y:1145
	HeroArmySpot			= X:-1230 Y:1185
	HeroArmySpot			= X:-1200 Y:1155
	HeroArmySpot			= X:-1230 Y:1130
	HeroArmySpot			= X:-1270 Y:1115
	GarrisonArmySpot		= X:-1235 Y:1150
	BuildingSpot			= X:-1290 Y:1145	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// The Shire
;////////////////////////////
Region The_Shire
	DisplayName				= LW:DisplayNameTheShire
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the shire"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_SHIRE
	RegionPortrait			= MPShire

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Annuminas
		End	
		Connection
			Region		= Fornost
		End		
		Connection
			Region		= Buckland
		End		
		Connection
			Region		= Old_Forest
		End	
		Connection
			Region		= Sarn_Ford
		End
		Connection
			Region		= Tower_Hills
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1465 Y:1090
	HeroArmySpot			= X:-1495 Y:1045
	HeroArmySpot			= X:-1450 Y:1035
	HeroArmySpot			= X:-1415 Y:1030
	HeroArmySpot			= X:-1430 Y:1065
	GarrisonArmySpot		= X:-1475 Y:1075
	BuildingSpot			= X:-1470 Y:1120	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// The Old Forest
;////////////////////////////
Region Old_Forest
	DisplayName				= LW:DisplayNameTheOldForest
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the old forest"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_OLD_FOREST
	RegionPortrait			= MPOldForest

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= The_Shire
		End	
		Connection
			Region		= Buckland
		End		
		Connection
			Region		= Bree
		End		
		Connection
			Region		= Barrow_Downs
		End	
		Connection
			Region		= Sarn_Ford
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1335 Y:1030
	HeroArmySpot			= X:-1390 Y:1060
	HeroArmySpot			= X:-1360 Y:1070
	HeroArmySpot			= X:-1330 Y:1060
	HeroArmySpot			= X:-1305 Y:1030
	GarrisonArmySpot		= X:-1350 Y:1050
	BuildingSpot			= X:-1330 Y:1010	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-------------------------------------------------------------------------------------------------
// WEATHER HILLS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Weather Hills
;////////////////////////////
Region Weather_Hills
	DisplayName				= LW:DisplayNameWeatherHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor weather hills"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= WEATHER_HILLS
	RegionPortrait			= MPWeatherHills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= North_Downs
		End	
		Connection
			Region		= Ettenmoors
		End		
		Connection
			Region		= Rhudaur
		End		
		Connection
			Region		= Weathertop
		End	
		Connection
			Region		= Bree
		End
		Connection
			Region		= Buckland
		End	
		Connection
			Region		= Fornost
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1020 Y:1220
	HeroArmySpot			= X:-1000 Y:1295
	HeroArmySpot			= X:-950 Y:1310
	HeroArmySpot			= X:-910 Y:1285
	HeroArmySpot			= X:-900 Y:1245
	GarrisonArmySpot		= X:-975 Y:1250
	BuildingSpot			= X:-1045 Y:1205
	BuildingSpot			= X:-1105 Y:1175	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Weathertop
;////////////////////////////
Region Weathertop
	DisplayName				= LW:DisplayNameWeathertop
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor weathertop"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= WEATHERTOP
	RegionPortrait			= MPWeathertop

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Weather_Hills
		End			
		Connection
			Region		= Rhudaur
		End		
		Connection
			Region		= Trollshaws
		End	
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Barrow_Downs
		End	
		Connection
			Region		= Bree
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-990 Y:1010
	HeroArmySpot			= X:-1080 Y:1060
	HeroArmySpot			= X:-1040 Y:1090
	HeroArmySpot			= X:-990 Y:1100
	HeroArmySpot			= X:-950 Y:1090
	GarrisonArmySpot		= X:-1000 Y:1060
	BuildingSpot			= X:-1030 Y:960
	BuildingSpot			= X:-970 Y:960	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
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
			Region		= Cardolan
		End	
		Connection
			Region		= Dunland
		End
		Connection
			Region		= Greyflood
		End
		Connection
			Region		= Minhiriath
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
			Region		= Enedwaith
		End			
		Connection
			Region		= Frecalund
		End			
		Connection
			Region		= Gap_Of_Rohan
		End	
		Connection
			Region		= Greyflood
		End
		Connection
			Region		= Regnfells
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

;////////////////////////////
;// Wulfborg
;////////////////////////////
Region Wulfborg
	DisplayName				= LW:DisplayNameWulfborg
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor wulfborg"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= WULFBORG
	RegionPortrait			= MPWulfborg

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Druwaith_Iaur
		End
		Connection
			Region		= Enedwaith
		End		
		Connection
			Region		= Frecalund
		End			


	CustomCenterPoint		= Yes
	CenterPoint				= X:-1082 Y:198
	HeroArmySpot			= X:-1110 Y:240
	HeroArmySpot			= X:-1070 Y:240
	HeroArmySpot			= X:-1050 Y:210
	HeroArmySpot			= X:-1080 Y:225
	GarrisonArmySpot		= X:-1090 Y:170

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameWulfborg
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold		

End

;////////////////////////////
;// Frecalund
;////////////////////////////
Region Frecalund
	DisplayName				= LW:DisplayNameFrecalund
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor frecalund"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= FRECALUND
	RegionPortrait			= MPFrecalund

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
			Region		= Enedwaith
		End			
		Connection
			Region		= Regnfells
		End			
		Connection
			Region		= Wulfborg
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-977 Y:212
	HeroArmySpot			= X:-1050 Y:280
	HeroArmySpot			= X:-1000 Y:260
	HeroArmySpot			= X:-970 Y:250
	HeroArmySpot			= X:-940 Y:250
	GarrisonArmySpot		= X:-980 Y:220
	BuildingSpot			= X:-985 Y:170

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Regnfells
;////////////////////////////
Region Regnfells
	DisplayName				= LW:DisplayNameRegnfells
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor regnfells"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= REGNFELLS
	RegionPortrait			= MPRegnfells

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Frecalund
		End
		Connection
			Region		= Dunland
		End		
		Connection
			Region		= Gap_Of_Rohan
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-888 Y:205
	HeroArmySpot			= X:-910 Y:270
	HeroArmySpot			= X:-880 Y:270
	HeroArmySpot			= X:-845 Y:265
	HeroArmySpot			= X:-900 Y:240
	GarrisonArmySpot			= X:-890 Y:220
	BuildingSpot			= X:-890 Y:180

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// ENEDWAITH SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Enedwaith
;////////////////////////////
Region Enedwaith
	DisplayName				= LW:DisplayNameEnedwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor enedwaith"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= ENEDWAITH
	RegionPortrait			= MPEnedwaith

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Greyflood
		End
		Connection
			Region		= Dunland
		End		
		Connection
			Region		= Frecalund
		End
		Connection
			Region		= Wulfborg
		End
		Connection
			Region		= Druwaith_Iaur
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1230 Y:300
	HeroArmySpot			= X:-1225 Y:270
	HeroArmySpot			= X:-1180 Y:270
	HeroArmySpot			= X:-1150 Y:295
	HeroArmySpot			= X:-1100 Y:320
	GarrisonArmySpot			= X:-1150 Y:330
	BuildingSpot			= X:-1340 Y:290
	BuildingSpot			= X:-1360 Y:230

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Greyflood
;////////////////////////////
Region Greyflood
	DisplayName				= LW:DisplayNameGreyflood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor greyflood"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= GREYFLOOD
	RegionPortrait			= MPGreyflood

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Minhiriath
		End
		Connection
			Region		= Dunfearn
		End		
		Connection
			Region		= Dunland
		End
		Connection
			Region		= Enedwaith
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1230 Y:440
	HeroArmySpot			= X:-1200 Y:395
	HeroArmySpot			= X:-1150 Y:410
	HeroArmySpot			= X:-1110 Y:440
	HeroArmySpot			= X:-1130 Y:480
	GarrisonArmySpot			= X:-1170 Y:440
	BuildingSpot			= X:-1270 Y:440
	BuildingSpot			= X:-1340 Y:420

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Druwaith Iaur
;////////////////////////////
Region Druwaith_Iaur
	DisplayName				= LW:DisplayNameDruwaithIaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor druwaith iaur"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DRUWAITH_IAUR
	RegionPortrait			= MPDruwaithIaur

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Andrast
		End
		Connection
			Region		= Enedwaith
		End		
		Connection
			Region		= Wulfborg
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1320 Y:80
	HeroArmySpot			= X:-1285 Y:200
	HeroArmySpot			= X:-1250 Y:200
	HeroArmySpot			= X:-1210 Y:205
	HeroArmySpot			= X:-1200 Y:155
	GarrisonArmySpot			= X:-1280 Y:130
	BuildingSpot			= X:-1340 Y:55
	BuildingSpot			= X:-1345 Y:-25

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
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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
		Connection
			Region		= Carnen
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
			Region		= Erebor
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
			Region		= Erebor
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
		Connection
			Region		= Erebor
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Taur_En_Morvith
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

;////////////////////////////
;// Erebor
;////////////////////////////
Region Erebor
	DisplayName				= LW:DisplayNameErebor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Erebor"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= EREBOR
	RegionPortrait			= MPErebor

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
			Region		= Esgaroth
		End	
		Connection
			Region		= Targul
		End	
		Connection
			Region		= Taur_Na_Faroth
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Withered_Heath
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:385 Y:1360
	HeroArmySpot			= X:472 Y:1402
	HeroArmySpot			= X:462 Y:1356
	HeroArmySpot			= X:457 Y:1310
	HeroArmySpot			= X:346 Y:1375
	GarrisonArmySpot		= X:295 Y:1322

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPEreborFortress
	FortressDisplayName			= LW:DisplayNameErebor
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	

End

//-------------------------------------------------------------------------------------------------
// RIVERLANDS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Carnen
;////////////////////////////
Region Carnen
	DisplayName				= LW:DisplayNameCarnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor carnen"
	SkirmishStillImage		= WOR_Erebor
	SkirmishMusicTrack		= SX_BFME2_Ex1Dwarf01
	SubObject				= CARNEN
	RegionPortrait			= MPCarnen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Rhun
		End
		Connection
			Region		= Dorwinion
		End		
		Connection
			Region		= Iron_Foothills
		End	
		Connection
			Region		= Vales_Celduin
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:975 Y:985
	HeroArmySpot			= X:890 Y:920
	HeroArmySpot			= X:950 Y:920
	HeroArmySpot			= X:1010 Y:930
	HeroArmySpot			= X:1070 Y:945
	GarrisonArmySpot		= X:985 Y:970
	BuildingSpot			= X:905 Y:1040
	BuildingSpot			= X:1025 Y:1050

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
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
			Region		= Carnen
		End
		Connection
			Region		= Dorwinion
		End	
		Connection
			Region		= East_Bight
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Taur_En_Morvith
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
;// Cardolan
;////////////////////////////
Region Cardolan
	DisplayName				= LW:DisplayNameCardolan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor cardolan"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= CARDOLAN
	RegionPortrait			= MPCardolan

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End	
		Connection
			Region		= Weathertop
		End
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= The_Angle
		End
		Connection
			Region		= Swanfleet
		End	
		Connection
			Region		= Tharbad
		End
		Connection
			Region		= Dunfearn
		End
		Connection
			Region		= Minhiriath
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1100 Y:795
	HeroArmySpot			= X:-1060 Y:850
	HeroArmySpot			= X:-995 Y:860
	HeroArmySpot			= X:-935 Y:855
	HeroArmySpot			= X:-965 Y:810	
	GarrisonArmySpot		= X:-1055 Y:820
	BuildingSpot			= X:-1135 Y:785
	BuildingSpot			= X:-1215 Y:780

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Minhiriath
;////////////////////////////
Region Minhiriath
	DisplayName				= LW:DisplayNameMinhiriath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor minhiriath"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= MINHIRIATH
	RegionPortrait			= MPMinhiriath

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Harlindon
		End	
		Connection
			Region		= Sarn_Ford
		End
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Dunfearn
		End	
		Connection
			Region		= Greyflood
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1435 Y:570
	HeroArmySpot			= X:-1485 Y:680
	HeroArmySpot			= X:-1425 Y:710
	HeroArmySpot			= X:-1350 Y:720
	HeroArmySpot			= X:-1300 Y:690	
	GarrisonArmySpot		= X:-1380 Y:635
	BuildingSpot			= X:-1480 Y:565
	BuildingSpot			= X:-1555 Y:520

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
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
			Region		= The_Angle
		End	
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
		Connection
			Region		= Cardolan
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
			Region		= Cardolan
		End	
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
			Region		= The_Angle
		End
		Connection
			Region		= Caradhras
		End	
		Connection
			Region		= Moria
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
			Region		= Rivendell
		End
		Connection
			Region		= Fords_Bruinen
		End	
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= The_Angle
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
			Region		= Moria
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
// RHUDAUR SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// The Angle
;////////////////////////////
Region The_Angle
	DisplayName				= LW:DisplayNameTheAngle
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the angle"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_ANGLE
	RegionPortrait			= MPTheAngle

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= Hollin
		End
		Connection
			Region		= Eregion
		End				
		Connection
			Region		= Swanfleet
		End
		Connection
			Region		= Cardolan
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-800 Y:910
	HeroArmySpot			= X:-810 Y:935
	HeroArmySpot			= X:-770 Y:960
	HeroArmySpot			= X:-740 Y:930
	HeroArmySpot			= X:-765 Y:900
	GarrisonArmySpot		= X:-810 Y:910

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPGFortress
	FortressDisplayName			= LW:DisplayNameTheAngle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
End

;////////////////////////////
;// Rhudaur
;////////////////////////////
Region Rhudaur
	DisplayName				= LW:DisplayNameRhudaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor rhudaur"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= RHUDAUR
	RegionPortrait			= MPRhudaur

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Ettenmoors
		End
		Connection
			Region		= Coldfells
		End
		Connection
			Region		= Trollshaws
		End				
		Connection
			Region		= Weathertop
		End
		Connection
			Region		= Weather_Hills
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-810 Y:1190
	HeroArmySpot			= X:-925 Y:1125
	HeroArmySpot			= X:-890 Y:1100
	HeroArmySpot			= X:-850 Y:1100
	HeroArmySpot			= X:-805 Y:1130
	GarrisonArmySpot		= X:-855 Y:1140
	BuildingSpot			= X:-810 Y:1180
	BuildingSpot			= X:-770 Y:1240		

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Trollshaws
;////////////////////////////
Region Trollshaws
	DisplayName				= LW:DisplayNameTrollshaws
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor trollshaws"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= TROLLSHAWS
	RegionPortrait			= MPTrollshaws

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Coldfells
		End
		Connection
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Hollin
		End				
		Connection
			Region		= The_Angle
		End
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Weathertop
		End
		Connection
			Region		= Rhudaur
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-760 Y:1070
	HeroArmySpot			= X:-870 Y:1020
	HeroArmySpot			= X:-875 Y:960
	HeroArmySpot			= X:-835 Y:980
	HeroArmySpot			= X:-785 Y:1000
	GarrisonArmySpot		= X:-825 Y:1015
	BuildingSpot			= X:-730 Y:1105
	BuildingSpot			= X:-675 Y:1165		

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
			Region		= Rivendell
		End
		Connection
			Region		= Hollin
		End
		Connection
			Region		= Trollshaws
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

;////////////////////////////
;// Rivendell
;////////////////////////////
Region Rivendell
	DisplayName				= LW:DisplayNameRivendell
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor rivendell"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= RIVENDELL
	RegionPortrait			= MPRivendell

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 5
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Hollin
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-455 Y:1099
	HeroArmySpot			= X:-464 Y:1124
	HeroArmySpot			= X:-430 Y:1099
	HeroArmySpot			= X:-457 Y:1075
	HeroArmySpot			= X:-545 Y:1032
	GarrisonArmySpot		= X:-498 Y:1037

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPGFortress
	FortressDisplayName			= LW:DisplayNameRivendell
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
		
End

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										FORODWAITH REGION - 6 TERRITORIES - 2 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// FOROCHEL SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Ice Bay of Forochel
;////////////////////////////
Region Ice_Bay_Of_Forochel
	DisplayName				= LW:DisplayNameIceBayofForochel
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ice bay of forochel"
	SkirmishStillImage		= WOR_Forodwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= ICE_BAY_OF_FORO
	RegionPortrait			= MPIceBayForochel

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cape_Forlond
		End
		Connection
			Region		= Ered_Luin_Highlands
		End		
		Connection
			Region		= Hills_Evendim
		End	
		Connection
			Region		= tuli_Ma
		End
		Connection
			Region		= ettenmoors
		End
		Connection
			Region		= Grey_Havens
		End
		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1516 Y:1632
	HeroArmySpot			= X:-1420 Y:1640
	HeroArmySpot			= X:-1434 Y:1594
	HeroArmySpot			= X:-1526 Y:1601
	HeroArmySpot			= X:-1625 Y:1638
	GarrisonArmySpot		= X:-1516 Y:1632
	BuildingSpot			= X:-1516 Y:1632

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Itä-mâ
;////////////////////////////
Region Ita_Ma
	DisplayName				= LW:DisplayNameItama
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ita ma"
	SkirmishStillImage		= WOR_Forodwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= ITA_MA
	RegionPortrait			= MPItaMa

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
			Region		= Jotunstath
		End			
		Connection
			Region		= tuli_Ma
		End
		Connection
			Region		= Northtarn
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1083 Y:1911
	HeroArmySpot			= X:-909 Y:2020
	HeroArmySpot			= X:-1011 Y:1870
	HeroArmySpot			= X:-1209 Y:1768
	HeroArmySpot			= X:-1243 Y:1931
	GarrisonArmySpot		= X:-1083 Y:1911
	BuildingSpot			= X:-1045 Y:1952

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Tuli-mâ
;////////////////////////////
Region tuli_Ma
	DisplayName				= LW:DisplayNametulima
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor tuli ma"
	SkirmishStillImage		= WOR_Forodwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= LANSI_MA
	RegionPortrait			= MPTuliMa

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
			Region		= Ettenmoors
		End			
		Connection
			Region		= Hills_Evendim
		End	
		Connection
			Region		= Ice_Bay_Of_Forochel
		End
		Connection
			Region		= Ita_Ma
		End
		Connection
			Region		= Northtarn
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1233 Y:1638
	HeroArmySpot			= X:-1090 Y:1666
	HeroArmySpot			= X:-1195 Y:1615
	HeroArmySpot			= X:-1301 Y:1621
	HeroArmySpot			= X:-1338 Y:1707
	GarrisonArmySpot		= X:-1233 Y:1638
	BuildingSpot			= X:-1294 Y:1659

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

End

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
			Region		= Ita_Ma
		End
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
			Region		= Ita_Ma
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
			Region		= Ita_Ma
		End
		Connection
			Region		= Jotunstath
		End
		Connection
			Region		= tuli_Ma
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
// 										HARADWAITH REGION - 23 TERRITORIES - 7 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// ABRAKHAN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Abrakhan
;////////////////////////////
Region Abrakhan
	DisplayName				= LW:DisplayNameAbrakhan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor abrakhan"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= ABRAKHAN
	RegionPortrait			= MPAbrakhan

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Desert_Of_Azkahar
		End
		Connection
			Region		= Tombs_Of_Abrakhan
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1260 Y:-1140
	HeroArmySpot			= X:1025 Y:-1130
	HeroArmySpot			= X:1090 Y:-1100
	HeroArmySpot			= X:1150 Y:-1075
	HeroArmySpot			= X:1215 Y:-1070
	GarrisonArmySpot		= X:1195 Y:-1135

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameHidar
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
End

;////////////////////////////
;// Desert of Azkâhar
;////////////////////////////
Region Desert_Of_Azkahar
	DisplayName				= LW:DisplayNameDesertofAzkahar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor desert of azkahar"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DESERT_OF_AZKAH
	RegionPortrait			= MPAzkahar

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Abrakhan
		End
		Connection
			Region		= Borders_Of_Khand
		End
		Connection
			Region		= Near_Harad
		End			
		Connection
			Region		= Itakh_Khand
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:1030 Y:-980
	HeroArmySpot			= X:955 Y:-930
	HeroArmySpot			= X:885 Y:-930
	HeroArmySpot			= X:825 Y:-980
	HeroArmySpot			= X:855 Y:-1025
	GarrisonArmySpot		= X:960 Y:-990
	BuildingSpot			= X:1060 Y:-970

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Tombs of Abrakhân
;////////////////////////////
Region Tombs_Of_Abrakhan
	DisplayName				= LW:DisplayNameTombsofAbrakhan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor tombs of abrakhan"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= TOMBS_OF_ABRAKH
	RegionPortrait			= MPAbrakhanTombs

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Abrakhan
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1430 Y:-1040
	HeroArmySpot			= X:1365 Y:-1015
	HeroArmySpot			= X:1395 Y:-1050
	HeroArmySpot			= X:1425 Y:-1060
	HeroArmySpot			= X:1470 Y:-1060
	GarrisonArmySpot		= X:1425 Y:-1035
	BuildingSpot			= X:1470 Y:-1030

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// FAR HARAD SUB-REGION
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Kârna
;////////////////////////////
Region Karna
	DisplayName				= LW:DisplayNameKarna
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor karna"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= AMATHUNA; KARNA
	RegionPortrait			= MPKarna

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

ConnectsTo			=
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Nafarat
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:480 Y:-1600
	HeroArmySpot			= X:425 Y:-1665
	HeroArmySpot			= X:410 Y:-1620
	HeroArmySpot			= X:440 Y:-1595
	HeroArmySpot			= X:480 Y:-1580
	GarrisonArmySpot		= X:460 Y:-1620
	BuildingSpot			= X:520 Y:-1590

	CPLimit				= 1000
	AllyCPLimit			= 500

End


;////////////////////////////
;// Far Harad
;////////////////////////////
Region Far_Harad
	DisplayName				= LW:DisplayNameFarHarad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Far Harad"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= FAR_HARAD
	RegionPortrait			= MPFarHarad

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Karna
		End
		Connection
			Region		= Dusalan
		End		
		Connection
			Region		= Nafarat_Delta
		End
		Connection
			Region		= Hidar
		End		
		Connection
			Region		= Amathuna
		End
		Connection
			Region		= Nafarat
		End		
		Connection
			Region		= Near_Harad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:170 Y:-1400
	HeroArmySpot			= X:310 Y:-1310
	HeroArmySpot			= X:480 Y:-1400
	HeroArmySpot			= X:-80 Y:-1380
	HeroArmySpot			= X:-216 Y:-1528
	GarrisonArmySpot		= X:240 Y:-1500
	BuildingSpot			= X:-50 Y:-1400
	BuildingSpot			= X:-120 Y:-1400

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Nafarat Delta
;////////////////////////////
Region Nafarat_Delta
	DisplayName				= LW:DisplayNameNafaratDelta
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor nafarat delta"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= JUNGLES_OF_HARA
	RegionPortrait			= MPNafaratDelta

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cape_Of_Mardruak
		End	
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Hidar
		End		
		Connection
			Region		= Nafarat
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-480 Y:-1820
	HeroArmySpot			= X:-510 Y:-1730
	HeroArmySpot			= X:-470 Y:-1710
	HeroArmySpot			= X:-420 Y:-1710
	HeroArmySpot			= X:-400 Y:-1750
	GarrisonArmySpot		= X:-480 Y:-1780
	BuildingSpot			= X:-520 Y:-1850

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Nafarat
;////////////////////////////
Region Nafarat
	DisplayName				= LW:DisplayNameNafarat
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor nafarat"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= NAFARAT
	RegionPortrait			= MPNafarat

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Karna
		End	
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Nafarat_Delta
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:60 Y:-1700
	HeroArmySpot			= X:-260 Y:-1730
	HeroArmySpot			= X:-230 Y:-1690
	HeroArmySpot			= X:-200 Y:-1685
	HeroArmySpot			= X:-140 Y:-1670
	GarrisonArmySpot		= X:-125 Y:-1735
	BuildingSpot			= X:100 Y:-1700
	;BuildingSpot			= X:160 Y:-1700

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// HARONDOR SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Ethir Anduin
;////////////////////////////
Region Ethir_Anduin
	DisplayName				= LW:DisplayNameEthirAnduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ethir anduin"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= ETHIR_ANDUIN
	RegionPortrait			= MPEthirAnduin

;	ArmyBonus				= 0
;	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Southern_Ithilien
		End
		Connection
			Region		= Pelargir
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-167 Y:-441
	HeroArmySpot			= X:-140 Y:-380
	HeroArmySpot			= X:-140 Y:-415
	HeroArmySpot			= X:-140 Y:-460
	HeroArmySpot			= X:-175 Y:-485
	GarrisonArmySpot		= X:-170 Y:-440
	BuildingSpot			= X:-220 Y:-450

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Harad Road
;////////////////////////////
Region Harad_Road
	DisplayName				= LW:DisplayNameHaradRoad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor harad road"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= HARAD_ROAD
	RegionPortrait			= MPHaradRoad

;	ArmyBonus				= 0
;	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Desert_Of_Lostladen
		End
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Near_Harad
		End
		Connection
			Region		= Southern_Ithilien
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:222 Y:-701
	HeroArmySpot			= X:125 Y:-615
	HeroArmySpot			= X:185 Y:-610
	HeroArmySpot			= X:245 Y:-620
	HeroArmySpot			= X:305 Y:-630
	GarrisonArmySpot		= X:215 Y:-660
	BuildingSpot			= X:160 Y:-745
	BuildingSpot			= X:240 Y:-750

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Harondor
;////////////////////////////
Region Harondor
	DisplayName				= LW:DisplayNameHarondor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harondor"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= HARONDOR
	RegionPortrait			= MPHarondor

;	ArmyBonus				= 0
;	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Ethir_Anduin
		End
		Connection
			Region		= Harad_Road
		End
		Connection
			Region		= Near_Harad
		End	
		Connection
			Region		= Southern_Ithilien
		End		
		Connection
			Region		= Umbar
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-60 Y:-640
	HeroArmySpot			= X:50 Y:-520
	HeroArmySpot			= X:-185 Y:-600
	HeroArmySpot			= X:-131 Y:-668
	HeroArmySpot			= X:-40 Y:-760
	GarrisonArmySpot		= X:-143 Y:-740
	BuildingSpot			= X:-60 Y:-640
	BuildingSpot			= X:-100 Y:-640	

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// KHAND SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Borders of Khand
;////////////////////////////
Region Borders_Of_Khand
	DisplayName				= LW:DisplayNameBordersofKhand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor borders of khand"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= BORDERS_OF_KHAN
	RegionPortrait			= MPBordersKhand

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Desert_Of_Azkahar
		End
		Connection
			Region		= Desert_Of_Lostladen
		End		
		Connection
			Region		= Khand
		End
		Connection
			Region		= Near_Harad
		End		
		Connection
			Region		= Itakh_Khand
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:1100 Y:-800
	HeroArmySpot			= X:870 Y:-830
	HeroArmySpot			= X:930 Y:-800
	HeroArmySpot			= X:990 Y:-765
	HeroArmySpot			= X:1050 Y:-750
	GarrisonArmySpot		= X:1000 Y:-805
	BuildingSpot			= X:1160 Y:-770
	BuildingSpot			= X:1250 Y:-775

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

End

;////////////////////////////
;// Khand
;////////////////////////////
Region Khand
	DisplayName				= LW:DisplayNameKhand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Khand"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= KHAND
	RegionPortrait			= MPKhand

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Borders_Of_Khand
		End
		Connection
			Region		= Desert_Of_Lostladen
		End		
		Connection
			Region		= Itakh_Khand
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1430 Y:-550
	HeroArmySpot			= X:1210 Y:-625
	HeroArmySpot			= X:1295 Y:-655
	HeroArmySpot			= X:1385 Y:-670
	HeroArmySpot			= X:1500 Y:-660
	GarrisonArmySpot		= X:1400 Y:-600
	BuildingSpot			= X:1600 Y:-600
	BuildingSpot			= X:1700 Y:-615

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Itakh Khand
;////////////////////////////
Region Itakh_Khand
	DisplayName				= LW:DisplayNameItakhKhand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor itakh khand"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= RED_DESERT_OF_K
	RegionPortrait			= MPItakhKhand

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Borders_Of_Khand
		End			
		Connection
			Region		= Desert_Of_Azkahar
		End
		Connection
			Region		= Khand
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1630 Y:-810
	HeroArmySpot			= X:1600 Y:-745
	HeroArmySpot			= X:1545 Y:-755
	HeroArmySpot			= X:1505 Y:-790
	HeroArmySpot			= X:1450 Y:-830
	GarrisonArmySpot		= X:1570 Y:-810
	BuildingSpot			= X:1700 Y:-800

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// MARDRUAK SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Cape of Mardruak
;////////////////////////////
Region Cape_Of_Mardruak
	DisplayName				= LW:DisplayNameCapeOfMardruak
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor cape of mardruak"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= CAPE_OF_MARDRUA
	RegionPortrait			= MPCapeMardruak

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dusalan
		End
		Connection
			Region		= Harad_Coast
		End		
		Connection
			Region		= Nafarat_Delta
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-800 Y:-1600
	HeroArmySpot			= X:-900 Y:-1500
	HeroArmySpot			= X:-820 Y:-1510
	HeroArmySpot			= X:-740 Y:-1510
	HeroArmySpot			= X:-660 Y:-1510
	GarrisonArmySpot		= X:-800 Y:-1580
	BuildingSpot			= X:-870 Y:-1660
	BuildingSpot			= X:-770 Y:-1670


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
	
End

;////////////////////////////
;// Dûsalan
;////////////////////////////
Region Dusalan
	DisplayName				= LW:DisplayNameDusalan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor dusalan"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DUSALAN
	RegionPortrait			= MPDusalan

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cape_Of_Mardruak
		End
		Connection
			Region		= Far_Harad
		End		
		Connection
			Region		= Harad_Coast
		End		
		Connection
			Region		= Hidar
		End
		Connection
			Region		= Amathuna
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-500 Y:-1470
	HeroArmySpot			= X:-580 Y:-1460
	HeroArmySpot			= X:-550 Y:-1440
	HeroArmySpot			= X:-505 Y:-1425
	HeroArmySpot			= X:-460 Y:-1420
	GarrisonArmySpot		= X:-515 Y:-1460
	BuildingSpot			= X:-490 Y:-1515


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Hidar
;////////////////////////////
Region Hidar
	DisplayName				= LW:DisplayNameHidar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor hidar"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= HIDAR
	RegionPortrait			= MPHidar

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Dusalan
		End
		Connection
			Region		= Far_Harad
		End		
		Connection
			Region		= Nafarat_Delta
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-450 Y:-1630
	HeroArmySpot			= X:-460 Y:-1600
	HeroArmySpot			= X:-430 Y:-1600
	HeroArmySpot			= X:-420 Y:-1630
	HeroArmySpot			= X:-430 Y:-1660
	GarrisonArmySpot		= X:-460 Y:-1630


	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameHidar
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	

End

;////////////////////////////
;// Harad Coast
;////////////////////////////
Region Harad_Coast
	DisplayName				= LW:DisplayNameHaradCoast
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor harad coast"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= HARAD_COAST
	RegionPortrait			= MPHaradCoast

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cape_Of_Mardruak
		End		
		Connection
			Region		= Dusalan
		End	
		Connection
			Region		= White_Pillar
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-734 Y:-1389
	HeroArmySpot			= X:-700 Y:-1420
	HeroArmySpot			= X:-660 Y:-1405
	HeroArmySpot			= X:-680 Y:-1370
	HeroArmySpot			= X:-730 Y:-1450
	GarrisonArmySpot		= X:-730 Y:-1400
	BuildingSpot			= X:-800 Y:-1370


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// NEAR HARD SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Desert of Lostladen
;////////////////////////////
Region Desert_Of_Lostladen
	DisplayName				= LW:DisplayNameDesertofLostladen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor desert of lostladen"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DESERT_OF_LOSTL
	RegionPortrait			= MPLostladen

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Borders_Of_Khand
		End
		Connection
			Region		= Harad_Road
		End		
		Connection
			Region		= Khand
		End
		Connection
			Region		= Near_Harad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:700 Y:-720
	HeroArmySpot			= X:465 Y:-680
	HeroArmySpot			= X:425 Y:-740
	HeroArmySpot			= X:450 Y:-770
	HeroArmySpot			= X:500 Y:-795
	GarrisonArmySpot		= X:600 Y:-745
	BuildingSpot			= X:730 Y:-715
	BuildingSpot			= X:800 Y:-700


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Near Harad
;////////////////////////////
Region Near_Harad
	DisplayName				= LW:DisplayNameNearHarad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Near Harad"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= NEAR_HARAD
	RegionPortrait			= MPNearHarad

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Borders_Of_Khand
		End
		Connection
			Region		= Desert_Of_Lostladen
		End		
		Connection
			Region		= Desert_Of_Azkahar
		End
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Harad_Road
		End	
		Connection
			Region		= Harondor
		End		
		Connection
			Region		= Amathuna
		End
		Connection
			Region		= Umbar
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:310 Y:-1010
	HeroArmySpot			= X:100 Y:-910
	HeroArmySpot			= X:195 Y:-900
	HeroArmySpot			= X:295 Y:-900
	HeroArmySpot			= X:395 Y:-900
	GarrisonArmySpot		= X:195 Y:-1000
	BuildingSpot			= X:300 Y:-1000
	BuildingSpot			= X:400 Y:-1000


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
	
	RestrictBuildings
		Buildings		= Armory
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Amathuna
;////////////////////////////
Region Amathuna
	DisplayName				= LW:DisplayNameAmathuna
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor amathuna"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= KARNA; AMATHUNA
	RegionPortrait			= MPAmathuna

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dusalan
		End	
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Near_Harad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-290 Y:-1320
	HeroArmySpot			= X:-270 Y:-1250
	HeroArmySpot			= X:-230 Y:-1270
	HeroArmySpot			= X:-260 Y:-1310
	HeroArmySpot			= X:-290 Y:-1335
	GarrisonArmySpot		= X:-270 Y:-1290
	BuildingSpot			= X:-350 Y:-1350
	


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// UMBAR SUB-REGION
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Umbar
;////////////////////////////
Region Umbar
	DisplayName				= LW:DisplayNameUmbar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Umbar"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= UMBAR
	RegionPortrait			= MPUmbar

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Harondor
		End	
		Connection
			Region		= Maros
		End
		Connection
			Region		= Near_Harad
		End		
		Connection
			Region		= White_Pillar
		End
		Connection
			Region		= Tolfalas
		End
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Dol_Amroth
		End	
		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-276 Y:-997
	HeroArmySpot			= X:-135 Y:-930
	HeroArmySpot			= X:-165 Y:-960
	HeroArmySpot			= X:-200 Y:-995
	HeroArmySpot			= X:-235 Y:-1025
	GarrisonArmySpot		= X:-305 Y:-1000


	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameUmbar
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold		


End

;////////////////////////////
;// Maros
;////////////////////////////
Region Maros
	DisplayName				= LW:DisplayNameMaros
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor maros"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MAROS
	RegionPortrait			= MPMaros

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Umbar
		End
		Connection
			Region		= Tolfalas
		End
		Connection
			Region		= Dol_Amroth
		End
	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-580 Y:-1010
	HeroArmySpot			= X:-475 Y:-960
	HeroArmySpot			= X:-495 Y:-995
	HeroArmySpot			= X:-520 Y:-1025
	HeroArmySpot			= X:-555 Y:-1045
	GarrisonArmySpot		= X:-555 Y:-1010
	BuildingSpot			= X:-600 Y:-1020


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// White Pillar
;////////////////////////////
Region White_Pillar
	DisplayName				= LW:DisplayNameWhitePillar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor white pillar"
	SkirmishStillImage		= WOR_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= WHITE_PILLAR
	RegionPortrait			= MPWhitePillar

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Harad_Coast
		End	
		Connection
			Region		= Umbar
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-600 Y:-1228
	HeroArmySpot			= X:-730 Y:-1260
	HeroArmySpot			= X:-690 Y:-1270
	HeroArmySpot			= X:-645 Y:-1290
	HeroArmySpot			= X:-610 Y:-1280
	GarrisonArmySpot		= X:-625 Y:-1225
	BuildingSpot			= X:-430 Y:-1200


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										LINDON REGION - 8 TERRITORIES - 2 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// FORLINDON SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Cape of Forlond
;////////////////////////////
Region Cape_Forlond
	DisplayName				= LW:DisplayNameCapeofForlond
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor cape of forlond"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= CAPE_OF_FORLOND
	RegionPortrait			= MPCapeForlond

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Ice_Bay_Of_Forochel
		End	
		Connection
			Region		= Ered_Luin_Highlands
		End
		Connection
			Region		= Forlindon
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1925 Y:1680
	HeroArmySpot			= X:-1750 Y:1780
	HeroArmySpot			= X:-1750 Y:1730
	HeroArmySpot			= X:-1790 Y:1705
	HeroArmySpot			= X:-1830 Y:1680
	GarrisonArmySpot		= X:-1815 Y:1735
	BuildingSpot			= X:-1945 Y:1680	
	BuildingSpot			= X:-2005 Y:1650
	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Ered Luin Highlands
;////////////////////////////
Region Ered_Luin_Highlands
	DisplayName				= LW:DisplayNameEredLuinHighlands
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ered luin highlands"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= ERED_LUIN_HIGHL
	RegionPortrait			= MPEredLuinHighlands

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Cape_Forlond
		End	
		Connection
			Region		= Ice_Bay_Of_Forochel
		End
		Connection
			Region		= Hills_Evendim
		End	
		Connection
			Region		= Grey_Havens
		End
		Connection
			Region		= Ered_Luin
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1785 Y:1480
	HeroArmySpot			= X:-1840 Y:1575
	HeroArmySpot			= X:-1780 Y:1610
	HeroArmySpot			= X:-1730 Y:1570
	HeroArmySpot			= X:-1730 Y:1510
	GarrisonArmySpot		= X:-1800 Y:1530
	BuildingSpot			= X:-1830 Y:1425	
	BuildingSpot			= X:-1730 Y:1430
	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Forlindon
;////////////////////////////
Region Forlindon
	DisplayName				= LW:DisplayNameForlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor forlindon"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORLINDON
	RegionPortrait			= MPForlindon

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Cape_Forlond
		End	
		Connection
			Region		= Ered_Luin
		End
		Connection
			Region		= Grey_Havens
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-2200 Y:1260
	HeroArmySpot			= X:-2230 Y:1125
	HeroArmySpot			= X:-2160 Y:1140
	HeroArmySpot			= X:-2100 Y:1180
	HeroArmySpot			= X:-2085 Y:1230
	GarrisonArmySpot		= X:-2190 Y:1220
	BuildingSpot			= X:-2300 Y:1305	
	BuildingSpot			= X:-2190 Y:1335
	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Ered Luin
;////////////////////////////
Region Ered_Luin
	DisplayName				= LW:DisplayNameEredLuin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ered luin"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= ERED_LUIN
	RegionPortrait			= MPEredLuin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

		ConnectsTo			=	
		Connection
			Region		= Forlindon
		End	
		Connection
			Region		= Ered_Luin_Highlands
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1990 Y:1370
	HeroArmySpot			= X:-1960 Y:1440
	HeroArmySpot			= X:-1930 Y:1410
	HeroArmySpot			= X:-1910 Y:1370
	HeroArmySpot			= X:-1930 Y:1340
	GarrisonArmySpot		= X:-2010 Y:1360
	CPLimit				= 1000
	AllyCPLimit			= 500


	CreateAutoFort				= Yes
	FortressPortrait			= BPEreborFortress
	FortressDisplayName			= LW:DisplayNameEredLuin
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
	
End
;////////////////////////////
;// Grey Havens
;////////////////////////////
Region Grey_Havens
	DisplayName				= LW:DisplayNameGreyHavens
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor grey havens"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= GREY_HAVENS
	RegionPortrait			= MPGreyHavens

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Ered_Luin_Highlands
		End	
		Connection
			Region		= Hills_Evendim
		End
		Connection
			Region		= Annuminas
		End
		Connection
			Region		= Tower_Hills
		End	
		Connection
			Region		= Forlindon
		End
		Connection
			Region		= Ice_Bay_Of_Forochel
		End	
		Connection
			Region		= Dol_Amroth
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1870 Y:1135
	HeroArmySpot			= X:-1800 Y:1300
	HeroArmySpot			= X:-1740 Y:1285
	HeroArmySpot			= X:-1710 Y:1235
	HeroArmySpot			= X:-1735 Y:1185
	GarrisonArmySpot		= X:-1825 Y:1190
	BuildingSpot			= X:-1910 Y:1090	
	BuildingSpot			= X:-1980 Y:1060
	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

//-------------------------------------------------------------------------------------------------
// HARLINDON SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Thorin's Halls
;////////////////////////////
Region Thorins_Halls
	DisplayName				= LW:DisplayNameThorinsHalls
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor thorins halls"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= THORINS_HALLS
	RegionPortrait			= MPThorinHalls

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

		ConnectsTo			=	
		Connection
			Region		= Harlindon
		End	
		Connection
			Region		= Tower_Hills
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1895 Y:755
	HeroArmySpot			= X:-1945 Y:795
	HeroArmySpot			= X:-1910 Y:835
	HeroArmySpot			= X:-1865 Y:840
	HeroArmySpot			= X:-1860 Y:800
	GarrisonArmySpot		= X:-1890 Y:740
	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPEreborFortress
	FortressDisplayName			= LW:DisplayNameThorinsHalls
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
	
End

;////////////////////////////
;// Harlindon
;////////////////////////////
Region Harlindon
	DisplayName				= LW:DisplayNameHarlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor harlindon"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= HARLINDON
	RegionPortrait			= MPHarlindon

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Tower_Hills
		End	
		Connection
			Region		= Thorins_Halls
		End
		Connection
			Region		= Sarn_Ford
		End
		Connection
			Region		= Minhiriath
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1935 Y:650
	HeroArmySpot			= X:-1760 Y:825
	HeroArmySpot			= X:-1690 Y:805
	HeroArmySpot			= X:-1645 Y:760
	HeroArmySpot			= X:-1620 Y:705
	GarrisonArmySpot		= X:-1730 Y:730
	BuildingSpot			= X:-2095 Y:795	
	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Tower Hills
;////////////////////////////
Region Tower_Hills
	DisplayName				= LW:DisplayNameTowerHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor tower hills"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= TOWER_HILLS
	RegionPortrait			= MPTowerHills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Grey_Havens
		End	
		Connection
			Region		= Annuminas
		End
		Connection
			Region		= The_Shire
		End
		Connection
			Region		= Sarn_Ford
		End
		Connection
			Region		= Harlindon
		End
		Connection
			Region		= Thorins_Halls
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1700 Y:990
	HeroArmySpot			= X:-1805 Y:905
	HeroArmySpot			= X:-1725 Y:915
	HeroArmySpot			= X:-1645 Y:880
	HeroArmySpot			= X:-1600 Y:910
	GarrisonArmySpot		= X:-1710 Y:955
	BuildingSpot			= X:-1760 Y:1055
	BuildingSpot			= X:-1665 Y:1050	
	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
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
			Region		= tuli_Ma
		End
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
		Connection
			Region		= Rhudaur
		End
		Connection
			Region		= Weather_Hills
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= Hills_Evendim
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
			Region		= Trollshaws
		End
		Connection
			Region		= Rhudaur
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
		Connection
			Region		= tuli_Ma
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
			Region		= Taur_Na_Faroth
		End	
		Connection
			Region		= Northern_Mirkwood
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
			Region		= Taur_Na_Faroth
		End	
		Connection
			Region		= Erebor
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
	DisplayName				= LW:DisplayNameHighPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR High Pass"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= HIGH_PASS
	RegionPortrait			= MPHighPass

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
	DisplayName				= LW:DisplayNameCaradhras
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor caradhras"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= CARADHRAS
	RegionPortrait			= MPCaradhras

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
			Region		= Lothlorien
		End				
		Connection
			Region		= Moria
		End
		Connection
			Region		= Taur_Hith
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
			Region		= Lothlorien
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
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Caradhras
		End
		Connection
			Region		= Dimrill_Dale
		End
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Ost_In_Edhil
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
// EAST-MARK SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// East Emnet
;////////////////////////////
Region East_Emnet
	DisplayName				= LW:DisplayNameEastEmnet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR East Emnet"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAST_EMNET
	RegionPortrait			= MPEastEmnet

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Amon_Hen
		End
		Connection
			Region		= The_Wold
		End		
		Connection
			Region		= Snowbourn
		End
		Connection
			Region		= Eastern_Rohan
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-250 Y:350
	HeroArmySpot			= X:-200 Y:370
	HeroArmySpot			= X:-170 Y:355
	HeroArmySpot			= X:-170 Y:320
	HeroArmySpot			= X:-210 Y:320
	GarrisonArmySpot		= X:-210 Y:350
	BuildingSpot			= X:-320 Y:350	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Eastern Rohan
;////////////////////////////
Region Eastern_Rohan
	DisplayName				= LW:DisplayNameEasternRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Eastern Rohan"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= EASTERN_ROHAN
	RegionPortrait			= MPEasternRohan

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Amon_Hen
		End
		Connection
			Region		= Eastfold
		End		
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= The_Folde
		End
		Connection
			Region		= West_Emnet
		End
		Connection
			Region		= Snowbourn
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-290 Y:250
	HeroArmySpot			= X:-250 Y:210
	HeroArmySpot			= X:-190 Y:210
	HeroArmySpot			= X:-170 Y:240
	HeroArmySpot			= X:-210 Y:275
	GarrisonArmySpot		= X:-240 Y:240
	BuildingSpot			= X:-320 Y:250
	BuildingSpot			= X:-380 Y:250		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Eastfold
;////////////////////////////
Region Eastfold
	DisplayName				= LW:DisplayNameEastfold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Eastfold"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= EASTFOLD
	RegionPortrait			= MPEastfold

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Halifirien
		End
		Connection
			Region		= Eastern_Rohan
		End		
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= The_Folde
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-300 Y:170
	HeroArmySpot			= X:-325 Y:178
	HeroArmySpot			= X:-290 Y:168
	HeroArmySpot			= X:-262 Y:169
	HeroArmySpot			= X:-269 Y:151
	GarrisonArmySpot		= X:-266 Y:160
	BuildingSpot			= X:-380 Y:160		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
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
			Region		= Isengard
		End
		Connection
			Region		= Westfold
		End		
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Snowbourn
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
			Region		= Isengard
		End
		Connection
			Region		= Eaves_Fangorn
		End		
		Connection
			Region		= Westfold
		End
		Connection
			Region		= Gap_Of_Rohan
		End
		Connection
			Region		= Helms_Deep
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
;// Isengard
;////////////////////////////
Region Isengard
	DisplayName				= LW:DisplayNameIsengard
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Isengard"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= ISENGARD
	RegionPortrait			= MPIsengard

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Eaves_Fangorn
		End		
		Connection
			Region		= Fords_Isen
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-730 Y:420
	HeroArmySpot			= X:-755 Y:410
	HeroArmySpot			= X:-725 Y:400
	HeroArmySpot			= X:-700 Y:410
	HeroArmySpot			= X:-710 Y:435
	GarrisonArmySpot		= X:-740 Y:430		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCOrthanc
	FortressDisplayName			= LW:DisplayNameIsengard
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
	
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
		Connection
			Region		= Regnfells
		End
		Connection
			Region		= Helms_Deep
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

//-------------------------------------------------------------------------------------------------
// KING'S LANDS SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Dunharrow
;////////////////////////////
Region Dunharrow
	DisplayName				= LW:DisplayNameDunharrow
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dunharrow"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= DUNHARROW
	RegionPortrait			= MPDunharrow

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Helms_Deep
		End		
		Connection
			Region		= Westfold
		End
		Connection
			Region		= Harrowdale
		End
		Connection
			Region		= Erech
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-710 Y:195
	HeroArmySpot			= X:-740 Y:190
	HeroArmySpot			= X:-720 Y:220
	HeroArmySpot			= X:-690 Y:220
	HeroArmySpot			= X:-670 Y:200
	GarrisonArmySpot		= X:-710 Y:200
	BuildingSpot			= X:-720 Y:170		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Edoras
;////////////////////////////
Region Edoras
	DisplayName				= LW:DisplayNameEdoras
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Edoras"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= EDORAS
	RegionPortrait			= MPEdoras

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= The_Folde
		End		
		Connection
			Region		= West_Emnet
		End
		Connection
			Region		= Harrowdale
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-550 Y:225
	HeroArmySpot			= X:-580 Y:240
	HeroArmySpot			= X:-550 Y:240
	HeroArmySpot			= X:-520 Y:240
	HeroArmySpot			= X:-530 Y:210
	GarrisonArmySpot		= X:-550 Y:220	

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPRohanFortress
	FortressDisplayName			= LW:DisplayNameEdoras
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
End
;////////////////////////////
;// Harrowdale
;////////////////////////////
Region Harrowdale
	DisplayName				= LW:DisplayNameHarrowdale
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor harrowdale"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= HARROWDALE
	RegionPortrait			= MPHarrowdale

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Edoras
		End		
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Westfold
		End
		Connection
			Region		= West_Emnet
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-630 Y:235
	HeroArmySpot			= X:-660 Y:240
	HeroArmySpot			= X:-630 Y:250
	HeroArmySpot			= X:-600 Y:245
	HeroArmySpot			= X:-610 Y:215
	GarrisonArmySpot		= X:-630 Y:240
	BuildingSpot			= X:-640 Y:225		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

;////////////////////////////
;// The Folde
;////////////////////////////
Region The_Folde
	DisplayName				= LW:DisplayNameTheFolde
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the folde"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_FOLDE
	RegionPortrait			= MPTheFolde

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Eastfold
		End		
		Connection
			Region		= Eastern_Rohan
		End
		Connection
			Region		= Edoras
		End
		Connection
			Region		= West_Emnet
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-460 Y:205
	HeroArmySpot			= X:-510 Y:180
	HeroArmySpot			= X:-500 Y:210
	HeroArmySpot			= X:-475 Y:220
	HeroArmySpot			= X:-445 Y:220
	GarrisonArmySpot		= X:-480 Y:200
	BuildingSpot			= X:-430 Y:195		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

//-------------------------------------------------------------------------------------------------
// WEST-MARK SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Helm's Deep
;////////////////////////////
Region Helms_Deep
	DisplayName				= LW:DisplayNameHelmsDeep
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Helms Deep"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= HELMS_DEEP
	RegionPortrait			= MPHornburg

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Dunharrow
		End		
		Connection
			Region		= Westfold
		End
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Gap_Of_Rohan
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-760 Y:245
	HeroArmySpot			= X:-774 Y:251
	HeroArmySpot			= X:-752 Y:252
	HeroArmySpot			= X:-762 Y:232
	HeroArmySpot			= X:-760 Y:264
	GarrisonArmySpot		= X:-762 Y:239	

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCHelmsDeep
	FortressDisplayName			= LW:DisplayNameHelmsDeep
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
	
End
;////////////////////////////
;// Snowbourn
;////////////////////////////
Region Snowbourn
	DisplayName				= LW:DisplayNameSnowbourn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor snowbourn"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= SNOWBOURN
	RegionPortrait			= MPSnowbourn

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Fangorn
		End		
		Connection
			Region		= The_Wold
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= Eastern_Rohan
		End
		Connection
			Region		= West_Emnet
		End			
		Connection
			Region		= Westfold
		End	
		Connection
			Region		= Eaves_Fangorn
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-475 Y:340
	HeroArmySpot			= X:-470 Y:325
	HeroArmySpot			= X:-440 Y:320
	HeroArmySpot			= X:-410 Y:330
	HeroArmySpot			= X:-415 Y:360
	GarrisonArmySpot		= X:-450 Y:340
	BuildingSpot			= X:-530 Y:345		

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// West-Emnet
;////////////////////////////
Region West_Emnet
	DisplayName				= LW:DisplayNameWestEmnet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR West Emnet"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= WEST_EMNET
	RegionPortrait			= MPWestEmnet

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Snowbourn
		End		
		Connection
			Region		= Eastern_Rohan
		End
		Connection
			Region		= The_Folde
		End
		Connection
			Region		= Edoras
		End
		Connection
			Region		= Harrowdale
		End			
		Connection
			Region		= Westfold
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-535 Y:285
	HeroArmySpot			= X:-555 Y:310
	HeroArmySpot			= X:-585 Y:300
	HeroArmySpot			= X:-615 Y:295
	HeroArmySpot			= X:-600 Y:270
	GarrisonArmySpot		= X:-565 Y:290
	BuildingSpot			= X:-530 Y:280
	BuildingSpot			= X:-490 Y:280		

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
			Region		= Snowbourn
		End
		Connection
			Region		= West_Emnet
		End
		Connection
			Region		= Harrowdale
		End
		Connection
			Region		= Dunharrow
		End			
		Connection
			Region		= Helms_Deep
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
//-------------------------------------------------------------------------------------------------
// 										GONDOR REGION - 24 TERRITORIES - 2 SUB-REGIONS
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// NORTHERN GONDOR SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Mouths of the Entwash
;////////////////////////////
Region Mouths_Entwash
	DisplayName				= LW:DisplayNameMouthsoftheEntwash
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor mouths of entwash"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= MOUTHS_OF_ENTWA
	RegionPortrait			= MPMouthsOfTheEntwash

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Amon_Hen
		End
		Connection
			Region		= Dead_Marshes
		End		
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Anorien
		End			
		Connection
			Region		= Halifirien
		End	
		Connection
			Region		= Eastern_Rohan
		End
		Connection
			Region		= Druadan_Forest
		End	
		Connection
			Region		= Northern_Ithilien
		End
		Connection
			Region		= Cair_Andros
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-20 Y:170
	HeroArmySpot			= X:-70 Y:200
	HeroArmySpot			= X:-40 Y:200
	HeroArmySpot			= X:-70 Y:170
	HeroArmySpot			= X:-40 Y:170
	GarrisonArmySpot		= X:-40 Y:180
	BuildingSpot			= X:30 Y:140	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Halifirien
;////////////////////////////
Region Halifirien
	DisplayName				= LW:DisplayNameHalifirien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Halifirien"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= HALIFIRIEN
	RegionPortrait			= MPHalifirien

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Anorien
		End		
		Connection
			Region		= Eastfold
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-180 Y:130
	HeroArmySpot			= X:-180 Y:150
	HeroArmySpot			= X:-150 Y:150
	HeroArmySpot			= X:-180 Y:120
	HeroArmySpot			= X:-150 Y:120
	GarrisonArmySpot		= X:-170 Y:130
	BuildingSpot			= X:-190 Y:100	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Anorien
;////////////////////////////
Region Anorien
	DisplayName				= LW:DisplayNameAnorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Anorien"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANORIEN
	RegionPortrait			= MPAnorien

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Halifirien
		End		
		Connection
			Region		= Druadan_Forest
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-80 Y:90
	HeroArmySpot			= X:-120 Y:110
	HeroArmySpot			= X:-90 Y:110
	HeroArmySpot			= X:-70 Y:130
	HeroArmySpot			= X:-50 Y:120
	GarrisonArmySpot		= X:-80 Y:100
	BuildingSpot			= X:-75 Y:60

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Druadan Forest
;////////////////////////////
Region Druadan_Forest
	DisplayName				= LW:DisplayNameDruadanForest
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Druadan Forest"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= DRUADAN_FOREST
	RegionPortrait			= MPDruadanForest

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Mouths_Entwash
		End		
		Connection
			Region		= Anorien
		End
		Connection
			Region		= Cair_Andros
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-15 Y:40
	HeroArmySpot			= X:-30 Y:5
	HeroArmySpot			= X:-55 Y:0
	HeroArmySpot			= X:-55 Y:30
	HeroArmySpot			= X:-35 Y:40
	GarrisonArmySpot		= X:-25 Y:20
	BuildingSpot			= X:0 Y:55

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Cair Andros
;////////////////////////////
Region Cair_Andros
	DisplayName				= LW:DisplayNameCairAndros
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cair Andros"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= CAIR_ANDROS
	RegionPortrait			= MPCairAndros

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Druadan_Forest
		End
		Connection
			Region		= Minas_Tirith
		End		
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Northern_Ithilien
		End
		Connection
			Region		= Osgiliath
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:60 Y:40
	HeroArmySpot			= X:60 Y:90
	HeroArmySpot			= X:85 Y:80
	HeroArmySpot			= X:60 Y:60
	HeroArmySpot			= X:85 Y:60
	GarrisonArmySpot		= X:60 Y:35
	BuildingSpot			= X:50 Y:10

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Northern Ithilien
;////////////////////////////
Region Northern_Ithilien
	DisplayName				= LW:DisplayNameNorthernIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor north ithilien"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTH_ITHILIEN
	RegionPortrait			= MPNorthIthilien

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Dead_Marshes
		End
		Connection
			Region		= Mouths_Entwash
		End		
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Osgiliath
		End
		Connection
			Region		= Crossroads
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:130 Y:70
	HeroArmySpot			= X:100 Y:140
	HeroArmySpot			= X:140 Y:140
	HeroArmySpot			= X:140 Y:110
	HeroArmySpot			= X:110 Y:110
	GarrisonArmySpot		= X:130 Y:90
	BuildingSpot			= X:130 Y:40

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Minas Tirith
;////////////////////////////
Region Minas_Tirith
	DisplayName				= LW:DisplayNameMinasTirith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Tirith"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= MINAS_TIRITH
	RegionPortrait			= MPMinasTirith

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Druadan_Forest
		End
		Connection
			Region		= Osgiliath
		End		
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Harlond
		End
		Connection
			Region		= Lossarnach
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-10 Y:-50
	HeroArmySpot			= X:0 Y:-10
	HeroArmySpot			= X:15 Y:-40
	HeroArmySpot			= X:0 Y:-65
	HeroArmySpot			= X:-30 Y:-85
	GarrisonArmySpot		= X:-40 Y:-50

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMinasTirith
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
End
;////////////////////////////
;// Osgiliath
;////////////////////////////
Region Osgiliath
	DisplayName				= LW:DisplayNameOsgiliath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Osgiliath"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= OSGILIATH
	RegionPortrait			= MPOsgiliath

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Northern_Ithilien
		End		
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Crossroads
		End
		Connection
			Region		= Emyn_Arnen
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:75 Y:-35
	HeroArmySpot			= X:70 Y:-20
	HeroArmySpot			= X:95 Y:-20
	HeroArmySpot			= X:95 Y:-40
	HeroArmySpot			= X:60 Y:-40
	GarrisonArmySpot		= X:80 Y:-40
	BuildingSpot			= X:75 Y:-60

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Crossroads
;////////////////////////////
Region Crossroads
	DisplayName				= LW:DisplayNameCrossroads
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor crossroads"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= CROSSROADS
	RegionPortrait			= MPCrossroads

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Northern_Ithilien
		End
		Connection
			Region		= Osgiliath
		End		
		Connection
			Region		= Emyn_Arnen
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:140 Y:-50
	HeroArmySpot			= X:120 Y:-50
	HeroArmySpot			= X:120 Y:-75
	HeroArmySpot			= X:150 Y:-35
	HeroArmySpot			= X:130 Y:-60
	GarrisonArmySpot		= X:155 Y:-50
	BuildingSpot			= X:140 Y:-50

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Emyn Arnen
;////////////////////////////
Region Emyn_Arnen
	DisplayName				= LW:DisplayNameEmynArnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Emyn Arnen"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= EMYN_ARNEN
	RegionPortrait			= MPEmynArnen

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Crossroads
		End
		Connection
			Region		= Osgiliath
		End		
		Connection
			Region		= Central_Ithilien
		End			
		Connection
			Region		= Minas_Morgul
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:125 Y:-120
	HeroArmySpot			= X:90 Y:-90
	HeroArmySpot			= X:55 Y:-90
	HeroArmySpot			= X:60 Y:-120
	HeroArmySpot			= X:80 Y:-150
	GarrisonArmySpot		= X:100 Y:-120
	BuildingSpot			= X:170 Y:-120

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Central Ithilien
;////////////////////////////
Region Central_Ithilien
	DisplayName				= LW:DisplayNameCentralIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Central Ithilien"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= CENTRAL_ITHILIE
	RegionPortrait			= MPCentralIthilien

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Southern_Ithilien
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:120 Y:-210
	HeroArmySpot			= X:80 Y:-190
	HeroArmySpot			= X:110 Y:-180
	HeroArmySpot			= X:140 Y:-180
	HeroArmySpot			= X:170 Y:-170
	GarrisonArmySpot		= X:120 Y:-200
	BuildingSpot			= X:90 Y:-250

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Southern Ithilien
;////////////////////////////
Region Southern_Ithilien
	DisplayName				= LW:DisplayNameSouthernIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor southern ithilien"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= SOUTHERN_ITHILI
	RegionPortrait			= MPSouthIthilien

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Central_Ithilien
		End
		Connection
			Region		= Pelargir
		End		
		Connection
			Region		= Ethir_Anduin
		End	
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Harad_Road
		End						

	CustomCenterPoint		= Yes
	CenterPoint				= X:40 Y:-350
	HeroArmySpot			= X:-45 Y:-400
	HeroArmySpot			= X:-75 Y:-370
	HeroArmySpot			= X:-45 Y:-330
	HeroArmySpot			= X:-5 Y:-310
	GarrisonArmySpot		= X:10 Y:-350
	BuildingSpot			= X:125 Y:-310
	BuildingSpot			= X:125 Y:-400

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Harlond
;////////////////////////////
Region Harlond
	DisplayName				= LW:DisplayNameHarlond
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harlond"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= HARLOND
	RegionPortrait			= MPHarlond

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Minas_Tirith
		End	
		Connection
			Region		= Lossarnach
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:20 Y:-150
	HeroArmySpot			= X:-5 Y:-105
	HeroArmySpot			= X:-15 Y:-120
	HeroArmySpot			= X:0 Y:-140
	HeroArmySpot			= X:20 Y:-140
	GarrisonArmySpot		= X:20 Y:-160
	BuildingSpot			= X:15 Y:-150

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Lossarnach
;////////////////////////////
Region Lossarnach
	DisplayName				= LW:DisplayNameLossarnach
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor lossarnach"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= LOSSARNACH
	RegionPortrait			= MPLossarnach

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Harlond
		End
		Connection
			Region		= Pelargir
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-30 Y:-200
	HeroArmySpot			= X:-45 Y:-260
	HeroArmySpot			= X:-15 Y:-250
	HeroArmySpot			= X:15 Y:-220
	HeroArmySpot			= X:-60 Y:-230
	GarrisonArmySpot		= X:20 Y:-220
	BuildingSpot			= X:-45 Y:-125

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Lebennin
;////////////////////////////
Region Lebennin
	DisplayName				= LW:DisplayNameLebennin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lebennin"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= LEBENNIN
	RegionPortrait			= MPLebennin

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Ringlo_Vale
		End		
		Connection
			Region		= Belfalas
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-225 Y:-235
	HeroArmySpot			= X:-340 Y:-340
	HeroArmySpot			= X:-300 Y:-340
	HeroArmySpot			= X:-260 Y:-340
	HeroArmySpot			= X:-220 Y:-310
	GarrisonArmySpot		= X:-250 Y:-285
	BuildingSpot			= X:-195 Y:-140

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Pelargir
;////////////////////////////
Region Pelargir
	DisplayName				= LW:DisplayNamePelargir
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Pelargir"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= PELARGIR
	RegionPortrait			= MPPelargir

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Lossarnach
		End
		Connection
			Region		= Southern_Ithilien
		End		
		Connection
			Region		= Ethir_Anduin
		End
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Tolfalas
		End
			Connection
			Region		= Umbar
		End
		Connection
			Region		= Dol_Amroth
		End
	
			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-120 Y:-280
	HeroArmySpot			= X:-175 Y:-335
	HeroArmySpot			= X:-140 Y:-335
	HeroArmySpot			= X:-110 Y:-315
	HeroArmySpot			= X:-80 Y:-295
	GarrisonArmySpot		= X:-125 Y:-285

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNamePelargir
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
End
;////////////////////////////
;// Ringlo Vale
;////////////////////////////
Region Ringlo_Vale
	DisplayName				= LW:DisplayNameRingloVale
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ringlo vale"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= RINGLO_VALE
	RegionPortrait			= MPRingloVale

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Lamedon
		End		
		Connection
			Region		= Belfalas
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-325 Y:-120
	HeroArmySpot			= X:-390 Y:-110
	HeroArmySpot			= X:-360 Y:-80
	HeroArmySpot			= X:-300 Y:-70
	HeroArmySpot			= X:-270 Y:-90
	GarrisonArmySpot		= X:-325 Y:-100
	BuildingSpot			= X:-320 Y:-155

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Belfalas
;////////////////////////////
Region Belfalas
	DisplayName				= LW:DisplayNameBelfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Belfalas"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= BELFALAS
	RegionPortrait			= MPBelfalas

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Ringlo_Vale
		End		
		Connection
			Region		= Lamedon
		End
		Connection
			Region		= Anfalas
		End
		Connection
			Region		= Dol_Amroth
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-440 Y:-285
	HeroArmySpot			= X:-555 Y:-215
	HeroArmySpot			= X:-495 Y:-185
	HeroArmySpot			= X:-435 Y:-185
	HeroArmySpot			= X:-385 Y:-215
	GarrisonArmySpot		= X:-380 Y:-260
	BuildingSpot			= X:-510 Y:-405

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Lamedon
;////////////////////////////
Region Lamedon
	DisplayName				= LW:DisplayNameLamedon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lamedon"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= LAMEDON
	RegionPortrait			= MPLamedon

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Ringlo_Vale
		End		
		Connection
			Region		= Erech
		End
		Connection
			Region		= Anfalas
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-545 Y:-65
	HeroArmySpot			= X:-570 Y:-140
	HeroArmySpot			= X:-525 Y:-115
	HeroArmySpot			= X:-475 Y:-90
	HeroArmySpot			= X:-430 Y:-60
	GarrisonArmySpot		= X:-520 Y:-70
	BuildingSpot			= X:-595 Y:-35

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Dol Amroth
;////////////////////////////
Region Dol_Amroth
	DisplayName				= LW:DisplayNameDolAmroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Amroth"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= DOL_AMROTH
	RegionPortrait			= MPDolAmroth

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Tolfalas
		End
		Connection
			Region		= Grey_Havens
		End
		Connection
			Region		= Umbar
		End
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Maros
		End	
	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-570 Y:-300
	HeroArmySpot			= X:-595 Y:-275
	HeroArmySpot			= X:-560 Y:-275
	HeroArmySpot			= X:-540 Y:-300
	HeroArmySpot			= X:-540 Y:-335
	GarrisonArmySpot		= X:-580 Y:-310

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameDolAmroth
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
End
;////////////////////////////
;// Erech
;////////////////////////////
Region Erech
	DisplayName				= LW:DisplayNameErech
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Erech"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= ERECH
	RegionPortrait			= MPErech

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Lamedon
		End		
		Connection
			Region		= Anfalas
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-670 Y:80
	HeroArmySpot			= X:-715 Y:35
	HeroArmySpot			= X:-685 Y:35
	HeroArmySpot			= X:-660 Y:50
	HeroArmySpot			= X:-635 Y:75
	GarrisonArmySpot		= X:-685 Y:60
	BuildingSpot			= X:-670 Y:130

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Anfalas
;////////////////////////////
Region Anfalas
	DisplayName				= LW:DisplayNameAnfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Anfalas"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANFALAS
	RegionPortrait			= MPAnfalas

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Erech
		End
		Connection
			Region		= Lamedon
		End		
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Andrast
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-935 Y:-160
	HeroArmySpot			= X:-745 Y:-225
	HeroArmySpot			= X:-745 Y:-180
	HeroArmySpot			= X:-745 Y:-135
	HeroArmySpot			= X:-745 Y:-95
	GarrisonArmySpot		= X:-830 Y:-145
	BuildingSpot			= X:-1110 Y:-110
	BuildingSpot			= X:-1110 Y:-230

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Andrast
;////////////////////////////
Region Andrast
	DisplayName				= LW:DisplayNameAndrast
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Andrast"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANDRAST
	RegionPortrait			= MPAndrast

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Anfalas
		End
		Connection
			Region		= Druwaith_Iaur
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1340 Y:-330
	HeroArmySpot			= X:-1360 Y:-420
	HeroArmySpot			= X:-1280 Y:-410
	HeroArmySpot			= X:-1280 Y:-370
	HeroArmySpot			= X:-1280 Y:-320
	GarrisonArmySpot		= X:-1340 Y:-360
	BuildingSpot			= X:-1445 Y:-400

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Tolfalas
;////////////////////////////
Region Tolfalas
	DisplayName				= LW:DisplayNameTolfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Tolfalas"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= TOLFALAS
	RegionPortrait			= MPTolfalas

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Umbar
		End
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Dol_Amroth
		End
		Connection
			Region		= Maros
		End
		
	CustomCenterPoint		= Yes
	CenterPoint				= X:-410 Y:-545
	HeroArmySpot			= X:-425 Y:-575
	HeroArmySpot			= X:-395 Y:-550
	HeroArmySpot			= X:-385 Y:-505
	HeroArmySpot			= X:-420 Y:-530
	GarrisonArmySpot		= X:-410 Y:-565
	BuildingSpot			= X:-405 Y:-540

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										MORDOR REGION - 12 TERRITORIES - 4 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// DAGORLAD SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Black Gate
;////////////////////////////
Region Black_Gate
	DisplayName				= LW:DisplayNameBlackGate
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Black Gate"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= BLACK_GATE
	RegionPortrait			= MPBlackGate

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Dagorlad
		End
		Connection
			Region		= Dead_Marshes
		End		
		Connection
			Region		= Durthang
		End
		Connection
			Region		= Gorgoroth
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:307 Y:158
	HeroArmySpot			= X:250 Y:170
	HeroArmySpot			= X:280 Y:170
	HeroArmySpot			= X:250 Y:140
	HeroArmySpot			= X:280 Y:140
	GarrisonArmySpot		= X:310 Y:170
	;BuildingSpot			= X:350 Y:140

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Dagorlad
;////////////////////////////
Region Dagorlad
	DisplayName				= LW:DisplayNameDagorlad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dagorlad"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DAGORLAD
	RegionPortrait			= MPDagorlad

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Dead_Marshes
		End		
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= South_Rhun
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:520 Y:220
	HeroArmySpot			= X:380 Y:250
	HeroArmySpot			= X:410 Y:250
	HeroArmySpot			= X:380 Y:220
	HeroArmySpot			= X:410 Y:220
	GarrisonArmySpot		= X:440 Y:250
	BuildingSpot			= X:560 Y:210
	BuildingSpot			= X:620 Y:210	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Dead Marshes
;////////////////////////////
Region Dead_Marshes
	DisplayName				= LW:DisplayNameDeadMarshes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dead Marshes"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DEAD_MARSHES
	RegionPortrait			= MPDeadMarshes

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Dagorlad
		End		
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Northern_Ithilien
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:180 Y:235
	HeroArmySpot			= X:100 Y:230
	HeroArmySpot			= X:130 Y:230
	HeroArmySpot			= X:100 Y:200
	HeroArmySpot			= X:130 Y:200
	GarrisonArmySpot		= X:160 Y:230
	BuildingSpot			= X:185 Y:265
	BuildingSpot			= X:245 Y:265	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// EPHEL DUATH SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Cirith_Ungol
;////////////////////////////
Region Cirith_Ungol
	DisplayName				= LW:DisplayNameCirithUngol
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cirith Ungol"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= CIRITH_UNGOL
	RegionPortrait			= MPCirithUngol

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Durthang
		End
		Connection
			Region		= Gorgoroth
		End
		Connection
			Region		= Minas_Morgul
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:300 Y:-25
	HeroArmySpot			= X:255 Y:15
	HeroArmySpot			= X:275 Y:-5
	HeroArmySpot			= X:295 Y:-25
	HeroArmySpot			= X:310 Y:-45
	GarrisonArmySpot		= X:310 Y:-70
	BuildingSpot			= X:300 Y:-90

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Durthang
;////////////////////////////
Region Durthang
	DisplayName				= LW:DisplayNameDurthang
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor durthang"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DURTHANG
	RegionPortrait			= MPDurthang

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Black_Gate
		End	
		Connection
			Region		= Cirith_Ungol
		End
		Connection
			Region		= Gorgoroth
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:260 Y:80
	HeroArmySpot			= X:240 Y:110
	HeroArmySpot			= X:270 Y:100
	HeroArmySpot			= X:280 Y:70
	HeroArmySpot			= X:250 Y:60
	GarrisonArmySpot		= X:260 Y:80

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameDurthang
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
End

;////////////////////////////
;// Minas Morgul
;////////////////////////////
Region Minas_Morgul
	DisplayName				= LW:DisplayNameMinasMorgul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Morgul"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MINAS_MORGUL
	RegionPortrait			= MPMinasMorgul

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Cirith_Ungol
		End
		Connection
			Region		= Emyn_Arnen
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:250 Y:-55
	HeroArmySpot			= X:238 Y:-24
	HeroArmySpot			= X:235 Y:-50
	HeroArmySpot			= X:258 Y:-45
	HeroArmySpot			= X:261 Y:-63
	GarrisonArmySpot		= X:250 Y:-71
	;BuildingSpot			= X:260 Y:80

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMinasMorgul
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
End

//-------------------------------------------------------------------------------------------------
// GORGOROTH SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Ered Lithui
;////////////////////////////
Region Ered_Lithui
	DisplayName				= LW:DisplayNameEredLithui
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ered lithui"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= ERED_LITHUI
	RegionPortrait			= MPEredLithui

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Gorgoroth
		End
		Connection
			Region		= Mount_Doom
		End
		Connection
			Region		= Nurn
		End
		Connection
			Region		= Sea_Of_Nurnen
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:680 Y:-20
	HeroArmySpot			= X:600 Y:0
	HeroArmySpot			= X:630 Y:0
	HeroArmySpot			= X:600 Y:-30
	HeroArmySpot			= X:630 Y:-30
	GarrisonArmySpot		= X:600 Y:-60
	BuildingSpot			= X:740 Y:0
	BuildingSpot			= X:800 Y:0	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

;////////////////////////////
;// Plains of Gorgoroth
;////////////////////////////
Region Gorgoroth
	DisplayName				= LW:DisplayNameGorgoroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor plains of gorgoroth"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= PLAINS_OF_GORGO
	RegionPortrait			= MPGorgoroth

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Cirith_Ungol
		End		
		Connection
			Region		= Durthang
		End
		Connection
			Region		= Ered_Lithui
		End				
		Connection
			Region		= Mount_Doom
		End
		Connection
			Region		= Sea_Of_Nurnen
		End	
		Connection
			Region		= Slavefields_Of_Nurn
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:420 Y:-65
	HeroArmySpot			= X:375 Y:-100
	HeroArmySpot			= X:405 Y:-100
	HeroArmySpot			= X:375 Y:-130
	HeroArmySpot			= X:405 Y:-130
	GarrisonArmySpot		= X:435 Y:-100
	BuildingSpot			= X:375 Y:-40
	BuildingSpot			= X:435 Y:-40
	BuildingSpot			= X:495 Y:-40	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

;////////////////////////////
;// Mount_Doom
;////////////////////////////
Region Mount_Doom
	DisplayName				= LW:DisplayNameMountDoom
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor mount doom"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MOUNT_DOOM
	RegionPortrait			= MPMountDoom

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 5
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Ered_Lithui
		End				
		Connection
			Region		= Gorgoroth
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:470 Y:55
	HeroArmySpot			= X:490 Y:60
	HeroArmySpot			= X:520 Y:60
	HeroArmySpot			= X:490 Y:30
	HeroArmySpot			= X:520 Y:30
	GarrisonArmySpot		= X:472 Y:46
	BuildingSpot			= X:430 Y:70	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

//-------------------------------------------------------------------------------------------------
// NURN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Nurn
;////////////////////////////
Region Nurn
	DisplayName				= LW:DisplayNameNurn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Nurn"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= NURN
	RegionPortrait			= MPNurn

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Ered_Lithui
		End				
		Connection
			Region		= Sea_Of_Nurnen
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1000 Y:-40
	HeroArmySpot			= X:900 Y:-70
	HeroArmySpot			= X:930 Y:-70
	HeroArmySpot			= X:900 Y:-100
	HeroArmySpot			= X:930 Y:-100
	GarrisonArmySpot		= X:960 Y:-70
	BuildingSpot			= X:1000 Y:0	

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

;////////////////////////////
;// Sea of Nurnen
;////////////////////////////
Region Sea_Of_Nurnen
	DisplayName				= LW:DisplayNameSeaOfNurnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor sea of nurnen"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= SEA_OF_NURNEN
	RegionPortrait			= MPSeaOfNurnen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Ered_Lithui
		End				
		Connection
			Region		= Gorgoroth
		End
		Connection
			Region		= Slavefields_Of_Nurn
		End
		Connection
			Region		= Nurn
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:810 Y:-275
	HeroArmySpot			= X:705 Y:-255
	HeroArmySpot			= X:735 Y:-255
	HeroArmySpot			= X:705 Y:-285
	HeroArmySpot			= X:735 Y:-285
	GarrisonArmySpot		= X:765 Y:-255
	BuildingSpot			= X:780 Y:-180

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End

;////////////////////////////
;// Slavefields of Nurn
;////////////////////////////
Region Slavefields_Of_Nurn
	DisplayName				= LW:DisplayNameSlavefieldsOfNurn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor slavefields of nurn"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= SLAVEFIELDS_OF_
	RegionPortrait			= MPSlavefieldsOfNurn

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Gorgoroth
		End
		Connection
			Region		= Sea_Of_Nurnen
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:480 Y:-345
	HeroArmySpot			= X:425 Y:-375
	HeroArmySpot			= X:455 Y:-375
	HeroArmySpot			= X:425 Y:-405
	HeroArmySpot			= X:455 Y:-405
	GarrisonArmySpot		= X:485 Y:-375
	BuildingSpot			= X:460 Y:-275

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
			Region		= Taur_En_Ungolath
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
			Region		= Northern_Mirkwood
		End
		Connection
			Region		= Hall_Oak
		End
		Connection
			Region		= Forest_Gate
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
			Region = Northern_Mirkwood
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
			Region		= Taur_En_Ungolath
		End
		Connection
			Region		= Dol_Guldur
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
			Region		= Forest_Gate
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Taur_En_Ungolath
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
;// Amon Hen
;////////////////////////////
Region Amon_Hen
	DisplayName				= LW:DisplayNameAmonHen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Amon Hen"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= AMON_HEN
	RegionPortrait			= MPAmonHen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Eastern_Rohan
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= The_Wold
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-85 Y:330
	HeroArmySpot			= X:-120 Y:385
	HeroArmySpot			= X:-90 Y:415
	HeroArmySpot			= X:-55 Y:410
	HeroArmySpot			= X:-50 Y:380
	GarrisonArmySpot		= X:-85 Y:360
	BuildingSpot			= X:-85 Y:285

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// East Bight
;////////////////////////////
Region East_Bight
	DisplayName				= LW:DisplayNameEastBight
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR East Bight"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAST_BIGHT
	RegionPortrait			= MPEastBight

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Vales_Celduin
		End
		Connection
			Region		= Dorwinion
		End
		Connection
			Region		= South_Rhun
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Mirkwood
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:380 Y:675
	HeroArmySpot			= X:260 Y:690
	HeroArmySpot			= X:290 Y:660
	HeroArmySpot			= X:320 Y:615
	HeroArmySpot			= X:365 Y:580
	GarrisonArmySpot		= X:360 Y:650
	BuildingSpot			= X:370 Y:795
	BuildingSpot			= X:430 Y:710

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Emyn Muil
;////////////////////////////
Region Emyn_Muil
	DisplayName				= LW:DisplayNameEmynMuil
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Emyn Muil"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= EMYN_MUIL
	RegionPortrait			= MPEmynMuil

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= South_Rhun
		End
		Connection
			Region		= Dagorlad
		End
		Connection
			Region		= Dead_Marshes
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Amon_Hen
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:190 Y:350
	HeroArmySpot			= X:85 Y:395
	HeroArmySpot			= X:25 Y:360
	HeroArmySpot			= X:15 Y:315
	HeroArmySpot			= X:40 Y:270
	GarrisonArmySpot		= X:95 Y:340
	BuildingSpot			= X:215 Y:355
	BuildingSpot			= X:305 Y:355

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
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
			Region		= The_Wold
		End
		Connection
			Region		= Snowbourn
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
;////////////////////////////
;// Old Brown Lands
;////////////////////////////
Region Old_Brown_Lands
	DisplayName				= LW:DisplayNameOldBrownlands
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor old brown lands"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= BROWN_LANDS
	RegionPortrait			= MPOldBrownLands

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= East_Bight
		End
		Connection
			Region		= South_Rhun
		End
		Connection
			Region		= Emyn_Muil
		End	
		Connection
			Region		= Amon_Hen
		End	
		Connection
			Region		= The_Wold
		End
		Connection
			Region		= Field_Celebrant
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:75 Y:530
	HeroArmySpot			= X:105 Y:625
	HeroArmySpot			= X:165 Y:615
	HeroArmySpot			= X:235 Y:555
	HeroArmySpot			= X:265 Y:525
	GarrisonArmySpot		= X:140 Y:545
	BuildingSpot			= X:40 Y:525
	BuildingSpot			= X:-50 Y:545

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// The Wold
;////////////////////////////
Region The_Wold
	DisplayName				= LW:DisplayNameWold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the wold"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_WOLD
	RegionPortrait			= MPWold

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
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Amon_Hen
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= Snowbourn
		End	
		Connection
			Region		= Fangorn
		End	
		Connection
			Region		= Nan_Celebrant
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-290 Y:455
	HeroArmySpot			= X:-330 Y:410
	HeroArmySpot			= X:-270 Y:410
	HeroArmySpot			= X:-210 Y:410
	HeroArmySpot			= X:-170 Y:430
	GarrisonArmySpot		= X:-260 Y:440
	BuildingSpot			= X:-400 Y:490
	BuildingSpot			= X:-340 Y:520

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
//-------------------------------------------------------------------------------------------------
// DOL GULDUR SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Dol Guldur
;////////////////////////////
Region Dol_Guldur
	DisplayName				= LW:DisplayNameDolGuldur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Guldur"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DOL_GULDUR
	RegionPortrait			= MPDolGuldur

	;ResourceBonus			= 0
	;LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	FertileTerritoryBonus 		= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo				=
        Connection
			Region = Taur_En_Ungolath
		End
        Connection
			Region = Mirkwood
		End
		Connection
			Region = Old_Brown_Lands
		End
		Connection
			Region = Field_Celebrant
		End		
		Connection
			Region = Gladden_Fields
		End	
	CustomCenterPoint		= Yes
	CenterPoint				= X:-32 Y:763

    HeroArmySpot			= X:43 Y:695
    HeroArmySpot			= X:-103 Y:730
    HeroArmySpot			= X:-84 Y:827    
    HeroArmySpot			= X:22 Y:785
    GarrisonArmySpot		= X:-32 Y:763

    CPLimit					= 1000
    AllyCPLimit				= 500
        
	CreateAutoFort				= Yes		// This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCDolGuldurCastle
	FortressDisplayName			= LW:DisplayNameDolGuldur
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold
        
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

End
;////////////////////////////
;// Taur-en-Ungolath
;////////////////////////////
Region Taur_En_Ungolath
	DisplayName				= LW:DisplayNameTaurEnUngolath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor taur en ungolath"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaEvil13
	SubObject				= TAUR_EN_UNGOLAT
	RegionPortrait			= MPTaurEnUngolath

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Vale_Anduin
		End
		Connection
			Region		= Old_Ford_Anduin
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-10 Y:920
	HeroArmySpot			= X:50 Y:900
	HeroArmySpot			= X:50 Y:845
	HeroArmySpot			= X:0 Y:880
	HeroArmySpot			= X:-60 Y:890
	GarrisonArmySpot		= X:0 Y:900
	BuildingSpot			= X:-45 Y:970

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
			Region		= Dol_Guldur
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= The_Wold
		End
		Connection
			Region		= Nan_Celebrant
		End
		Connection
			Region		= Lothlorien
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
;// Lothlorien
;////////////////////////////
Region Lothlorien
	DisplayName				= LW:DisplayNameLothlorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lothlorien"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= LOTHLORIEN
	RegionPortrait			= MPLothlorien

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 5
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Caradhras
		End	
		Connection
			Region		= Dimrill_Dale
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Nan_Celebrant
		End		
		Connection
			Region		= Taur_Hith
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-405 Y:710
	HeroArmySpot			= X:-380 Y:670
	HeroArmySpot			= X:-360 Y:700
	HeroArmySpot			= X:-360 Y:730
	HeroArmySpot			= X:-410 Y:680
	GarrisonArmySpot		= X:-420 Y:710

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameCarasGaladhon
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
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
			Region		= Lothlorien
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= The_Wold
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
			Region		= Lothlorien
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
;// Forest Gate
;////////////////////////////
Region Forest_Gate
	DisplayName				= LW:DisplayNameForestGate
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor the forest gate"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= THE_FOREST_GATE
	RegionPortrait			= MPForestGate

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Hall_Oak
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Old_Ford_Anduin
		End
		Connection
			Region		= Carrock
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-15 Y:1160
	HeroArmySpot			= X:-70 Y:1180
	HeroArmySpot			= X:-35 Y:1200
	HeroArmySpot			= X:0 Y:1205
	HeroArmySpot			= X:35 Y:1185
	GarrisonArmySpot		= X:-15 Y:1170
	BuildingSpot			= X:-30 Y:1140

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Halls of the Elvenking
;////////////////////////////
Region Halls_Elvenking
	DisplayName				= LW:DisplayNameHallsElvenking
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor halls of the elvenking"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= HALLS_OF_THE_EL
	RegionPortrait			= MPHallsElvenking

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 5
	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Taur_Na_Faroth
		End	
		Connection
			Region		= Erebor
		End
		Connection
			Region		= Esgaroth
		End
		Connection
			Region		= Taur_En_Morvith
		End		
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Forest_Gate
		End
		Connection
			Region		= Hall_Oak
		End
		Connection
			Region		= Northern_Mirkwood
		End			
		

	CustomCenterPoint		= Yes
	CenterPoint				= X:160 Y:1230
	HeroArmySpot			= X:95 Y:1190
	HeroArmySpot			= X:160 Y:1165
	HeroArmySpot			= X:220 Y:1140
	HeroArmySpot			= X:250 Y:1170
	GarrisonArmySpot		= X:170 Y:1220

	CPLimit				= 1000
	AllyCPLimit			= 500
	
	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameHallsThranduil
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold
End
;////////////////////////////
;// Hall of Oak
;////////////////////////////
Region Hall_Oak
	DisplayName				= LW:DisplayNameHallOak
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor hall of oak"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= HALL_OF_OAK
	RegionPortrait			= MPHallOak

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Northern_Mirkwood
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Forest_Gate
		End
		Connection
			Region		= Carrock
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-70 Y:1255
	HeroArmySpot			= X:-110 Y:1225
	HeroArmySpot			= X:-75 Y:1225
	HeroArmySpot			= X:-30 Y:1240
	HeroArmySpot			= X:-40 Y:1270
	GarrisonArmySpot		= X:-65 Y:1245
	BuildingSpot			= X:-80 Y:1280

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
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
			Region		= Dol_Guldur
		End
		Connection
			Region		= Taur_En_Ungolath
		End
		Connection
			Region		= East_Bight
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Old_Ford_Anduin
		End
		Connection
			Region		= Vales_Celduin
		End
		Connection
			Region		= Forest_Gate
		End
		Connection
			Region		= Taur_En_Morvith
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
;////////////////////////////
;// Northern Mirkwood
;////////////////////////////
Region Northern_Mirkwood
	DisplayName				= LW:DisplayNameNorthernMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Northern Mirkwood"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTHERN_MIRKWO
	RegionPortrait			= MPNorthernMirkwood

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Taur_Na_Faroth
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Hall_Oak
		End
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= Grey_Mountains
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-55 Y:1380
	HeroArmySpot			= X:-120 Y:1340
	HeroArmySpot			= X:-60 Y:1325
	HeroArmySpot			= X:0 Y:1310
	HeroArmySpot			= X:50 Y:1330
	GarrisonArmySpot		= X:-35 Y:1350
	BuildingSpot			= X:-50 Y:1420

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Taur-en-Morvith
;////////////////////////////
Region Taur_En_Morvith
	DisplayName				= LW:DisplayNameTaurEnMorvith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor taur en morvith"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= TAUR_EN_MORVITH
	RegionPortrait			= MPTaurEnMorvith

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
			Region		= Vales_Celduin
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Halls_Elvenking
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:300 Y:1050
	HeroArmySpot			= X:260 Y:1095
	HeroArmySpot			= X:290 Y:1100
	HeroArmySpot			= X:330 Y:1115
	HeroArmySpot			= X:350 Y:1085
	GarrisonArmySpot		= X:305 Y:1070
	BuildingSpot			= X:305 Y:1010

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Taur-na-Faroth
;////////////////////////////
Region Taur_Na_Faroth
	DisplayName				= LW:DisplayNameTaurNaFaroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor taur na faroth"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= TAUR_NA_FAROTH
	RegionPortrait			= MPTaurNaFaroth

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= Withered_Heath
		End
		Connection
			Region		= Erebor
		End
		Connection
			Region		= Halls_Elvenking
		End
		Connection
			Region		= Northern_Mirkwood
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:110 Y:1425
	HeroArmySpot			= X:135 Y:1390
	HeroArmySpot			= X:90 Y:1370
	HeroArmySpot			= X:55 Y:1400
	HeroArmySpot			= X:35 Y:1430
	GarrisonArmySpot		= X:105 Y:1405
	BuildingSpot			= X:110 Y:1470

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// 										RHUN REGION - 7 TERRITORIES - 3 SUB-REGIONS
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------
// DORWINION SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Dorwinion
;////////////////////////////
Region Dorwinion
	DisplayName				= LW:DisplayNameDorwinion
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dorwinion"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DORWINION
	RegionPortrait			= MPDorwinion

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Carnen
		End
		Connection
			Region		= Rhun
		End
		Connection
			Region		= South_Rhun
		End
		Connection
			Region		= Vales_Celduin
		End	
		Connection
			Region		= East_Bight
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:841 Y:773
	HeroArmySpot			= X:770 Y:815
	HeroArmySpot			= X:735 Y:780
	HeroArmySpot			= X:715 Y:745
	HeroArmySpot			= X:770 Y:735
	GarrisonArmySpot		= X:840 Y:770
	BuildingSpot			= X:930 Y:755


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
	
	RestrictBuildings
		Buildings		= Armory
		NumberAllowed		= 1
	End	
End

//-------------------------------------------------------------------------------------------------
// RHÛN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Kunin
;////////////////////////////
Region Kunin
	DisplayName				= LW:DisplayNameKunin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor kunin"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= KINN_LAI_FOREST
	RegionPortrait			= MPKunin

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Steppes_Sarakhax
		End
		Connection
			Region		= Rhun
		End
		Connection
			Region		= Ul_Tala
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:1730 Y:730
	HeroArmySpot			= X:1630 Y:680
	HeroArmySpot			= X:1660 Y:670
	HeroArmySpot			= X:1695 Y:670
	HeroArmySpot			= X:1755 Y:670
	GarrisonArmySpot		= X:1715 Y:705
	BuildingSpot			= X:1740 Y:775


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Rhûn
;////////////////////////////
Region Rhun
	DisplayName				= LW:DisplayNameRhun
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rhun"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= RHUN
	RegionPortrait			= MPRhun

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Steppes_Sarakhax
		End
		Connection
			Region		= Kunin
		End
		Connection
			Region		= Ul_Tala
		End	
		Connection
			Region		= Carnen
		End
		Connection
			Region		= Dorwinion
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:1438 Y:894
	HeroArmySpot			= X:1305 Y:995
	HeroArmySpot			= X:1270 Y:955
	HeroArmySpot			= X:1210 Y:910
	HeroArmySpot			= X:1140 Y:845
	GarrisonArmySpot		= X:1310 Y:910
	BuildingSpot			= X:1365 Y:740
	BuildingSpot			= X:1485 Y:760


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// Steppes of Sarâkhax
;////////////////////////////
Region Steppes_Sarakhax
	DisplayName				= LW:DisplayNameSteppesofSarakhax
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor steppes of sarakhax"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= AEGEAN_STEPPE
	RegionPortrait			= MPSteppesSarakhax

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Kunin
		End
		Connection
			Region		= Rhun
		End	
		Connection
			Region		= Surubeki
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:1535 Y:575
	HeroArmySpot			= X:1340 Y:595
	HeroArmySpot			= X:1400 Y:600
	HeroArmySpot			= X:1460 Y:615
	HeroArmySpot			= X:1525 Y:625
	GarrisonArmySpot		= X:1520 Y:560
	BuildingSpot			= X:1600 Y:550
	BuildingSpot			= X:1660 Y:550


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Ul-tala
;////////////////////////////
Region Ul_Tala
	DisplayName				= LW:DisplayNameUlTala
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor ul tala"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= OROCARNI
	RegionPortrait			= MPUlTala

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Kunin
		End
		Connection
			Region		= Rhun
		End	
		
	CustomCenterPoint		= Yes
	CenterPoint				= X:1900 Y:920
	HeroArmySpot			= X:1870 Y:950
	HeroArmySpot			= X:1825 Y:925
	HeroArmySpot			= X:1790 Y:900
	HeroArmySpot			= X:1730 Y:870
	GarrisonArmySpot		= X:1870 Y:905
	BuildingSpot			= X:1980 Y:915
	BuildingSpot			= X:2045 Y:930


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// SOUTH RHÛN SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Surubeki
;////////////////////////////
Region Surubeki
	DisplayName				= LW:DisplayNameSurubeki
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor surubeki"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= SURUBEKI
	RegionPortrait			= MPSurubeki

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Steppes_Sarakhax
		End
		Connection
			Region		= South_Rhun
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:1410 Y:422
	HeroArmySpot			= X:1240 Y:435
	HeroArmySpot			= X:1300 Y:380
	HeroArmySpot			= X:1305 Y:315
	HeroArmySpot			= X:1365 Y:315
	GarrisonArmySpot		= X:1370 Y:400
	BuildingSpot			= X:1495 Y:410


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End
;////////////////////////////
;// South Rhûn
;////////////////////////////
Region South_Rhun
	DisplayName				= LW:DisplayNameSouthRhun
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map wor south rhun"
	SkirmishStillImage		= WOR_Rhun
	SkirmishMusicTrack		= BaEvil13
	SubObject				= SOUTH_RHUN
	RegionPortrait			= MPSouthRhun

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Dorwinion
		End		
		Connection
			Region		= Surubeki
		End
		Connection
			Region		= East_Bight
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Dagorlad
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:802 Y:446
	HeroArmySpot			= X:520 Y:385
	HeroArmySpot			= X:580 Y:350
	HeroArmySpot			= X:640 Y:335
	HeroArmySpot			= X:705 Y:305
	GarrisonArmySpot		= X:770 Y:400
	BuildingSpot			= X:945 Y:345
	BuildingSpot			= X:1020 Y:345


	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: ARNOR
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Arthedain
ConcurrentRegionBonus
	Territory				= LW:SubRegionArthedain
	;EffectName				= 
	Regions					= Annuminas Fornost Hills_Evendim North_Downs
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1550 Y:1450
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.20
End

;// Sub-Region : Bree-land
ConcurrentRegionBonus
	Territory				= LW:SubRegionBreeland
	;EffectName				= 
	Regions					= Barrow_Downs Bree Sarn_Ford
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1460 Y:900
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Sub-Region : The Shire
ConcurrentRegionBonus
	Territory				= LW:SubRegionTheShire
	;EffectName				= 
	Regions					= Buckland The_Shire Old_Forest
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1430 Y:1060
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.10
End

;// Sub-Region : Weather Hills
ConcurrentRegionBonus
	Territory				= LW:SubRegionWeatherHills
	;EffectName				= 
	Regions					= Weather_Hills Weathertop
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1100 Y:1130
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.16
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryArnor
	;EffectName				= ARNOR
	Regions					= Annuminas Fornost Hills_Evendim North_Downs Barrow_Downs Bree Sarn_Ford Buckland The_Shire Old_Forest Weather_Hills Weathertop
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	DiscountedHeroUnitsBonus = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1650 Y:1350
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.32
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: ENEDWAITH
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Dunland
ConcurrentRegionBonus
	Territory				= LW:SubRegionDunland
	;EffectName				= 
	Regions					= Dunfearn Dunland Wulfborg Frecalund Regnfells
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1150 Y:350
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.21
End

;// Sub-Region : Enedwaith
ConcurrentRegionBonus
	Territory				= LW:SubRegionEnedwaith
	;EffectName				= 
	Regions					= Enedwaith Greyflood Druwaith_Iaur
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1600 Y:100
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.26
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryEnedwaith
	;EffectName				= ENEDWAITH
	Regions					= Dunfearn Dunland Wulfborg Frecalund Regnfells Enedwaith Greyflood Druwaith_Iaur
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 5
	FreeInnUnitsBonus       = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1500 Y:150
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.33
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
	Regions					= Eastern_Wastes Erebor Esgaroth
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
	Regions					= Carnen Vales_Celduin
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
	Regions					= Ironfoot_Halls Iron_Foothills Iron_Hills Targul Eastern_Wastes Erebor Esgaroth Carnen Vales_Celduin
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
;// REGION: ERIADOR
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Cardolan
ConcurrentRegionBonus
	Territory				= LW:SubRegionCardolan
	;EffectName				= 
	Regions					= Cardolan Minhiriath Swanfleet Tharbad
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

;// Sub-Region : Rhudaur
ConcurrentRegionBonus
	Territory				= LW:SubRegionRhudaur
	;EffectName				= 
	Regions					= The_Angle Rhudaur Trollshaws
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-880 Y:1100
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.18
End

;// Sub-Region : Rivendell
ConcurrentRegionBonus
	Territory				= LW:SubRegionRivendell
	;EffectName				= 
	Regions					= Fords_Bruinen Rivendell
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-600 Y:1092
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.12
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryEriador
	;EffectName				= ERIADOR
	Regions					= Cardolan Minhiriath Swanfleet Tharbad Eregion Hollin Ost_In_Edhil The_Angle Rhudaur Trollshaws Fords_Bruinen Rivendell
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	DiscountedBarracksUnitsBonus = 100
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1530 Y:950
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.36
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: FORODWAITH
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Forochel
ConcurrentRegionBonus
	Territory				= LW:SubRegionForochel
	;EffectName				= 
	Regions					= Ice_Bay_Of_Forochel Ita_Ma tuli_Ma
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1500 Y:2050
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.25
End

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

ConcurrentRegionBonus
	Territory				= LW:TerritoryForodwaith
	;EffectName				= FORODWAITH
	Regions					= Ice_Bay_Of_Forochel Ita_Ma tuli_Ma Forodwaith Jotunstath Northtarn
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	FreeInnUnitsBonus       = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1200 Y:2300
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.33
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: HARADWAITH
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Abrakhan
ConcurrentRegionBonus
	Territory				= LW:SubRegionAbrakhan
	;EffectName				= 
	Regions					= Abrakhan Desert_Of_Azkahar Tombs_Of_Abrakhan
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1315 Y:-1275
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End

;// Sub-Region : Far Harad
ConcurrentRegionBonus
	Territory				= LW:SubRegionFarHarad
	;EffectName				= 
	Regions					= Karna Far_Harad Nafarat_Delta Nafarat
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:10 Y:-2280
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.3
End

;// Sub-Region : Harondor
ConcurrentRegionBonus
	Territory				= LW:SubRegionHarondor
	;EffectName				= 
	Regions					= Ethir_Anduin Harad_Road Harondor
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:15 Y:-770
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.18
End

;// Sub-Region : Khand
ConcurrentRegionBonus
	Territory				= LW:SubRegionKhand
	;EffectName				= 
	Regions					= Borders_Of_Khand Khand Itakh_Khand
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 5
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1600 Y:-950
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.28
End

;// Sub-Region : Mardruak
ConcurrentRegionBonus
	Territory				= LW:SubRegionMardruak
	;EffectName				= 
	Regions					= Cape_Of_Mardruak Dusalan Harad_Coast Hidar
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 5
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-800 Y:-1850
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.2
End

;// Sub-Region : Near Harad
ConcurrentRegionBonus
	Territory				= LW:SubRegionNearHarad
	;EffectName				= 
	Regions					= Desert_Of_Lostladen Amathuna Near_Harad
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 5
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:250 Y:-1520
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.3
End

;// Sub-Region : Umbar
ConcurrentRegionBonus
	Territory				= LW:SubRegionUmbar
	;EffectName				= 
	Regions					= Maros Umbar White_Pillar
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 0
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-450 Y:-1310
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryHaradwaith
	;EffectName				= HARADWAITH
	Regions					= Abrakhan Amathuna Borders_Of_Khand Cape_Of_Mardruak Desert_Of_Azkahar Desert_Of_Lostladen Dusalan Ethir_Anduin Far_Harad Harad_Coast Harad_Road Harondor Hidar Nafarat_Delta Karna Khand Maros Nafarat Near_Harad Itakh_Khand Tombs_Of_Abrakhan Umbar White_Pillar
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	FreeInnUnitsBonus       = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:600 Y:-2450
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.5
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: GONDOR
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Southern Gondor
ConcurrentRegionBonus
	Territory				= LW:SubRegionSouthGondor
	;EffectName				= 
	Regions					= Andrast Anfalas Belfalas Central_Ithilien Dol_Amroth Erech Lamedon Lebennin Lossarnach Pelargir Ringlo_Vale Southern_Ithilien Tolfalas
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 15
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1000 Y:-470
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.36
End

;// Sub-Region : Northern Gondor
ConcurrentRegionBonus
	Territory				= LW:SubRegionNorthGondor
	;EffectName				= 
	Regions					= Anorien Cair_Andros Crossroads Druadan_Forest Emyn_Arnen Halifirien Harlond Minas_Tirith Mouths_Entwash Northern_Ithilien Osgiliath
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:80 Y:-70
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryGondor
	Regions					= Andrast Anfalas Anorien Belfalas Cair_Andros Central_Ithilien Crossroads Dol_Amroth Druadan_Forest Emyn_Arnen Erech Halifirien Harlond Lamedon Lebennin Lossarnach Minas_Tirith Mouths_Entwash Northern_Ithilien Osgiliath Pelargir Ringlo_Vale Southern_Ithilien Tolfalas
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	DiscountedHeroUnitsBonus = 1 
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1000 Y:-470
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.38
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
;// REGION: LINDON
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Forlindon
ConcurrentRegionBonus
	Territory				= LW:SubRegionForlindon
	;EffectName				= 
	Regions					= Cape_Forlond Ered_Luin_Highlands Forlindon Ered_Luin Grey_Havens
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-2550 Y:1600
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.30
End

;// Sub-Region : Harlindon
ConcurrentRegionBonus
	Territory				= LW:SubRegionHarlindon
	;EffectName				= 
	Regions					= Thorins_Halls Harlindon Tower_Hills
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-2250 Y:900
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.25
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryLindon
	;EffectName				= MORDOR
	Regions					= Cape_Forlond Ered_Luin_Highlands Forlindon Ered_Luin Grey_Havens Thorins_Halls Harlindon Tower_Hills
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	ExtraStartResourcesBonus = 200
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-3100 Y:1625
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.42
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: MORDOR
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Dagorlad
ConcurrentRegionBonus
	Territory				= LW:SubRegionDagorlad
	;EffectName				= 
	Regions					= Black_Gate Dagorlad Dead_Marshes
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:425 Y:150
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Sub-Region : Ephel Duath
ConcurrentRegionBonus
	Territory				= LW:SubRegionEphelDuath
	;EffectName				= 
	Regions					= Cirith_Ungol Durthang Minas_Morgul
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:285 Y:0
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Sub-Region : Gorgoroth
ConcurrentRegionBonus
	Territory				= LW:SubRegionGorgoroth
	;EffectName				= 
	Regions					= Ered_Lithui Gorgoroth Mount_Doom
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:590 Y:-100
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End

;// Sub-Region : Nurn
ConcurrentRegionBonus
	Territory				= LW:SubRegionNurn
	;EffectName				= 
	Regions					= Nurn Sea_Of_Nurnen Slavefields_Of_Nurn
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:880 Y:-370
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.24
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryMordor
	;EffectName				= MORDOR
	Regions					= Black_Gate Cirith_Ungol Dagorlad Dead_Marshes Durthang Ered_Lithui Gorgoroth Minas_Morgul Mount_Doom Nurn Sea_Of_Nurnen Slavefields_Of_Nurn
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	BuildingDiscountBonus 	= 200
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:775 Y:-300
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.33
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

;// Sub-Region : Brown Lands
ConcurrentRegionBonus
	Territory				= LW:SubRegionBrownLands
	;EffectName				= 
	Regions					= Amon_Hen East_Bight Emyn_Muil Fangorn Old_Brown_Lands The_Wold
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 5
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-110 Y:510
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.3
End

;// Sub-Region : Dol Guldur
ConcurrentRegionBonus
	Territory				= LW:SubRegionDolGuldur
	;EffectName				= 
	Regions					= Dol_Guldur Taur_En_Ungolath
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-25 Y:840
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Sub-Region : Lothlorien
ConcurrentRegionBonus
	Territory				= LW:SubRegionLothlorien
	;EffectName				= 
	Regions					= Field_Celebrant Lothlorien Nan_Celebrant Taur_Hith
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

;// Sub-Region : Woodland Realm
ConcurrentRegionBonus
	Territory				= LW:SubRegionWoodlandRealm
	;EffectName				= 
	Regions					= Forest_Gate Halls_Elvenking Hall_Oak Mirkwood Northern_Mirkwood Taur_En_Morvith Taur_Na_Faroth
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 5
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:65 Y:1300
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.34
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryRhovanion
	;EffectName				= RHUN
	Regions					= Vale_Anduin Carrock Framsburg Gladden_Fields Old_Ford_Anduin Amon_Hen East_Bight Emyn_Muil Fangorn Old_Brown_Lands The_Wold Dol_Guldur Taur_En_Ungolath Field_Celebrant Lothlorien Nan_Celebrant Taur_Hith Forest_Gate Halls_Elvenking Hall_Oak Mirkwood Northern_Mirkwood Taur_En_Morvith Taur_Na_Faroth
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
;// REGION: RHUN
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : Dorwinion
ConcurrentRegionBonus
	Territory				= LW:SubRegionDorwinion
	;EffectName				= 
	Regions					= Dorwinion
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	FreeInnUnitsBonus       = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:870 Y:760
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Sub-Region : Rhûn
ConcurrentRegionBonus
	Territory				= LW:SubRegionRhun
	;EffectName				= 
	Regions					= Kunin Rhun Ul_Tala Steppes_Sarakhax
	ArmyBonus				= 5
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 5
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1820 Y:800
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.29
End

;// Sub-Region : South Rhûn
ConcurrentRegionBonus
	Territory				= LW:SubRegionSouthRhun
	;EffectName				= 
	Regions					= South_Rhun Surubeki
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 5
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1325 Y:385
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.29
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryRhun
	;EffectName				= RHUN
	Regions					= Steppes_Sarakhax Dorwinion Ul_Tala Kunin Rhun South_Rhun Surubeki
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	DiscountedSeigeUnitsBonus = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1670 Y:675
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.37
End

;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
;// REGION: ROHAN
;//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

;// Sub-Region : East-mark
ConcurrentRegionBonus
	Territory				= LW:SubRegionEastMark
	;EffectName				= 
	Regions					= East_Emnet Eastfold Eastern_Rohan
	ArmyBonus				= 0
	ResourceBonus			= 5
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-295 Y:220
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.13
End

;// Sub-Region : Isengard
ConcurrentRegionBonus
	Territory				= LW:SubRegionIsengard
	;EffectName				= 
	Regions					= Eaves_Fangorn Fords_Isen Gap_Of_Rohan Isengard
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

;// Sub-Region : King's Lands
ConcurrentRegionBonus
	Territory				= LW:SubRegionKingsLands
	;EffectName				= 
	Regions					= Dunharrow Edoras Harrowdale The_Folde
	ArmyBonus				= 0
	ResourceBonus			= 10
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-580 Y:210
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.13
End

;// Sub-Region : West-mark
ConcurrentRegionBonus
	Territory				= LW:SubRegionWestMark
	;EffectName				= 
	Regions					= Helms_Deep Snowbourn West_Emnet Westfold
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-680 Y:300
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.13
End

ConcurrentRegionBonus
	Territory				= LW:TerritoryRohan
	;EffectName				= ERIADOR
	Regions					= Dunharrow East_Emnet Eastfold Eastern_Rohan Eaves_Fangorn Edoras Fords_Isen Gap_Of_Rohan Harrowdale Helms_Deep Isengard Snowbourn The_Folde West_Emnet Westfold
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	ExtraStartResourcesBonus = 300
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-635 Y:290
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.25
End