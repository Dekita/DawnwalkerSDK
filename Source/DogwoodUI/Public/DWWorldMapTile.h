#pragma once
#include "CoreMinimal.h"
#include "CommonLazyImage.h"
#include "DWWorldMapTile.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UDWWorldMapTile : public UCommonLazyImage {
    GENERATED_BODY()
public:
    UDWWorldMapTile();

    UFUNCTION(BlueprintCallable)
    void UpdateMipStreaming();
    
};

