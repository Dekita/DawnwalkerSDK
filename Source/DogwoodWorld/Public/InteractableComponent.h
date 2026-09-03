#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ButtonHoldInterface.h"
#include "EInteractableState.h"
#include "EInteractableType.h"
#include "EInteractionRange.h"
#include "EInteractionRiskType.h"
#include "FocusableComponent.h"
#include "InteractionMontageParams.h"
#include "OnInteractableStateChangedDelegateDelegate.h"
#include "OnInteractionDelegateDelegate.h"
#include "OnInteractionEndPlayDelegate.h"
#include "OnTargetedChangedDelegate.h"
#include "InteractableComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UInteractableComponent : public UFocusableComponent, public IButtonHoldInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableType InteractableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionRange InteractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableState InteractableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableState DeferredInteractableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActorLocationForPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 QuestInteractionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 DisplayedTimeSegmentCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DisplayedTimeSegmentIsLater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 InternalQuestNodeCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionDelegate OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionDelegate OnAbilityInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionDelegate OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionDelegate OnInteractionTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractableStateChangedDelegate OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetedChanged OnTargetedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayInteractionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionMontageParams InteractionMontageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartInteractionWhenMontageEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionEndPlay OnInteractionEndPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableState CachedPreQuestInteractionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledFromQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuestRequiresImportantHighlight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* InteractionMontage;
    
public:
    UInteractableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartAbilityInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPrompt() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTargeted(bool bInIsTargeted);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EInteractableState State, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void ResetQuestInteractionCounter();
    
    UFUNCTION(BlueprintCallable)
    void NotifyInteractableUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargeted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsQuestImportantInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighlightEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledFromQuest() const;
    
    UFUNCTION(BlueprintCallable)
    void InteractionTriggered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPromptLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPrompt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EInteractableState GetInteractionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EInteractionRiskType GetInteractionRiskType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EInteractionRange GetInteractionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetInteractionMeshDot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractionRiskType GetDefaultRiskType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractableState GetDefaultInteractionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractionRange GetDefaultInteractionRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultInteractionMeshDot() const;
    
    UFUNCTION(BlueprintCallable)
    void EndInteraction();
    
    UFUNCTION(BlueprintCallable)
    void EndAbilityInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesQuestRequireImportantHighlight() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsHoldRequired() const override PURE_VIRTUAL(IsHoldRequired, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHoldProgress() const override PURE_VIRTUAL(GetHoldProgress, return 0.0f;);
    
};

