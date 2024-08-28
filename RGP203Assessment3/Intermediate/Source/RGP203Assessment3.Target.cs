using UnrealBuildTool;

public class RGP203Assessment3Target : TargetRules
{
	public RGP203Assessment3Target(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("RGP203Assessment3");
	}
}
