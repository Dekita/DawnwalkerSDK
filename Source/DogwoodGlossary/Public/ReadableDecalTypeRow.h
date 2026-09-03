#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ReadableDecalSlotConfig.h"
#include "ReadableDecalTypeRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct DOGWOODGLOSSARY_API FReadableDecalTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DecalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadableDecalSlotConfig SlotConfig;
    
    FReadableDecalTypeRow();
};

