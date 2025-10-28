// SayanNandi

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_Frontend_UITarget : TargetRules
{
	public UE5_Frontend_UITarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "UE5_Frontend_UI" } );
	}
}
