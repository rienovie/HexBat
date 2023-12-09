//  


#include "HexBat_PlayerController_Base.h"

void AHexBat_PlayerController_Base::testHexBatFunction() {

}

void AHexBat_PlayerController_Base::saveGameVariables(USaveGame* saveGame) {
	
	//create a ref to self
	AHexBat_PlayerController_Base* self = this;

	//iterate thru all properties of saveGame
	for (TFieldIterator<FProperty> propIt(saveGame->GetClass(), EFieldIteratorFlags::IncludeSuper); propIt; ++propIt) {

		//current property
		FProperty* prop = *propIt;

		//only get properties that are from the blueprint
		if (prop->HasAnyPropertyFlags(CPF_BlueprintVisible)) {

			//set the ref to the property on controller
			FProperty* varController = self->GetClass()->FindPropertyByName(prop->GetFName());

			//if valid set the value on the controller to the value on the saveGame
			if (varController) {
				varController->CopyCompleteValue(prop->ContainerPtrToValuePtr<void>(saveGame), varController->ContainerPtrToValuePtr<void>(this));
			}
			else
			{
				HexBat::debugPrint("Variable was not valid!");
			}

		}
	}
	
}

void AHexBat_PlayerController_Base::loadGameVariables(USaveGame* saveGame) {
	//create a ref to self
	AHexBat_PlayerController_Base* self = this;

	//iterate thru all properties of saveGame
	for (TFieldIterator<FProperty> propIt(saveGame->GetClass(), EFieldIteratorFlags::IncludeSuper); propIt; ++propIt) {

		//current property
		FProperty* prop = *propIt;
		
		//only get properties that are from the blueprint
		if (prop->HasAnyPropertyFlags(CPF_BlueprintVisible)) {
			
			//set the ref to the property on controller
			FProperty* varController = self->GetClass()->FindPropertyByName(prop->GetFName());

			//if valid set the value on the controller to the value on the saveGame
			if (varController) {
				prop->CopyCompleteValue(varController->ContainerPtrToValuePtr<void>(this),prop->ContainerPtrToValuePtr<void>(saveGame));
			}
			else
			{
				HexBat::debugPrint("Variable was not valid!");
			}
			
		}
	}
}


