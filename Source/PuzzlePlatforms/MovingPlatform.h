// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AMovingPlatform();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	void AddActiveTrigger();
	void RemoveActiveTrigger();
	
private:
	UPROPERTY(EditAnywhere, Category = "Setup")
	float Speed = 20;
	UPROPERTY(EditAnywhere, Category = "Setup", Meta = (MakeEditWidget = true))
	FVector TargetLocation;
	UPROPERTY(EditAnywhere, Category = "Setup")
	int ActiveTriggers = 1;

	FVector GlobalStartLocation;
	FVector GlobalTargetLocation;
};
