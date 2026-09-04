#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComboAttack.generated.h"

USTRUCT(BlueprintType)
struct FComboAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> AttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnotherAttackMaxDistanceAdditionalOffset;
    
    DOGWOODCOMBAT_API FComboAttack();
};

