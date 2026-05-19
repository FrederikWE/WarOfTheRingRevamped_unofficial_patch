	;-----------------------------------------------------------------------------
	; Factions Commandsets with Repair button
	;-----------------------------------------------------------------------------
	; Gondor
	;-----------------------------------------------------------------------------
	Behavior = CommandSetUpgrade ModuleTag_CommandSetMen
		TriggeredBy	= Upgrade_MenFaction
		CommandSet	= MenMonumentFortressRebuildCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetMen_WOTR
		TriggeredBy	= Upgrade_MenFaction Upgrade_LOAMode
		CommandSet	= MenMonumentFortressRebuildCommandSet_WOTR
		RequiresAllTriggers = Yes
	End		
	;-----------------------------------------------------------------------------
	; Rohan
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetRohan
		TriggeredBy	= Upgrade_RohanFaction
		CommandSet	= RohanMonumentFortressCommandSet
	End
	;Behavior = CommandSetUpgrade ModuleTag_CommandSetRohanupgrade
	;	TriggeredBy	= Upgrade_RohanFaction Upgrade_Evilboyos
	;	CommandSet	= RohanMonumentFortressUpgradedCommandSet
	;	RequiresAllTriggers = Yes
	;End	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetRohan_WOTR
		TriggeredBy	= Upgrade_RohanFaction Upgrade_LOAMode
		CommandSet	= RohanMonumentFortressCommandSet_WOTR
		RequiresAllTriggers = Yes
	End	
	;-----------------------------------------------------------------------------
	; Lothlorien
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetElven
		TriggeredBy	= Upgrade_ElfFaction
		CommandSet	= ElvenMonumentFortressRebuildCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetElven_WOTR
		TriggeredBy	= Upgrade_ElfFaction Upgrade_LOAMode
		CommandSet	= ElvenMonumentFortressRebuildCommandSet_WOTR
		RequiresAllTriggers = Yes
	End
	;-----------------------------------------------------------------------------
	; Rivendell
	;-----------------------------------------------------------------------------		
	Behavior = CommandSetUpgrade ModuleTag_CommandSetArnor
		TriggeredBy	= Upgrade_ArnorFaction
		CommandSet	= RivendellMonumentFortressCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetArnor_WOTR
		TriggeredBy	= Upgrade_ArnorFaction Upgrade_LOAMode
		CommandSet	= RivendellMonumentFortressCommandSet_WOTR
		RequiresAllTriggers = Yes
	End	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetArnor_WOTR_LAS
		TriggeredBy	= Upgrade_ArnorFaction Upgrade_LOAMode Upgrade_MenWallRegularGate
		CommandSet	= RivendellMonumentFortressCommandSet_WOTR_LAS
		RequiresAllTriggers = Yes
	End	
	;-----------------------------------------------------------------------------
	; Mirkwood
	;-----------------------------------------------------------------------------		
	Behavior = CommandSetUpgrade ModuleTag_CommandSetMirkwood
		TriggeredBy	= Upgrade_MirkwoodFaction
		CommandSet	= MirkwoodMonumentFortressCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_UnlockGrimbeorn
		TriggeredBy		= Upgrade_MirkwoodFaction Upgrade_Arkenstone
		RequiresAllTriggers = Yes		
		ConflictsWith	= Upgrade_LOAMode		
		CommandSet		= MirkwoodMonumentFortressCommandSet_Grimbeorn
	End	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetMirkwood_WOTR
		TriggeredBy	= Upgrade_MirkwoodFaction Upgrade_LOAMode
		CommandSet	= MirkwoodMonumentFortressCommandSet_WOTR
		RequiresAllTriggers = Yes
	End		
	;-----------------------------------------------------------------------------
	; Erebor
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetDwarven
		TriggeredBy	= Upgrade_DwarfFaction
		CommandSet	= DwarvenFortressMonumentCommandSet
	End
	Behavior = CommandSetUpgrade ModueTag_HobbitEraCommandSet
		TriggeredBy			= Upgrade_DwarfFaction Upgrade_HobbitErebor
		RequiresAllTriggers = Yes
		ConflictsWith		= Upgrade_LotRErebor Upgrade_LOAMode
		CommandSet			= DwarvenFortressMonumentCommandSet_HobbitEra
	End
	Behavior = CommandSetUpgrade ModueTag_LotREraCommandSet
		TriggeredBy			= Upgrade_DwarfFaction Upgrade_LotRErebor
		RequiresAllTriggers = Yes		
		ConflictsWith		= Upgrade_HobbitErebor Upgrade_LOAMode
		CommandSet			= DwarvenFortressMonumentCommandSet_LotREra
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetDwarven_WOTR
		TriggeredBy	= Upgrade_DwarfFaction Upgrade_LOAMode
		CommandSet	= DwarvenFortressMonumentCommandSet_WOTR
		RequiresAllTriggers = Yes
	End	
	Behavior = AttributeModifierAuraUpdate ModuleTag_ArkenstoneBonus
		StartsActive			= No ;If no, requires upgrade to turn on.
		BonusName				= HasIsenSiegeWorks
		TriggeredBy				= Upgrade_DwarvenFortressMightyCatapult
		RefreshDelay			= 2000
		Range					= 99999
		ObjectFilter			= ANY +STRUCTURE +PORTER SAME_PLAYER ;;+FireWyrmLair
	End
	Behavior = ModelConditionUpgrade ModuleTag_ArkenstoneFX
		TriggeredBy			= Upgrade_DwarvenFortressMightyCatapult
		AddConditionFlags	= RIDER3
		Permanent			= Yes
	End	
	Behavior = CostModifierUpgrade ModuleTag_CostModifierArkenstone
		LabelForPalantirString	= GUI:ARKENSTONE_DISCOUNT_HIDDEN
		TriggeredBy				= Upgrade_DwarvenFortressMightyCatapult
		UpgradeDiscount			= Yes
		ApplyToTheseUpgrades	= Upgrade_DwarvenForgedBlades Upgrade_DwarvenSiegeHammer Upgrade_DwarvenFireArrows Upgrade_DwarvenMithrilMail
        Percentage        		= -10%
	End	
	;-----------------------------------------------------------------------------
	; Mordor
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetMordor
		TriggeredBy	= Upgrade_MordorFaction
		CommandSet	= MordorMonumentFortressRebuildCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_UnlockGothmog
		TriggeredBy		= Upgrade_MordorFaction Upgrade_FortressMapUpgrade
		RequiresAllTriggers = Yes		
		ConflictsWith	= Upgrade_LOAMode		
		CommandSet		= MordorMonumentFortressRebuildCommandSet_Gothmog
	End
	Behavior = AttributeModifierAuraUpdate ModuleTag_TrollCageUpgrade
		StartsActive			= No ;If no, requires upgrade to turn on.
		BonusName			= MorgulSorceryTrollhandout
		TriggeredBy			= Upgrade_FortressMapUpgrade
		RefreshDelay			= 2000
		Range				= 99999 ; MORDOR_FORTRESS_WALL_EFFECTIVE_RADIUS ;;,;; 99999
		ObjectFilter			= ANY +MordorTrollCage +MordorTrollCageFoundation
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetMordor_WOTR
		TriggeredBy	= Upgrade_MordorFaction Upgrade_LOAMode
		CommandSet	= MordorMonumentFortressRebuildCommandSet_WOTR
		RequiresAllTriggers = Yes
	End	
	;-----------------------------------------------------------------------------
	; Isengard
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetIsengard
		TriggeredBy	= Upgrade_IsengardFaction
		CommandSet	= IsengardMonumentFortressRebuildCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetIsengard_WOTR
		TriggeredBy	= Upgrade_IsengardFaction Upgrade_LOAMode
		CommandSet	= IsengardMonumentFortressRebuildCommandSet_WOTR
		RequiresAllTriggers = Yes
	End		
	;-----------------------------------------------------------------------------
	; Misty Mountains
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetWild
		TriggeredBy	= Upgrade_WildFaction
		CommandSet	= WildMonumentFortressRebuildCommandSet
	End
;	Behavior = CommandSetUpgrade ModuleTag_CommandSetWildUpgrade
;		TriggeredBy	= Upgrade_WildFaction Upgrade_WildFortressGoblinTownTrigger
;		CommandSet	= WildMonumentFortressCommandSetUpgrade
;		RequiresAllTriggers = Yes
;	End
;	Behavior = CastleUpgrade ModuleTag_PassOutGoblinTownUpgrade
;		TriggeredBy	= Upgrade_WildFortressGoblinTownTrigger
;		Upgrade		= Upgrade_WildFortressGoblinTown
;	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetWild_WOTR
		TriggeredBy	= Upgrade_WildFaction Upgrade_LOAMode
		CommandSet	= WildMonumentFortressRebuildCommandSet_WOTR
		RequiresAllTriggers = Yes
	End			
	;-----------------------------------------------------------------------------
	; Dol Guldur
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetGuldur
		TriggeredBy	= Upgrade_GuldurFaction
		CommandSet	= GuldurMonumentFortressRebuildCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetGuldur_WOTR
		TriggeredBy	= Upgrade_GuldurFaction Upgrade_LOAMode
		CommandSet	= GuldurMonumentFortressRebuildCommandSet_WOTR
		RequiresAllTriggers = Yes
	End	
	;----------Necromancy mechanic for Wotr----------------------------------------
	Behavior = SpawnBehavior ModuleTag_SpawnNecromancyPing
		TriggeredBy			= Upgrade_GuldurFortressEncroachment Upgrade_LOAMode
		RequiresAllTriggers = Yes
		SpawnNumber			= 1
		InitialBurst		= 1
		SpawnTemplateName	= BastionNecromancyPing
		SpawnReplaceDelay	= 45000;
		CanReclaimOrphans	= Yes
	End	
	;-----------------------------------------------------------------------------
	; Haradwaith
	;-----------------------------------------------------------------------------	
	Behavior = CommandSetUpgrade ModuleTag_CommandSetAngmar
		TriggeredBy	= Upgrade_AngmarFaction
		CommandSet	= AngmarMonumentFortressCommandSet
	End
	Behavior = CommandSetUpgrade ModuleTag_CommandSetAngmar_WOTR
		TriggeredBy	= Upgrade_AngmarFaction Upgrade_LOAMode
		CommandSet	= AngmarMonumentFortressCommandSet_WOTR
		RequiresAllTriggers = Yes
	End		
	;-----------------------------------------------------------------------------