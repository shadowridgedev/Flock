// Bird.cpp
#include "Bird.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABird::ABird()
{
    PrimaryActorTick.bCanEverTick = true;

    // Enable character movement
    GetCharacterMovement()->MaxWalkSpeed = 600.0f;
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ABird::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Set a new target location for the bird
void ABird::SetTargetLocation(FVector NewLocation)
{
    TargetLocation = NewLocation;
}
