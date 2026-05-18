//-------------------------------------------------------------------------------------------------
// Scenario Name:		Capital Assault - Freeform
// Scenario Description:	This is a freeform game of the Capital Assault mode
// Game Type:			Capital Assault
// Win Conditions:		Player must conquer the capital of each opposing team member
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRPaperScenarioFindTheHalfling

	IsEvilCampaign = No
	
	;////////////// RTS Settings /////////////
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:LOAScenarioFindTheHalfling
		DisplayDescription 	= LWScenario:LOAScenarioFindTheHalflingDescription
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = PaperMapHistoricCampaign

		MinPlayers = 6

		DisabledFactions = FactionMirkwood FactionArnor FactionWild FactionGuldur FactionAngmar 

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
		    Factions = FactionMen
		    Regions = Minas_Tirith
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionRohan
		    Regions = Edoras
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionDwarves
		    Regions = Erebor
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionElves
		    Regions = Lothlorien
		    Teams = 1
		End
		
		StartingRestriction
		    Factions = FactionIsengard
		    Regions = Isengard
		    Teams = 2
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Mount_Doom
		    Teams = 2
		End

		OwnershipSet 
            Regions = Minas_Tirith Anfalas Belfalas Dol_Amroth Erech Lamedon Lebennin Lossarnach Pelargir Ringlo_Vale Tolfalas Anorien Cair_Andros Druadan_Forest Harlond Northern_Ithilien Osgiliath Halifirien
            StartRegion = Minas_Tirith           		
					
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Anfalas
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Anfalas
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Anorien
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Belfalas
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FORT
                        	Region = Cair_Andros
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Druadan_Forest
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Erech
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Halifirien
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Harlond
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Lamedon
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Lebennin
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Lossarnach
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Osgiliath
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Ringlo_Vale
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Tolfalas
                        End					
        End


		OwnershipSet 
            Regions = Dunharrow Eastfold Eastern_Rohan Edoras Fords_Isen Harrowdale Helms_Deep Snowbourn The_Folde West_Emnet Westfold East_Emnet
            StartRegion = Edoras
           		
                        SpawnBuildings
                        	Buildings = LW_FORT
                        	Region = Dunharrow
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = East_Emnet
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Eastern_Rohan
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Eastern_Rohan
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Eastfold
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Fords_Isen
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Harrowdale
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Snowbourn
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = The_Folde
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = West_Emnet
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = West_Emnet
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Westfold
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
            Regions = Lothlorien Nan_Celebrant Taur_Hith Halls_Elvenking Hall_Oak Forest_Gate
            StartRegion = Lothlorien        		
					
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Forest_Gate
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Hall_Oak
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Nan_Celebrant
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FORT
                        	Region = Taur_Hith
                        End					
        End

		OwnershipSet 
            Regions = Gap_Of_Rohan Isengard Eaves_Fangorn Dunland Wulfborg Frecalund Regnfells Greyflood Enedwaith Fangorn
            StartRegion = Isengard          		
	
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Dunland
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Dunland
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Eaves_Fangorn
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Enedwaith
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Enedwaith
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Fangorn
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Frecalund
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FORT
                        	Region = Gap_Of_Rohan
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Greyflood
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Greyflood
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Regnfells
                        End				
        End

		OwnershipSet 
            Regions = Black_Gate Cirith_Ungol Durthang Ered_Lithui Gorgoroth Minas_Morgul Mount_Doom Nurn Sea_Of_Nurnen Slavefields_Of_Nurn Emyn_Arnen Central_Ithilien Crossroads Rhun Kunin Surubeki Steppes_Sarakhax Dol_Guldur Taur_En_Ungolath Maros Umbar White_Pillar Harondor Ethir_Anduin Northern_Ithilien Southern_Ithilien Harad_Road Near_Harad Mirkwood  
            StartRegion = Mount_Doom
          		
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Black_Gate
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Central_Ithilien
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FORT
                        	Region = Cirith_Ungol
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Crossroads
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Emyn_Arnen
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Ered_Lithui
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Ered_Lithui
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Ethir_Anduin
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_ARMORY
                        	Region = Gorgoroth
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Gorgoroth
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Gorgoroth
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Harad_Road
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Harad_Road
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Harondor
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Harondor
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Kunin
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Maros
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Minas_Morgul
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Mirkwood
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Mirkwood
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_ARMORY
                        	Region = Mount_Doom
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Near_Harad
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Near_Harad
                        End

                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Northern_Ithilien
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Nurn
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
                        	Buildings = LW_FARM
                        	Region = Sea_Of_Nurnen
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Slavefields_Of_Nurn
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Southern_Ithilien
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = Southern_Ithilien
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
                        
                        SpawnBuildings
                        	Buildings = LW_BARRACKS
                        	Region = Taur_En_Ungolath
                        End
                        
                        SpawnBuildings
                        	Buildings = LW_FARM
                        	Region = White_Pillar
                        End				
        End


;Final END

	End
	
	
	;//////////////////////////////////////////////////
	Act One
	;//////////////////////////////////////////////////

                ;/////////////
                ;   Gondor
                ;/////////////
        
                SpawnArmy
                      ScriptingName = MenOneArmy
                      SpawnForTemplates = PlayerMen
                      HeroTemplateName = GondorGandalf_WOTR
                      PlayerArmy = MenOneArmy
                      Icon = MoWHeroArmyIcon
                      InitialRegion = Minas_Tirith
                End
        
                SpawnArmy
                      ScriptingName = MenTwoArmy
                      SpawnForTemplates = PlayerMen
                      HeroTemplateName = GondorBoromir
                      PlayerArmy = MenTwoArmy
                      Icon = MoWHeroArmyIcon
                      InitialRegion = Osgiliath
                End
        
                SpawnArmy
                      ScriptingName = MenThreeArmy
                      SpawnForTemplates = PlayerMen
                      PlayerArmy = MenThreeArmy
                      Icon = MoWHeroArmyIcon
                      InitialRegion = Dol_Amroth
                End

                SpawnArmy
                      ScriptingName = MenFourArmy
                      SpawnForTemplates = PlayerMen
                      HeroTemplateName = ElvenAragorn
                      PlayerArmy = MenFourArmy
                      Icon = MoWHeroArmyIcon
                      InitialRegion = Pelargir
                End

                ;/////////////
                ;   ROHAN
                ;/////////////

                SpawnArmy
                      ScriptingName = RohanOneArmy
                      SpawnForTemplates = PlayerRohan
                      HeroTemplateName = RohanTheoden
                      PlayerArmy = RohanOneArmy
                      Icon = RohanHeroArmyIcon
                      InitialRegion = Edoras
                End

                SetPlayerControlOfArmy
                      ArmyScriptingName = RohanOneArmy
                      IsControllableByOwner = No
                End
        
                SpawnArmy
                      ScriptingName = RohanTwoArmy
                      SpawnForTemplates = PlayerRohan
                      PlayerArmy = RohanTwoArmy
                      Icon = RohanHeroArmyIcon
                      InitialRegion = Helms_Deep
                End
        
                SpawnArmy
                      ScriptingName = RohanThreeArmy
                      SpawnForTemplates = PlayerRohan
                      HeroTemplateName = RohanTheodred
                      PlayerArmy = RohanThreeArmy
                      Icon = RohanHeroArmyIcon
                      InitialRegion = Fords_Isen
                End
        
                SpawnArmy
                      ScriptingName = RohanFourArmy
                      SpawnForTemplates = PlayerRohan
                      HeroTemplateName = RohanEomer
                      PlayerArmy = RohanFourArmy
                      Icon = RohanHeroArmyIcon
                      InitialRegion = East_Emnet
                End

                ;/////////////
                ;   Dwarves
                ;/////////////
        
                SpawnArmy
                      ScriptingName = DwarvesOneArmy
                      SpawnForTemplates = PlayerDwarves
                      HeroTemplateName = DwarvenKingDain_WOTR
                      PlayerArmy = DwarvesOneArmy
                      Icon = DwarfHeroArmyIcon
                      InitialRegion = Erebor
                End
        
                SpawnArmy
                      ScriptingName = DwarvesTwoArmy
                      SpawnForTemplates = PlayerDwarves
                      HeroTemplateName = DwarvenBrand_WOTR
                      PlayerArmy = DwarvesTwoArmy
                      Icon = DwarfHeroArmyIcon
                      InitialRegion = Erebor
                End

                ;/////////////
                ;   Elves
                ;/////////////

                SpawnArmy
                      ScriptingName = ElvesOneArmy
                      SpawnForTemplates = PlayerElves
                      HeroTemplateName = ElvenGaladrielLorien_WOTR
                      PlayerArmy = ElvesOneArmy
                      Icon = ElfHeroArmyIcon
                      InitialRegion = Lothlorien
                End

                SpawnArmy
                      ScriptingName = ElvesTwoArmy
                      SpawnForTemplates = PlayerElves
                      HeroTemplateName = MirkwoodThranduil
                      PlayerArmy = ElvesTwoArmy
                      Icon = MirkwoodHeroArmyIcon
	              Banner = BannerMirkwood
                      InitialRegion = Halls_Elvenking
                End

                SpawnArmy
                      ScriptingName = ElvesThreeArmy
                      SpawnForTemplates = PlayerElves
                      HeroTemplateName = MirkwoodTauriel
                      PlayerArmy = ElvesThreeArmy
                      Icon = MirkwoodHeroArmyIcon
	              Banner = BannerMirkwood
                      InitialRegion = Forest_Gate
                End

                ;/////////////
                ;   Isengard
                ;/////////////

                SpawnArmy
                      ScriptingName = IsengardOneArmy
                      SpawnForTemplates = PlayerIsengard
                      HeroTemplateName = IsengardSaruman_WOTR
                      PlayerArmy = IsengardOneArmy
                      Icon = IsengardHeroArmyIcon
                      InitialRegion = Isengard
                End

                SpawnArmy
                      ScriptingName = IsengardTwoArmy
                      SpawnForTemplates = PlayerIsengard
                      HeroTemplateName = IsengardUgluk
                      PlayerArmy = IsengardTwoArmy
                      Icon = IsengardHeroArmyIcon
                      InitialRegion = Isengard
                End

                SpawnArmy
                      ScriptingName = IsengardThreeArmy
                      SpawnForTemplates = PlayerIsengard
                      HeroTemplateName = IsengardLurtz
                      PlayerArmy = IsengardThreeArmy
                      Icon = IsengardHeroArmyIcon
                      InitialRegion = Gap_Of_Rohan
                End

                ;/////////////
                ;   Mordor
                ;/////////////

                SpawnArmy
                      ScriptingName = MordorOneArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = GuldurCargast_WOTR
                      PlayerArmy = MordorOneArmy
                      Icon = GuldurHeroArmyIcon
                      InitialRegion = Dol_Guldur
                End

                SpawnArmy
                      ScriptingName = MordorTwoArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = RhunVahRus_WOTR
                      PlayerArmy = MordorTwoArmy
                      Icon = AngmarHeroArmyIcon
                      InitialRegion = Rhun
                End

                SpawnArmy
                      ScriptingName = MordorThreeArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = MordorWitchKing_WOTR
                      PlayerArmy = MordorThreeArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Minas_Morgul
                End

                SpawnArmy
                      ScriptingName = MordorFourArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = MordorShagrat_WOTR
                      PlayerArmy = MordorFourArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Cirith_Ungol
                End

                SpawnArmy
                      ScriptingName = MordorFiveArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = MordorMollok_WOTR
                      PlayerArmy = MordorFiveArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Black_Gate
                End

                SpawnArmy
                      ScriptingName = MordorSixArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = MordorMouthOfSauron
                      PlayerArmy = MordorSixArmy
                      Icon = MordorHeroArmyIcon
                      InitialRegion = Mount_Doom
                End

                SpawnArmy
                      ScriptingName = MordorSevenArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = HaradSuladan
                      PlayerArmy = MordorSevenArmy
                      Icon = AngmarHeroArmyIcon
                      InitialRegion = Umbar
                End

                SpawnArmy
                      ScriptingName = MordorEightArmy
                      SpawnForTemplates = PlayerMordor
                      HeroTemplateName = HaradGoldenKing
                      PlayerArmy = MordorEightArmy
                      Icon = AngmarHeroArmyIcon
                      InitialRegion = Harad_Road
                End


	;End of Act One
	End

	;//////////////////////////////////////////////////
	Act Two
	;//////////////////////////////////////////////////

	End

	;//////////////////////////////////////////////////
	Act Three
	;//////////////////////////////////////////////////

	End

	;//////////////////////////////////////////////////
	Act Four
	;//////////////////////////////////////////////////

	End

	;//////////////////////////////////////////////////
	Act Five
	;//////////////////////////////////////////////////

	End

	;//////////////////////////////////////////////////
	Act Six
	;//////////////////////////////////////////////////

                SetPlayerControlOfArmy
                      ArmyScriptingName = RohanOneArmy
                      IsControllableByOwner = Yes
                End

	End

	;//////////////////////////////////////////////////
	Act Seven
	;//////////////////////////////////////////////////

	End

	;//////////////////////////////////////////////////
	Act Eight
	;//////////////////////////////////////////////////

	End
        ;//////////////////////////////////////////////////
        Act Nine
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Ten
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Eleven
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twelve
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirteen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fourteen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifteen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Sixteen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Seventeen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Eighteen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Nineteen
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-One
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Two
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Three
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Four
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Five
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Six
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Seven
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Eight
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Twenty-Nine
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-One
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Two
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Three
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Four
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Five
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Six
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Seven
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Eight
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Thirty-Nine
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-One
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Two
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Three
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Four
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Five
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Six
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Seven
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Eight
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Forty-Nine
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-One
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Two
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Three
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Four
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Five
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Six
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Seven
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Eight
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Fifty-Nine
        ;//////////////////////////////////////////////////
        
        End
        
        ;//////////////////////////////////////////////////
        Act Sixty
        ;//////////////////////////////////////////////////
        
        End

End

;Army Things Here

;/////////////
;   Gondor
;/////////////

LivingWorldPlayerArmy
    Name = MenOneArmy
    DisplayNameTag = LWA:MenOfTheWest
        ArmyEntry
            ThingTemplate = GondorGandalf_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GondorPippin_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GondorForlong_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GondorBeregond_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GondorDenethor_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFountainGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFountainGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFountainGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorTrebuchetLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorTrebuchetLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = LossarnachAxeMenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = LossarnachAxeMenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = BlackrootValeArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = BlackrootValeArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorLinhirSentryHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = LamedonClansmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorPinnathGelinRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorKnightHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MenTwoArmy
    DisplayNameTag = LWA:MenOfTheWest
        ArmyEntry
            ThingTemplate = GondorBoromir
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GondorFaramir
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorKnightHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MenThreeArmy
    DisplayNameTag = LWA:MenOfTheWest
        ArmyEntry
            ThingTemplate = GondorImrahil_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorKnightsofDolHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorKnightsofDolHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorDolFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorDolFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorDolFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GondorLinhirSentryHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MenFourArmy
    DisplayNameTag = LWA:MenOfTheWest
        ArmyEntry
                ThingTemplate = ElvenAragorn
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodLegolas
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = DwarvenGimli_WOTR
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GreyCompanyKingoftheDead
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RivendellGreyCompanyHordeLOALW
           	Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerHuskarlHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerHuskarlHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerWarriorHordeGCLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerWarriorHordeGCLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerWarriorHordeGCLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerWarriorHordeGCLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = OathbreakerWarriorHordeGCLOALW
                Quantity = 1
        End
End

;/////////////
;   Rohan
;/////////////

LivingWorldPlayerArmy
    Name = RohanOneArmy
    DisplayNameTag = LWA:Rohan
        ArmyEntry
            ThingTemplate = RohanTheoden
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RohanMerry_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RohanEowyn_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RohanElfhelm_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanDoorWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanDoorWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRoyalGuardMountedHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSnowbournRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSnowbournRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanArcherNewHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHorsemenHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = RohanTwoArmy
    DisplayNameTag = LWA:Rohan
        ArmyEntry
            ThingTemplate = RohanErkenbrand
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHelmingasWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHelmingasWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHelmingasWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanWestfolderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanWestfolderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanArcherNewHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimArcherHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = RohanThreeArmy
    DisplayNameTag = LWA:Rohan
        ArmyEntry
            ThingTemplate = RohanTheodred
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanWestfolderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanWestfolderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanWestfolderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHorsemenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHorsemenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHorsemenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanArcherNewHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimArcherHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = RohanFourArmy
    DisplayNameTag = LWA:Rohan
        ArmyEntry
            ThingTemplate = RohanEomer
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSnowbournRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanSnowbournRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanHorsemenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RohanRohirrimArcherHordeLOALW
                Quantity = 1
        End
End

;/////////////
;   Dwarves
;/////////////

LivingWorldPlayerArmy
    Name = DwarvesOneArmy
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
                ThingTemplate = DwarvenGuardianHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = DwarvenPhalanxHordeLOALW
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
        ArmyEntry
                ThingTemplate = DwarvenGrimHammerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IronHillsWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IronHillsCrossbowHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = DwarvenVWHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = DwarvesTwoArmy
    DisplayNameTag = LWA:DwarvesHeroArmy
        ArmyEntry
            ThingTemplate = DwarvenBrand_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = DwarvenMenOfDaleHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = DwarvenMenOfDaleHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MenofDaleSwordsmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MenofDaleSwordsmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = DaleGuardHordeLOALW
                Quantity = 1
        End
End

;/////////////
;   Elves
;/////////////

LivingWorldPlayerArmy
    Name = ElvesOneArmy
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
        ArmyEntry
            ThingTemplate = ElvenIdrial_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GaladhrimWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GaladhrimWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GaladhrimWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GaladhrimWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = ElvenCerinAmrothGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = ElvenCerinAmrothGuardHordeLOALW
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
        ArmyEntry
                ThingTemplate = ElvenLorienSentryHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = ElvenLorienSentryHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = ElvenRivendellArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = ElvenAmrothKnightHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = RingHeroFrodoLOA
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = ElvesTwoArmy
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
                ThingTemplate = MirkwoodPalaceGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodPalaceGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodPalaceGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GreenwoodArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GreenwoodArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GreenwoodSindarNobleHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodGildedGuardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodBallistaLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = ElvesThreeArmy
    DisplayNameTag = LWA:MirkwoodHeroArmy
        ArmyEntry
            ThingTemplate = MirkwoodTauriel
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodRangerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodWardenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodSpearHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MirkwoodOutriderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GreenwoodSlayerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = WoodmenMarksmenHordeLOALW
                Quantity = 1
        End
End

;/////////////
;   Isengard
;/////////////

LivingWorldPlayerArmy
    Name = IsengardOneArmy
    DisplayNameTag = LWA:IsengardHeroArmy
        ArmyEntry
            ThingTemplate = IsengardSaruman_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = IsengardWormTongue_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardUrukCrossbowHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardUrukCrossbowHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardUrukCrossbowHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardUrukCrossbowHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = UrukShieldbearerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = UrukShieldbearerHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardBeserkerLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardBeserkerLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardBallistaLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardBallistaLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardDunlandArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardDunlandArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWildmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWildmanHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = IsengardTwoArmy
    DisplayNameTag = LWA:IsengardHeroArmy
        ArmyEntry
            ThingTemplate = IsengardUgluk
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = IsengardSharku_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = IsengardWulfgar_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWargRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWargRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWargRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardDunlandAxemenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardDunlandAxemenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardBerserkerHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = IsengardThreeArmy
    DisplayNameTag = LWA:IsengardHeroArmy
        ArmyEntry
            ThingTemplate = IsengardLurtz
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardScoutHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardScoutHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardScoutHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWildmanAxeHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWildmanAxeHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWildmanSpearHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardWargRiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = IsengardUrukCrossbowHordeLOALW
                Quantity = 1
        End
End

;/////////////
;   Mordor
;/////////////

LivingWorldPlayerArmy
    Name = MordorOneArmy
    DisplayNameTag = LWA:GuldurHeroArmy
        ArmyEntry
            ThingTemplate = GuldurCargast_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurKrimpul_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurSaenathra_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurThrain_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GuldurRisenDeadHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GuldurHarbingerHordeLOALW
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
        ArmyEntry
                ThingTemplate = GuldurGreatSpiderLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GuldurUnburiedWightHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = GuldurRisenDeadHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorTwoArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = RhunVahRus_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RhunBelokhZa_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = RhunKhrenTak_WOTR
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
                ThingTemplate = MordorEasterlingHordeLOALW
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
                ThingTemplate = MordorEasterlingHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingKataphractHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingKataphractHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingKataphractHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingKataphractHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingSwordsmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingSwordsmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingSwordsmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingSwordsmanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorEasterlingSwordsmanHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorThreeArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = MordorWitchKing_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = GuldurKhamul_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorUvatha_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorAkhorahil_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorGothmog
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMorgulOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorBlackOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorBlackOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorAttackTrollLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorVanguardHordeLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorFourArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = MordorShagrat_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = MordorGorbag_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorBlackOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorBlackOrcHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorDrummerTrollLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorBatteringRamLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorFiveArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = MordorMollok_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorPikemanHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorCatapultLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorCatapultLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorGreatBeastLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorGreatBeastLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorAttackTrollLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorAttackTrollLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorDrummerTrollLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorSixArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = MordorMouthOfSauron
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorFighterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMountainTrollLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorAttackTrollLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorSevenArmy
    DisplayNameTag = LWA:HaradwaithHeroArmy
        ArmyEntry
            ThingTemplate = HaradSuladan
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = HaradBurodapan
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = HaradCassimir
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = HaradBeruthiel_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCorsairsOfUmbarHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradBlackNumenoranWarriorsHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradBlackNumenoranWarriorsHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradBlackNumenoreanVanguardHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradHarondorSpearmenHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HarondorArcherHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradHasharinBladeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorCatapultLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorEightArmy
    DisplayNameTag = LWA:HaradwaithHeroArmy
        ArmyEntry
            ThingTemplate = HaradGoldenKing
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = HaradSyarRhul_WOTR
            Quantity = 1
        End
        ArmyEntry
            ThingTemplate = HaradCaranLambar_WOTR
            Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorVariagHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorVariagHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradGuardsoftheSerpentHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradGuardsoftheSerpentHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradMahudWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradMahudWarriorHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradMahudHeadhunterHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMumakil
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = MordorMumakil
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradCultistsofZigurHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradWatchersofKarnaHordeLOALW
                Quantity = 1
        End

        ArmyEntry
                ThingTemplate = HaradwaithHarondorRaiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradwaithHarondorRaiderHordeLOALW
                Quantity = 1
        End
        ArmyEntry
                ThingTemplate = HaradGiantScorpionLOALW
                Quantity = 1
        End
End

LivingWorldPlayerArmy
    Name = MordorNineArmy
    DisplayNameTag = LWA:MordorHeroArmy
        ArmyEntry
            ThingTemplate = MordorSauronLOA
            Quantity = 1
        End
End


;CAMPAIGN HERE

LivingWorldRegionCampaign PaperMapHistoricCampaign

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

	#include "..\Common\LivingWorldRegionsPaperFindTheHalfling.inc"
End
