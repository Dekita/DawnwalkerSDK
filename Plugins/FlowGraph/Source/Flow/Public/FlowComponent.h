#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFlowFinishPolicy.h"
#include "EFlowNetMode.h"
#include "EFlowOnScreenMessageType.h"
#include "FlowAssetSaveData.h"
#include "FlowComponentDynamicNotifyDelegate.h"
#include "FlowComponentSaveData.h"
#include "FlowComponentTagsReplicatedDelegate.h"
#include "FlowOwnerInterface.h"
#include "NotifyTagReplication.h"
#include "FlowComponent.generated.h"

class UFlowAsset;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FLOW_API UFlowComponent : public UActorComponent, public IFlowOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IdentityTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AddedIdentityTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AddedIdentityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemovedIdentityTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RemovedIdentityTags;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlowComponentTagsReplicated OnIdentityTagsAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlowComponentTagsReplicated OnIdentityTagsRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SentNotifyTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RecentlySentNotifyTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotifyTagsFromGraph, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer NotifyTagsFromGraph;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlowComponentDynamicNotify ReceiveNotify;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NotifyTagsFromAnotherComponent, meta=(AllowPrivateAccess=true))
    TArray<FNotifyTagReplication> NotifyTagsFromAnotherComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlowAsset* RootFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartRootFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowNetMode RootFlowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedAssetInstanceName;
    
    UFlowComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRootFlow();
    
    UFUNCTION(BlueprintCallable)
    void SaveRootFlow(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    
    UFUNCTION(BlueprintCallable)
    FFlowComponentSaveData SaveInstance();
    
    UFUNCTION(BlueprintCallable)
    void RemoveIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void RemoveIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SentNotifyTags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemovedIdentityTags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NotifyTagsFromGraph();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NotifyTagsFromAnotherComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AddedIdentityTags();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyGraph(const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void NotifyActor(const FGameplayTag ActorTag, const FGameplayTag NotifyTag, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogError(const FString& Message, const EFlowOnScreenMessageType OnScreenMessageType) const;
    
    UFUNCTION(BlueprintCallable)
    void LoadRootFlow();
    
    UFUNCTION(BlueprintCallable)
    bool LoadInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UFlowAsset*> GetRootInstances(const UObject* Owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlowAsset* GetRootFlowInstance() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRootFlow(UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    
    UFUNCTION(BlueprintCallable)
    void BulkNotifyGraph(const FGameplayTagContainer NotifyTags, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTriggerRootFlowOutputEvent(UFlowAsset* RootFlowInstance, const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void AddIdentityTags(FGameplayTagContainer Tags, const EFlowNetMode NetMode);
    
    UFUNCTION(BlueprintCallable)
    void AddIdentityTag(const FGameplayTag Tag, const EFlowNetMode NetMode);
    

    // Fix for true pure virtual functions not being implemented
};

