/*
	Current goal is to create bot system
	The player will be able to create custom bots by modifing values
	Bot defaults:
		- Random Character Selection
		- Random Action Value ( within 20 of 50 )
		- Random Priority ( within 1 of 5 )
		- Random Assumed Logic ( any of the three Balanced Options )

	There will be four different levels of bots:

		Lvl 1 (Easy): 
			~ Single Turn Logic
				Will determine its move based only on the character's current turn & AP
			~ Aggression / Deffensive slider
				Only adjustable value for this lvl
			
				Options are [VD,D,BD,B,BA,A,VA]:
					- Very Deffensive
						-> Will always prioritize staying out-of-range
						-> Secondary Priority Deffensive Actions
						-> Doesn't Perform Aggressive Actions
						-> When Selected sets:
							* Forward = Bal Deffensive
							* Flex = Deffensive
							* Support = Very Deffensive
					- Deffensive
						-> Prioritize Deffensive Actions
						-> Secondary Priority staying out-of-range
						-> Avoids Aggressive Actions
						-> When Selected sets:
							* Forward = Bal Deffensive
							* Flex = Deffensive
							* Support = Deffensive
					- Balanced Deffensive
						-> Equal Prioritization to out-of-range and Deffensive Actions
						-> Secondary Priority Aggressive Actions
						-> When Selected sets:
							* Forward = Balanced
							* Flex = Bal Deffensive
							* Support = Deffensive
					- Balanced
						-> Equal Prioritization of Everything
						-> When Selected sets:
							* Forward = Bal Agressive
							* Flex = Balanced
							* Support = Bal Deffensive
					- Balanced Aggressive
						-> Equal Prioritization to within-range and Aggressive Actions
						-> Secondary Priority Deffensive Actions
						-> When Selected sets:
							* Forward = Aggressive
							* Flex = Bal Aggressive
							* Support = Balanced
					- Aggressive
						-> Prioritize Aggressive Actions
						-> Secondary Priority within-range
						-> Avoids Deffensive Actions
						-> When Selected sets:
							* Forward = Aggressive
							* Flex = Aggressive
							* Support = Bal Aggressive
					- Very Aggressive
						-> Prioritize within-range
						-> Secondary Priority Aggressive Actions
						-> Doesn't Perform Deffensive Actions
						-> When Selected sets:
							* Forward = Very Aggressive
							* Flex = Aggressive
							* Support = Bal Aggressive
		

		Lvl 2 (Medium):
			~ Two Turn Logic
				Will determine its move based on the combined character's current turn and next turn
			~ Agg/Def slider per position

		Lvl 3 (Hard):
			~ Current Character Two Turn & Enemy Single Turn Logic
				-> Walk thru timeline until this character's next turn
				-> Calculate with assumed enemy logic [default : balanced] a single turn
				-> Determine move based on best outcome value
			~ Specific Character Selection
			~ Action Priority
				Priority is a base multiplier to the value
				Possibly default of 5 with min of 1 and max of 9

		Lvl 4 (Hardest):
			~ Assumed Enemy Logic
				Which Default Agg/Def is assumed when determining enemy actions
			~ Full Two Turn Logic
				-> Walk thru timeline until this character's next turn
				-> For each determine Two Turn logic with assumed logic
				-> Determine move based on best outcome value
			~ Action Definition
				Each Action is either Aggressive, Deffensive, or Neutral
			~ Action Value
				Should be fairly limited in range (possibly 0-100)

	
	Possible Action Value Formula:
		Action Value * Priority * Agg/Def Match

	Aggression / Deffensive Match
		Possibly something like 1.5 for match and 0.5 for opposite
	
	This will tie into the "Rank" system
	There will be 4 ranks each with 6 "Challenges"
	Some example "Challenges":
		- Complete Tutorial
		- Create a Lvl X Bot
		- Defeat a Lvl X Bot
		- Deal 100 Damage in a single game
		- Win a game without losing a single piece
		- Create a grid
		- Verify a grid
		- Play on a Created Grid
		- Play an online game
	Ranks are:
		Mud (1..2..6)
		Grass (1..2..)
		Molten (1..2..)
		Corrupt (1..2..)
	You start as Mud 1 and when you complete a challenge you move up
	Rank is shown with Colored Hexes next to your player name on your player card
	To unlock each Lvl of bots, you must reach Grass (bot lvl 2), Molten (3), Corrupt (4)

*/



#include "HexBat_BattleManager_Base.h"

// Sets default values
AHexBat_BattleManager_Base::AHexBat_BattleManager_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHexBat_BattleManager_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHexBat_BattleManager_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

