#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RebelSpatialElementProxyInterface.h"
#include "EnteredFocusDelegateDelegate.h"
#include "LeftFocusDelegateDelegate.h"
#include "FocusDetectorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UFocusDetectorComponent : public USceneComponent, public IRebelSpatialElementProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEverMoves;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnteredFocusDelegate OnEnteredFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeftFocusDelegate OnLeftFocus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInFocus;
    
public:
    UFocusDetectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSphereRadius(float InSphereRadius);
    
    UFUNCTION(BlueprintCallable)
    void LeaveFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterFocus();
    

    // Fix for true pure virtual functions not being implemented
};

