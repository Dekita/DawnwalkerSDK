#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemHandle.h"
#include "EInventoryListItemType.h"
#include "InventoryUIListItem.generated.h"

class UItemBaseDataAsset;
class UTiledInventoryView;

UCLASS(Blueprintable)
class DOGWOODUI_API UInventoryUIListItem : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FItemUpdatedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryListItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTiledInventoryView* ParentInventoryView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemInstanceIdx;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpdatedDelegate OnItemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemUpdatedDelegate OnEquipmentUpdated;
    
    UInventoryUIListItem();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    UItemBaseDataAsset* GetItemAsset(const UObject* InWorldContextObject) const;
    
};

