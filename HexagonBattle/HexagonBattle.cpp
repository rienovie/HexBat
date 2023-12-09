

#include "HexagonBattle.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, HexagonBattle, "HexagonBattle" );

	void HexBat::debugPrint(FString message, float time) {
	GEngine->AddOnScreenDebugMessage(-1, time, FColor::Magenta, (TEXT("%s"), message));
}
