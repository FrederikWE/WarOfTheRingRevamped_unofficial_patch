//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Carnen
;////////////////////////////
Region Carnen
	DisplayName				= LW:DisplayNameCarnen
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP MP Fords of Carnen"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Carnen
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= CARNEN
	RegionPortrait			= MPCarnen

	;ResourceBonus			= 0
	LegendaryBonus			= 10
	;AttackBonus			= 0
	;DefenseBonus			= 5
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

	CustomCenterPoint			= Yes
	CenterPoint			= X:2259 Y:1604

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
;// Eastern Wastes
;////////////////////////////
Region Eastern_Wastes
	DisplayName			= LW:DisplayNameEasternWastes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR Eastern Wastes"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Eastern_Wastes
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= EASTERN_WASTES
	RegionPortrait			= MPEasternWastes

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

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
	CenterPoint			= X:1883 Y:1734

	HeroArmySpot			= X:1783 Y:1834
	HeroArmySpot			= X:1948 Y:1603
	HeroArmySpot			= X:1780 Y:1657
	HeroArmySpot			= X:1945 Y:1882
	GarrisonArmySpot		= X:1992 Y:1726
	BuildingSpot			= X:1883 Y:1734

	CPLimit				= 720
	AllyCPLimit			= 360

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
	DisplayName			= LW:DisplayNameErebor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "map mp erebor the lonely mountain"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Erebor
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= EREBOR_DALE
	RegionPortrait			= MPErebor

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

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
	CenterPoint			= X:1556 Y:1855

	HeroArmySpot			= X:1520 Y:1814
	HeroArmySpot			= X:1695 Y:1768
	HeroArmySpot			= X:1625 Y:1848
	HeroArmySpot			= X:1563 Y:1768
	GarrisonArmySpot		= X:1559 Y:1852
	BuildingSpot			= X:1626 Y:1783

	CPLimit				= 720
	AllyCPLimit			= 360

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
	DisplayName			= LW:DisplayNameEsgaroth
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR Celduin"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Esgaroth
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= ESGAROTH
	RegionPortrait			= MPEsgaroth

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

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
	CenterPoint			= X:1570 Y:1646

	HeroArmySpot			= X:1636 Y:1689
	HeroArmySpot			= X:1655 Y:1590
	HeroArmySpot			= X:1483 Y:1587
	HeroArmySpot			= X:1491 Y:1662
	GarrisonArmySpot		= X:1559 Y:1576
	BuildingSpot			= X:1570 Y:1646

	CPLimit				= 720
	AllyCPLimit			= 360

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
	MapName					= "MAP MP Grey Mountains"
	SkirmishStillImage		= WOR_Grey_Mountains
	SkirmishMusicTrack		= BaGood23
	SubObject				= GREY_MOUNTAINS
	RegionPortrait			= MPGreyMountains

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

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
	CenterPoint			= X:825 Y:2229

	HeroArmySpot			= X:492 Y:2193
	HeroArmySpot			= X:663 Y:2176
	HeroArmySpot			= X:1005 Y:2255
	HeroArmySpot			= X:1209 Y:2219
	GarrisonArmySpot		= X:843 Y:2294

	CPLimit				= 720
	AllyCPLimit			= 360

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
	MapName					= "MAP WOR IRON HILLS"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Iron_Hills
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= IRON_HILLS
	RegionPortrait			= MPIronHills

	;ArmyBonus			= 0
	ResourceBonus			= 40
	;LegendaryBonus			= 0
	;AttackBonus			= 0
	;DefenseBonus			= 0
	;ExperienceBonus			= 0
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
	CenterPoint			= X:2314 Y:2024

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
;// Mount Gundabad
;////////////////////////////
Region Mount_Gundabad
	DisplayName				= LW:DisplayNameMountGundabad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Gundabad"
	SkirmishStillImage		= WOR_Gundabad
	SkirmishMusicTrack		= BaGood23
	SubObject				= MOUNT_GUNDABAD
	RegionPortrait			= MPGundabad

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=
		Connection
			Region		= Grey_Mountains
		End
		Connection
			Region		= Forodwaith
		End

	CustomCenterPoint		= Yes
	CenterPoint			= X:421 Y:2367

	HeroArmySpot			= X:675 Y:2342
	HeroArmySpot			= X:533 Y:2449
	HeroArmySpot			= X:505 Y:2343
	HeroArmySpot			= X:406 Y:2463

	GarrisonArmySpot		= X:363 Y:2346

	BuildingSpot			= X:326 Y:2440
	BuildingSpot			= X:593 Y:2377

	CPLimit				= 720
	AllyCPLimit			= 360

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
	DisplayName			= LW:DisplayNameWitheredHeath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP MP Withered Heath"
	;MovieNameFirstTime		= Good_Isengard_Intro
	;MovieNameRepeat		= Good_Isengard_Intro
	SkirmishStillImage		= WOR_Withered_Heath
	;SkirmishVoiceTrack		= GoodIntroIsengard1
	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= WITHERED_HEATH
	RegionPortrait			= MPWitheredHeath

;	ArmyBonus			= 0
	ResourceBonus			= 40
;	LegendaryBonus			= 0
;	AttackBonus			= 0
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 		= AOTR_FERTILE_TERRITORY_BONUS

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
	CenterPoint			= X:1817 Y:2130

	HeroArmySpot			= X:1528 Y:2053
	HeroArmySpot			= X:1696 Y:1996
	HeroArmySpot			= X:1951 Y:1990
	HeroArmySpot			= X:1949 Y:2179
	GarrisonArmySpot		= X:1692 Y:2181
	BuildingSpot			= X:1793 Y:2009

	CPLimit				= 720
	AllyCPLimit			= 360

	RestrictBuildings
		Buildings		= Fortress
		NumberAllowed		= 1
	End

	RestrictBuildings
		Buildings		= Barracks
		NumberAllowed		= 2
	End
End