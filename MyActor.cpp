// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	start = FVector2D(0, 0);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AMyActor::step()
{
	return FMath::RandRange(0, 1);

}

void AMyActor::move()
{
	for (int32 i = 0; i < 10; i++)
	{
		start.X = start.X + step();
		start.Y = start.Y + step();
		UE_LOG(LogTemp, WARNING, TEXT("move %d : X = %f, Y =%f"), i + 1, start.X, start.Y);

	}
}