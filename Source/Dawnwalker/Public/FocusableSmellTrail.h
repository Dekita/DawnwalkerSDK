#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FocusableSmellTrail.generated.h"

class UBoxComponent;
class UFocusDetectorComponent;
class UNiagaraSystem;
class USplineComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AFocusableSmellTrail : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFocusDetectorComponent* FocusDetectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SplineBoundingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* ParticleSystem;
    
public:
    AFocusableSmellTrail(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLeftFocus();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredFocus();
    
};

