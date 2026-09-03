#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DWPromptQuery.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDWPromptQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Query;
    
    FDWPromptQuery();
};

