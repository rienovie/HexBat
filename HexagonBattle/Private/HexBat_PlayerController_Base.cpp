//  


#include "HexBat_PlayerController_Base.h"

void AHexBat_PlayerController_Base::saveGameVariables(USaveGame* saveGame)
{
	for (TFieldIterator<FProperty> propIt(saveGame->GetClass(), EFieldIteratorFlags::IncludeSuper); propIt; ++propIt)
	{
		FProperty* prop = *propIt;
		if (prop->HasAnyPropertyFlags(CPF_BlueprintVisible))
		{
			FProperty* varController = this->GetClass()->FindPropertyByName(prop->GetFName());
			if (varController)
			{
				varController->CopyCompleteValue(prop->ContainerPtrToValuePtr<void>(saveGame), varController->ContainerPtrToValuePtr<void>(this));
			}
			else { HB::debugPrint("Variable was not valid!"); }

		}
	}
	
}

void AHexBat_PlayerController_Base::loadGameVariables(USaveGame* saveGame)
{
	for (TFieldIterator<FProperty> propIt(saveGame->GetClass(), EFieldIteratorFlags::IncludeSuper); propIt; ++propIt)
	{
		FProperty* prop = *propIt;
		if (prop->HasAnyPropertyFlags(CPF_BlueprintVisible))
		{
			FProperty* varController = this->GetClass()->FindPropertyByName(prop->GetFName());
			if (varController)
			{
				prop->CopyCompleteValue(varController->ContainerPtrToValuePtr<void>(this),prop->ContainerPtrToValuePtr<void>(saveGame));
			}
			else { HB::debugPrint("Variable was not valid!"); }
			
		}
	}
}