// Copyright(c) 2019 CatDark, All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SimpleFootIKTarget : TargetRules
{
	public SimpleFootIKTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("SimpleFootIK");
	}
}
