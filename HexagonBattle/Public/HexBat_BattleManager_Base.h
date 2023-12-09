//  

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexBat_BattleManager_Base.generated.h"

UCLASS()
class HEXAGONBATTLE_API AHexBat_BattleManager_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHexBat_BattleManager_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
