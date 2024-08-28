using UnrealBuildTool;

public class RGP203Assessment3ServerTarget : TargetRules
{
	public RGP203Assessment3ServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("RGP203Assessment3");
	}
}
