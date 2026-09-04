#pragma once
#include "CoreMinimal.h"
#include "EFocusHighlightType.h"
#include "EFocusableObjectCategory.h"
#include "FocusDetectorComponent.h"
#include "FocusableComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UFocusableComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UFocusableComponent : public UFocusDetectorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusableObjectCategory FocusCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlightOwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighlightAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmitsSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ExtraActorsToHighlight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* LoadedNiagaraFocusSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* SpawnedSoundParticle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFocusHighlightType HighlightType;
    
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPrimitiveComponent>> HighlightedPrimitives;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFocusableComponent>> HighlightedFocusables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HighlightActors;
    
public:
    UFocusableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHighlight(EFocusHighlightType InType, bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFocusHighlightType GetHighlightType() const;
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetFocusModeStencilValue(EFocusHighlightType NewHighlightType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHighlight();
    
};

