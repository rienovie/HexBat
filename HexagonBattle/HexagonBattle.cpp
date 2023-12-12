

#include "HexagonBattle.h"


IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, HexagonBattle, "HexagonBattle" );

void HB::debugPrint(FString message, float time)
{
	GEngine->AddOnScreenDebugMessage(-1, time, FColor::Magenta, (TEXT("%s"), message));
}
