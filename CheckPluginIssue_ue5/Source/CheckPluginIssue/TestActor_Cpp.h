// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor_Cpp.generated.h"

UCLASS()
class CHECKPLUGINISSUE_API ATestActor_Cpp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor_Cpp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PlayHaptic();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
