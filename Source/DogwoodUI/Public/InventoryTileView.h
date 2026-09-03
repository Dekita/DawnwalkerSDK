#pragma once
#include "CoreMinimal.h"
#include "CommonTileView.h"
#include "InventoryTileView.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UInventoryTileView : public UCommonTileView {
    GENERATED_BODY()
public:
    UInventoryTileView(const FObjectInitializer& ObjectInitializer);

};

