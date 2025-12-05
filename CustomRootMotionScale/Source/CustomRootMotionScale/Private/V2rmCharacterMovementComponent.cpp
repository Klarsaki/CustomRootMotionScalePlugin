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



			FString DebugString = FString::Printf(TEXT("Local Direction X: %f, Y: %f, Z: %f"), UpdatedWorldDirection.X, UpdatedWorldDirection.Y, UpdatedWorldDirection.Z);
			FString DebugString2 = FString::Printf(TEXT("Local Direction X: %f, Y: %f, Z: %f"), RootMotionDeltaMove.X, RootMotionDeltaMove.Y, RootMotionDeltaMove.Z);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, DebugString);
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, DebugString2);



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
