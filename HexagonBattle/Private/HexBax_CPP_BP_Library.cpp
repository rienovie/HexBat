//  


#include "HexBax_CPP_BP_Library.h"
#include "Engine/UserInterfaceSettings.h"

void UHexBax_CPP_BP_Library::SetUIScale(float CustomUIScale)
{
	UUserInterfaceSettings* UISettings = GetMutableDefault<UUserInterfaceSettings>(UUserInterfaceSettings::StaticClass());

	if (UISettings)
	{
		UISettings->ApplicationScale = CustomUIScale;
	}

}
