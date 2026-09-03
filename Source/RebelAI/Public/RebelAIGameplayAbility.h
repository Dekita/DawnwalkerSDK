#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "RebelAIGameplayAbility.generated.h"

class UCommunityNPCDefinitionBase;
class URebelAIDef;
class URebelAIStub;

UCLASS(Abstract, Blueprintable)
class REBELAI_API URebelAIGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    URebelAIGameplayAbility();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommunityNPCDefinitionBase* GetNPCDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIStub* GetAIStub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelAIDef* GetAIDefinition() const;
    
};

