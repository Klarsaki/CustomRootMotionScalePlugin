// Copyright Epic Games, Inc. All Rights Reserved.

#include "CustomRootMotionScaleBPLibrary.h"
#include "CustomRootMotionScale.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "V2rmCharacterMovementComponent.h"

UCustomRootMotionScaleBPLibrary::UCustomRootMotionScaleBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}



void UCustomRootMotionScaleBPLibrary::SetRootMotionTranslationScale(ACharacter* Character, float Scale)
{

	if (Character) {
		Character->SetAnimRootMotionTranslationScale(Scale);

	}

}

void UCustomRootMotionScaleBPLibrary::SetRootMotionTranslationVectorScale(ACharacter* Character, FVector Scale, bool CalculateScaleInLocalDirection)
{
	if (Character) {
		UCharacterMovementComponent* MoveComp = Character->GetCharacterMovement();

		UV2rmCharacterMovementComponent* V2rmComp = Cast<UV2rmCharacterMovementComponent>(MoveComp);
		if (V2rmComp)
		{
			V2rmComp->CalculateVectorScaleInLocal = CalculateScaleInLocalDirection;
			V2rmComp->RootMotionVectorScale = Scale;
		}

	}

}

