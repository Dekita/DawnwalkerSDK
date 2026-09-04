#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "WidgetContextParams.h"
#include "DemoWidgetContextParams.generated.h"

USTRUCT(BlueprintType)
struct FDemoWidgetContextParams : public FWidgetContextParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AdditionalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AdditionalName;
    
    DAWNWALKER_API FDemoWidgetContextParams();
};

