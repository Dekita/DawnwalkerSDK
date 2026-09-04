#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InputDirectionMetadata.generated.h"

UCLASS(Blueprintable)
class REBELINPUTDISPLAY_API UInputDirectionMetadata : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirectionMask;
    
    UInputDirectionMetadata();

};

