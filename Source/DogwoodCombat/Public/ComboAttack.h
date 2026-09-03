#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ComboAttack.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FComboAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagContainer> AttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnotherAttackMaxDistanceAdditionalOffset;
    
    FComboAttack();
};

