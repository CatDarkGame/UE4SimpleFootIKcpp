// Copyright(c) 2019 CatDark, All Rights Reserved.

#include "AnimInst_Character.h"

UAnimInst_Character::UAnimInst_Character()
{

}

void UAnimInst_Character::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	Init_IKFootRef();

}

void UAnimInst_Character::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	Tick_IKFoot();
	
}

void UAnimInst_Character::Init_IKFootRef()
{
	//! Get IKFoot Component from owner
	APawn* pOwner = TryGetPawnOwner();
	if (pOwner != nullptr)
	{
		UActorComponent* pActorComp = pOwner->GetComponentByClass(UCpt_IK_Foot::StaticClass());
		if (pActorComp != nullptr)
		{
			m_pIK_Foot_Ref = Cast<UCpt_IK_Foot>(pActorComp);
			if (m_pIK_Foot_Ref == nullptr)
			{
				UE_LOG(LogTemp, Warning, TEXT("IKFootRef is nullptr"));
			}
		}
	}
}

void UAnimInst_Character::Tick_IKFoot()
{
	if (m_pIK_Foot_Ref == nullptr) return;

	m_stIKAnimValue = m_pIK_Foot_Ref->GetIKAnimValue();
}
