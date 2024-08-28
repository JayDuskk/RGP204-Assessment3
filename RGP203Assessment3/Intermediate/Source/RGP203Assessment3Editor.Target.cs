using UnrealBuildTool;

public class RGP203Assessment3EditorTarget : TargetRules
{
	public RGP203Assessment3EditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("RGP203Assessment3");
	}
}
