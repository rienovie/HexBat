//  


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

