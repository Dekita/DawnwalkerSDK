#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "RInputDisplayKey.h"
#include "RebelInputDisplayConfig.generated.h"

UCLASS(Blueprintable)
class REBELINPUTDISPLAY_API URebelInputDisplayConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRInputDisplayKey, FSlateBrush> InputBrushMap;
    
    URebelInputDisplayConfig();

};

