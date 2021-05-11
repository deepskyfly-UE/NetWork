// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NetWork : ModuleRules
{
	public NetWork(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore",
			"Networking",
			"Sockets",
			"HeadMountedDisplay" 
		});
	}
}
