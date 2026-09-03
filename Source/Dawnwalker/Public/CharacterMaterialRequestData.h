#pragma once
#include "CoreMinimal.h"
#include "CharacterMaterialRequestData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FCharacterMaterialRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseDuration;
    
    FCharacterMaterialRequestData();
};

