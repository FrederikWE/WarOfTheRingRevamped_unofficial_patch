//-------------------------------------------------------------------------------------------------
// This file is meant to be included for those campaigns that share a common region list.
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
// Territory definitions
//-------------------------------------------------------------------------------------------------

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
		Connection
			Region		= Rhudaur
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

ConcurrentRegionBonus
	Territory				= LW:TerritoryEriador
	;EffectName				= ERIADOR
	Regions					= Eregion Hollin Ost_In_Edhil The_Angle Rhudaur Trollshaws Fords_Bruinen Rivendell
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
