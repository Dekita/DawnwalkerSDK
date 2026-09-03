#pragma once
#include "CoreMinimal.h"
#include "EFocusableObjectCategory.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "InteractableFocusTarget.generated.h"

class UFocusableComponent;
class UInteractableComponent;
class UPrimitiveComponent;
class UQuestComponent;
class UUserWidget;
class UWidgetComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AInteractableFocusTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFocusableComponent* FocusableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetHighlightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeAttachedActorsInHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusableObjectCategory FocusableObjectCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HighlightCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowWidgetOnFocusEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInteractableOnlyAfterFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToPlayerToShowFocusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAfterUse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> FocusedWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* FocusWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> FocusHighlightPrimitives;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeInteractive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldFocusWidgetBeVisible;
    
public:
    AInteractableFocusTarget(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetInteractionEnabled(bool bInShouldBeEnabled) const;
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInShouldBeEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeftFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnteredFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeInteractedWith() const;
    
};

