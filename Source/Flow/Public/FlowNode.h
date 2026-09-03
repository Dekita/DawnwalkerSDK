#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ConnectedPin.h"
#include "EFlowNodeState.h"
#include "EFlowOnScreenMessageType.h"
#include "EFlowPinActivationType.h"
#include "EFlowSignalMode.h"
#include "FlowNodeSaveData.h"
#include "FlowOutputPinHandle.h"
#include "FlowPin.h"
#include "FlowNode.generated.h"

class AActor;
class UEdGraphNode;
class UFlowAsset;
class UFlowNode;
class UFlowNode_Finish;
class UFlowSubsystem;

UCLASS(Abstract, Blueprintable)
class FLOW_API UFlowNode : public UObject, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEdGraphNode* GraphNode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFlowSignalMode> AllowedSignalModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlowSignalMode SignalMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlowPin> InputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlowPin> OutputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FConnectedPin> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EFlowNodeState ActivationState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFlowNode_Finish> ConnectedFinishNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAmbiguousConnectedFinishNode;
    
    UFlowNode();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerOutputPin(const FFlowOutputPinHandle Pin, const bool bFinish, const EFlowPinActivationType ActivationType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerOutput(const FName& PinName, const bool bFinish, const EFlowPinActivationType ActivationType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerFirstOutput(const bool bFinish);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveInstance(FFlowNodeSaveData& NodeRecord);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPassThrough();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad();
    
public:
    UFUNCTION(BlueprintCallable)
    void LogWarning(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void LogNote(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void LogError(const FString& Message, const EFlowOnScreenMessageType OnScreenMessageType);
    
    UFUNCTION(BlueprintCallable)
    void LoadInstance(const FFlowNodeSaveData& NodeRecord);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_PreloadContent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitializeInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString K2_GetStatusString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_GetStatusBackgroundColor(FLinearColor& OutColor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString K2_GetNodeDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UObject* K2_GetAssetToEdit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString K2_GetAssetPath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* K2_GetActorToFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ForceFinishNode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_FlushContent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ExecuteInput(const FName& PinName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_DeinitializeInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Cleanup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanUserAddOutput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CanUserAddInput() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutputConnected(const FName& PinName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputConnected(const FName& PinName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetProgressAsString(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetOutputNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNotifyTagsDescription(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetInputNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetIdentityTagsDescription(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetIdentityTagDescription(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlowSubsystem* GetFlowSubsystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFlowAsset* GetFlowAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<UFlowNode*> GetConnectedNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetClassDescription(const UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    

    // Fix for true pure virtual functions not being implemented
};

