//  

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SaveGame.h"
#include "UObject/FieldIterator.h"
#include "UObject/Class.h"
#include "UObject/UnrealType.h"
#include "Engine/Blueprint.h"
#include "HexagonBattle/HexagonBattle.h"
#include "HexBat_PlayerController_Base.generated.h"



/**
 * 
 */
UCLASS()
class HEXAGONBATTLE_API AHexBat_PlayerController_Base : public APlayerController {
	
	GENERATED_BODY()
	
		UFUNCTION(BlueprintCallable, Category = "HexBat")
		static void testHexBatFunction();
		
		UFUNCTION(BlueprintCallable, Category = "HexBat")
		void saveGameVariables(USaveGame* saveGame);

		UFUNCTION(BlueprintCallable, Category = "HexBat")
		void loadGameVariables(USaveGame* saveGame);
		
	
};
