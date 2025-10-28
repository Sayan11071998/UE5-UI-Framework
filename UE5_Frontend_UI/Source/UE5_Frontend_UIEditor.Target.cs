// SayanNandi

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_Frontend_UIEditorTarget : TargetRules
{
	public UE5_Frontend_UIEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "UE5_Frontend_UI" } );
	}
}
