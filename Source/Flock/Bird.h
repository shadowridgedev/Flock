// Bird.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Bird.generated.h"

UCLASS()
class MYPROJECT_API ABird : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    ABird();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Set a new target for the bird to move to
    void SetTargetLocation(FVector NewLocation);

private:
    FVector TargetLocation;
};

class Bird :
    public ACharacter
{
};
