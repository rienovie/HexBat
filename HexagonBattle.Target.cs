

using UnrealBuildTool;
using System.Collections.Generic;

public class HexagonBattleTarget : TargetRules
{
	public HexagonBattleTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "HexagonBattle" } );
	}
}
