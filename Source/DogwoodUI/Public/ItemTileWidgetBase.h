#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "DWButtonBase.h"
#include "ItemTileWidgetBase.generated.h"

class UInventoryUIListItem;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UItemTileWidgetBase : public UDWButtonBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventoryUIListItem* ListItem;
    
    UItemTileWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoveredAboveThreshold();
    

    // Fix for true pure virtual functions not being implemented
};

