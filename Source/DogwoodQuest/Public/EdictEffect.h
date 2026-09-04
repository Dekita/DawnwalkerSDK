#pragma once
#include "CoreMinimal.h"
#include "EdictEffect.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FEdictEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> SpriteOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectName;
    
    DOGWOODQUEST_API FEdictEffect();
};

