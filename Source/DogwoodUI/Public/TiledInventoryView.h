#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "Blueprint/UserWidget.h"
#include "EInventoryViewType.h"
#include "EItemSortMode.h"
#include "ItemFilterTypeRow.h"
#include "TiledInventoryView.generated.h"

class IInventoryListItemFilterHandler;
class UInventoryListItemFilterHandler;
class UCommonButtonGroupBase;
class UInventoryComponent;
class UInventoryTileView;
class UInventoryUIListItem;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UTiledInventoryView : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChangedDelegate, const FItemHandle&, SelectedItemHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemFilterChanged, const FItemFilterTypeRow&, InFilterType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisplayUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDisplayingAnyItemsChanged, bool, bIsDisplayingAnyItems);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryTileView* InventoryTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* TargetInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryViewType InventoryViewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemSortMode ItemSortMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectionChangedDelegate OnSelectedItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayingAnyItemsChanged OnDisplayingAnyItemsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemFilterChanged OnItemFilterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUpdated OnInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayUpdated OnDisplayUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IInventoryListItemFilterHandler> FilterHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventoryUIListItem*> InventoryItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInventoryUIListItem*> DisplayedItemList;
    
public:
    UTiledInventoryView();

protected:
    UFUNCTION(BlueprintCallable)
    void StoreSelectedIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void Setup(UInventoryComponent* InInventoryComponent, UCommonButtonGroupBase* InButtonGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetSortingMode(EItemSortMode InSortMode);
    
    UFUNCTION(BlueprintCallable)
    void SetItemFilterHandler(TScriptInterface<IInventoryListItemFilterHandler> Handler);
    
    UFUNCTION(BlueprintCallable)
    void SetItemFilter(const FItemFilterTypeRow& InFilterType);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstItemIfPresent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayingAnyActualItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemFilterTypeRow GetItemFilter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSelectedIndex();
    
};

