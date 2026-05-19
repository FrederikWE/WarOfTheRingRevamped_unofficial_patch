//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Andrast
;////////////////////////////
Region Andrast
	DisplayName				= LW:DisplayNameAndrast
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Andrast"
	SkirmishStillImage		= WOR_Andrast
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANDRAST
	RegionPortrait			= MPAndrast

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anfalas
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-545 Y:-354
	HeroArmySpot			= X:-304 Y:-390
	HeroArmySpot			= X:-409 Y:-329
	HeroArmySpot			= X:-501 Y:-413
	HeroArmySpot			= X:-659 Y:-200
	GarrisonArmySpot		= X:-721 Y:-443
	;BuildingSpot			= X:-367 Y:-393
	;BuildingSpot			= X:-621 Y:-395
	BuildingSpot			= X:-561 Y:-395	

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
;// Anfalas
;////////////////////////////
Region Anfalas
	DisplayName				= LW:DisplayNameAnfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Anfalas"
	SkirmishStillImage		= WOR_Anfalas
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANFALAS
	RegionPortrait			= MPAnfalas

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Andrast
		End
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Lamedon
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-83 Y:-160
	HeroArmySpot			= X:176 Y:-243
	HeroArmySpot			= X:0 Y:-315
	HeroArmySpot			= X:-132 Y:-221
	HeroArmySpot			= X:-308 Y:-220
	GarrisonArmySpot		= X:14 Y:-186
	;BuildingSpot			= X:163 Y:-121
	;BuildingSpot			= X:-100 Y:-130
	BuildingSpot			= X:-332 Y:-148
	BuildingSpot			= X:-272 Y:-148
	;BuildingSpot			= X:-212 Y:-148	

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
;// Anorien
;////////////////////////////
Region Anorien
	DisplayName				= LW:DisplayNameAnorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Anorien"
	SkirmishStillImage		= WOR_Anorien
	SkirmishMusicTrack		= BaGood23
	SubObject				= ANORIEN
	RegionPortrait			= MPAnorien

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Druadan_Forest
		End
		Connection
			Region		= Eastfold
		End		
		Connection
			Region		= Mouths_Entwash
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1011 Y:188
	HeroArmySpot			= X:941 Y:264
	HeroArmySpot			= X:1015 Y:276
	HeroArmySpot			= X:1134 Y:238
	HeroArmySpot			= X:1073 Y:155
	GarrisonArmySpot		= X:1004 Y:144
	;BuildingSpot			= X:963 Y:185
	BuildingSpot			= X:1064 Y:227

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
;// Belfalas
;////////////////////////////
Region Belfalas
	DisplayName				= LW:DisplayNameBelfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Belfalas"
	SkirmishStillImage		= WOR_Belfalas
	SkirmishMusicTrack		= BaGood23
	SubObject				= BELFALAS
	RegionPortrait			= MPBelfalas

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anfalas
		End
		Connection
			Region		= Dol_Amroth
		End
		Connection
			Region		= Lamedon
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

	CustomCenterPoint		= Yes
	CenterPoint				= X:445 Y:-439
	HeroArmySpot			= X:297 Y:-559
	HeroArmySpot			= X:463 Y:-540
	HeroArmySpot			= X:363 Y:-401
	HeroArmySpot			= X:513 Y:-465
	GarrisonArmySpot		= X:357 Y:-650
	;BuildingSpot			= X:374 Y:-578
	;BuildingSpot			= X:408 Y:-358
	BuildingSpot			= X:468 Y:-358	

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
;// Black Gate
;////////////////////////////
Region Black_Gate
	DisplayName				= LW:DisplayNameBlackGate
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Black Gate"
	SkirmishStillImage		= WOR_Black_Gate
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= BLACK_GATE
	RegionPortrait			= MPBlackGate

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	DefenseBonus			= 5
	;ExperienceBonus		= 0
	;FertileTerritoryBonus	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dagorlad
		End
		Connection
			Region		= Lithlad
		End
		Connection
			Region		= Mount_Doom
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1820 Y:420
	HeroArmySpot			= X:1710 Y:460
	HeroArmySpot			= X:1790 Y:510
	HeroArmySpot			= X:1720 Y:385
	HeroArmySpot			= X:1910 Y:480
	GarrisonArmySpot		= X:1870 Y:345
	;BuildingSpot			= X:1820 Y:420

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
;// Cair Andros
;////////////////////////////
Region Cair_Andros
	DisplayName				= LW:DisplayNameCairAndros
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cair Andros"
	SkirmishStillImage		= WOR_Cair_Andros
	SkirmishMusicTrack		= BaGood23
	SubObject				= CAIR_ANDROS
	RegionPortrait			= MPCairAndros

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

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
	CenterPoint				= X:1390 Y:134
	HeroArmySpot			= X:1366 Y:94
	HeroArmySpot			= X:1325 Y:137
	HeroArmySpot			= X:1359 Y:226
	HeroArmySpot			= X:1424 Y:182
	GarrisonArmySpot		= X:1454 Y:118
	BuildingSpot			= X:1367 Y:179

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
;// Central Ithilien
;////////////////////////////
Region Central_Ithilien
	DisplayName				= LW:DisplayNameCentralIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Central Ithilien"
	SkirmishStillImage		= WOR_Central_Ithilien
	SkirmishMusicTrack		= BaGood33
	SubObject				= CENTRAL_ITHILIE
	RegionPortrait			= MPCentralIthilien

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Southern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1620 Y:-260
	HeroArmySpot			= X:1640 Y:-300
	HeroArmySpot			= X:1560 Y:-275
	HeroArmySpot			= X:1570 Y:-210
	HeroArmySpot			= X:1670 Y:-220
	GarrisonArmySpot		= X:1710 Y:-290
	BuildingSpot			= X:1620 Y:-260

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
;// Dagorlad
;////////////////////////////
Region Dagorlad
	DisplayName				= LW:DisplayNameDagorlad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dagorlad"
	SkirmishStillImage		= WOR_Dagorlad
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= DAGORLAD
	RegionPortrait			= MPDagorlad

	;ResourceBonus			= 0
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	ExperienceBonus		= 5
	;FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Dead_Marshes
		End
		Connection
			Region		= Rhun
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2135 Y:630
	HeroArmySpot			= X:2125 Y:750
	HeroArmySpot			= X:2375 Y:640
	HeroArmySpot			= X:1860 Y:750
	HeroArmySpot			= X:1950 Y:600
	GarrisonArmySpot		= X:2200 Y:545
	;BuildingSpot			= X:1780 Y:645
	;BuildingSpot			= X:1990 Y:740
	BuildingSpot			= X:2500 Y:590
	BuildingSpot			= X:2440 Y:590
	;BuildingSpot			= X:2380 Y:590	

	CPLimit				= 1000
	AllyCPLimit			= 500

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
;// Dead Marshes
;////////////////////////////
Region Dead_Marshes
	DisplayName				= LW:DisplayNameDeadMarshes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dead Marshes"
	SkirmishStillImage		= WOR_Dead_Marshes
	SkirmishMusicTrack		= BaGood23
	SubObject				= DEAD_MARSHES
	RegionPortrait			= MPDeadMarshes

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dagorlad
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Northern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1436 Y:574
	HeroArmySpot			= X:1331 Y:430
	HeroArmySpot			= X:1504 Y:453
	HeroArmySpot			= X:1567 Y:672
	HeroArmySpot			= X:1362 Y:626
	GarrisonArmySpot		= X:1456 Y:562
	BuildingSpot			= X:1529 Y:672
	;BuildingSpot			= X:1356 Y:486

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
;// Dol Amroth
;////////////////////////////
Region Dol_Amroth
	DisplayName				= LW:DisplayNameDolAmroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Amroth"
	SkirmishStillImage		= WOR_Dol_Amroth
	SkirmishMusicTrack		= BaGood23
	SubObject				= DOL_AMROTH
	RegionPortrait			= MPDolAmroth

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Belfalas
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:210 Y:-452
	HeroArmySpot			= X:182 Y:-483
	HeroArmySpot			= X:216 Y:-508
	HeroArmySpot			= X:224 Y:-393
	HeroArmySpot			= X:251 Y:-419
	GarrisonArmySpot		= X:187 Y:-430
	;BuildingSpot			= X:276 Y:-467

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameDolAmroth
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
;// Druadan Forest
;////////////////////////////
Region Druadan_Forest
	DisplayName				= LW:DisplayNameDruadanForest
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Druadan Forest"
	SkirmishStillImage		= WOR_Druadan_Forest
	SkirmishMusicTrack		= BaGood23
	SubObject				= DRUADAN_FOREST
	RegionPortrait			= MPDruadanForest

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anorien
		End
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Mouths_Entwash
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1212 Y:147
	HeroArmySpot			= X:1185 Y:216
	HeroArmySpot			= X:1263 Y:181
	HeroArmySpot			= X:1283 Y:103
	HeroArmySpot			= X:1229 Y:88
	GarrisonArmySpot		= X:1143 Y:151
	BuildingSpot			= X:1212 Y:147

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
;// Eastfold - Halifirien
;////////////////////////////
Region Eastfold
	DisplayName				= LW:DisplayNameHalifirien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Halifirien"
	SkirmishStillImage		= WOR_Halifirien
	SkirmishMusicTrack		= BaGood23
	SubObject				= EASTFOLD
	RegionPortrait			= MPHalifirein

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anorien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:810 Y:218
	HeroArmySpot			= X:762 Y:253
	HeroArmySpot			= X:816 Y:272
	HeroArmySpot			= X:880 Y:234
	HeroArmySpot			= X:861 Y:186
	GarrisonArmySpot		= X:727 Y:206
	BuildingSpot			= X:810 Y:218

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
;// Emyn Arnen
;////////////////////////////
Region Emyn_Arnen
	DisplayName				= LW:DisplayNameEmynArnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Emyn Arnen"
	SkirmishStillImage		= WOR_Emyn_Arnen
	SkirmishMusicTrack		= BaGood36
	SubObject				= EMYN_ARNEN
	RegionPortrait			= MPEmynArnen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Central_Ithilien
		End
		Connection
			Region		= Harlond
		End
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Minas_Morgul
		End
		Connection
			Region		= Osgiliath
		End
		Connection
			Region		= Southern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1435 Y:-260
	HeroArmySpot			= X:1640 Y:-145
	HeroArmySpot			= X:1500 Y:-160
	HeroArmySpot			= X:1370 Y:-235
	HeroArmySpot			= X:1355 Y:-360
	GarrisonArmySpot		= X:1500 Y:-350
	BuildingSpot			= X:1410 Y:-300

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
;// Far Harad
;////////////////////////////
Region Far_Harad
	DisplayName				= LW:DisplayNameFarHarad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Far Harad"
	SkirmishStillImage		= WOR_Far_Harad
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= FAR_HARAD
	RegionPortrait			= MPFarHarad

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Khand
		End
		Connection
			Region		= Near_Harad
		End
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Umbar
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1855 Y:-1265
	HeroArmySpot			= X:1190 Y:-1250
	HeroArmySpot			= X:1660 Y:-1300
	HeroArmySpot			= X:2075 Y:-1200
	HeroArmySpot			= X:2390 Y:-1290
	GarrisonArmySpot		= X:1770 Y:-1220
	BuildingSpot			= X:1355 Y:-1275
	BuildingSpot			= X:1295 Y:-1275	
	;BuildingSpot			= X:1915 Y:-1250

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
;// Harlond
;////////////////////////////
Region Harlond
	DisplayName				= LW:DisplayNameHarlond
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harlond"
	SkirmishStillImage		= WOR_Harlond
	SkirmishMusicTrack		= BaGood23
	SubObject				= HARLOND
	RegionPortrait			= MPHarlond

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Osgiliath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1336 Y:-161
	HeroArmySpot			= X:1251 Y:-172
	HeroArmySpot			= X:1302 Y:-190
	HeroArmySpot			= X:1410 Y:-153
	HeroArmySpot			= X:1353 Y:-109
	GarrisonArmySpot		= X:1320 Y:-134
	BuildingSpot			= X:1296 Y:-142

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
;// Harondor
;////////////////////////////
Region Harondor
	DisplayName				= LW:DisplayNameHarondor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harondor"
	SkirmishStillImage		= WOR_Harondor
	SkirmishMusicTrack		= BaGood23
	SubObject				= HARONDOR
	RegionPortrait			= MPHarondor

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Near_Harad
		End
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Southern_Ithilien
		End
		Connection
			Region		= Umbar
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1365 Y:-870
	HeroArmySpot			= X:925 Y:-900
	HeroArmySpot			= X:970 Y:-755
	HeroArmySpot			= X:1730 Y:-865
	HeroArmySpot			= X:1510 Y:-980
	GarrisonArmySpot		= X:1320 Y:-835
	;BuildingSpot			= X:1090 Y:-890
	;BuildingSpot			= X:1090 Y:-700
	;BuildingSpot			= X:1515 Y:-810
	;BuildingSpot			= X:1650 Y:-1045
	BuildingSpot			= X:1710 Y:-1045
	BuildingSpot			= X:1770 Y:-1045	

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
;// Khand
;////////////////////////////
Region Khand
	DisplayName				= LW:DisplayNameKhand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Khand"
	SkirmishStillImage		= WOR_Khand
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Khand
	RegionPortrait			= MPKhand

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Near_Harad
		End
		Connection
			Region		= Far_Harad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2980 Y:-1025
	HeroArmySpot			= X:2995 Y:-830
	HeroArmySpot			= X:3130 Y:-925
	HeroArmySpot			= X:2970 Y:-1260
	HeroArmySpot			= X:2745 Y:-1270
	GarrisonArmySpot		= X:2870 Y:-1070
	;BuildingSpot			= X:3060 Y:-1170
	BuildingSpot			= X:2865 Y:-950
	;BuildingSpot			= X:2865 Y:-1010

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
;// Lamedon
;////////////////////////////
Region Lamedon
	DisplayName				= LW:DisplayNameLamedon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lamedon"
	SkirmishStillImage		= WOR_Lamedon
	SkirmishMusicTrack		= BaGood23
	SubObject				= LAMEDON
	RegionPortrait			= MPLamedon

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anfalas
		End
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Lebennin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:501 Y:-217
	HeroArmySpot			= X:702 Y:-247
	HeroArmySpot			= X:390 Y:-235
	HeroArmySpot			= X:302 Y:-187
	HeroArmySpot			= X:340 Y:-88
	GarrisonArmySpot		= X:570 Y:-222
	;BuildingSpot			= X:628 Y:-258
	BuildingSpot			= X:364 Y:-163

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
;// Lebennin
;////////////////////////////
Region Lebennin
	DisplayName				= LW:DisplayNameLebennin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lebennin"
	SkirmishStillImage		= WOR_Lebennin
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= LEBENNIN
	RegionPortrait			= MPLebennin

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Harlond
		End
		Connection
			Region		= Lamedon
		End
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Southern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:950 Y:-365
	HeroArmySpot			= X:660 Y:-490
	HeroArmySpot			= X:810 Y:-290
	HeroArmySpot			= X:1080 Y:-220
	HeroArmySpot			= X:1105 Y:-390
	GarrisonArmySpot		= X:880 Y:-510
	BuildingSpot			= X:750 Y:-490
	BuildingSpot			= X:810 Y:-490
	;BuildingSpot			= X:900 Y:-350
	;BuildingSpot			= X:1100 Y:-300

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
;// Lithlad
;////////////////////////////
Region Lithlad
	DisplayName				= LW:DisplayNameLithlad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Ered Lithui"
	SkirmishStillImage		= WOR_Ered_Lithui
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= LITHLAD
	RegionPortrait			= MPEredLithui

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Mount_Doom
		End
		Connection
			Region		= Nurn
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2670 Y:250
	HeroArmySpot			= X:2510 Y:240
	HeroArmySpot			= X:2845 Y:245
	HeroArmySpot			= X:2860 Y:150
	HeroArmySpot			= X:2460 Y:55
	GarrisonArmySpot		= X:2600 Y:180
	BuildingSpot			= X:2790 Y:40
	;BuildingSpot			= X:2565 Y:30

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
;// Minas Morgul
;////////////////////////////
Region Minas_Morgul
	DisplayName				= LW:DisplayNameMinasMorgul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Morgul"
	SkirmishStillImage		= WOR_Minas_Morgul
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= MINAS_MORGUL
	RegionPortrait			= MPMinasMorgul

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Shelob_Lair
		End
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Northern_Ithilien
		End
		Connection
			Region		= Osgiliath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1685 Y:15
	HeroArmySpot			= X:1625 Y:-60
	HeroArmySpot			= X:1615 Y:30
	HeroArmySpot			= X:1720 Y:110
	HeroArmySpot			= X:1765 Y:-110
	GarrisonArmySpot		= X:1725 Y:5
	;BuildingSpot			= X:1690 Y:-45

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasMorgulTower
	FortressDisplayName			= LW:DisplayNameMinasMorgul
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
;// Minas Tirith
;////////////////////////////
Region Minas_Tirith
	DisplayName				= LW:DisplayNameMinasTirith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Tirith"
	SkirmishStillImage		= WOR_Minas_Tirith
	SkirmishMusicTrack		= BaGood23
	SubObject				= MINAS_TIRITH
	RegionPortrait			= MPMinasTirith

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Druadan_Forest
		End
		Connection
			Region		= Harlond
		End
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Osgiliath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1318 Y:-17
	HeroArmySpot			= X:1302 Y:-85
	HeroArmySpot			= X:1371 Y:-71
	HeroArmySpot			= X:1383 Y:29
	HeroArmySpot			= X:1315 Y:40
	GarrisonArmySpot		= X:1397 Y:-27
	;BuildingSpot			= X:1330 Y:-30

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMinasTirith
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
;// Mount Doom
;////////////////////////////
Region Mount_Doom
	DisplayName				= LW:DisplayNameMountDoom
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mount Doom"
	SkirmishStillImage		= WOR_Mount_Doom
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= MOUNT_DOOM
	RegionPortrait			= MPMountDoom

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Lithlad
		End
		Connection
			Region		= Nurn
		End
		Connection
			Region		= Shelob_Lair
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2100 Y:130
	HeroArmySpot			= X:2040 Y:-65
	HeroArmySpot			= X:1925 Y:135
	HeroArmySpot			= X:2040 Y:300
	HeroArmySpot			= X:2300 Y:190
	GarrisonArmySpot		= X:2200 Y:80
	BuildingSpot			= X:1895 Y:230
	BuildingSpot			= X:1955 Y:230	
	;BuildingSpot			= X:2235 Y:280
	;BuildingSpot			= X:2150 Y:-55

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
;// Mouths of the Entwash
;////////////////////////////
Region Mouths_Entwash
	DisplayName				= LW:DisplayNameMouthsoftheEntwash
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mouths Entwash"
	SkirmishStillImage		= WOR_Mouths_Entwash
	SkirmishMusicTrack		= BaGood23
	SubObject				= MOUTHS_ENTWASH
	RegionPortrait			= MPMouthsOfTheEntwash

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anorien
		End
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Dead_Marshes
		End
		Connection
			Region		= Druadan_Forest
		End
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Northern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1168 Y:315
	HeroArmySpot			= X:1331 Y:263
	HeroArmySpot			= X:1136 Y:288
	HeroArmySpot			= X:1286 Y:243
	HeroArmySpot			= X:1052 Y:335
	GarrisonArmySpot		= X:1188 Y:352
	;BuildingSpot			= X:1105 Y:354
	BuildingSpot			= X:1259 Y:287

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
;// Near Harad
;////////////////////////////
Region Near_Harad
	DisplayName				= LW:DisplayNameNearHarad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Near Harad"
	SkirmishStillImage		= WOR_Near_Harad
	SkirmishMusicTrack		= BaEvil13
	SubObject				= NEAR_HARAD
	RegionPortrait			= MPNearHarod

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Khand
		End
		Connection
			Region		= Far_Harad
		End
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Southern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2360 Y:-970
	HeroArmySpot			= X:2025 Y:-900
	HeroArmySpot			= X:2530 Y:-850
	HeroArmySpot			= X:2520 Y:-1125
	HeroArmySpot			= X:2250 Y:-1095
	GarrisonArmySpot		= X:2365 Y:-950
	;BuildingSpot			= X:2180 Y:-990
	BuildingSpot			= X:2590 Y:-870
	;BuildingSpot			= X:2530 Y:-870	


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
;// Northern Itilien
;////////////////////////////
Region Northern_Ithilien
	DisplayName				= LW:DisplayNameNorthernIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Northern Ithilien"
	SkirmishStillImage		= WOR_Northern_Ithilien
	SkirmishMusicTrack		= BaGood23
	SubObject				= NORTHERN_ITILIE
	RegionPortrait			= MPNorthIthilien

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Black_Gate
		End
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Dead_Marshes
		End
		Connection
			Region		= Minas_Morgul
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Osgiliath
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1476 Y:282
	HeroArmySpot			= X:1522 Y:132
	HeroArmySpot			= X:1377 Y:339
	HeroArmySpot			= X:1512 Y:360
	HeroArmySpot			= X:1595 Y:384
	GarrisonArmySpot		= X:1510 Y:265
	;BuildingSpot			= X:1511 Y:213
	BuildingSpot			= X:1429 Y:323

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
;// Nurn
;////////////////////////////
Region Nurn
	DisplayName				= LW:DisplayNameNurn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Nurn"
	SkirmishStillImage		= WOR_Nurn
	SkirmishMusicTrack		= BaEvil09
	SubObject				= NURN
	RegionPortrait			= MPNurn

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Shelob_Lair
		End
		Connection
			Region		= Lithlad
		End
		Connection
			Region		= Mount_Doom
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2500 Y:-325
	HeroArmySpot			= X:2100 Y:-290
	HeroArmySpot			= X:2500 Y:-515
	HeroArmySpot			= X:2850 Y:-290
	HeroArmySpot			= X:2530 Y:-135
	GarrisonArmySpot		= X:2285 Y:-360
	BuildingSpot			= X:2150 Y:-440
	;BuildingSpot			= X:2560 Y:-90
	;BuildingSpot			= X:2200 Y:-250
	;BuildingSpot			= X:2760 Y:-110

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
;// Osgiliath
;////////////////////////////
Region Osgiliath
	DisplayName				= LW:DisplayNameOsgiliath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Osgiliath"
	SkirmishStillImage		= WOR_Osgiliath
	SkirmishMusicTrack		= BaGood23
	SubObject				= OSGILIATH
	RegionPortrait			= MPOsgiliath

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cair_Andros
		End
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Harlond
		End
		Connection
			Region		= Minas_Morgul
		End
		Connection
			Region		= Minas_Tirith
		End
		Connection
			Region		= Northern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1499 Y:-8
	HeroArmySpot			= X:1474 Y:-65
	HeroArmySpot			= X:1546 Y:-61
	HeroArmySpot			= X:1484 Y:62
	HeroArmySpot			= X:1539 Y:22
	GarrisonArmySpot		= X:1453 Y:-4
	BuildingSpot			= X:1499 Y:-8

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
;// Pelargir
;////////////////////////////
Region Pelargir
	DisplayName				= LW:DisplayNamePelargir
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Pelargir"
	SkirmishStillImage		= WOR_Pelargir
	SkirmishMusicTrack		= BaEvil09
	SubObject				= PELARGIR
	RegionPortrait			= MPPelargir

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Lebennin
		End
		Connection
			Region		= Southern_Ithilien
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1135 Y:-515
	HeroArmySpot			= X:1020 Y:-550
	HeroArmySpot			= X:1080 Y:-470
	HeroArmySpot			= X:1210 Y:-475
	HeroArmySpot			= X:1235 Y:-555
	GarrisonArmySpot		= X:1160 Y:-550
	;BuildingSpot			= X:1065 Y:-530
	BuildingSpot			= X:1200 Y:-520

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
			Region		= Dagorlad
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
;// Shelob's Lair
;////////////////////////////
Region Shelob_Lair
	DisplayName				= LW:DisplayNameShelobsLair
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cirith Ungol"
	SkirmishStillImage		= WOR_Shelobs_Lair
	SkirmishMusicTrack		= BaEvil09
	SubObject				= SHELOB_LAIR
	RegionPortrait			= MPCirithUngol

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Minas_Morgul
		End
		Connection
			Region		= Mount_Doom
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1830 Y:5
	HeroArmySpot			= X:1925 Y:-35
	HeroArmySpot			= X:1855 Y:-80
	HeroArmySpot			= X:1780 Y:20
	HeroArmySpot			= X:1795 Y:110
	GarrisonArmySpot		= X:1870 Y:30
	BuildingSpot			= X:1900 Y:-50	

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
;// Southern_Ithilien
;////////////////////////////
Region Southern_Ithilien
	DisplayName				= LW:DisplayNameSouthernIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Southern Ithilien"
	SkirmishStillImage		= WOR_Southern_Ithilien
	SkirmishMusicTrack		= BaGood29
	SubObject				= SOUTHERN_ITHILI
	RegionPortrait			= MPSouthIthilien

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Central_Ithilien
		End
		Connection
			Region		= Emyn_Arnen
		End
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Near_Harad
		End
		Connection
			Region		= Pelargir
		End
		Connection
			Region		= Lebennin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1580 Y:-530
	HeroArmySpot			= X:1695 Y:-505
	HeroArmySpot			= X:1493 Y:-454
	HeroArmySpot			= X:1340 Y:-560
	HeroArmySpot			= X:1805 Y:-745
	GarrisonArmySpot		= X:1580 Y:-555
	;BuildingSpot			= X:1765 Y:-695
	BuildingSpot			= X:1635 Y:-430
	BuildingSpot			= X:1635 Y:-490	
	;BuildingSpot			= X:1410 Y:-530

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
;// Tolfalas
;////////////////////////////
Region Tolfalas
	DisplayName				= LW:DisplayNameTolfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Tolfalas"
	SkirmishStillImage		= WOR_Tolfalas
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= TOLFALAS
	RegionPortrait			= MPTolfalas

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Umbar
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:490 Y:-935
	HeroArmySpot			= X:535 Y:-800
	HeroArmySpot			= X:565 Y:-900
	HeroArmySpot			= X:470 Y:-1005
	HeroArmySpot			= X:390 Y:-980
	GarrisonArmySpot		= X:505 Y:-915
	;BuildingSpot			= X:440 Y:-975
	;BuildingSpot			= X:545 Y:-860


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
;// Umbar
;////////////////////////////
Region Umbar
	DisplayName				= LW:DisplayNameUmbar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Umbar"
	SkirmishStillImage		= WOR_Umbar
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= UMBAR
	RegionPortrait			= MPUmbar

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Belfalas
		End
		Connection
			Region		= Far_Harad
		End	
		Connection
			Region		= Harondor
		End
		Connection
			Region		= Tolfalas
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1115 Y:-1090
	HeroArmySpot			= X:1130 Y:-1045
	HeroArmySpot			= X:1230 Y:-1080
	HeroArmySpot			= X:1155 Y:-1135
	HeroArmySpot			= X:1045 Y:-1145
	GarrisonArmySpot		= X:985 Y:-1055
	;BuildingSpot			= X:1115 Y:-1090

	CPLimit				= 1000
	AllyCPLimit			= 500

;	CreateAutoFort				= Yes
;	FortressPortrait			= BPMFortress
;	FortressDisplayName			= LW:DisplayNameUmbar
;	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	
	
	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 0
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
;// Gondor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryGondor
	;EffectName				= GONDOR
	Regions					= Andrast Anfalas Anorien Belfalas Cair_Andros Central_Ithilien Dead_Marshes Dol_Amroth Druadan_Forest Eastfold Emyn_Arnen Harlond Lamedon Lebennin Minas_Tirith Mouths_Entwash Northern_Ithilien Osgiliath Pelargir Southern_Ithilien Tolfalas
	ArmyBonus				= 0
	ResourceBonus			= 100
    LegendaryBonus			= 0
    AttackBonus				= 10
	DefenseBonus			= 10
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:501 Y:-217
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Harad
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryHarad
	;EffectName				= HARAD
	Regions					= Far_Harad Harondor Khand Near_Harad Umbar
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyMordor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostMordor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:2500 Y:-655
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Mordor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryMordor
	;EffectName				= MORDOR
	Regions					= Black_Gate Lithlad Minas_Morgul Mount_Doom Nurn Shelob_Lair
	ArmyBonus				= 0
	ResourceBonus			= 0
    LegendaryBonus			= 0
    AttackBonus				= 10
	DefenseBonus			= 0
	ExperienceBonus			= 0
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:2100 Y:130
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End

;////////////////////////////
;// Rhun
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRhun
	;EffectName				= RHUN
	Regions					= Dagorlad Rhun
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