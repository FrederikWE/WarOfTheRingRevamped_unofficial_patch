//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRPaperScenarioNorthernConquestNew

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:LOAScenarioNorthernConquestNew
		DisplayDescription 	= LWScenario:LOAScenarioNorthernConquestNewDescription
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = PaperMapNorthernConquestNewCampaign

		MinPlayers = 5
		MaxPlayers = 5

		DisabledFactions = FactionMen FactionRohan FactionIsengard FactionAngmar FactionArnor FactionWild
		DefaultStartSpots = Erebor Halls_Elvenking Dol_Guldur Lothlorien Rhun

		HistoricalScenario = Yes
		
		//DefaultStartSpots = Rivendell Trollshaws
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End

		StartingRestriction
		    Factions = FactionDwarves
		    Regions = Erebor
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionMirkwood
		    Regions = Halls_Elvenking
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionElves
		    Regions = Lothlorien
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionMordor
		    Regions = Rhun
		    Teams = 2
		End
		
		StartingRestriction
		    Factions = FactionGuldur
		    Regions = Dol_Guldur
		    Teams = 2
		End

		OwnershipSet 
            Regions = Halls_Elvenking Hall_Oak Forest_Gate
            StartRegion = Halls_Elvenking
           		
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Forest_Gate
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Hall_Oak
                        End			
        End


		OwnershipSet 
            Regions = Erebor Esgaroth Ironfoot_Halls Iron_Hills Targul
            StartRegion = Erebor
           			
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Iron_Hills
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FORT
                        	Region = Targul
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Targul
                        End					
        End

		OwnershipSet 
            Regions = Lothlorien Nan_Celebrant Taur_Hith
            StartRegion = Lothlorien        		
					                      
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Nan_Celebrant
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Taur_Hith
                        End					
        End

		OwnershipSet 
            Regions = Dol_Guldur Taur_En_Ungolath Mirkwood 
            StartRegion = Dol_Guldur         		
	
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Taur_En_Ungolath
                        End
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Mirkwood
                        End
				
        End

		OwnershipSet 
            Regions = Rhun Kunin Surubeki Steppes_Sarakhax
            StartRegion = Rhun 
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Kunin
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Rhun
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Rhun
                        End
                       
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Steppes_Sarakhax
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Steppes_Sarakhax
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Surubeki
                        End
                        			
        End


;Final END

	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

                ;/////////////
                ;   Dwarves
                ;/////////////
        
                SpawnArmy
                      ScriptingName = DwarvesOneNewArmy
                      SpawnForTemplates = PlayerDwarves
                      HeroTemplateName = DwarvenKingDain_WOTR
                      PlayerArmy = DwarvesOneNewArmy
                      Icon = DwarfHeroArmyIcon
                      InitialRegion = Erebor
                End
        
                SpawnArmy
                      ScriptingName = DwarvesTwoNewArmy
                      SpawnForTemplates = PlayerDwarves
                      HeroTemplateName = DwarvenBrand_WOTR
                      PlayerArmy = DwarvesTwoNewArmy
                      Icon = DwarfHeroArmyIcon
                      InitialRegion = Erebor
                End

                SpawnArmy
                      ScriptingName = DwarvesThreeNewArmy
                      SpawnForTemplates = PlayerDwarves
                      PlayerArmy = DwarvesThreeNewArmy
                      Icon = DwarfArmyIcon
                      InitialRegion = Ironfoot_Halls
                End

                ;/////////////
                ;   Lothlorien
                ;/////////////

                SpawnArmy
                      ScriptingName = ElvesOneNewArmy
                      SpawnForTemplates = PlayerElves
                      HeroTemplateName = ElvenGaladrielLorien_WOTR
                      PlayerArmy = ElvesOneNewArmy
                      Icon = ElfHeroArmyIcon
                      InitialRegion = Lothlorien
                End


                SpawnArmy
                      ScriptingName = ElvesTwoNewArmy
                      SpawnForTemplates = PlayerElves
                      HeroTemplateName = ElvenHaldir
                      PlayerArmy = ElvesTwoNewArmy
                      Icon = ElfHeroArmyIcon
                      InitialRegion = Taur_Hith
                End



                ;/////////////
                ;   Mirkwood
                ;/////////////

                SpawnArmy
                      ScriptingName = MirkwoodOneNewArmy
                      SpawnForTemplates = PlayerMirkwood
                      HeroTemplateName = MirkwoodThranduil
                      PlayerArmy = MirkwoodOneNewArmy
                      Icon = MirkwoodHeroArmyIcon
	              Banner = BannerMirkwood
                      InitialRegion = Halls_Elvenking
                End

                SpawnArmy
                      ScriptingName = MirkwoodTwoNewArmy
                      SpawnForTemplates = PlayerMirkwood
                      HeroTemplateName = MirkwoodTauriel
                      PlayerArmy = MirkwoodTwoNewArmy
                      Icon = MirkwoodHeroArmyIcon
	              Banner = BannerMirkwood
                      InitialRegion = Forest_Gate
                End

                ;/////////////
                ;   Dol Guldur
                ;/////////////

                SpawnArmy
                      ScriptingName = GuldurOneNewArmy
                      SpawnForTemplates = PlayerGuldur
                      HeroTemplateName = GuldurCargast_WOTR
                      PlayerArmy = GuldurOneNewArmy
                      Icon = GuldurHeroArmyIcon
                      InitialRegion = Dol_Guldur
                End

                SpawnArmy
                      ScriptingName = GuldurTwoNewArmy
                      SpawnForTemplates = PlayerGuldur
                      HeroTemplateName = GuldurSaenathra_WOTR
                      PlayerArmy = GuldurTwoNewArmy
                      Icon = GuldurHeroArmyIcon
                      InitialRegion = Dol_Guldur
                End

                SpawnArmy
                      ScriptingName = GuldurThreeNewArmy
                      SpawnForTemplates = PlayerGuldur
                      HeroTemplateName = GuldurKrimpul_WOTR
                      PlayerArmy = GuldurThreeNewArmy
                      Icon = GuldurHeroArmyIcon
                      InitialRegion = Dol_Guldur
                End

                ;/////////////
                ;   Mordor
                ;/////////////

                SpawnArmy
                      ScriptingName = MordorOneNewArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = RhunKhrenTak
                      PlayerArmy = MordorOneNewArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Steppes_Sarakhax
                End

                SpawnArmy
                      ScriptingName = MordorTwoNewArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = RhunKhamul
                      PlayerArmy = MordorTwoNewArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Rhun
                End

                SpawnArmy
                      ScriptingName = MordorThreeNewArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = RhunVahRus
                      PlayerArmy = MordorThreeNewArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Rhun
                End


	;End of Act One
	End

End

;Army Things Here

;/////////////
;   Dwarves
;/////////////

LivingWorldPlayerArmy
    Name = DwarvesOneNewArmy
    DisplayNameTag = LWA:DwarvesHeroArmy
        ArmyEntry
            ThingTemplate = DwarvenKingDain_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenGloin_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenHadhod_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenThorinStonehelm_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenArcah_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenGuardianHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenGuardianHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenPhalanxHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenArcherHordeLOALW
            Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = DwarvesTwoNewArmy
    DisplayNameTag = LWA:DwarvesHeroArmy
        ArmyEntry
            ThingTemplate = DwarvenBrand_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MenofDaleSwordsmanHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = DwarvenMenOfDaleHordeLOALW
            Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = DwarvesThreeNewArmy
    DisplayNameTag = LWA:DwarvesGarrison
        ArmyEntry
            ThingTemplate = IronHillsWarriorHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = IronHillsWarriorHordeLOALW
            Quantity = 1
        End
End

;/////////////
;   Lothlorien
;/////////////

LivingWorldPlayerArmy
    Name = ElvesOneNewArmy
    DisplayNameTag = LWA:ElvesHeroArmy
        ArmyEntry
            ThingTemplate = ElvenGaladrielLorien_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenCeleborn
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenIdrial_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenAxeElfHorde_RecruitedLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenLorienWarriorHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenLorienArcherHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenLorienArcherHordeLOALW
            Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = ElvesTwoNewArmy
    DisplayNameTag = LWA:ElvesHeroArmy
        ArmyEntry
            ThingTemplate = ElvenHaldir
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenRumil
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = ElvenOrophin_WOTR
            Quantity = 1
        End
End

;/////////////
;   Mirkwood
;/////////////

LivingWorldPlayerArmy
    Name = MirkwoodOneNewArmy
    DisplayNameTag = LWA:MirkwoodHeroArmy
        ArmyEntry
            ThingTemplate = MirkwoodThranduil
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MirkwoodFeren
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MirkwoodGalion_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MirkwoodWarriorHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MirkwoodPalaceGuardHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GreenwoodArcherHordeLOALW
            Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MirkwoodTwoNewArmy
    DisplayNameTag = LWA:MirkwoodHeroArmy
        ArmyEntry
            ThingTemplate = MirkwoodTauriel
            Quantity = 1
        End
End

;/////////////
;   Dol Guldur
;/////////////

LivingWorldPlayerArmy
    Name = GuldurOneNewArmy
    DisplayNameTag = LWA:GuldurHeroArmy
        ArmyEntry
            ThingTemplate = GuldurCargast_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurOrcPikemanHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurOrcArcherHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurOrcArcherHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurBrokenRabbleHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurBrokenRabbleHordeLOALW
            Quantity = 1
        End

End

LivingWorldPlayerArmy
    Name = GuldurTwoNewArmy
    DisplayNameTag = LWA:GuldurHeroArmy
        ArmyEntry
            ThingTemplate = GuldurSaenathra_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurFellBroodHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurFellBroodHordeLOALW
            Quantity = 1
        End

End

LivingWorldPlayerArmy
    Name = GuldurThreeNewArmy
    DisplayNameTag = LWA:GuldurHeroArmy
        ArmyEntry
            ThingTemplate = GuldurKrimpul_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurThrain_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurOrcRavagerHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurTombGuardHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurWoodsmenHordeLOALW
            Quantity = 1
        End

End

;/////////////
;   Mordor
;/////////////

LivingWorldPlayerArmy
    Name = MordorOneNewArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = RhunKhrenTak
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorEasterlingHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorEasterlingHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorEasterlingArcherHordeLOALW
            Quantity = 1
        End

End

LivingWorldPlayerArmy
    Name = MordorTwoNewArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = RhunKhamul
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorEasterlingHordeLOALW
            Quantity = 1
        End

End

LivingWorldPlayerArmy
    Name = MordorThreeNewArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = RhunVahRus
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RhunRazari
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RhunBelokhZa
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorEasterlingHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorEasterlingArcherHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorVariagHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = TribalAuxillaryHordeLOALW
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = AuxillaryArcherHordeLOALW
            Quantity = 1
        End

End


;CAMPAIGN HERE

LivingWorldRegionCampaign PaperMapNorthernConquestNewCampaign

	RegionConqueredSound = Gui_RegionConquered
	
	// Determine what region effects we use with this campaign
	RegionEffectsManagerName = WotRRegionEffectsPaperMap

	;//////////////////////////////////////
	;// Region Bonus String Tags
	;//////////////////////////////////////
	RegionBonusArmy				= LW:RegionBonusArmy_Good
	RegionBonusResource			= LW:RegionBonusResource
	RegionBonusLegendary		= LW:RegionLegendaryBonus
	
	
	;//////////////////////////////////////
	;// Army Size Command Point Caps
	;//////////////////////////////////////
	HeroOnlyArmyCommandPoints	= 0				; command-point cap for use of "hero by him/herself" army icon
	SmallArmyCommandPoints		= 330 ;;,;; 120				; command-point cap for use of small army icon
	MediumArmyCommandPoints		= 660 ;;,;; 240				; command-point cap for use of medium army icon
	
	ArmyRetreatRounds		= 8				; Number of rounds of auto-resolve to perform on a retreating army
	
	;//////////////////////////////////////
	;// Default army region placement for summoned army reinforcements
	;// these values are OFFSETS from the region center point
	;// positions defined in region blocks are actual world coordinates
	;//////////////////////////////////////
	ArmyPlacementPos		= X:-85 Y:48			; 10 o'clock offset
	ArmyPlacementPos		= X:85 Y:48			; 2 o'clock offset
	

	//-------------------------------------------------------------------------------------------------
	// Regions 
	//-------------------------------------------------------------------------------------------------

	#include "..\Common\LivingWorldRegionsPaperNorthernConquestNew.inc"
End
