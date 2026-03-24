using UnrealBuildTool;

public class MySpartaLog : ModuleRules
{
    public MySpartaLog(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "InputCore",
            "Slate",
            "SlateCore",
        });
        PublicIncludePaths.Add("MySpartaLog/Public");
        PrivateIncludePaths.Add("MySpartaLog/Private");
    }
}