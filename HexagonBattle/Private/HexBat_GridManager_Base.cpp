//  


#include "HexBat_GridManager_Base.h"

void AHexBat_GridManager_Base::gridToWorld(FVector2D gridLocation, FVector& worldLocation)
{
	worldLocation = FVector(gridLocation.X * gridXValue, gridLocation.Y * gridYValue, 0);
}

// Sets default values
AHexBat_GridManager_Base::AHexBat_GridManager_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHexBat_GridManager_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHexBat_GridManager_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

