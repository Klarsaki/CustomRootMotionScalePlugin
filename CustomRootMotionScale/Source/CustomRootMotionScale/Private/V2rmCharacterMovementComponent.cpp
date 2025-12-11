// Fill out your copyright notice in the Description page of Project Settings.


#include "V2rmCharacterMovementComponent.h"

FVector UV2rmCharacterMovementComponent::CalcAnimRootMotionVelocity(const FVector& RootMotionDeltaMove, float DeltaSeconds, const FVector& CurrentVelocity) const
{
	if (ensure(DeltaSeconds > 0.f))
	{
		FVector RootMotionVelocity = FVector::ZeroVector;

		if (CalculateVectorScaleInLocal) {


			FTransform ActorWorldTransform = CharacterOwner->GetActorTransform();
			FTransform InverseActorTransform = ActorWorldTransform.Inverse();

			FVector LocalDirection = InverseActorTransform.TransformVector(RootMotionDeltaMove);

			LocalDirection = LocalDirection * RootMotionVectorScale;


			FVector UpdatedWorldDirection = ActorWorldTransform.TransformVector(LocalDirection);



			



			RootMotionVelocity = (UpdatedWorldDirection / DeltaSeconds);

		}
		else
		{
			RootMotionVelocity = (RootMotionDeltaMove / DeltaSeconds) * RootMotionVectorScale;

		}
		return RootMotionVelocity;


	}
	else
	{
		return CurrentVelocity;
	}
}
