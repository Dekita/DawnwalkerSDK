#pragma once
#include "CoreMinimal.h"
#include "AkMemoryArenaInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkMemoryArenaInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PrimarySbaInitSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PrimaryTlsfInitSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PrimaryTlsfSpanSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PrimaryMemReservedLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PrimaryAllocSizeHuge;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MediaTlsfInitSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MediaTlsfSpanSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MediaMemReservedLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MediaAllocSizeHuge;
    
    FAkMemoryArenaInitializationSettings();
};

