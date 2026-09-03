#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DawnwalkerAnimationUtils.generated.h"

class UAnimMontage;
class URebelAIStub;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerAnimationUtils : public UObject {
    GENERATED_BODY()
public:
    UDawnwalkerAnimationUtils();

private:
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* BP_GetCombatMontage(const URebelAIStub* Stub, FName AnimSetName, FGameplayTag CombatModeTag, FGameplayTagContainer Tags);
    
};

