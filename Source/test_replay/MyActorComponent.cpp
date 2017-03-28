// Fill out your copyright notice in the Description page of Project Settings.

#include "test_replay.h"
#include "MyActorComponent.h"
#include "Engine/DemoNetDriver.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	
	
}


// Called every frame
void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

float UMyActorComponent::GetTotalDemoTime()
{
	UWorld* w = GetWorld();
	UDemoNetDriver* demo = w == NULL ? NULL : w->DemoNetDriver;
	if (demo == NULL)
		return 0;

	return demo->DemoTotalTime;
}