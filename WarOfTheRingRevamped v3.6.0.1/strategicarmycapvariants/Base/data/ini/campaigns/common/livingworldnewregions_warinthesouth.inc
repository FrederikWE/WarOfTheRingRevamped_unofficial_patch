//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Amon Hen
;////////////////////////////
Region Amon_Hen
	DisplayName				= LW:DisplayNameAmonHen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Amon Hen"
	SkirmishStillImage		= WOR_Amon_Hen
	SkirmishMusicTrack		= BaGood23
	SubObject				= AMON_HEN
	RegionPortrait			= MPAmonHen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1059 Y:604
	HeroArmySpot			= X:1085 Y:671
	HeroArmySpot			= X:1032 Y:645
	HeroArmySpot			= X:1027 Y:563
	HeroArmySpot			= X:1056 Y:507
	GarrisonArmySpot		= X:1076 Y:553
	BuildingSpot			= X:1059 Y:604

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
;// Andrast
;////////////////////////////
Region Andrast
	DisplayName				= LW:DisplayNameAndrast
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Andrast"
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
		Connection
			Region		= Enedwaith
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-545 Y:-354
	HeroArmySpot			= X:-304 Y:-390
	HeroArmySpot			= X:-409 Y:-329
	HeroArmySpot			= X:-501 Y:-413
	HeroArmySpot			= X:-659 Y:-200
	GarrisonArmySpot		= X:-721 Y:-443
	BuildingSpot			= X:-367 Y:-393
	BuildingSpot			= X:-621 Y:-395

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
	MapName					= "MAP NEW WOR Anfalas"
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
			Region		= Enedwaith
		End
		Connection
			Region		= Lamedon
		End
		Connection
			Region		= Paths_Dead
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-83 Y:-160
	HeroArmySpot			= X:176 Y:-243
	HeroArmySpot			= X:0 Y:-315
	HeroArmySpot			= X:-132 Y:-221
	HeroArmySpot			= X:-308 Y:-220
	GarrisonArmySpot		= X:14 Y:-186
	BuildingSpot			= X:163 Y:-121
	BuildingSpot			= X:-100 Y:-130
	BuildingSpot			= X:-332 Y:-148

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
;// Angmar
;////////////////////////////
Region Angmar
	DisplayName				= LW:DisplayNameAngmar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Angmar"
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
;// Anorien
;////////////////////////////
Region Anorien
	DisplayName				= LW:DisplayNameAnorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Anorien"
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
			Region		= East_Rohan
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
	BuildingSpot			= X:963 Y:185
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
;// Barrow Downs
;////////////////////////////
Region Barrow_Downs
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Barrow Downs"
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
;// Belfalas
;////////////////////////////
Region Belfalas
	DisplayName				= LW:DisplayNameBelfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Belfalas"
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
			Region		= Grey_Havens
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
	BuildingSpot			= X:374 Y:-578
	BuildingSpot			= X:408 Y:-358

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
	MapName					= "MAP NEW WOR Black Gate"
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
	BuildingSpot			= X:1820 Y:420

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
	MapName					= "MAP NEW WOR Blue Mountains"
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
	MapName					= "MAP NEW WOR Buckland"
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
	BuildingSpot			= X:-737 Y:1437
	BuildingSpot			= X:-725 Y:1677

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
	MapName					= "MAP NEW WOR Cair Andros"
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
;// Caradhras
;////////////////////////////
Region Caradhras
	DisplayName				= LW:DisplayNameCaradhras
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Caradhras"
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
	MapName					= "MAP NEW WOR Cardolan"
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
			Region		= Swan_Fleet
		End
		Connection
			Region		= Tharbad
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
	BuildingSpot			= X:-460 Y:1000
	BuildingSpot			= X:-676 Y:1006

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
	MapName					= "MAP NEW WOR Carn Dum"
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
	BuildingSpot			= X:-250 Y:2367

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
;// Carnen
;////////////////////////////
Region Carnen
	DisplayName				= LW:DisplayNameCarnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Carnen"
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
	BuildingSpot			= X:2102 Y:1557
   
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
	MapName					= "MAP NEW WOR Carrock"
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
;// Central Ithilien
;////////////////////////////
Region Central_Ithilien
	DisplayName				= LW:DisplayNameCentralIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Central Ithilien"
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
	MapName					= "MAP NEW WOR Dagorlad"
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
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= Rhun
		End
		Connection
			Region		= Vales_Celduin
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2135 Y:630
	HeroArmySpot			= X:2125 Y:750
	HeroArmySpot			= X:2375 Y:640
	HeroArmySpot			= X:1860 Y:750
	HeroArmySpot			= X:1950 Y:600
	GarrisonArmySpot		= X:2200 Y:545
	BuildingSpot			= X:1780 Y:645
	BuildingSpot			= X:1990 Y:740
	BuildingSpot			= X:2500 Y:590

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
	MapName					= "MAP NEW WOR Dead Marshes"
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
			Region		= Emyn_Muil
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Northern_Ithilien
		End
		Connection
			Region		= Old_Brown_Lands
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1436 Y:574
	HeroArmySpot			= X:1331 Y:430
	HeroArmySpot			= X:1504 Y:453
	HeroArmySpot			= X:1567 Y:672
	HeroArmySpot			= X:1362 Y:626
	GarrisonArmySpot		= X:1456 Y:562
	BuildingSpot			= X:1529 Y:672
	BuildingSpot			= X:1356 Y:486

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
	MapName				= "MAP NEW WOR Dimrill Dale"
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
			Region		= Fangorn_Forest
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
;// Dol Amroth
;////////////////////////////
Region Dol_Amroth
	DisplayName				= LW:DisplayNameDolAmroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Dol Amroth"
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
	BuildingSpot			= X:276 Y:-467

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
;// Dol Guldur
;////////////////////////////
Region Dol_Guldur
	DisplayName				= LW:DisplayNameDolGuldur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Dol Guldur"
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
	BuildingSpot			= X:1044 Y:1094

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
	MapName					= "MAP NEW WOR Dorwinion"
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
;// Druadan Forest
;////////////////////////////
Region Druadan_Forest
	DisplayName				= LW:DisplayNameDruadanForest
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Druadan Forest"
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
;// Dunharrow
;////////////////////////////
Region Dunharrow
	DisplayName			= LW:DisplayNameDunharrow
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP NEW WOR Dunharrow"
	SkirmishStillImage		= WOR_Dunharrow
	SkirmishMusicTrack		= BaGood23
	SubObject			= DUNHARROW
	RegionPortrait			= MPDunharrow

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Edoras
		End
		Connection
			Region		= Helms_Deep
		End
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Paths_Dead
		End
		Connection
			Region		= Westfold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:296 Y:291
	HeroArmySpot			= X:249 Y:305
	HeroArmySpot			= X:253 Y:359
	HeroArmySpot			= X:331 Y:358
	HeroArmySpot			= X:330 Y:303
	GarrisonArmySpot		= X:278 Y:290
	BuildingSpot			= X:291 Y:335

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
;// Dunland
;////////////////////////////
Region Dunland
	DisplayName				= LW:DisplayNameDunland
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Dunland"
	SkirmishStillImage		= WOR_Dunland
	SkirmishMusicTrack		= BaGood23
	SubObject				= DUNLAND
	RegionPortrait			= MPDunland

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Eregion
		End
		Connection
			Region		= Isengard
		End
		Connection
			Region		= Swan_Fleet
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-29 Y:896
	HeroArmySpot			= X:75 Y:951
	HeroArmySpot			= X:-215 Y:972
	HeroArmySpot			= X:-106 Y:791
	HeroArmySpot			= X:47 Y:751
	GarrisonArmySpot		= X:-52 Y:991
	BuildingSpot			= X:0 Y:804
	BuildingSpot			= X:-128 Y:960

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
	MapName					= "MAP NEW WOR East Bight"
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
;// East Rohan
;////////////////////////////
Region East_Rohan
	DisplayName				= LW:DisplayNameEasternRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Eastern Rohan"
	SkirmishStillImage		= WOR_Eastern_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAST_ROHAN
	RegionPortrait			= MPEasternRohan

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anorien
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= Eastfold
		End
		Connection
			Region		= Halifirien
		End
		Connection
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Rohan
		End
		Connection
			Region		= West_Emnet
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:801 Y:356
	HeroArmySpot			= X:593 Y:312
	HeroArmySpot			= X:720 Y:379
	HeroArmySpot			= X:953 Y:317
	HeroArmySpot			= X:989 Y:413
	GarrisonArmySpot		= X:842 Y:330
	BuildingSpot			= X:663 Y:341
	BuildingSpot			= X:935 Y:369

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
	MapName					= "MAP NEW WOR Halifirien"
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
		Connection
			Region		= East_Rohan
		End
		Connection
			Region		= Halifirien
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
;// Eaves of Fangorn
;////////////////////////////
Region Eaves_Fangorn
	DisplayName				= LW:DisplayNameEavesofFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Eaves Fangorn"
	SkirmishStillImage		= WOR_Eaves_Fangorn
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAVES_FANGORN
	RegionPortrait			= MPEavesOfFangorn

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Fangorn_Forest
		End
		Connection
			Region		= Gap_Rohan
		End
		Connection
			Region		= Isengard
		End
		Connection
			Region		= Rohan
		End
		Connection
			Region		= West_Emnet
		End
		Connection
			Region		= Westfold
		End
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:436 Y:624
	HeroArmySpot			= X:500 Y:650
	HeroArmySpot			= X:356 Y:611
	HeroArmySpot			= X:402 Y:650
	HeroArmySpot			= X:466 Y:599
	GarrisonArmySpot		= X:577 Y:659
	BuildingSpot			= X:530 Y:632

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
;// Edoras
;////////////////////////////
Region Edoras
	DisplayName				= LW:DisplayNameEdoras
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Edoras"
	SkirmishStillImage		= WOR_Edoras
	SkirmishMusicTrack		= BaGood23
	SubObject				= EDORAS
	RegionPortrait			= MPEdoras

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Halifirien
		End
		Connection
			Region		= Rohan
		End
		Connection
			Region		= Westfold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:424 Y:250
	HeroArmySpot			= X:376 Y:351
	HeroArmySpot			= X:454 Y:314
	HeroArmySpot			= X:511 Y:285
	HeroArmySpot			= X:491 Y:240
	GarrisonArmySpot		= X:372 Y:265
	BuildingSpot			= X:404 Y:317

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
	MapName					= "MAP NEW WOR Emyn Arnen"
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
;// Emyn Muil
;////////////////////////////
Region Emyn_Muil
	DisplayName				= LW:DisplayNameEmynMuil
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Emyn Muil"
	SkirmishStillImage		= WOR_Emyn_Muil
	SkirmishMusicTrack		= BaGood23
	SubObject				= EMYN_MUIL
	RegionPortrait			= MPEmynMuil

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
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
			Region		= Mouths_Entwash
		End
		Connection
			Region		= Old_Brown_Lands
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1194 Y:569
	HeroArmySpot			= X:1158 Y:651
	HeroArmySpot			= X:1262 Y:624
	HeroArmySpot			= X:1227 Y:460
	HeroArmySpot			= X:1118 Y:463
	GarrisonArmySpot		= X:1132 Y:532
	BuildingSpot			= X:1194 Y:569

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
;// East Emnet
;////////////////////////////
Region East_Emnet
	DisplayName				= LW:DisplayNameEastEmnet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR East Emnet"
	SkirmishStillImage		= WOR_East_Emnet
	SkirmishMusicTrack		= BaGood23
	SubObject				= EAST_EMNET
	RegionPortrait			= MPEastEmnet

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Amon_Hen
		End
		Connection
			Region		= East_Rohan
		End
		Connection
			Region		= West_Emnet
		End
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:895 Y:569
	HeroArmySpot			= X:808 Y:520
	HeroArmySpot			= X:866 Y:472
	HeroArmySpot			= X:975 Y:623
	HeroArmySpot			= X:915 Y:673
	GarrisonArmySpot		= X:895 Y:560
	BuildingSpot			= X:958 Y:505
	BuildingSpot			= X:844 Y:632

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
	MapName					= "MAP NEW WOR Eastern Wastes"
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
;// Enedwaith
;////////////////////////////
Region Enedwaith
	DisplayName				= LW:DisplayNameEnedwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Enedwaith"
	SkirmishStillImage		= WOR_Enedwaith
	SkirmishMusicTrack		= BaGood23
	SubObject				= ENEDWAITH
	RegionPortrait			= MPEnedwaith 

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Andrast
		End
		Connection
			Region		= Anfalas
		End
		Connection
			Region		= Dunland
		End
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Gap_Rohan
		End
		Connection
			Region		= Helms_Deep
		End
		Connection
			Region		= Isengard
		End
		Connection
			Region		= Minhiriath
		End
		Connection
			Region		= Swan_Fleet
		End
		Connection
			Region		= Tharbad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-337 Y:400
	HeroArmySpot			= X:-460 Y:164
	HeroArmySpot			= X:-552 Y:423
	HeroArmySpot			= X:-397 Y:527
	HeroArmySpot			= X:-67 Y:582
	GarrisonArmySpot		= X:-132 Y:322
	BuildingSpot			= X:-300 Y:281
	BuildingSpot			= X:-510 Y:520
	BuildingSpot			= X:-158 Y:507

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
	MapName					= "MAP NEW WOR Erebor"
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
	BuildingSpot			= X:1626 Y:1783

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
	MapName					= "MAP NEW WOR Eregion"
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
			Region		= Dunland
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
	BuildingSpot			= X:41 Y:1107
	BuildingSpot			= X:-243 Y:1153
	BuildingSpot			= X:29 Y:1276

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
	MapName					= "MAP NEW WOR Esgaroth"
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
	MapName					= "MAP NEW WOR Ettenmoors"
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
	BuildingSpot			= X:-289 Y:1998
	BuildingSpot			= X:-65 Y:1823

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
	MapName					= "MAP NEW WOR Evendim Hills"
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
	BuildingSpot			= X:-737 Y:2092
	BuildingSpot			= X:-516 Y:2116

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
	MapName					= "MAP NEW WOR Evendim Lake"
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
	BuildingSpot			= X:-972 Y:1808
	BuildingSpot			= X:-1014 Y:1978
	BuildingSpot			= X:-781 Y:1907

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
;// Fangorn Forest
;////////////////////////////
Region Fangorn_Forest
	DisplayName				= LW:DisplayNameFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Fangorn"
	SkirmishStillImage		= WOR_Fangorn_Forest
	SkirmishMusicTrack		= BaGood23
	SubObject				= FANGORN_FOREST
	RegionPortrait			= MPFangorn

;	ArmyBonus				= 0
	ResourceBonus			= 10
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
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Isengard
		End
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:466 Y:776
	HeroArmySpot			= X:321 Y:724
	HeroArmySpot			= X:432 Y:848
	HeroArmySpot			= X:603 Y:859
	HeroArmySpot			= X:540 Y:747
	GarrisonArmySpot		= X:456 Y:713
	BuildingSpot			= X:529 Y:833
	BuildingSpot			= X:393 Y:751

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
	MapName					= "MAP NEW WOR Far Harad"
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
	BuildingSpot			= X:1915 Y:-1250

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
	MapName					= "MAP NEW WOR Field Celebrant"
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
			Region		= Fangorn_Forest
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
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:921 Y:938
	HeroArmySpot			= X:1003 Y:883
	HeroArmySpot			= X:928 Y:1047
	HeroArmySpot			= X:810 Y:1021
	HeroArmySpot			= X:809 Y:911
	GarrisonArmySpot		= X:986 Y:971
	BuildingSpot			= X:731 Y:919
	BuildingSpot			= X:893 Y:995

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
	MapName					= "MAP NEW WOR Fords Bruinen"
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
;// Fords of Isen
;////////////////////////////
Region Fords_Isen
	DisplayName				= LW:DisplayNameFordsofIsen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Fords of Isen"
	SkirmishStillImage		= WOR_Fords_Isen
	SkirmishMusicTrack		= BaGood23
	SubObject				= FORDS_ISEN
	RegionPortrait			= MPFordsOfIsen

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Gap_Rohan
		End
		Connection
			Region		= Helms_Deep
		End
		Connection
			Region		= Westfold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:167 Y:478
	HeroArmySpot			= X:208 Y:427
	HeroArmySpot			= X:159 Y:429
	HeroArmySpot			= X:112 Y:527
	HeroArmySpot			= X:221 Y:483
	GarrisonArmySpot		= X:154 Y:514
	BuildingSpot			= X:167 Y:478

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
	MapName					= "MAP NEW WOR Forlindon"
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
	BuildingSpot			= X:-1949 Y:1752

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
	MapName					= "MAP NEW WOR Fornost"
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
	MapName					= "MAP NEW WOR Forodwaith"
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
	BuildingSpot			= X:107 Y:2443

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
	MapName					= "MAP NEW WOR Framsburg"
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
	BuildingSpot			= X:649 Y:1847

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
;// Gap of Rohan
;////////////////////////////
Region Gap_Rohan
	DisplayName				= LW:DisplayNameGapofRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Gap of Rohan"
	SkirmishStillImage		= WOR_Gap_of_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= GAP_ROHAN
	RegionPortrait			= MPGapofRohan

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Isengard
		End
		Connection
			Region		= Westfold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:171 Y:558
	HeroArmySpot			= X:266 Y:598
	HeroArmySpot			= X:117 Y:561
	HeroArmySpot			= X:235 Y:520
	HeroArmySpot			= X:92 Y:582
	GarrisonArmySpot		= X:175 Y:549
	BuildingSpot			= X:221 Y:559

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
	MapName					= "MAP NEW WOR Gladden Fields"
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
	MapName					= "MAP NEW WOR Grey Havens"
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
	BuildingSpot			= X:-1271 Y:1821

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
	MapName					= "MAP NEW WOR Grey Mountains"
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
	BuildingSpot			= X:830 Y:2200

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
;// Halifirien - Eastfold
;////////////////////////////
Region Halifirien
	DisplayName				= LW:DisplayNameEastfold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Eastfold"
	SkirmishStillImage		= WOR_Eastfold
	SkirmishMusicTrack		= BaGood23
	SubObject				= HALIFIRIEN
	RegionPortrait			= MPEastfold

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eastfold
		End
		Connection
			Region		= East_Rohan
		End
		Connection
			Region		= Edoras
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:609 Y:230
	HeroArmySpot			= X:561 Y:268
	HeroArmySpot			= X:652 Y:263
	HeroArmySpot			= X:718 Y:275
	HeroArmySpot			= X:655 Y:206
	GarrisonArmySpot		= X:540 Y:208
	BuildingSpot			= X:609 Y:230

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
	MapName					= "MAP NEW WOR Halls Thranduil"
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
	BuildingSpot			= X:1226 Y:1654
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
	MapName					= "MAP NEW WOR Harlindon"
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
	BuildingSpot			= X:-1314 Y:912
	BuildingSpot			= X:-1725 Y:1181

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
	MapName					= "MAP NEW WOR Harlond"
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
	MapName					= "MAP NEW WOR Harondor"
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
	BuildingSpot			= X:1090 Y:-890
	BuildingSpot			= X:1090 Y:-700
	BuildingSpot			= X:1515 Y:-810
	BuildingSpot			= X:1650 Y:-1045

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
;// Helms Deep
;////////////////////////////
Region Helms_Deep
	DisplayName				= LW:DisplayNameHelmsDeep
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Helms Deep"
	SkirmishStillImage		= WOR_Helms_Deep
	SkirmishMusicTrack		= BaGood23
	SubObject				= HELMS_DEEP
	RegionPortrait			= MPHelmsDeep

;	ArmyBonus				= 0
	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
	ExperienceBonus			= 5
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Paths_Dead
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:152 Y:281
	HeroArmySpot			= X:10 Y:329
	HeroArmySpot			= X:62 Y:371
	HeroArmySpot			= X:151 Y:372
	HeroArmySpot			= X:202 Y:326
	GarrisonArmySpot		= X:17 Y:260
	BuildingSpot			= X:25 Y:290

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCHelmsDeep
	FortressDisplayName			= LW:DisplayNameHelmsDeep
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
;// High Pass
;////////////////////////////
Region High_Pass
	DisplayName				= LW:DisplayNameHighPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR High Pass"
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
	MapName					= "MAP NEW WOR Hobbiton"
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
	BuildingSpot			= X:-894 Y:1386

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
	MapName					= "MAP NEW WOR Iron Hills"
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
	BuildingSpot			= X:2103 Y:1884
	BuildingSpot			= X:2271 Y:1936
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
;// Isengard
;////////////////////////////
Region Isengard
	DisplayName				= LW:DisplayNameIsengard
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Isengard"
	SkirmishStillImage		= WOR_Isengard
	SkirmishMusicTrack		= BaGood23
	SubObject				= ISENGARD
	RegionPortrait			= MPIsengard

;	ArmyBonus				= 0
;	ResourceBonus			= 0
	LegendaryBonus			= 5
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dunland
		End
		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Gap_Rohan
		End
		Connection
			Region		= Fangorn_Forest
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:174 Y:653
	HeroArmySpot			= X:254 Y:676
	HeroArmySpot			= X:234 Y:636
	HeroArmySpot			= X:116 Y:634
	HeroArmySpot			= X:108 Y:685
	GarrisonArmySpot		= X:170 Y:616
	BuildingSpot			= X:170 Y:650

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCOrthanc
	FortressDisplayName			= LW:DisplayNameIsengard
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
;// Khand
;////////////////////////////
Region Khand
	DisplayName				= LW:DisplayNameKhand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Khand"
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
	BuildingSpot			= X:3060 Y:-1170
	BuildingSpot			= X:2865 Y:-950

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
	MapName					= "MAP NEW WOR Lamedon"
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
	BuildingSpot			= X:628 Y:-258
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
	MapName					= "MAP NEW WOR Lebennin"
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
	BuildingSpot			= X:900 Y:-350
	BuildingSpot			= X:1100 Y:-300

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
	MapName					= "MAP NEW WOR Lithlad"
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
	BuildingSpot			= X:2565 Y:30

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
	MapName					= "MAP NEW WOR Lothlorien"
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
	BuildingSpot			= X:696 Y:1052

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
	MapName					= "MAP NEW WOR Minas Morgul"
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
	BuildingSpot			= X:1690 Y:-45

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
	MapName					= "MAP NEW WOR Minas Tirith"
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
	BuildingSpot			= X:1330 Y:-30

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMinasTirith
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
	MapName					= "MAP NEW WOR Minhiriath"
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
			Region		= Enedwaith
		End
		Connection
			Region		= Tharbad
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
	BuildingSpot			= X:-787 Y:575
	BuildingSpot			= X:-738 Y:803
	BuildingSpot			= X:-952 Y:892

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
	MapName					= "MAP NEW WOR Mirkwood"
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
	BuildingSpot			= X:1371 Y:1095
	BuildingSpot			= X:1231 Y:1512
	BuildingSpot			= X:1442 Y:1466

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
;// Mount Doom
;////////////////////////////
Region Mount_Doom
	DisplayName				= LW:DisplayNameMountDoom
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Mount Doom"
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
		;Connection
		;	Region		= Black_Gate
		;End
		;Connection
		;	Region		= Lithlad
		;End
		;Connection
		;	Region		= Nurn
		;End
		;Connection
		;	Region		= Shelob_Lair
		;End

	CustomCenterPoint		= Yes
	CenterPoint				= X:2100 Y:130
	HeroArmySpot			= X:2040 Y:-65
	HeroArmySpot			= X:1925 Y:135
	HeroArmySpot			= X:2040 Y:300
	HeroArmySpot			= X:2300 Y:190
	GarrisonArmySpot		= X:2200 Y:80
	BuildingSpot			= X:1935 Y:210
	BuildingSpot			= X:2235 Y:280
	BuildingSpot			= X:2150 Y:-55

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
	MapName					= "MAP NEW WOR Mount Gundabad"
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

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameGundabad
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
;// Moria
;////////////////////////////
Region Moria
	DisplayName				= LW:DisplayNameMoria
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Moria"
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
;// Mouths of the Entwash
;////////////////////////////
Region Mouths_Entwash
	DisplayName				= LW:DisplayNameMouthsoftheEntwash
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Mouths Entwash"
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
			Region		= East_Rohan
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
	BuildingSpot			= X:1105 Y:354
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
	MapName					= "MAP NEW WOR Near Harad"
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
	BuildingSpot			= X:2180 Y:-990
	BuildingSpot			= X:2590 Y:-870


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
	MapName					= "MAP NEW WOR North Downs"
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
;// Northern Itilien
;////////////////////////////
Region Northern_Ithilien
	DisplayName				= LW:DisplayNameNorthernIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Northern Ithilien"
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
	BuildingSpot			= X:1511 Y:213
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
;// Northern Mirkwood
;////////////////////////////
Region Northern_Mirkwood
	DisplayName				= LW:DisplayNameNorthernMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Northern Mirkwood"
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
	BuildingSpot			= X:1017 Y:1855
	BuildingSpot			= X:881 Y:2037
	BuildingSpot			= X:1228 Y:1991

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
	MapName					= "MAP NEW WOR Nurn"
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
	BuildingSpot			= X:2560 Y:-90
	BuildingSpot			= X:2200 Y:-250
	BuildingSpot			= X:2760 Y:-110

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
	MapName					= "MAP NEW WOR Old Brown Lands"
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
			Region		= Amon_Hen
		End
		Connection
			Region		= Dagorlad
		End
		Connection
			Region		= Dead_Marshes
		End
		Connection
			Region		= Dol_Guldur
		End
		Connection
			Region		= East_Bight
		End
		Connection
			Region		= Emyn_Muil
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Mirkwood
		End
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1414 Y:867
	HeroArmySpot			= X:1327 Y:908
	HeroArmySpot			= X:1123 Y:793
	HeroArmySpot			= X:1552 Y:935
	HeroArmySpot			= X:1716 Y:937
	GarrisonArmySpot		= X:1450 Y:803
	BuildingSpot			= X:1181 Y:901
	BuildingSpot			= X:1268 Y:787
	BuildingSpot			= X:1740 Y:850
	BuildingSpot			= X:1535 Y:868

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
	MapName					= "MAP NEW WOR Old Ford Anduin"
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
	BuildingSpot			= X:732 Y:1468
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
	MapName					= "MAP NEW WOR Old Forest"
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
	MapName					= "MAP NEW WOR Orocarni"
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
	BuildingSpot			= X:2713 Y:1714
	BuildingSpot			= X:2926 Y:1487

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
	MapName					= "MAP NEW WOR Osgiliath"
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
;// Paths of the Dead
;////////////////////////////
Region Paths_Dead
	DisplayName				= LW:DisplayNamePathsDead
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Erech"
	SkirmishStillImage		= WOR_Paths_Dead
	SkirmishMusicTrack		= BaGood23
	SubObject				= PATHS_DEAD
	RegionPortrait			= MPErech

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Anfalas
		End
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Helms_Deep
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:194 Y:106
	HeroArmySpot			= X:252 Y:12
	HeroArmySpot			= X:70 Y:55
	HeroArmySpot			= X:270 Y:187
	HeroArmySpot			= X:215 Y:209
	BuildingSpot			= X:150 Y:100
	GarrisonArmySpot		= X:149 Y:18

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
	MapName					= "MAP NEW WOR Pelargir"
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
	BuildingSpot			= X:1065 Y:-530
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
;// Rhudaur
;////////////////////////////
Region Rhudaur
	DisplayName				= LW:DisplayNameRhudaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Rhudaur"
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
	MapName					= "MAP NEW WOR Rhun"
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
	BuildingSpot			= X:3006 Y:734
	BuildingSpot			= X:2874 Y:963
	BuildingSpot			= X:3013 Y:1114

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
	MapName					= "MAP NEW WOR Rivendell"
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
	BuildingSpot			= X:224 Y:1402

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPGFortress
	FortressDisplayName			= LW:DisplayNameRivendell
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
;// Rohan
;////////////////////////////
Region Rohan
	DisplayName				= LW:DisplayNameRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Rohan"
	SkirmishStillImage		= WOR_Rohan
	SkirmishMusicTrack		= BaGood23
	SubObject				= ROHAN
	RegionPortrait			= MPRohan

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= East_Rohan
		End
		Connection
			Region		= Edoras
		End
		Connection
			Region		= West_Emnet
		End
		Connection
			Region		= Westfold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:481 Y:460
	HeroArmySpot			= X:389 Y:548
	HeroArmySpot			= X:535 Y:536
	HeroArmySpot			= X:533 Y:341
	HeroArmySpot			= X:422 Y:423
	GarrisonArmySpot		= X:550 Y:450
	BuildingSpot			= X:448 Y:518
	BuildingSpot			= X:496 Y:403

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
	MapName					= "MAP NEW WOR Cirith Ungol"
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
	MapName					= "MAP NEW WOR Southern Ithilien"
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
	BuildingSpot			= X:1765 Y:-695
	BuildingSpot			= X:1635 Y:-430
	BuildingSpot			= X:1410 Y:-530

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
;// Swan Fleet
;////////////////////////////
Region Swan_Fleet
	DisplayName				= LW:DisplayNameSwanFleet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Swanfleet"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Swan_Fleet
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= SWAN_FLET
	RegionPortrait			= MPSwanFleet

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
			Region		= Dunland
		End
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Tharbad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-288 Y:786
	HeroArmySpot			= X:-361 Y:827
	HeroArmySpot			= X:-219 Y:830
	HeroArmySpot			= X:-350 Y:690
	HeroArmySpot			= X:-224 Y:705
	GarrisonArmySpot		= X:-296 Y:897
	BuildingSpot			= X:-288 Y:786

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
;// Tharbad
;////////////////////////////
Region Tharbad
	DisplayName				= LW:DisplayNameTharbad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Tharbad"
	SkirmishStillImage		= WOR_Tharbad
	SkirmishMusicTrack		= BaGood23
	SubObject				= THARBAD
	RegionPortrait			= MPTharbad

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Cardolan
		End
		Connection
			Region		= Enedwaith
		End
		Connection
			Region		= Minhiriath
		End
		Connection
			Region		= Swan_Fleet
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-504 Y:692
	HeroArmySpot			= X:-578 Y:607
	HeroArmySpot			= X:-587 Y:666
	HeroArmySpot			= X:-424 Y:720
	HeroArmySpot			= X:-427 Y:796
	GarrisonArmySpot		= X:-476 Y:748
	BuildingSpot			= X:-504 Y:692

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
	MapName					= "MAP NEW WOR Tolfalas"
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
			Region		= Grey_Havens
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
	BuildingSpot			= X:440 Y:-975
	BuildingSpot			= X:545 Y:-860


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
;// Tower Hills
;////////////////////////////
Region Tower_Hills
	DisplayName			    = LW:DisplayNameTowerHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				    = "MAP NEW WOR Tower Hills"
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
	BuildingSpot			= X:-1086 Y:1130

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
	MapName				    = "MAP NEW WOR Trollshaws"
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
;// Umbar
;////////////////////////////
Region Umbar
	DisplayName				= LW:DisplayNameUmbar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Umbar"
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
			Region		= Grey_Havens
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
	BuildingSpot			= X:1115 Y:-1090

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes
	FortressPortrait			= BPMFortress
	FortressDisplayName			= LW:DisplayNameUmbar
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
;// Vales of the Celduin
;////////////////////////////
Region Vales_Celduin
	DisplayName				= LW:DisplayNameValesCelduin
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Vales Celduin"
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
			Region		= Dagorlad
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
	BuildingSpot			= X:2169 Y:994
	BuildingSpot			= X:2164 Y:1210
	BuildingSpot			= X:1780 Y:1334

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
	MapName					= "MAP NEW WOR Weather Hills"
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
	MapName				    = "MAP NEW WOR Weathertop"
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
	BuildingSpot			= X:-151 Y:1425

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
;// West Emnet
;////////////////////////////
Region West_Emnet
	DisplayName				= LW:DisplayNameWestEmnet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR West Emnet"
	SkirmishStillImage		= WOR_West_Emnet
	SkirmishMusicTrack		= BaGood23
	SubObject				= WEST_EMNET
	RegionPortrait			= MPWestEmnet

;	ArmyBonus				= 0
	ResourceBonus			= 10
;	LegendaryBonus			= 0
;	AttackBonus				= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=

		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= East_Rohan
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= Rohan
		End
		Connection
			Region		= Wold
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:677 Y:541
	HeroArmySpot			= X:735 Y:596
	HeroArmySpot			= X:611 Y:509
	HeroArmySpot			= X:735 Y:453
	HeroArmySpot			= X:649 Y:439
	GarrisonArmySpot		= X:649 Y:632
	BuildingSpot			= X:677 Y:541

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
;// West Fold
;////////////////////////////
Region Westfold
	DisplayName			= LW:DisplayNameWestfold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP NEW WOR Westfold"
	SkirmishStillImage		= WOR_Westfold
	SkirmishMusicTrack		= BaGood23
	SubObject			= WEST_FOLD
	RegionPortrait			= MPWestfold

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Dunharrow
		End
		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= Edoras
		End
		Connection
			Region		= Fords_Isen
		End
		Connection
			Region		= Gap_Rohan
		End
		Connection
			Region		= Rohan
		End

	CustomCenterPoint		= Yes
	CenterPoint			= X:305 Y:475

	HeroArmySpot			= X:253 Y:414
	HeroArmySpot			= X:364 Y:404
	HeroArmySpot			= X:296 Y:567
	HeroArmySpot			= X:338 Y:535

	GarrisonArmySpot		= X:306 Y:424

	BuildingSpot			= X:305 Y:475

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
;// Withered Heath
;////////////////////////////
Region Withered_Heath
	DisplayName				= LW:DisplayNameWitheredHeath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Withered Heath"
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


;////////////////////////////
;// Wold
;////////////////////////////
Region Wold
	DisplayName				= LW:DisplayNameWold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP NEW WOR Wold"
	SkirmishStillImage		= WOR_Wold
	SkirmishMusicTrack		= BaGood23
	SubObject				= WOLD
	RegionPortrait			= MPWold

;	ArmyBonus				= 0
;	ResourceBonus			= 0
;	LegendaryBonus			= 0
;	AttackBonus				= 0
	DefenseBonus			= 5
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Amon_Hen
		End
		Connection
			Region		= East_Emnet
		End
		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= Fangorn_Forest
		End
		Connection
			Region		= Field_Celebrant
		End
		Connection
			Region		= Old_Brown_Lands
		End
		Connection
			Region		= West_Emnet
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:813 Y:770
	HeroArmySpot			= X:848 Y:823
	HeroArmySpot			= X:628 Y:721
	HeroArmySpot			= X:705 Y:818
	HeroArmySpot			= X:996 Y:731
	GarrisonArmySpot		= X:790 Y:726
	BuildingSpot			= X:701 Y:761
	BuildingSpot			= X:923 Y:777

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
	Regions					= Cardolan Dunland Enedwaith Eregion Fords_Bruinen Minhiriath Rivendell Swan_Fleet Tharbad
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
;// Gondor
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryGondor
	;EffectName				= GONDOR
	Regions					= Andrast Anfalas Anorien Belfalas Cair_Andros Central_Ithilien Dead_Marshes Dol_Amroth Druadan_Forest Eastfold Emyn_Arnen Harlond Lamedon Lebennin Minas_Tirith Mouths_Entwash  Northern_Ithilien Osgiliath Pelargir Paths_Dead Southern_Ithilien Tolfalas
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
;// Rhovanion
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRhovanion
	;EffectName				= RHOVANION
	Regions					= Carrock Dimrill_Dale Dol_Guldur East_Bight Fangorn_Forest Field_Celebrant Framsburg Gladden_Fields Grey_Mountains Halls_Thranduil Lothlorien Mirkwood Northern_Mirkwood Old_Brown_Lands Old_Ford_Anduin Wold
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
	Regions					= Dagorlad Dorwinion Orocarni Rhun Vales_Celduin
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

;////////////////////////////
;// Rohan
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRohan
	;EffectName				= ROHAN
	Regions					= Amon_Hen Dunharrow East_Emnet East_Rohan Eaves_Fangorn Edoras Emyn_Muil Fords_Isen Gap_Rohan Halifirien Helms_Deep Isengard Rohan West_Emnet Westfold
	ArmyBonus				= 0
	ResourceBonus			= 100
    LegendaryBonus			= 0
    AttackBonus				= 0
	DefenseBonus			= 10
	ExperienceBonus			= 10
	;UnifiedEvaEvent		= WorldUnifyGondor		; Played when local player gains all the regions in this territory
	;LostEvaEvent			= WorldLostGondor		; Played when local player had all the regions in this territory but lost one
	LookAtCenter			= X:677 Y:541
	;LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End