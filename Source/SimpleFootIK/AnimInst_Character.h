// Copyright(c) 2019 CatDark, All Rights Reserved.

#pragma once
#include "IK_Foot/Cpt_IK_Foot.h"

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInst_Character.generated.h"



UCLASS()
class SIMPLEFOOTIK_API UAnimInst_Character : public UAnimInstance
{
	GENERATED_BODY()
public:
	UAnimInst_Character();
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private :
	//! IK Component Init
	void Init_IKFootRef();

	//! IK Component Tick
	void Tick_IKFoot();

	//! IK Component Ref 
	UPROPERTY()
		class UCpt_IK_Foot* m_pIK_Foot_Ref;

	//! IK Component Animvalue struct
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "IKFoot Value", meta = (AllowPrivateAccess = "true"))
		FST_IK_AnimValue m_stIKAnimValue;
};
