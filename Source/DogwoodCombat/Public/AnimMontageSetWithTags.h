#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimMontageSet.h"
#include "AnimMontageSetWithTags.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FAnimMontageSetWithTags : public FAnimMontageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    FAnimMontageSetWithTags();
};

