#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "CustomAttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct FCustomAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
    DOGWOODSTATS_API FCustomAttributeModifier();
};

