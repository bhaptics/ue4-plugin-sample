// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor_Cpp.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include <BhapticsPlugin/Public/BhapticsSDK2.h>

// Sets default values
ATestActor_Cpp::ATestActor_Cpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATestActor_Cpp::BeginPlay()
{
	Super::BeginPlay();
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	InputComponent->BindAction("SpaceBar", IE_Pressed, this, &ATestActor_Cpp::PlayHaptic);
}

void ATestActor_Cpp::PlayHaptic()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("SPACE BAR IN CPP"));
	UBhapticsSDK2::PlayHaptic("paintsplat");
}

// Called every frame
void ATestActor_Cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



