//  

#include "HexBat_GridManager_Base.h"

void AHexBat_GridManager_Base::gridToWorld(FVector2D gridLocation, FVector& worldLocation)
{
	worldLocation = FVector(gridLocation.X * gridXValue, gridLocation.Y * gridYValue, 0);
}

void AHexBat_GridManager_Base::getSurroundingLocations(FVector2D origin, TArray<FVector2D>& locations)
{
	float xModify;

	for (int i = -1; i < 2; i++)
	{
		if (i == 0) { xModify = 2; }
		else { xModify = 1; }

		locations.Add(FVector2D(origin.X + (xModify * 1), origin.Y + i));
		locations.Add(FVector2D(origin.X + (xModify * -1), origin.Y + i));
	}

}

//gets center point and bounds for the camera
void AHexBat_GridManager_Base::getCenterAndBounds(TArray<FVector2D> hexes, FVector2D& center, float& bounds)
{
	float minX = 0;
	float maxX = 0;
	float minY = 0;
	float maxY = 0;
	float boundsHigh = 0;
	bool initializedValues = false;

	//for each hex
	for (FVector2D hex : hexes) {
		if (!initializedValues) {
			minX = hex.X;
			minY = hex.Y;
			maxX = hex.X;
			maxY = hex.Y;
			initializedValues = true;
			continue;
		}
		if (hex.X < minX) { minX = hex.X; }
		if (hex.X > maxX) { maxX = hex.X; }
		if (hex.Y < minY) { minY = hex.Y; }
		if (hex.Y > maxY) { maxY = hex.Y; }

	}
	boundsHigh = (FMath::Abs(maxX - minX)) / 2.0f;
	if ((FMath::Abs(maxY - minY) > boundsHigh)){
		boundsHigh = FMath::Abs(maxY - minY);
	}

	center = FVector2D((minX + maxX) / 2.0f, (minY + maxY) / 2.0f);
	bounds = FMath::Clamp(boundsHigh, 3.0f, 99.0f);

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

