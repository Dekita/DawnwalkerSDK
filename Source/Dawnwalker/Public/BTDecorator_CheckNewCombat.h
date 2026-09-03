#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BTDecorator_StubConditionBase.h"
#include "BTDecorator_CheckNewCombat.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UBTDecorator_CheckNewCombat : public UBTDecorator_StubConditionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag IsInCombatTag;
    
public:
    UBTDecorator_CheckNewCombat();

};

