// Copyright(c) 2019 CatDark, All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class SimpleFootIKEditorTarget : TargetRules
{
	public SimpleFootIKEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("SimpleFootIK");
	}
}
