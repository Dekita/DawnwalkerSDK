#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "PresentedStatValueType.h"
#include "AttributeStatValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FAttributeStatValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    FAttributeStatValue();
};

