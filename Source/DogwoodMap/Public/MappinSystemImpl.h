#pragma once
#include "CoreMinimal.h"
#include "SaveGameInterface.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "MappinConfigRow.h"
#include "MappinInstanceId.h"
#include "MappinSystemInterface.h"
#include "OnEnteredMappinAreaMulticastDelegateDelegate.h"
#include "OnExitedMappinAreaMulticastDelegateDelegate.h"
#include "OnMappinAddedMulticastDelegateDelegate.h"
#include "OnMappinEnabledMulticastDelegateDelegate.h"
#include "OnMappinPositionUpdatedMulticastDelegateDelegate.h"
#include "OnMappinRemovedMulticastDelegateDelegate.h"
#include "OnMappinStateUpdatedMulticastDelegateDelegate.h"
#include "MappinSystemImpl.generated.h"

class UDataTable;
class UMappinFilter;
class UPaperSprite;
class UQuest;

UCLASS(Blueprintable)
class DOGWOODMAP_API UMappinSystemImpl : public UMappinSystemInterface, public ISaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMappinTracked, const FMappinInstanceId&, TrackedMappin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFiltersChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFiltersChanged OnFiltersChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinTracked OnMappinTrackedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinAddedMulticastDelegate OnMappinAddedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinRemovedMulticastDelegate OnMappinRemovedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinAddedMulticastDelegate OnMappinAddedToCompassMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinRemovedMulticastDelegate OnMappinRemovedFromCompassMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnteredMappinAreaMulticastDelegate OnEnteredMappinAreaMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExitedMappinAreaMulticastDelegate OnExitedMappinAreaMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinPositionUpdatedMulticastDelegate OnMappinPositionUpdatedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinStateUpdatedMulticastDelegate OnMappinStateUpdatedMulticastDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMappinEnabledMulticastDelegate OnMappinEnabledMulticastDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestMappinCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestStartMappinCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OpenWorldMappinCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FastTravelDestinationCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CommunityObjectCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMappinType, FMappinConfigRow> MappinConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMappinFilter*> Filters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* UnknownMappinIcon;
    
public:
    UMappinSystemImpl();

    UFUNCTION(BlueprintCallable)
    void ToggleDisplayingCompletedMappins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHideCompletedMappins() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMapWasOpenedFromTower(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMappinStateInCustomFilter(EMappinState MappinState, bool Filtered);
    
    UFUNCTION(BlueprintCallable)
    void SetMappinFilteredInCustomFilter(EMappinType MappinType, bool Filtered);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentZoom(float NewZoom);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFilterIndex(int32 Value);
    
private:
    UFUNCTION(BlueprintCallable)
    void RunPathToMappinRequests();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMappinStateFilteredInCustomFilter(EMappinState MappinState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMappinFilteredInCustomFilter(EMappinType MappinType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCourtMappin(FMappinInstanceId MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomStateTisplay(EMappinType MappinType, EMappinState MappinState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMappinInstanceId> GetTrackedQuestMapPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMapWasOpenedFromTower();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMappinTypeLongDescription(EMappinType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuest* GetMappinQuest(FMappinInstanceId MappinInstanceId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetMappinImage(FMappinInstanceId MappinInstanceId, EMappinState MappinState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentFilterIndex();
    

    // Fix for true pure virtual functions not being implemented
};

