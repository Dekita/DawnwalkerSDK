#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RebelAIParams.h"
#include "RebelAIParams_CustomGuard.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_CustomGuard : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCustomGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagContainer> CustomGuardDirectionMappings;
    
    FRebelAIParams_CustomGuard();
};

