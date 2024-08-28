using UnrealBuildTool;

public class RGP203Assessment3ClientTarget : TargetRules
{
	public RGP203Assessment3ClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("RGP203Assessment3");
	}
}
