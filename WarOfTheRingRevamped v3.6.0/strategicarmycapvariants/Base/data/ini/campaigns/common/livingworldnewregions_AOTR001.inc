//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

;////////////////////////////
;// Dunharrow
;////////////////////////////
Region Dunharrow
	DisplayName			= LW:DisplayNameDunharrow
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR Dunharrow"
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
	MapName					= "MAP WOR Dunland"
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
			Region		= Isengard
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-29 Y:896
	HeroArmySpot			= X:100 Y:951
	HeroArmySpot			= X:-215 Y:972
	HeroArmySpot			= X:-106 Y:791
	HeroArmySpot			= X:47 Y:751
	GarrisonArmySpot		= X:0 Y:845
	BuildingSpot			= X:-100 Y:950
	BuildingSpot			= X:-40 Y:950

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
	MapName					= "MAP WOR Eastern Rohan"
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
			Region		= East_Emnet
		End
		Connection
			Region		= Eastfold
		End
		Connection
			Region		= Halifirien
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
	;BuildingSpot			= X:663 Y:341
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
	MapName					= "MAP WOR Eaves Fangorn"
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
	MapName					= "MAP WOR Edoras"
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
	;BuildingSpot			= X:404 Y:317

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPRohanFortress
	FortressDisplayName			= LW:DisplayNameEdoras
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold	

End

;////////////////////////////
;// East Emnet
;////////////////////////////
Region East_Emnet
	DisplayName				= LW:DisplayNameEastEmnet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR East Emnet"
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
	;BuildingSpot			= X:958 Y:505
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
;// Fangorn Forest
;////////////////////////////
Region Fangorn_Forest
	DisplayName				= LW:DisplayNameFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fangorn"
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
			Region		= Eaves_Fangorn
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
	;BuildingSpot			= X:393 Y:751

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
	MapName					= "MAP WOR Fords of Isen"
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
;// Gap of Rohan
;////////////////////////////
Region Gap_Rohan
	DisplayName				= LW:DisplayNameGapofRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Gap of Rohan"
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
;// Halifirien - Eastfold
;////////////////////////////
Region Halifirien
	DisplayName				= LW:DisplayNameEastfold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Eastfold"
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
;// Helms Deep
;////////////////////////////
Region Helms_Deep
	DisplayName				= LW:DisplayNameHelmsDeep
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Helms Deep"
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
			Region		= Fords_Isen
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:152 Y:281
	HeroArmySpot			= X:10 Y:329
	HeroArmySpot			= X:62 Y:371
	HeroArmySpot			= X:151 Y:372
	HeroArmySpot			= X:202 Y:326
	GarrisonArmySpot		= X:17 Y:260
	;BuildingSpot			= X:25 Y:290

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCHelmsDeep
	FortressDisplayName			= LW:DisplayNameHelmsDeep
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
;// Isengard
;////////////////////////////
Region Isengard
	DisplayName				= LW:DisplayNameIsengard
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Isengard"
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
	;BuildingSpot			= X:170 Y:650

	CPLimit				= 1000
	AllyCPLimit			= 500

	CreateAutoFort				= Yes						; This region can defend itself, no need to build a fort.
	FortressPortrait			= BPCOrthanc
	FortressDisplayName			= LW:DisplayNameIsengard
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
;// Rohan
;////////////////////////////
Region Rohan
	DisplayName				= LW:DisplayNameRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rohan"
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
	;BuildingSpot			= X:448 Y:518
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
;// West Emnet
;////////////////////////////
Region West_Emnet
	DisplayName				= LW:DisplayNameWestEmnet
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR West Emnet"
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
	MapName				= "MAP WOR Westfold"
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
;// Wold
;////////////////////////////
Region Wold
	DisplayName				= LW:DisplayNameWold
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Wold"
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
			Region		= East_Emnet
		End
		Connection
			Region		= Eaves_Fangorn
		End
		Connection
			Region		= Fangorn_Forest
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
	;BuildingSpot			= X:701 Y:761
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
;// Rohan
;////////////////////////////
ConcurrentRegionBonus
	Territory				= LW:TerritoryRohan
	;EffectName				= ROHAN
	Regions					= Dunharrow Dunland East_Emnet East_Rohan Eastfold Eaves_Fangorn Edoras Fangorn_Forest Fords_Isen Gap_Rohan Halifirien Helms_Deep Isengard Rohan West_Emnet Westfold
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