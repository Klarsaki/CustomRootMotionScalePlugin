// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "V2rmCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOMROOTMOTIONSCALE_API UV2rmCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(Category = "Character Movement: RootMotion Scale", EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
	FVector RootMotionVectorScale = FVector(1.0f, 1.0f, 1.0f);

	UPROPERTY(Category = "Character Movement: RootMotion Scale", EditAnywhere, BlueprintReadWrite, AdvancedDisplay)
	bool CalculateVectorScaleInLocal = false;


	virtual FVector CalcAnimRootMotionVelocity(const FVector& RootMotionDeltaMove, float DeltaSeconds, const FVector& CurrentVelocity)const override;
	
};
