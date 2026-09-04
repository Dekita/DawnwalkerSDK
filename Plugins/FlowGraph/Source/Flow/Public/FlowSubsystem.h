#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFlowFinishPolicy.h"
#include "SimpleFlowComponentEventDelegate.h"
#include "SimpleFlowEventDelegate.h"
#include "TaggedFlowComponentEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "FlowSubsystem.generated.h"

class AActor;
class UFlowAsset;
class UFlowComponent;
class UFlowNode_SubGraph;
class UFlowSaveGame;
class UObject;

UCLASS(Blueprintable)
class FLOW_API UFlowSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFlowAsset*> InstancedTemplates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFlowAsset*, TWeakObjectPtr<UObject>> RootInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFlowNode_SubGraph*, UFlowAsset*> InstancedSubFlows;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlowSaveGame* LoadedSaveGame;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleFlowEvent OnSaveGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleFlowComponentEvent OnComponentRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedFlowComponentEvent OnComponentTagAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleFlowComponentEvent OnComponentUnregistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaggedFlowComponentEvent OnComponentTagRemoved;
    
    UFlowSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartRootFlow(UObject* Owner, UFlowAsset* FlowAsset, const bool bAllowMultipleInstances);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSaved(UFlowSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(UFlowSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void LoadSubFlow(UFlowNode_SubGraph* SubGraphNode, const FString& SavedAssetInstanceName);
    
    UFUNCTION(BlueprintCallable)
    void LoadRootFlow(UObject* Owner, UFlowAsset* FlowAsset, const FString& SavedAssetInstanceName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UFlowAsset*> GetRootInstancesByOwner(const UObject* Owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UObject*, UFlowAsset*> GetRootInstances() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlowAsset* GetRootFlow(const UObject* Owner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlowSaveGame* GetLoadedSaveGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UFlowNode_SubGraph*, UFlowAsset*> GetInstancedSubFlows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UFlowComponent*> GetFlowComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<UFlowComponent> ComponentClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UFlowComponent*> GetFlowComponentsByTag(const FGameplayTag Tag, const TSubclassOf<UFlowComponent> ComponentClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<AActor*> GetFlowActorsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<AActor*> GetFlowActorsByTag(const FGameplayTag Tag, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<AActor*, UFlowComponent*> GetFlowActorsAndComponentsByTags(const FGameplayTagContainer Tags, const EGameplayContainerMatchType MatchType, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<AActor*, UFlowComponent*> GetFlowActorsAndComponentsByTag(const FGameplayTag Tag, const TSubclassOf<AActor> ActorClass, const bool bExactMatch) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishRootFlow(UObject* Owner, UFlowAsset* TemplateAsset, const EFlowFinishPolicy FinishPolicy);
    
    UFUNCTION(BlueprintCallable)
    void FinishAllRootFlows(UObject* Owner, const EFlowFinishPolicy FinishPolicy);
    
    UFUNCTION(BlueprintCallable)
    void AbortActiveFlows();
    
};

