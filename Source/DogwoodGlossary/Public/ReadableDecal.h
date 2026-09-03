#pragma once
#include "CoreMinimal.h"
#include "EReadableDecalType.h"
#include "ReadableDecalSlotConfig.h"
#include "ReadableDecal.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FReadableDecal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReadableDecalType Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideSlotConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadableDecalSlotConfig SlotConfigOverride;
    
    FReadableDecal();
};

