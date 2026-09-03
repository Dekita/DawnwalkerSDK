#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FlowAssetSaveData.h"
#include "Templates/SubclassOf.h"
#include "FlowAsset.generated.h"

class AActor;
class UFlowAsset;
class UFlowNode;
class UFlowNode_CustomInput;

UCLASS(Blueprintable)
class FLOW_API UFlowAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AssetGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWorldBound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UFlowNode*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFlowAsset*> ActiveInstances;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFlowAsset* TemplateAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UFlowNode_CustomInput*> CustomInputNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UFlowNode*> PreloadedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFlowNode*> ActiveNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFlowNode*> RecordedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ExpectedOwnerClass;
    
public:
    UFlowAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryFindActorOwner() const;
    
    UFUNCTION(BlueprintCallable)
    FFlowAssetSaveData SaveInstance(TArray<FFlowAssetSaveData>& SavedFlowInstances);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadInstance(const FFlowAssetSaveData& AssetRecord);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBoundToWorld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFlowNode*> GetRecordedNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFlowNode*> GetNodesInExecutionOrder(UFlowNode* FirstIteratedNode, const TSubclassOf<UFlowNode> FlowNodeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlowNode* GetDefaultEntryNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFlowNode*> GetActiveNodes() const;
    
};

