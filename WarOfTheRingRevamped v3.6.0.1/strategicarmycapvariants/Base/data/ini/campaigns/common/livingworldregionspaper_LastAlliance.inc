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
	;BuildingSpot			= X:-1405 Y:1280
	;BuildingSpot			= X:-1370 Y:1230	

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
	DisplayName				= LW:DisplayNameFornostLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Fornost"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORNOST
	RegionPortrait			= MPFornostLA

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
	;BuildingSpot			= X:-1290 Y:1230	

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
			Region		= North_Downs
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1430 Y:1440
	HeroArmySpot			= X:-1420 Y:1470
	HeroArmySpot			= X:-1390 Y:1470
	HeroArmySpot			= X:-1420 Y:1440
	HeroArmySpot			= X:-1390 Y:1440
	GarrisonArmySpot		= X:-1360 Y:1470
	;BuildingSpot			= X:-1545 Y:1460
	;BuildingSpot			= X:-1545 Y:1400	

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
	;BuildingSpot			= X:-1100 Y:1470	

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
	;BuildingSpot			= X:-1270 Y:900
	;BuildingSpot			= X:-1320 Y:900		

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
	HeroArmySpot			= X:-1280 Y:1070
	HeroArmySpot			= X:-1230 Y:1030
	HeroArmySpot			= X:-1200 Y:1040
	HeroArmySpot			= X:-1165 Y:1050
	GarrisonArmySpot		= X:-1230 Y:1060
	;BuildingSpot			= X:-1171 Y:1071	

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
	;BuildingSpot			= X:-1550 Y:800
	;BuildingSpot			= X:-1485 Y:790		

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
	;BuildingSpot			= X:-1290 Y:1145	

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
	;BuildingSpot			= X:-1470 Y:1120	

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
	ExperienceBonus			= 5
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
	;BuildingSpot			= X:-1330 Y:1010	

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
	;BuildingSpot			= X:-1045 Y:1205
	;BuildingSpot			= X:-1105 Y:1175	

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
	DisplayName				= LW:DisplayNameAmonSulLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map worla amon sul"
	SkirmishStillImage		= WOR_Arnor
	SkirmishMusicTrack		= BaGood23
	SubObject				= WEATHERTOP
	RegionPortrait			= MPAmonSulLA

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
	;BuildingSpot			= X:-1030 Y:960
	;BuildingSpot			= X:-970 Y:960	

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
			Region		= Minhiriath
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1100 Y:795
	HeroArmySpot			= X:-1060 Y:850
	HeroArmySpot			= X:-995 Y:860
	HeroArmySpot			= X:-935 Y:855
	HeroArmySpot			= X:-965 Y:810	
	GarrisonArmySpot		= X:-1055 Y:820
	;BuildingSpot			= X:-1135 Y:785
	;BuildingSpot			= X:-1215 Y:780

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

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1435 Y:570
	HeroArmySpot			= X:-1485 Y:680
	HeroArmySpot			= X:-1425 Y:710
	HeroArmySpot			= X:-1350 Y:720
	HeroArmySpot			= X:-1300 Y:690	
	GarrisonArmySpot		= X:-1380 Y:635
	;BuildingSpot			= X:-1480 Y:565
	;BuildingSpot			= X:-1555 Y:520

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
	;BuildingSpot			= X:-875 Y:685

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
	DisplayName				= LW:DisplayNameTharbadLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map worla tharbad"
	SkirmishStillImage		= WOR_Eriador
	SkirmishMusicTrack		= BaGood23
	SubObject				= THARBAD
	RegionPortrait			= MPTharbadLA

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 10
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cardolan
		End	
		Connection
			Region		= Swanfleet
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-990 Y:690
	HeroArmySpot			= X:-1020 Y:670
	HeroArmySpot			= X:-1050 Y:695
	HeroArmySpot			= X:-1015 Y:715
	HeroArmySpot			= X:-980 Y:730	
	GarrisonArmySpot		= X:-995 Y:690
	;BuildingSpot			= X:-960 Y:660

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
	ResourceBonus			= 10
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
	;BuildingSpot			= X:-710 Y:840

	CPLimit				= 300
	AllyCPLimit			= 0

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
	;BuildingSpot			= X:-580 Y:970

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
	LegendaryBonus			= 5
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
			Region		= Swanfleet
		End				

	CustomCenterPoint		= Yes
	CenterPoint				= X:-750 Y:690
	HeroArmySpot			= X:-760 Y:785
	HeroArmySpot			= X:-715 Y:780
	HeroArmySpot			= X:-695 Y:750
	HeroArmySpot			= X:-770 Y:755
	GarrisonArmySpot		= X:-740 Y:730
	;BuildingSpot			= X:-775 Y:660	

	CPLimit				= 510
	AllyCPLimit			= 0

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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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
	;BuildingSpot			= X:-810 Y:1180
	;BuildingSpot			= X:-770 Y:1240		

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
	;BuildingSpot			= X:-730 Y:1105
	;BuildingSpot			= X:-675 Y:1165		

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
	;BuildingSpot			= X:-566 Y:1109
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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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
	;BuildingSpot			= X:-1945 Y:1680	
	;BuildingSpot			= X:-2005 Y:1650
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
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

		ConnectsTo			=	
		Connection
			Region		= Cape_Forlond
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
	;BuildingSpot			= X:-1830 Y:1425	
	;BuildingSpot			= X:-1730 Y:1430
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
;	AttackBonus				= 0
	DefenseBonus			= 5
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
	;BuildingSpot			= X:-2300 Y:1305	
	;BuildingSpot			= X:-2190 Y:1335
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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1870 Y:1135
	HeroArmySpot			= X:-1800 Y:1300
	HeroArmySpot			= X:-1740 Y:1285
	HeroArmySpot			= X:-1710 Y:1235
	HeroArmySpot			= X:-1735 Y:1185
	GarrisonArmySpot		= X:-1825 Y:1190
	;BuildingSpot			= X:-1910 Y:1090	
	;BuildingSpot			= X:-1980 Y:1060
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
	DisplayName				= LW:DisplayNameEredLindonLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map worla ered lindon"
	SkirmishStillImage		= WOR_Lindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= THORINS_HALLS
	RegionPortrait			= MPEredLindonLA

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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
	;BuildingSpot			= X:-2095 Y:795	
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
	;BuildingSpot			= X:-1760 Y:1055
	;BuildingSpot			= X:-1665 Y:1050	
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
	DisplayName				= LW:DisplayNameAngmarLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map worla angmar"
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
	;BuildingSpot			= X:-650 Y:1520
	;BuildingSpot			= X:-600 Y:1500		

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
	;BuildingSpot			= X:-935 Y:1460
	;BuildingSpot			= X:-905 Y:1380		

	CPLimit				= 280
	AllyCPLimit			= 0

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
	;BuildingSpot			= X:-722 Y:1424	

	CPLimit				= 300
	AllyCPLimit			= 0

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
	;BuildingSpot			= X:-630 Y:1270
	;BuildingSpot			= X:-565 Y:1265		

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
	DisplayName				= LW:DisplayNameCarnDumLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map worla carn dum"
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
	;BuildingSpot			= X:-880 Y:1640
	;BuildingSpot			= X:-940 Y:1640		

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
	LegendaryBonus			= 10
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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

	CustomCenterPoint		= Yes
	CenterPoint				= X:-540 Y:1575
	HeroArmySpot			= X:-680 Y:1617
	HeroArmySpot			= X:-640 Y:1618
	HeroArmySpot			= X:-536 Y:1574
	HeroArmySpot			= X:-500 Y:1539
	GarrisonArmySpot		= X:-562 Y:1590		

	CPLimit				= 520
	AllyCPLimit			= 0
	
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
	AttackBonus				= 5
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			= 
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
	;BuildingSpot			= X:-117 Y:1522
	;BuildingSpot			= X:-60 Y:1538		

	CPLimit				= 400
	AllyCPLimit			= 0

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
	ResourceBonus			= 10
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
			Region		= Targul
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:365 Y:1515
	HeroArmySpot			= X:150 Y:1530
	HeroArmySpot			= X:190 Y:1495
	HeroArmySpot			= X:240 Y:1460
	HeroArmySpot			= X:355 Y:1465
	GarrisonArmySpot		= X:265 Y:1505
	;BuildingSpot			= X:390 Y:1520
	;BuildingSpot			= X:470 Y:1520		

	CPLimit				= 330
	AllyCPLimit			= 0

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
	;BuildingSpot			= X:-358 Y:1208

	CPLimit				= 400
	AllyCPLimit			= 0

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
	ResourceBonus			= 15
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
	;BuildingSpot			= X:-500 Y:1300

	CPLimit				= 480
	AllyCPLimit			= 0

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
	;BuildingSpot			= X:-555 Y:873

	CPLimit				= 430
	AllyCPLimit			= 0

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
	DefenseBonus			= 5
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
	;BuildingSpot			= X:-539 Y:696

	CPLimit				= 605
	AllyCPLimit			= 0

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End

;////////////////////////////
;// Moria
;////////////////////////////
Region Moria
	DisplayName				= LW:DisplayNameKhazadDumLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map worla khazad dum"
	SkirmishStillImage		= WOR_MistyMountains
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MORIA
	RegionPortrait			= MPKhazadDumLA

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
	;BuildingSpot			= X:-600 Y:787

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
	;BuildingSpot			= X:30 Y:140	

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

	CustomCenterPoint		= Yes
	CenterPoint				= X:-180 Y:130
	HeroArmySpot			= X:-180 Y:150
	HeroArmySpot			= X:-150 Y:150
	HeroArmySpot			= X:-180 Y:120
	HeroArmySpot			= X:-150 Y:120
	GarrisonArmySpot		= X:-170 Y:130
	;BuildingSpot			= X:-190 Y:100	

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
	;BuildingSpot			= X:-75 Y:60

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
	;BuildingSpot			= X:0 Y:55

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
	;BuildingSpot			= X:50 Y:10

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
	;BuildingSpot			= X:130 Y:40

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
	DisplayName				= LW:DisplayNameMinasAnorLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Minas Anor"
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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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
	DisplayName				= LW:DisplayNameOsgiliathLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Osgiliath"
	SkirmishStillImage		= WOR_Gondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= OSGILIATH
	RegionPortrait			= MPOsgiliathLA

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
	;BuildingSpot			= X:75 Y:-60

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
	;BuildingSpot			= X:140 Y:-50

	CPLimit				= 806
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:170 Y:-120

	CPLimit				= 739
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:90 Y:-250

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
	LegendaryBonus			= 5
	AttackBonus				= 5
	DefenseBonus			= 5
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Central_Ithilien
		End
		Connection
			Region		= Pelargir
		End						

	CustomCenterPoint		= Yes
	CenterPoint				= X:40 Y:-350
	HeroArmySpot			= X:-45 Y:-400
	HeroArmySpot			= X:-75 Y:-370
	HeroArmySpot			= X:-45 Y:-330
	HeroArmySpot			= X:-5 Y:-310
	GarrisonArmySpot		= X:10 Y:-350
	;BuildingSpot			= X:125 Y:-310
	;BuildingSpot			= X:125 Y:-400

	CPLimit				= 1200
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
	;BuildingSpot			= X:15 Y:-150

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
	;BuildingSpot			= X:-45 Y:-125

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
	;BuildingSpot			= X:-195 Y:-140

	CPLimit				= 719
	AllyCPLimit			= 0
	
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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Lossarnach
		End
		Connection
			Region		= Southern_Ithilien
		End		
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Tolfalas
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
			Region		= Belfalas
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:-325 Y:-120
	HeroArmySpot			= X:-390 Y:-110
	HeroArmySpot			= X:-360 Y:-80
	HeroArmySpot			= X:-300 Y:-70
	HeroArmySpot			= X:-270 Y:-90
	GarrisonArmySpot		= X:-325 Y:-100
	;BuildingSpot			= X:-320 Y:-155

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
			Region		= Dol_Amroth
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-440 Y:-285
	HeroArmySpot			= X:-555 Y:-215
	HeroArmySpot			= X:-495 Y:-185
	HeroArmySpot			= X:-435 Y:-185
	HeroArmySpot			= X:-385 Y:-215
	GarrisonArmySpot		= X:-380 Y:-260
	;BuildingSpot			= X:-510 Y:-405

	CPLimit				= 1071
	AllyCPLimit			= 0
	
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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Tolfalas
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
	DefenseBonus			= 5
	ExperienceBonus			= 15
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Dol_Amroth
		End
		
	CustomCenterPoint		= Yes
	CenterPoint				= X:-410 Y:-545
	HeroArmySpot			= X:-425 Y:-575
	HeroArmySpot			= X:-395 Y:-550
	HeroArmySpot			= X:-385 Y:-505
	HeroArmySpot			= X:-420 Y:-530
	GarrisonArmySpot		= X:-410 Y:-565
	;BuildingSpot			= X:-405 Y:-540

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
	LegendaryBonus			= 5
	AttackBonus				= 10
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
		Connection
			Region		= Dagorlad
		End
		Connection
			Region		= Dead_Marshes
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

	CPLimit				= 1291
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
		
	CustomCenterPoint		= Yes
	CenterPoint				= X:520 Y:220
	HeroArmySpot			= X:380 Y:250
	HeroArmySpot			= X:410 Y:250
	HeroArmySpot			= X:380 Y:220
	HeroArmySpot			= X:410 Y:220
	GarrisonArmySpot		= X:440 Y:250
	;BuildingSpot			= X:560 Y:210
	;BuildingSpot			= X:620 Y:210	

	CPLimit				= 1458
	AllyCPLimit			= 0
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

;////////////////////////////
;// Dead Marshes
;////////////////////////////
Region Dead_Marshes
	DisplayName				= LW:DisplayNameGreyMarshesLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Grey Marshes"
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
	;BuildingSpot			= X:185 Y:265
	;BuildingSpot			= X:245 Y:265	

	CPLimit				= 1101
	AllyCPLimit			= 0
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End
End

//-------------------------------------------------------------------------------------------------
// EPHEL DUATH SUB-REGION
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Minas Morgul
;////////////////////////////
Region Minas_Morgul
	DisplayName				= LW:DisplayNameMinasIthilLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Minas Ithil"
	SkirmishStillImage		= WOR_Mordor
	SkirmishMusicTrack		= BaEvil13
	SubObject				= MINAS_MORGUL
	RegionPortrait			= MPMinasIthilLA

;	ArmyBonus				= 0
	ResourceBonus			= 20
	LegendaryBonus			= 10
;	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=	
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
	;;BuildingSpot			= X:260 Y:80

	CPLimit				= 1060
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:740 Y:0
	;BuildingSpot			= X:800 Y:0	

	CPLimit				= 0
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
	;BuildingSpot			= X:375 Y:-40
	;BuildingSpot			= X:435 Y:-40
	;BuildingSpot			= X:495 Y:-40	

	CPLimit				= 1266
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
	FertileTerritoryBonus 	= 200

	CustomCenterPoint		= Yes
	CenterPoint				= X:470 Y:55
	HeroArmySpot			= X:490 Y:60
	HeroArmySpot			= X:520 Y:60
	HeroArmySpot			= X:490 Y:30
	HeroArmySpot			= X:520 Y:30
	GarrisonArmySpot		= X:472 Y:46
	BuildingSpot			= X:430 Y:70	

	CPLimit				= 2500
	AllyCPLimit			= 500
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 0
	End	
	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 0
	End	
	RestrictBuildings
		Buildings		= Armory
		NumberAllowed		= 1
	End	
	RestrictBuildings
		Buildings		= Resource
		NumberAllowed		= 0
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
	;BuildingSpot			= X:1000 Y:0	

	CPLimit				= 0
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
	;BuildingSpot			= X:780 Y:-180

	CPLimit				= 0
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
	;BuildingSpot			= X:460 Y:-275

	CPLimit				= 0
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
	;BuildingSpot			= X:-240 Y:915

	CPLimit				= 626
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:-240 Y:1270
	;BuildingSpot			= X:-170 Y:1270

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
;	FertileTerritoryBonus 		= AOTR_GAIN_FORTRESS_MAPS

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
	;BuildingSpot			= X:-215 Y:745

	CPLimit				= 635
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:-185 Y:1070

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
			Region		= The_Wold
		End			

	CustomCenterPoint		= Yes
	CenterPoint				= X:-85 Y:330
	HeroArmySpot			= X:-120 Y:385
	HeroArmySpot			= X:-90 Y:415
	HeroArmySpot			= X:-55 Y:410
	HeroArmySpot			= X:-50 Y:380
	GarrisonArmySpot		= X:-85 Y:360
	;BuildingSpot			= X:-85 Y:285

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
	;BuildingSpot			= X:370 Y:795
	;BuildingSpot			= X:430 Y:710

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
	;BuildingSpot			= X:215 Y:355
	;BuildingSpot			= X:305 Y:355

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

	CustomCenterPoint		= Yes
	CenterPoint				= X:-540 Y:470
	HeroArmySpot			= X:-550 Y:425
	HeroArmySpot			= X:-520 Y:405
	HeroArmySpot			= X:-470 Y:405
	HeroArmySpot			= X:-470 Y:440
	GarrisonArmySpot		= X:-520 Y:450
	;BuildingSpot			= X:-570 Y:500

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
	;BuildingSpot			= X:40 Y:525
	;BuildingSpot			= X:-50 Y:545

	CPLimit				= 881
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:-400 Y:490
	;BuildingSpot			= X:-340 Y:520

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
	DisplayName				= LW:DisplayNameAmonLancLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Amon Lanc"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DOL_GULDUR
	RegionPortrait			= MPAmonLancLA

	;ResourceBonus			= 0
	;LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
;	FertileTerritoryBonus 		= AOTR_GAIN_FORTRESS_MAPS

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
	;BuildingSpot			= X:-45 Y:970

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
	ExperienceBonus			= 10
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
	;BuildingSpot			= X:-310 Y:610

	CPLimit				= 650
	AllyCPLimit			= 0
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
	
End
;////////////////////////////
;// Lothlorien
;////////////////////////////
Region Lothlorien
	DisplayName				= LW:DisplayNameLorinandLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Lorinand"
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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

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
	AttackBonus				= 5
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
	;BuildingSpot			= X:-475 Y:575

	CPLimit				= 726
	AllyCPLimit			= 0
	
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
	;BuildingSpot			= X:-340 Y:810

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
	;BuildingSpot			= X:-30 Y:1140

	CPLimit				= 726
	AllyCPLimit			= 0

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
;	FertileTerritoryBonus 	= AOTR_GAIN_FORTRESS_MAPS

	ConnectsTo			=
		Connection
			Region		= Taur_Na_Faroth
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
	;BuildingSpot			= X:-80 Y:1280

	CPLimit				= 716
	AllyCPLimit			= 0

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Mirkwood
;////////////////////////////
Region Mirkwood
	DisplayName				= LW:DisplayNameGreenwoodLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Greenwood"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= MIRKWOOD
	RegionPortrait			= MPGreenwoodLA

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
	ExperienceBonus			= 5
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
	;BuildingSpot			= X:50 Y:1050
	;BuildingSpot			= X:160 Y:1050

	CPLimit				= 796
	AllyCPLimit			= 0

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;////////////////////////////
;// Northern Mirkwood
;////////////////////////////
Region Northern_Mirkwood
	DisplayName				= LW:DisplayNameNorthernGreenwoodLA
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WORLA Northern Greenwood"
	SkirmishStillImage		= WOR_Rhovanion
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTHERN_MIRKWO
	RegionPortrait			= MPNorthernGreenwoodLA

;	ArmyBonus				= 0
	ResourceBonus			= 5
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
	;BuildingSpot			= X:-50 Y:1420

	CPLimit				= 634
	AllyCPLimit			= 0

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
	;BuildingSpot			= X:305 Y:1010

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
	;BuildingSpot			= X:110 Y:1470

	CPLimit				= 1000
	AllyCPLimit			= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End	
End
;// Bonus from freeing Eregion
ConcurrentRegionBonus
	Territory				= LW:TerritoryEregionAlliance
	;EffectName				= ERIADOR
	Regions					= Cardolan Eregion Ost_In_Edhil Swanfleet
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	FreeInnUnitsBonus       = 1
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-850 Y:820
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.20
End
;// Bonus from clensing Lindon
ConcurrentRegionBonus
	Territory				= LW:TerritoryLindon
	;EffectName				= MORDOR
	Regions					= Cape_Forlond Ered_Luin_Highlands Forlindon Grey_Havens Harlindon Tower_Hills
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-3100 Y:1625
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.42
End
;// Bonus from clensing Gundabad
ConcurrentRegionBonus
	Territory				= LW:SubRegionGundabad
	;EffectName				= 
	Regions					= Gundabad Grey_Mountains Withered_Heath
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	ExtraStartResourcesBonus = 200
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-130 Y:1825
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.3
End

;// Bonus from freeing Khazad-dűm
ConcurrentRegionBonus
	Territory				= LW:SubRegionMoria_LAS
	;EffectName				= 
	Regions					= Dimrill_Dale Moria
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 5
    AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-570 Y:799
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.1
End

;// Bonus from freeing Lórinand
ConcurrentRegionBonus
	Territory				= LW:SubRegionLothlorien_LAS
	;EffectName				= 
	Regions					= Field_Celebrant Lothlorien Nan_Celebrant Taur_Hith
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-370 Y:675
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;// Bonus from freeing Greenwood
ConcurrentRegionBonus
	Territory				= LW:SubRegionWoodlandRealm_LAS
	;EffectName				= 
	Regions					= Forest_Gate Halls_Elvenking Hall_Oak Mirkwood Northern_Mirkwood Taur_En_Morvith Taur_Na_Faroth
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 15
    AttackBonus				= 15
	DefenseBonus			= 5
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:65 Y:1300
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.34
End

;// Bonus from freeing Domain of Anarion
ConcurrentRegionBonus
	Territory				= LW:SubRegionSouthGondor_LAS
	;EffectName				= 
	Regions					= Belfalas Dol_Amroth Lebennin Lossarnach Pelargir Ringlo_Vale Tolfalas Anorien Cair_Andros Harlond Minas_Tirith Osgiliath
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 15
    AttackBonus				= 0
	DefenseBonus			= 15
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1000 Y:-470
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.36
End

;// Bonus from freeing Domain of Isildur
ConcurrentRegionBonus
	Territory				= LW:SubRegionNorthGondor_LAS
	;EffectName				= 
	Regions					= Southern_Ithilien Crossroads Central_Ithilien Emyn_Arnen Minas_Morgul
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 15
    AttackBonus				= 15
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:80 Y:-70
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.17
End