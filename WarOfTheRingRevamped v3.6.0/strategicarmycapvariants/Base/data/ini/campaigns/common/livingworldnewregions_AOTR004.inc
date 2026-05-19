//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Angmar
;////////////////////////////
Region Angmar
	DisplayName				= LW:DisplayNameAngmar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Angmar"
	SkirmishStillImage		= WOR_Angmar
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANGMAR
	RegionPortrait			= MPAngmar

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Ettenmoors
		End
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Carn_Dum
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-25 Y:2046
	HeroArmySpot			= X:-11 Y:2099
	HeroArmySpot			= X:-148 Y:2040
	HeroArmySpot			= X:-184 Y:2109
	HeroArmySpot			= X:-290 Y:2167
	GarrisonArmySpot		= X:61 Y:2048
	BuildingSpot			= X:-95 Y:2090

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
End

;////////////////////////////
;// Barrow Downs
;////////////////////////////
Region Barrow_Downs
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Barrow Downs"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Barrow_Downs
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= BARROW_DOWN
	RegionPortrait			= MPBarrowDowns

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Buckland
		End
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Hobbiton
		End
		Connection
			Region		= Old_Forest
		End
		Connection
			Region		= Tower_Hills
		End
		Connection
			Region		= Weathertop
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-667 Y:1242
	HeroArmySpot			= X:-511 Y:1283
	HeroArmySpot			= X:-530 Y:1185
	HeroArmySpot			= X:-792 Y:1152
	HeroArmySpot			= X:-848 Y:1260
	GarrisonArmySpot		= X:-608 Y:1344
	BuildingSpot			= X:-667 Y:1242

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
End

;////////////////////////////
;// Blue Mountains
;////////////////////////////
Region Blue_Mountains
	DisplayName				= LW:DisplayNameBlueMountains
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Blue Mountains"
	SkirmishStillImage		= WOR_Ered_Luin
	SkirmishMusicTrack		= BaGood23
	SubObject				= BLUE_MOUNTAINS
	RegionPortrait			= MPEredLuin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Harlindon
		End
		Connection
			Region		= Tower_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1412 Y:1206
	HeroArmySpot			= X:-1462 Y:1126
	HeroArmySpot			= X:-1370 Y:1113
	HeroArmySpot			= X:-1348 Y:1258
	HeroArmySpot			= X:-1372 Y:1361
	BuildingSpot			= X:-1400 Y:1240
	GarrisonArmySpot		= X:-1441 Y:1253

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
End

;////////////////////////////
;// Buckland
;////////////////////////////
Region Buckland
	DisplayName				= LW:DisplayNameBuckland
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Buckland"
	SkirmishStillImage		= WOR_Buckland
	SkirmishMusicTrack		= BaGood23
	SubObject				= BUCKLAND
	RegionPortrait			= MPBuckland

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Hobbiton
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= Old_Forest
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-729 Y:1541
	HeroArmySpot			= X:-662 Y:1715
	HeroArmySpot			= X:-767 Y:1613
	HeroArmySpot			= X:-666 Y:1432
	HeroArmySpot			= X:-781 Y:1365
	GarrisonArmySpot		= X:-703 Y:1515
	BuildingSpot			= X:-737 Y:1497
	BuildingSpot			= X:-737 Y:1437	
	;BuildingSpot			= X:-725 Y:1677

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
End

;////////////////////////////
;// Caradhras
;////////////////////////////
Region Caradhras
	DisplayName				= LW:DisplayNameCaradhras
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Caradhras"
	SkirmishStillImage		= WOR_Caradhras
	SkirmishMusicTrack		= BaGood23
	SubObject				= CARADHRAS
	RegionPortrait			= MPCaradhras

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
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
			Region		= Gladden_Fields
		End
		Connection
			Region		= Moria
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:415 Y:1230
	HeroArmySpot			= X:302 Y:1206
	HeroArmySpot			= X:348 Y:1284
	HeroArmySpot			= X:465 Y:1309
	HeroArmySpot			= X:520 Y:1237
	BuildingSpot			= X:480 Y:1200
	GarrisonArmySpot		= X:466 Y:1129

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
End

;////////////////////////////
;// Cardolan
;////////////////////////////
Region Cardolan
	DisplayName				= LW:DisplayNameCardolan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cardolan"
	SkirmishStillImage		= WOR_Cardolan
	SkirmishMusicTrack		= BaGood23
	SubObject				= CARDOLAN
	RegionPortrait			= MPCardolan

;	ArmyBonus				= 0
	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Minhiriath
		End
		Connection
			Region		= Tower_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-565 Y:1010
	HeroArmySpot			= X:-485 Y:888
	HeroArmySpot			= X:-404 Y:1065
	HeroArmySpot			= X:-568 Y:1083
	HeroArmySpot			= X:-772 Y:1014
	GarrisonArmySpot		= X:-568 Y:938
	BuildingSpot			= X:-460 Y:1060
	BuildingSpot			= X:-460 Y:1000	
	;BuildingSpot			= X:-676 Y:1006

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
End

;////////////////////////////
;// Carn Dum
;////////////////////////////
Region Carn_Dum
	DisplayName				= LW:DisplayNameCarnDum
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Carn Dum"
	SkirmishStillImage		= WOR_Carn_Dum
	SkirmishMusicTrack		= BaGood23
	SubObject				= CARN_DUM
	RegionPortrait			= MPCarnDum

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Angmar
		End
		Connection
			Region		= Forodwaith
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-131 Y:2254
	HeroArmySpot			= X:-297 Y:2394
	HeroArmySpot			= X:-320 Y:2302
	HeroArmySpot			= X:-57 Y:2408
	HeroArmySpot			= X:-293 Y:2238
	GarrisonArmySpot		= X:-149 Y:2381
	;BuildingSpot			= X:-250 Y:2367

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPAngmarCitadel
	FortressDisplayName			= LW:DisplayNameCarnDum
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Carnen
;////////////////////////////
Region Carnen
	DisplayName				= LW:DisplayNameCarnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Carnen"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Carnen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= CARNEN
	RegionPortrait			= MPCarnen

	;ResourceBonus			= 0
	LegendaryBonus			= 5
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dorwinion
		End
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Orocarni
		End
		Connection
			Region		= Vales_Celduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2259 Y:1604
	HeroArmySpot			= X:2120 Y:1669
	HeroArmySpot			= X:2445 Y:1737
	HeroArmySpot			= X:2332 Y:1505
	HeroArmySpot			= X:2042 Y:1479
	GarrisonArmySpot		= X:2207 Y:1582
	BuildingSpot			= X:2397 Y:1676
	;BuildingSpot			= X:2102 Y:1557
   
    CPLimit					= 1000
    AllyCPLimit				= 500      
      
	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End
    
	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End

;////////////////////////////
;// Carrock
;////////////////////////////
Region Carrock
	DisplayName				= LW:DisplayNameCarrock
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Carrock"
	SkirmishStillImage		= WOR_Carrock
	SkirmishMusicTrack		= BaGood23
	SubObject				= CARROCK
	RegionPortrait			= MPCarrock

;	ArmyBonus				= 0
	ResourceBonus			= 10
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
			Region		= Halls_Thranduil
		End
		Connection
			Region		= High_Pass
		End
		Connection
			Region		= Northern_Mirkwood
		End
		Connection
			Region		= Old_Ford_Anduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:780 Y:1647
	HeroArmySpot			= X:619 Y:1632
	HeroArmySpot			= X:694 Y:1684
	HeroArmySpot			= X:871 Y:1673
	HeroArmySpot			= X:902 Y:1601
	GarrisonArmySpot		= X:705 Y:1606
	BuildingSpot			= X:780 Y:1647

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
End
	
;////////////////////////////
;// Dimrill Dale
;////////////////////////////
Region Dimrill_Dale
	DisplayName			= LW:DisplayNameDimrillDale
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR Dimrill Dale"
	SkirmishStillImage		= WOR_Dimrill_Dale
	SkirmishMusicTrack		= BaGood23
	SubObject			= DIMRILL_DALE
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
			Region		= Field_Celebrant
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Lothlorien
		End
		Connection
			Region		= Moria
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:552 Y:997
	HeroArmySpot			= X:465 Y:1007
	HeroArmySpot			= X:585 Y:1107
	HeroArmySpot			= X:601 Y:921
	HeroArmySpot			= X:481 Y:930
	GarrisonArmySpot		= X:576 Y:1040
	BuildingSpot			= X:513 Y:980

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
End

;////////////////////////////
;// Dol Guldur
;////////////////////////////
Region Dol_Guldur
	DisplayName				= LW:DisplayNameDolGuldur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Guldur"
	SkirmishStillImage		= WOR_Dol_Guldur
	SkirmishMusicTrack		= BaGood23
	SubObject				= DOL_GULDUR
	RegionPortrait			= MPDolGuldur

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Old_Ford_Anduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1136 Y:1145
	HeroArmySpot			= X:1012 Y:1164
	HeroArmySpot			= X:1091 Y:1028
	HeroArmySpot			= X:1176 Y:1067
	HeroArmySpot			= X:1018 Y:1246
	GarrisonArmySpot		= X:1119 Y:1228
	;BuildingSpot			= X:1044 Y:1094

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameDolGuldur
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold		
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Dorwinion
;////////////////////////////
Region Dorwinion
	DisplayName				= LW:DisplayNameDorwinion
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dorwinion"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Dorwinion
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= DORWINION
	RegionPortrait			= MPDorwinion

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carnen
		End
		Connection
			Region		= Orocarni
		End
		Connection
			Region		= Rhun
		End
		Connection
			Region		= Vales_Celduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2516 Y:1275
	HeroArmySpot			= X:2343 Y:1261
	HeroArmySpot			= X:2437 Y:1167
	HeroArmySpot			= X:2642 Y:1419
	HeroArmySpot			= X:2738 Y:1361
	GarrisonArmySpot		= X:2548 Y:1326
	BuildingSpot			= X:2446 Y:1331

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
End

;////////////////////////////
;// East Bight
;////////////////////////////
Region East_Bight
	DisplayName				= LW:DisplayNameEastBight
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR East Bight"
	SkirmishStillImage		= WOR_East_Bight
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAST_BIGHT
	RegionPortrait			= MPEastBight

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Vales_Celduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1627 Y:1198
	HeroArmySpot			= X:1746 Y:1078
	HeroArmySpot			= X:1606 Y:1082
	HeroArmySpot			= X:1461 Y:1247
	HeroArmySpot			= X:1575 Y:1307
	GarrisonArmySpot		= X:1698 Y:1223
	BuildingSpot			= X:1627 Y:1198

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
End

;////////////////////////////
;// Eastern Wastes
;////////////////////////////
Region Eastern_Wastes
	DisplayName				= LW:DisplayNameEasternWastes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Eastern Wastes"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Eastern_Wastes
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= EASTERN_WASTES
	RegionPortrait			= MPEasternWastes

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carnen
		End
		Connection
			Region		= Erebor_Dale
		End
		Connection
			Region		= Esgaroth
		End
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Vales_Celduin
		End
		Connection
			Region		= Withered_Heath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1883 Y:1734
	HeroArmySpot			= X:1783 Y:1834
	HeroArmySpot			= X:1948 Y:1603
	HeroArmySpot			= X:1780 Y:1657
	HeroArmySpot			= X:1945 Y:1882
	GarrisonArmySpot		= X:1992 Y:1726
	BuildingSpot			= X:1883 Y:1734

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
End

;////////////////////////////
;// Erebor & Dale
;////////////////////////////
Region Erebor_Dale
	DisplayName				= LW:DisplayNameErebor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Erebor"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Erebor
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= EREBOR_DALE
	RegionPortrait			= MPErebor

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Esgaroth
		End
		Connection
			Region		= Halls_Thranduil
		End
		Connection
			Region		= Northern_Mirkwood
		End
		Connection
			Region		= Withered_Heath
		End
		
	CustomCenterPoint		= Yes
	CenterPoint				= X:1556 Y:1855
	HeroArmySpot			= X:1520 Y:1814
	HeroArmySpot			= X:1695 Y:1768
	HeroArmySpot			= X:1625 Y:1848
	HeroArmySpot			= X:1563 Y:1768
	GarrisonArmySpot		= X:1559 Y:1852
	;BuildingSpot			= X:1626 Y:1783

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPEreborFortress
	FortressDisplayName			= LW:DisplayNameErebor
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Eregion
;////////////////////////////
Region Eregion
	DisplayName				= LW:DisplayNameEregion
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Eregion"
	SkirmishStillImage		= WOR_Eregion
	SkirmishMusicTrack		= BaGood23
	SubObject				= EREGION
	RegionPortrait			= MPEregion

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Caradhras
		End
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Moria
		End
		Connection
			Region		= Rivendell
		End
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= Weathertop
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-64 Y:1177
	HeroArmySpot			= X:-280 Y:1069
	HeroArmySpot			= X:-320 Y:1209
	HeroArmySpot			= X:110 Y:1299
	HeroArmySpot			= X:140 Y:1102
	GarrisonArmySpot		= X:-101 Y:1166
	BuildingSpot			= X:161 Y:1100
	;BuildingSpot			= X:-243 Y:1153
	;BuildingSpot			= X:0 Y:0
	BuildingSpot			= X:161 Y:1160
	BuildingSpot			= X:161 Y:1220	

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
End

;////////////////////////////
;// Esgaroth
;////////////////////////////
Region Esgaroth
	DisplayName				= LW:DisplayNameEsgaroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Esgaroth"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Esgaroth
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= ESGAROTH
	RegionPortrait			= MPEsgaroth

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Erebor_Dale
		End
		Connection
			Region		= Halls_Thranduil
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Vales_Celduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1570 Y:1646
	HeroArmySpot			= X:1636 Y:1689
	HeroArmySpot			= X:1655 Y:1590
	HeroArmySpot			= X:1483 Y:1587
	HeroArmySpot			= X:1491 Y:1662
	GarrisonArmySpot		= X:1559 Y:1576
	BuildingSpot			= X:1570 Y:1646

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
End

;////////////////////////////
;// Ettenmoors
;////////////////////////////
Region Ettenmoors
	DisplayName				= LW:DisplayNameEttenmoors
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Ettenmoors"
	SkirmishStillImage		= WOR_Ettenmoors
	SkirmishMusicTrack		= BaGood23
	SubObject				= ETTENMOORS
	RegionPortrait			= MPEttenmoors

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Angmar
		End
		Connection
			Region		= Evendim_Hills
		End
		Connection
			Region		= Fornost
		End
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Rhudaur
		End
		Connection
			Region		= Weather_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-174 Y:1896
	HeroArmySpot			= X:-172 Y:1807
	HeroArmySpot			= X:-29 Y:1764
	HeroArmySpot			= X:56 Y:1858
	HeroArmySpot			= X:-352 Y:2079
	GarrisonArmySpot		= X:-202 Y:1922
	;BuildingSpot			= X:-289 Y:1998
	BuildingSpot			= X:-65 Y:1823
	BuildingSpot			= X:-5 Y:1823	

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
End

;////////////////////////////
;// Evendim Hills
;////////////////////////////
Region Evendim_Hills
	DisplayName				= LW:DisplayNameEvendimHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Hills Evendim"
	SkirmishStillImage		= WOR_Evendim_Hills
	SkirmishMusicTrack		= BaGood23
	SubObject				= EVENDIM_HILLS
	RegionPortrait			= MPEvendimHills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Ettenmoors
		End
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Forlindon
		End
		Connection
			Region		= Forodwaith
		End
		Connection
			Region		= Fornost
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-686 Y:2141
	HeroArmySpot			= X:-1004 Y:2127
	HeroArmySpot			= X:-805 Y:2195
	HeroArmySpot			= X:-587 Y:2182
	HeroArmySpot			= X:-471 Y:2042
	GarrisonArmySpot		= X:-635 Y:2050
	BuildingSpot			= X:-916 Y:2167
	BuildingSpot			= X:-856 Y:2167	
	;BuildingSpot			= X:-737 Y:2092
	;BuildingSpot			= X:-516 Y:2116

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
End

;////////////////////////////
;// Evendim Lake
;////////////////////////////
Region Evendim_Lake
	DisplayName				= LW:DisplayNameEvendimLake
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Evendim Lake"
	SkirmishStillImage		= WOR_Evendim_Lake
	SkirmishMusicTrack		= BaGood23
	SubObject				= EVENDIM_LAKE
	RegionPortrait			= MPEvendimLake

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Buckland
		End
		Connection
			Region		= Evendim_Hills
		End
		Connection
			Region		= Forlindon
		End
		Connection
			Region		= Fornost
		End
		Connection
			Region		= Grey_Havens
		End
		Connection
			Region		= Hobbiton
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= Tower_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-933 Y:1887
	HeroArmySpot			= X:-1064 Y:1877
	HeroArmySpot			= X:-911 Y:1989
	HeroArmySpot			= X:-710 Y:1922
	HeroArmySpot			= X:-671 Y:1822
	GarrisonArmySpot		= X:-894 Y:1879
	;BuildingSpot			= X:-972 Y:1808
	BuildingSpot			= X:-1014 Y:1978
	BuildingSpot			= X:-954 Y:1978	
	;BuildingSpot			= X:-781 Y:1907

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
End

;////////////////////////////
;// Field of Celebrant
;////////////////////////////
Region Field_Celebrant
	DisplayName				= LW:DisplayNameFieldCelebrant
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Field of Celebrant"
	SkirmishStillImage		= WOR_Field_Celebrant
	SkirmishMusicTrack		= BaGood23
	SubObject				= FIELD_CELEBRANT
	RegionPortrait			= MPFieldCelebrant

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dimrill_Dale
		End
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Lothlorien
		End
		Connection
			Region		= Old_Brown_Lands
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:921 Y:938
	HeroArmySpot			= X:1003 Y:883
	HeroArmySpot			= X:928 Y:1047
	HeroArmySpot			= X:810 Y:1021
	HeroArmySpot			= X:809 Y:911
	GarrisonArmySpot		= X:986 Y:971
	BuildingSpot			= X:731 Y:919
	;BuildingSpot			= X:893 Y:995

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
End

;////////////////////////////
;// Fords of Bruinen
;////////////////////////////
Region Fords_Bruinen
	DisplayName				= LW:DisplayNameFordsofBruinen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fords of Bruinen"
	SkirmishStillImage		= WOR_Fords_Of_Bruinen
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORDS_BUINEN
	RegionPortrait			= MPFordsOfBruinen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= High_Pass
		End
		Connection
			Region		= Rhudaur
		End
		Connection
			Region		= Rivendell
		End
		Connection
			Region		= Trollshaws
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:245 Y:1620
	HeroArmySpot			= X:311 Y:1609
	HeroArmySpot			= X:201 Y:1585
	HeroArmySpot			= X:177 Y:1536
	HeroArmySpot			= X:161 Y:1472
	BuildingSpot			= X:267 Y:1625
	GarrisonArmySpot		= X:267 Y:1659

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
End

;////////////////////////////
;// Forlindon
;////////////////////////////
Region Forlindon
	DisplayName				= LW:DisplayNameForlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Forlindon"
	SkirmishStillImage		= WOR_Forlindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORLINDON
	RegionPortrait			= MPForlindon

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Evendim_Hills
		End
		Connection
			Region		= Grey_Havens
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1326 Y:2250
	HeroArmySpot			= X:-1950 Y:1592
	HeroArmySpot			= X:-2032 Y:1810
	HeroArmySpot			= X:-1282 Y:2317
	HeroArmySpot			= X:-1136 Y:2189
	GarrisonArmySpot		= X:-1358 Y:2074
	BuildingSpot			= X:-1234 Y:2135
	BuildingSpot			= X:-1174 Y:2135	
	;BuildingSpot			= X:-1949 Y:1752

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
End

;////////////////////////////
;// Fornost
;////////////////////////////
Region Fornost
	DisplayName				= LW:DisplayNameFornost
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fornost"
	SkirmishStillImage		= WOR_Fornost
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORNOST
	RegionPortrait			= MPFornost

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Ettenmoors
		End
		Connection
			Region		= Evendim_Hills
		End
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= Weather_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-435 Y:1902
	HeroArmySpot			= X:-509 Y:1882
	HeroArmySpot			= X:-335 Y:1848
	HeroArmySpot			= X:-490 Y:1779
	HeroArmySpot			= X:-282 Y:1758
	GarrisonArmySpot		= X:-417 Y:1858
	BuildingSpot			= X:-376 Y:1778

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
End

;////////////////////////////
;// Forodwaith
;////////////////////////////
Region Forodwaith
	DisplayName				= LW:DisplayNameForodwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Forodwaith"
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
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Angmar
		End
		Connection
			Region		= Carn_Dum
		End
		Connection
			Region		= Ettenmoors
		End
		Connection
			Region		= Evendim_Hills
		End
		Connection
			Region		= Mount_Gundabad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-516 Y:2364
	HeroArmySpot			= X:-606 Y:2350
	HeroArmySpot			= X:-140 Y:2485
	HeroArmySpot			= X:197 Y:2474
	HeroArmySpot			= X:-765 Y:2400
	GarrisonArmySpot		= X:-416 Y:2400
	BuildingSpot			= X:-512 Y:2321
	BuildingSpot			= X:-452 Y:2321	
	;BuildingSpot			= X:107 Y:2443

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
End

;////////////////////////////
;// Framsburg
;////////////////////////////
Region Framsburg
	DisplayName				= LW:DisplayNameFramsburg
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Framsburg"
	SkirmishStillImage		= WOR_Framsburg
	SkirmishMusicTrack		= BaGood23
	SubObject				= FRAMSBURG
	RegionPortrait			= MPFramsburg

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= High_Pass
		End
		Connection
			Region		= Northern_Mirkwood
		End
		Connection
			Region		= Rhudaur
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:600 Y:1930
	HeroArmySpot			= X:458 Y:2077
	HeroArmySpot			= X:679 Y:1995
	HeroArmySpot			= X:739 Y:1775
	HeroArmySpot			= X:618 Y:1757
	GarrisonArmySpot		= X:539 Y:1887
	BuildingSpot			= X:551 Y:2029
	BuildingSpot			= X:551 Y:1969	
	;BuildingSpot			= X:649 Y:1847

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
End

;////////////////////////////
;// Gladden Fields
;////////////////////////////
Region Gladden_Fields
	DisplayName				= LW:DisplayNameGladdenFields
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Gladden Fields"
	SkirmishStillImage		= WOR_Gladden_Fields
	SkirmishMusicTrack		= BaGood23
	SubObject				= GLADDEN_FIELDS
	RegionPortrait			= MPGladdenFields

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Caradhras
		End
		Connection
			Region		= Dimrill_Dale
		End
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Lothlorien
		End
		Connection
			Region		= Old_Ford_Anduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:802 Y:1215
	HeroArmySpot			= X:638 Y:1247
	HeroArmySpot			= X:761 Y:1320
	HeroArmySpot			= X:893 Y:1267
	HeroArmySpot			= X:877 Y:1153
	GarrisonArmySpot		= X:690 Y:1166
	BuildingSpot			= X:723 Y:1246

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
End

;////////////////////////////
;// Grey Havens
;////////////////////////////
Region Grey_Havens
	DisplayName				= LW:DisplayNameGreyHavens
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Grey Havens"
	SkirmishStillImage		= WOR_Grey_Havens
	SkirmishMusicTrack		= BaGood23
	SubObject				= GREY_HAVENS
	RegionPortrait			= MPGreyHavens

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Forlindon
		End
		Connection
			Region		= Tower_Hills
		End	

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1353 Y:1575
	HeroArmySpot			= X:-1653 Y:1552
	HeroArmySpot			= X:-1441 Y:1538
	HeroArmySpot			= X:-1279 Y:1725
	HeroArmySpot			= X:-1316 Y:1905
	GarrisonArmySpot		= X:-1446 Y:1730
	BuildingSpot			= X:-1734 Y:1613
	BuildingSpot			= X:-1734 Y:1673

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
End

;////////////////////////////
;// Grey Mountains
;////////////////////////////
Region Grey_Mountains
	DisplayName				= LW:DisplayNameGreyMountains
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Grey Mountains"
	SkirmishStillImage		= WOR_Grey_Mountains
	SkirmishMusicTrack		= BaGood23
	SubObject				= GREY_MOUNTAINS
	RegionPortrait			= MPGreyMountains

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= Mount_Gundabad
		End
		Connection
			Region		= Northern_Mirkwood
		End
		Connection
			Region		= Withered_Heath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:825 Y:2229
	HeroArmySpot			= X:492 Y:2193
	HeroArmySpot			= X:663 Y:2176
	HeroArmySpot			= X:1005 Y:2255
	HeroArmySpot			= X:1209 Y:2219
	GarrisonArmySpot		= X:843 Y:2294
	BuildingSpot			= X:570 Y:2176
	;BuildingSpot			= X:830 Y:2200

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
End

;////////////////////////////
;// Halls of Thranduil
;////////////////////////////
Region Halls_Thranduil
	DisplayName				= LW:DisplayNameHallsThranduil
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Realm of the Elvenking"
	SkirmishStillImage		= WOR_Halls_Thranduil
	SkirmishMusicTrack		= BaGood23
	SubObject				= HALLS_THRANDUIL
	RegionPortrait			= MPHallsThranduil

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Erebor_Dale
		End
		Connection
			Region		= Esgaroth
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Northern_Mirkwood
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1307 Y:1686
	HeroArmySpot			= X:1274 Y:1730
	HeroArmySpot			= X:1456 Y:1760
	HeroArmySpot			= X:1126 Y:1642
	HeroArmySpot			= X:1041 Y:1616
	GarrisonArmySpot		= X:1366 Y:1649
	;BuildingSpot			= X:1226 Y:1654
	BuildingSpot			= X:1379 Y:1742

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
End

;////////////////////////////
;// Harlindon
;////////////////////////////
Region Harlindon
	DisplayName				= LW:DisplayNameHarlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harlindon"
	SkirmishStillImage		= WOR_Harlindon
	SkirmishMusicTrack		= BaGood23
	SubObject				= HARLINDON
	RegionPortrait			= MPHarlindon

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Blue_Mountains
		End
		Connection
			Region		= Tower_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1583 Y:1020

	HeroArmySpot			= X:-1234 Y:977
	HeroArmySpot			= X:-1470 Y:932
	HeroArmySpot			= X:-1787 Y:1266
	HeroArmySpot			= X:-1518 Y:1354
	GarrisonArmySpot		= X:-1649 Y:1077
	;BuildingSpot			= X:-1314 Y:912
	BuildingSpot			= X:-1725 Y:1181
	BuildingSpot			= X:-1665 Y:1181	

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
End

;////////////////////////////
;// High Pass
;////////////////////////////
Region High_Pass
	DisplayName				= LW:DisplayNameHighPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR High Pass"
	SkirmishStillImage		= WOR_High_Pass
	SkirmishMusicTrack		= BaGood23
	SubObject				= HIGH_PASS
	RegionPortrait			= MPHighPass

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= Rhudaur
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:441 Y:1740
	HeroArmySpot			= X:408 Y:1669
	HeroArmySpot			= X:518 Y:1680
	HeroArmySpot			= X:496 Y:1760
	HeroArmySpot			= X:435 Y:1825
	GarrisonArmySpot		= X:372 Y:1783
	BuildingSpot			= X:425 Y:1670

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
End

;////////////////////////////
;// Hobbiton
;////////////////////////////
Region Hobbiton
	DisplayName				= LW:DisplayNameHobitton
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Hobbiton"
	SkirmishStillImage		= WOR_Hobbiton
	SkirmishMusicTrack		= BaGood23
	SubObject				= HOBBITON
	RegionPortrait			= MPHobbiton

;	ArmyBonus				= 0
	ResourceBonus			= 10
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Buckland
		End
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Tower_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-896 Y:1510
	HeroArmySpot			= X:-940 Y:1337
	HeroArmySpot			= X:-863 Y:1450
	HeroArmySpot			= X:-827 Y:1551
	HeroArmySpot			= X:-870 Y:1681
	GarrisonArmySpot		= X:-949 Y:1516
	BuildingSpot			= X:-889 Y:1593
	;BuildingSpot			= X:-894 Y:1386

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
End

;////////////////////////////
;// Iron Hills
;////////////////////////////
Region Iron_Hills
	DisplayName				= LW:DisplayNameIronHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Iron Hills"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Iron_Hills
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= IRON_HILLS
	RegionPortrait			= MPIronHills

	;ArmyBonus				= 0
	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	AttackBonus			= 5
	;DefenseBonus			= 0
	;ExperienceBonus		= 0
	;FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carnen
		End
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Orocarni
		End
		Connection
			Region		= Withered_Heath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2314 Y:2024
	HeroArmySpot			= X:2214 Y:1822
	HeroArmySpot			= X:2389 Y:1873
	HeroArmySpot			= X:2515 Y:2039
	HeroArmySpot			= X:2053 Y:1953
	GarrisonArmySpot		= X:2243 Y:2109
	;BuildingSpot			= X:2103 Y:1884
	;BuildingSpot			= X:2271 Y:1936
	BuildingSpot			= X:2450 Y:1951	
	BuildingSpot			= X:2510 Y:1951

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
End

;////////////////////////////
;// Lothlorien
;////////////////////////////
Region Lothlorien
	DisplayName				= LW:DisplayNameLothlorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lothlorien"
	SkirmishStillImage		= WOR_Lothlorien
	SkirmishMusicTrack		= BaGood23
	SubObject				= LOTHLORIEN
	RegionPortrait			= MPLothlorien

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dimrill_Dale
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Gladden_Fields
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:696 Y:1052
	HeroArmySpot			= X:653 Y:1012
	HeroArmySpot			= X:648 Y:1090
	HeroArmySpot			= X:701 Y:1102
	HeroArmySpot			= X:762 Y:1076
	GarrisonArmySpot		= X:726 Y:1002
	;BuildingSpot			= X:696 Y:1052

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameCarasGaladhon
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Minhiriath
;////////////////////////////
Region Minhiriath
	DisplayName				= LW:DisplayNameMinhiriath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minhiriath"
	SkirmishStillImage		= WOR_Minhiriath
	SkirmishMusicTrack		= BaGood23
	SubObject				= MINHIRIATH
	RegionPortrait			= MPMinhiriath

;	ArmyBonus				= 0
	ResourceBonus			= 10
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
			Region		= Tower_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-884 Y:730
	HeroArmySpot			= X:-722 Y:679
	HeroArmySpot			= X:-793 Y:461
	HeroArmySpot			= X:-931 Y:614
	HeroArmySpot			= X:-1047 Y:811
	GarrisonArmySpot		= X:-837 Y:845
	;BuildingSpot			= X:-787 Y:575
	;BuildingSpot			= X:-738 Y:803
	;BuildingSpot			= X:-832 Y:892	
	;BuildingSpot			= X:-892 Y:892	
	BuildingSpot			= X:-952 Y:892
	BuildingSpot			= X:-1012 Y:892	

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
End

;////////////////////////////
;// Mirkwood
;////////////////////////////
Region Mirkwood
	DisplayName				= LW:DisplayNameMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mirkwood"
	SkirmishStillImage		= WOR_Mirkwood
	SkirmishMusicTrack		= BaGood23
	SubObject				= MIRKWOOD
	RegionPortrait			= MPMirkwood

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= East_Bight
		End
		Connection
			Region		= Esgaroth
		End
		Connection
			Region		= Halls_Thranduil
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

	CustomCenterPoint		= Yes
	CenterPoint				= X:1308 Y:1384
	HeroArmySpot			= X:1357 Y:1532
	HeroArmySpot			= X:1177 Y:1427
	HeroArmySpot			= X:1257 Y:1199
	HeroArmySpot			= X:1477 Y:1045
	GarrisonArmySpot		= X:1385 Y:1353
	;BuildingSpot			= X:1371 Y:1095
	;BuildingSpot			= X:1231 Y:1512
	BuildingSpot			= X:1442 Y:1466
	BuildingSpot			= X:1442 Y:1406
	BuildingSpot			= X:1442 Y:1346	

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
End

;////////////////////////////
;// Mount Gundabad
;////////////////////////////
Region Mount_Gundabad
	DisplayName				= LW:DisplayNameMountGundabad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mount Gundabad"
	SkirmishStillImage		= WOR_Gundabad
	SkirmishMusicTrack		= BaGood23
	SubObject				= MOUNT_GUNDABAD
	RegionPortrait			= MPGundabad

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= Forodwaith
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:421 Y:2367
	HeroArmySpot			= X:675 Y:2342
	HeroArmySpot			= X:533 Y:2449
	HeroArmySpot			= X:505 Y:2343
	HeroArmySpot			= X:406 Y:2463
	GarrisonArmySpot		= X:405 Y:2446
	BuildingSpot			= X:326 Y:2440
	BuildingSpot			= X:593 Y:2377

	CPLimit				= 1000
	AllyCPLimit			= 500

	;CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	;FortressPortrait			= BPCMinasTirithKeep
	;FortressDisplayName			= LW:DisplayNameGundabad
	;FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Moria
;////////////////////////////
Region Moria
	DisplayName				= LW:DisplayNameMoria
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Moria"
	SkirmishStillImage		= WOR_Moria
	SkirmishMusicTrack		= BaGood23
	SubObject				= MORIA
	RegionPortrait			= MPMoria

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

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

	CustomCenterPoint		= Yes
	CenterPoint				= X:325 Y:1083
	HeroArmySpot			= X:408 Y:1035
	HeroArmySpot			= X:381 Y:1079
	HeroArmySpot			= X:281 Y:1128
	HeroArmySpot			= X:254 Y:1089
	GarrisonArmySpot		= X:362 Y:1046
	BuildingSpot			= X:362 Y:1046

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
End

;////////////////////////////
;// North Downs
;////////////////////////////
Region North_Downs
	DisplayName				= LW:DisplayNameNorthDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR North Downs"
	SkirmishStillImage		= WOR_North_Downs
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTH_DOWNS
	RegionPortrait			= MPNorthDowns

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Buckland
		End
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Fornost
		End
		Connection
			Region		= Old_Forest
		End
		Connection
			Region		= Weathertop
		End
		Connection
			Region		= Weather_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-497 Y:1619
	HeroArmySpot			= X:-600 Y:1629
	HeroArmySpot			= X:-568 Y:1694
	HeroArmySpot			= X:-403 Y:1648
	HeroArmySpot			= X:-391 Y:1586
	GarrisonArmySpot		= X:-479 Y:1564
	BuildingSpot			= X:-497 Y:1619

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
End

;////////////////////////////
;// Northern Mirkwood
;////////////////////////////
Region Northern_Mirkwood
	DisplayName				= LW:DisplayNameNorthernMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Northern Mirkwood"
	SkirmishStillImage		= WOR_Northern_Mirkwood
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTHERN_MIRKWO
	RegionPortrait			= MPNorthernMirkwood

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Erebor_Dale
		End
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= Halls_Thranduil
		End
		Connection
			Region		= Withered_Heath
		End
		
	CustomCenterPoint		= Yes
	CenterPoint				= X:1042 Y:1958
	HeroArmySpot			= X:1360 Y:1991
	HeroArmySpot			= X:1213 Y:1862
	HeroArmySpot			= X:1004 Y:1744
	HeroArmySpot			= X:891 Y:1914
	GarrisonArmySpot		= X:1090 Y:2084
	;BuildingSpot			= X:1017 Y:1855
	BuildingSpot			= X:881 Y:2037
	BuildingSpot			= X:941 Y:2037	
	;BuildingSpot			= X:1228 Y:1991

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
End

;////////////////////////////
;// Old Brown Lands
;////////////////////////////
Region Old_Brown_Lands
	DisplayName				= LW:DisplayNameBrownlands
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Old Brown Lands"
	SkirmishStillImage		= WOR_Old_Brown_Lands
	SkirmishMusicTrack		= BaGood23
	SubObject				= OLD_BROWN_LANDS
	RegionPortrait			= MPOldBrownLands

;	ArmyBonus				= 0
	ResourceBonus			= 10
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
			Region		= East_Bight
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Mirkwood
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1414 Y:867
	HeroArmySpot			= X:1327 Y:908
	HeroArmySpot			= X:1123 Y:793
	HeroArmySpot			= X:1552 Y:935
	HeroArmySpot			= X:1716 Y:937
	GarrisonArmySpot		= X:1450 Y:803
	BuildingSpot			= X:1181 Y:901
	BuildingSpot			= X:1181 Y:841
	BuildingSpot			= X:1181 Y:781	
	;BuildingSpot			= X:1268 Y:787
	;BuildingSpot			= X:1740 Y:850
	;BuildingSpot			= X:1535 Y:868

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
End

;////////////////////////////
;// Old Ford Anduin
;////////////////////////////
Region Old_Ford_Anduin
	DisplayName				= LW:DisplayNameOldFordAnduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Old Ford Anduin"
	SkirmishStillImage		= WOR_Old_Ford_Anduin
	SkirmishMusicTrack		= BaGood23
	SubObject				= OLD_FORD_ANDUIN
	RegionPortrait			= MPOldFordAnduin

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carrock
		End
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= Gladden_Fields
		End
		Connection
			Region		= Mirkwood
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:863 Y:1445
	HeroArmySpot			= X:660 Y:1531
	HeroArmySpot			= X:810 Y:1397
	HeroArmySpot			= X:1047 Y:1459
	HeroArmySpot			= X:1003 Y:1333
	GarrisonArmySpot		= X:875 Y:1522
	;BuildingSpot			= X:732 Y:1468
	BuildingSpot			= X:973 Y:1415

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
End

;////////////////////////////
;// Old Forest
;////////////////////////////
Region Old_Forest
	DisplayName				= LW:DisplayNameOldForest
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Old Forest"
	SkirmishStillImage		= WOR_Old_Forest
	SkirmishMusicTrack		= BaGood23
	SubObject				= OLD_FOREST
	RegionPortrait			= MPOldForest

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Buckland
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= Weathertop
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-573 Y:1502
	HeroArmySpot			= X:-628 Y:1564
	HeroArmySpot			= X:-525 Y:1523
	HeroArmySpot			= X:-507 Y:1463
	HeroArmySpot			= X:-557 Y:1445
	GarrisonArmySpot		= X:-620 Y:1484
	BuildingSpot			= X:-573 Y:1502

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
End

;////////////////////////////
;// Orocarni
;////////////////////////////
Region Orocarni
	DisplayName				= LW:DisplayNameOrocarni
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Orocarni"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Orocarni
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= OROCARNI
	RegionPortrait			= MPOrocarni

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Carnen
		End
		Connection
			Region		= Dorwinion
		End
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Rhun
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2903 Y:1793
	HeroArmySpot			= X:2648 Y:1830
	HeroArmySpot			= X:2812 Y:1598
	HeroArmySpot			= X:2543 Y:1534
	HeroArmySpot			= X:2995 Y:1598
	GarrisonArmySpot		= X:2837 Y:1885
	BuildingSpot			= X:2808 Y:2010
	;BuildingSpot			= X:2713 Y:1714
	;BuildingSpot			= X:2926 Y:1487

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
End

;////////////////////////////
;// Rhudaur
;////////////////////////////
Region Rhudaur
	DisplayName				= LW:DisplayNameRhudaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rhudaur"
	SkirmishStillImage		= WOR_Rhudaur
	SkirmishMusicTrack		= BaGood23
	SubObject				= RHUDAUR
	RegionPortrait			= MPRhudaur

;	ArmyBonus				= 0
	ResourceBonus			= 10
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
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Framsburg
		End
		Connection
			Region		= High_Pass
		End
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= Weather_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:187 Y:1792
	HeroArmySpot			= X:60 Y:1686
	HeroArmySpot			= X:166 Y:1696
	HeroArmySpot			= X:141 Y:1809
	HeroArmySpot			= X:236 Y:1729
	GarrisonArmySpot		= X:215 Y:1835
	BuildingSpot			= X:123 Y:1745

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
End

;////////////////////////////
;// Rhun
;////////////////////////////
Region Rhun
	DisplayName				= LW:DisplayNameRhun
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rhun"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Rhun
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= RHUN
	RegionPortrait			= MPRhun

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dorwinion
		End
		Connection
			Region		= Orocarni
		End
		Connection
			Region		= Vales_Celduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2937 Y:845
	HeroArmySpot			= X:2915 Y:606
	HeroArmySpot			= X:3141 Y:778
	HeroArmySpot			= X:3133 Y:1074
	HeroArmySpot			= X:3074 Y:1194
	GarrisonArmySpot		= X:2950 Y:891
	BuildingSpot			= X:2762 Y:604
	;BuildingSpot			= X:3006 Y:734
	;BuildingSpot			= X:2874 Y:963
	;BuildingSpot			= X:3013 Y:1114

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
End

;////////////////////////////
;// Rivendell
;////////////////////////////
Region Rivendell
	DisplayName				= LW:DisplayNameRivendell
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rivendell"
	SkirmishStillImage		= WOR_Rivendell
	SkirmishMusicTrack		= BaGood23
	SubObject				= RIVENDELL
	RegionPortrait			= MPRivendell

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Fords_Bruinen
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:256 Y:1476
	HeroArmySpot			= X:215 Y:1467
	HeroArmySpot			= X:176 Y:1394
	HeroArmySpot			= X:262 Y:1367
	HeroArmySpot			= X:186 Y:1345
	GarrisonArmySpot		= X:297 Y:1450
	;BuildingSpot			= X:224 Y:1402

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPGFortress
	FortressDisplayName			= LW:DisplayNameRivendell
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 0
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Tower Hills
;////////////////////////////
Region Tower_Hills
	DisplayName			    = LW:DisplayNameTowerHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				    = "MAP WOR Tower Hills"
	SkirmishStillImage		= WOR_Tower_Hills
	SkirmishMusicTrack		= BaGood23
	SubObject			    = TOWER_HILLS
	RegionPortrait			= MPTowerHills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Blue_Mountains
		End
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Evendim_Lake
		End
		Connection
			Region		= Grey_Havens
		End
		Connection
			Region		= Harlindon
		End
		Connection
			Region		= Hobbiton
		End
		Connection
			Region		= Minhiriath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-1120 Y:1396
	HeroArmySpot			= X:-1063 Y:1649
	HeroArmySpot			= X:-1049 Y:1302
	HeroArmySpot			= X:-1225 Y:1165
	HeroArmySpot			= X:-951 Y:1089
	GarrisonArmySpot		= X:-1222 Y:1443
	BuildingSpot			= X:-1135 Y:1534
	BuildingSpot			= X:-1135 Y:1474	
	;BuildingSpot			= X:-1086 Y:1130

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
End

;////////////////////////////
;// Trollshaws
;////////////////////////////
Region Trollshaws
	DisplayName			    = LW:DisplayNameTrollShaws
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				    = "MAP WOR Trollshaws"
	SkirmishStillImage		= WOR_Trollshaws
	SkirmishMusicTrack		= BaGood23
	SubObject			    = TROLLSHAWS
	RegionPortrait			= MPTrollshaws

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Fords_Bruinen
		End
		Connection
			Region		= Rhudaur
		End
		Connection
			Region		= Weather_Hills
		End
		Connection
			Region		= Weathertop
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:57 Y:1546
	HeroArmySpot			= X:-12 Y:1439
	HeroArmySpot			= X:-17 Y:1585
	HeroArmySpot			= X:146 Y:1626
	HeroArmySpot			= X:82 Y:1430
	GarrisonArmySpot		= X:67 Y:1572
	BuildingSpot			= X:40 Y:1487

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
End

;////////////////////////////
;// Vales of the Celduin
;////////////////////////////
Region Vales_Celduin
	DisplayName				= LW:DisplayNameValesCelduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Vales of Celduin"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Vales_Celduin
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= VALES_CELDUIN
	RegionPortrait			= MPValesCelduin

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
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
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Esgaroth
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Rhun
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1991 Y:1187
	HeroArmySpot			= X:2316 Y:1036
	HeroArmySpot			= X:2030 Y:942
	HeroArmySpot			= X:1855 Y:1218
	HeroArmySpot			= X:1760 Y:1466
	GarrisonArmySpot		= X:2088 Y:1341
	;BuildingSpot			= X:2169 Y:994
	BuildingSpot			= X:2164 Y:1210
	BuildingSpot			= X:2164 Y:1150
	BuildingSpot			= X:2164 Y:1090	
	;BuildingSpot			= X:1780 Y:1334

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
End

;////////////////////////////
;// Weather Hills
;////////////////////////////
Region Weather_Hills
	DisplayName				= LW:DisplayNameWeatherhills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Weather Hills"
	SkirmishStillImage		= WOR_Weather_Hills
	SkirmishMusicTrack		= BaGood23
	SubObject				= WEATHER_HILLS
	RegionPortrait			= MPWeatherHills

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Fornost
		End
		Connection
			Region		= Ettenmoors
		End
		Connection
			Region		= Rhudaur
		End
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= Weathertop
		End
		Connection
			Region		= North_Downs
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-159 Y:1653
	HeroArmySpot			= X:-291 Y:1612
	HeroArmySpot			= X:-232 Y:1684
	HeroArmySpot			= X:-114 Y:1699
	HeroArmySpot			= X:-19 Y:1670
	GarrisonArmySpot		= X:-109 Y:1584
	BuildingSpot			= X:-181 Y:1620

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
End

;////////////////////////////
;// Weathertop
;////////////////////////////
Region Weathertop
	DisplayName			    = LW:DisplayNameWeathertop
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				    = "MAP WOR Weathertop"
	SkirmishStillImage		= WOR_Weathertop
	SkirmishMusicTrack		= BaGood23
	SubObject			    = WEATHERTOP
	RegionPortrait			= MPWeathertop

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Barrow_Downs
		End
		Connection
			Region		= Eregion
		End
		Connection
			Region		= North_Downs
		End
		Connection
			Region		= Old_Forest
		End
		Connection
			Region		= Trollshaws
		End
		Connection
			Region		= Weather_Hills
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-282 Y:1408
	HeroArmySpot			= X:-314 Y:1318
	HeroArmySpot			= X:-165 Y:1334
	HeroArmySpot			= X:-205 Y:1505
	HeroArmySpot			= X:-395 Y:1477
	GarrisonArmySpot		= X:-314 Y:1424
	BuildingSpot			= X:-369 Y:1373
	BuildingSpot			= X:-309 Y:1373	
	;BuildingSpot			= X:-151 Y:1425

	CPLimit					= 1000
	AllyCPLimit				= 500

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End

;////////////////////////////
;// Withered Heath
;////////////////////////////
Region Withered_Heath
	DisplayName				= LW:DisplayNameWitheredHeath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Withered Heath"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Withered_Heath
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= WITHERED_HEATH
	RegionPortrait			= MPWitheredHeath

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastern_Wastes
		End
		Connection
			Region		= Erebor_Dale
		End
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= Iron_Hills
		End
		Connection
			Region		= Northern_Mirkwood
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1817 Y:2130
	HeroArmySpot			= X:1528 Y:2053
	HeroArmySpot			= X:1696 Y:1996
	HeroArmySpot			= X:1951 Y:1990
	HeroArmySpot			= X:1949 Y:2179
	GarrisonArmySpot		= X:1692 Y:2181
	BuildingSpot			= X:1793 Y:2009

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
End

//-------------------------------------------------------------------------------------------------
// Region definitions
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Arnor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryArnor
	;EffectName				= ARNOR
	Regions					= Barrow_Downs Buckland Evendim_Hills Evendim_Lake Fornost Hobbiton North_Downs Old_Forest Trollshaws Weather_Hills Weathertop
	ArmyBonus				= 0
	ResourceBonus			= 100
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyArnor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostArnor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-573 Y:1502
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Erebor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryErebor
	;EffectName				= EREBOR
	Regions					= Carnen Eastern_Wastes Erebor_Dale Esgaroth Iron_Hills Withered_Heath
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyArnor    ; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostArnor     ; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:2445 Y:1737
	;LookAtHeading			= 0
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Eriador
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryEriador
	;EffectName				= ERIADOR
	Regions					= Cardolan Eregion Fords_Bruinen Minhiriath Rivendell
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyEriador		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostEriador		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-288 Y:786
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Lindon
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryLindon
	;EffectName				= LINDON
	Regions					= Blue_Mountains Forlindon Grey_Havens Harlindon Tower_Hills
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyNorthernWastes	; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostNorthernWastes	; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:-1353 Y:1575
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Misty Mountains
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryMistyMountains
	;EffectName				= MISTY_MOUNTAINS
	Regions					= Angmar Caradhras Carn_Dum Ettenmoors Forodwaith High_Pass Moria Mount_Gundabad Rhudaur
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 20
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyNorthernWastes	; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostNorthernWastes	; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:441 Y:1740
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Rhovanion
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRhovanion
	;EffectName				= RHOVANION
	Regions					= Carrock Dimrill_Dale Dol_Guldur East_Bight Field_Celebrant Framsburg Gladden_Fields Grey_Mountains Halls_Thranduil Lothlorien Mirkwood Northern_Mirkwood Old_Brown_Lands Old_Ford_Anduin
	ArmyBonus				= 0
	ResourceBonus			= 100
    LegendaryBonus			= 10
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyRhovanion		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostRhovanion		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:1136 Y:1145
	;LookAtHeading			= 0
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Rhun
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRhun
	;EffectName				= RHUN
	Regions					= Dorwinion Orocarni Rhun Vales_Celduin
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 10
    AttackBonus				= 0
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyRhun		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostRhun			; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:2937 Y:845
	;LookAtHeading			= 0
	LookAtZoom				= 0.15
End