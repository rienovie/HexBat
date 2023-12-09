//  

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexBat_GridManager_Base.generated.h"

/**
 *
 */
UCLASS()
class HEXAGONBATTLE_API AHexBat_GridManager_Base : public AActor {
	
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, Category = "Utility")
		void gridToWorld(FVector2D gridLocation,FVector& worldLocation);

		
	
public:	
	// Sets default values for this actor's properties
	AHexBat_GridManager_Base();

	UPROPERTY(EditAnywhere, Category = "Grid Values")
	float gridXValue = 98;

	UPROPERTY(EditAnywhere, Category = "Grid Values")
	float gridYValue = 168;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
