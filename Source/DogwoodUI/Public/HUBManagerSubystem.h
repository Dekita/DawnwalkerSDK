#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "HubTabRow.h"
#include "OnHubTabActiveChangedDelegateDelegate.h"
#include "HUBManagerSubystem.generated.h"

class UDWHUBWidgetBase;
class UHUDVisibilityPreset;
class UHubMessage;
class UHubPrestreamResourcesDataAsset;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API UHUBManagerSubystem : public UGameInstanceSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHubTabEnabledChangedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMapRefreshRequestedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHubTabActiveChangedDelegate OnActiveTabChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHubTabEnabledChangedDelegate OnTabEnabledChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapRefreshRequestedDelegate OnMapRefreshRequested;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHubTabRow> RegisteredTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UUserWidget*> SpawnedTabs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDWHUBWidgetBase* ActiveHubWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHubMessage* PushedHubMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityPreset* HUDPresetWhenHubIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHubPrestreamResourcesDataAsset* HubPrestreamResourcesDataAsset;
    
public:
    UHUBManagerSubystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool TryShowHUB(const UObject* WorldContextObject, const FGameplayTag& TabTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool TryHideHUB(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void RequestMapRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSpawnedTabWidget(const FGameplayTag& TabTag, UUserWidget* TabWidget);
    
    UFUNCTION(BlueprintCallable)
    void PushHubMessage(UHubMessage* InMessage);
    
    UFUNCTION(BlueprintCallable)
    void NotifyTabActivated(const FGameplayTag& TabTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LaunchHUB(const UObject* WorldContextObject, const FGameplayTag Tab);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabActive(const FGameplayTag& TabTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHubTabRow GetTabRow(const FGameplayTag& TabTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetSpawnedTabWidget(const FGameplayTag& TabTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRegisteredHubTabs(TArray<FHubTabRow>& OutTabs) const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllTabTags(TArray<FGameplayTag>& OutTags);
    
    UFUNCTION(BlueprintCallable)
    void BP_StreamOutShrineMapResources();
    
    UFUNCTION(BlueprintCallable)
    void BP_StreamInShrineMapResources();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTabLocked(const FGameplayTag TabTag, bool bEnabled, bool bModifyVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsTabLocked(const FGameplayTag TabTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsTabDisabled(const FGameplayTag TabTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsTabBlocked(const FGameplayTag TabTag) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableResourcePrestreaming();
    
    UFUNCTION(BlueprintCallable)
    void BP_DisableResourcePrestreaming();
    

    // Fix for true pure virtual functions not being implemented
};

