//  

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HexBax_CPP_BP_Library.generated.h"

/**
 * 
 */
UCLASS()
class HEXAGONBATTLE_API UHexBax_CPP_BP_Library : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "HexBat")
		static void SetUIScale(float CustomUIScale);
	
};
