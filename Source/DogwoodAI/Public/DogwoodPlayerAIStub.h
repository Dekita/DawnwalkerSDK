#pragma once
#include "CoreMinimal.h"
#include "DogwoodAIStub.h"
#include "DogwoodPlayerAIStub.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodPlayerAIStub : public UDogwoodAIStub {
    GENERATED_BODY()
public:
    UDogwoodPlayerAIStub();

    UFUNCTION(BlueprintCallable)
    void OnCombatEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking();
    
};

