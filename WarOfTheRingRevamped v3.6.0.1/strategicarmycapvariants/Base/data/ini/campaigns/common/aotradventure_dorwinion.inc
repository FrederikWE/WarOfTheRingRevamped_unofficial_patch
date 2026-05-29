//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------
;////////////////////////////
;// Dorwinion
;////////////////////////////
Region Dorwinion
	DisplayName				= LW:DisplayNameDorwinion
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dorwinion"
	SkirmishStillImage		= WOR_Dorwinion
	SkirmishMusicTrack		= BaEvil13
	SubObject				= DORWINION
	RegionPortrait			= MPDorwinion

;	ArmyBonus				= 0
;	ResourceBonus			= 40
;	LegendaryBonus			= 0
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Rhun
		End
		Connection
			Region		= South_Rhun
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:841 Y:773
	HeroArmySpot			= X:841 Y:773
	HeroArmySpot			= X:841 Y:773
	HeroArmySpot			= X:841 Y:773
	HeroArmySpot			= X:841 Y:773
	GarrisonArmySpot		= X:841 Y:773
	BuildingSpot			= X:841 Y:773
	;BuildingSpot			= X:841 Y:773
	;BuildingSpot			= X:841 Y:773


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
	AttackBonus				= 5
;	DefenseBonus			= 0
;	ExperienceBonus			= 0
;	FertileTerritoryBonus 	= AOTR_FERTILE_TERRITORY_BONUS

	ConnectsTo			=	
		Connection
			Region		= Aegean_Steppe
		End
		Connection
			Region		= Dorwinion
		End		
		Connection
			Region		= Kinn_Lai_Forest
		End
		Connection
			Region		= Orocarni
		End		

	CustomCenterPoint		= Yes
	CenterPoint				= X:1438 Y:894
	HeroArmySpot			= X:1438 Y:894
	HeroArmySpot			= X:1438 Y:894
	HeroArmySpot			= X:1438 Y:894
	HeroArmySpot			= X:1438 Y:894
	GarrisonArmySpot		= X:1438 Y:894
	BuildingSpot			= X:1438 Y:894
	;BuildingSpot			= X:1438 Y:894
	;BuildingSpot			= X:1438 Y:894


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