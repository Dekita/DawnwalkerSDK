#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERuneState.h"
#include "OnRuneDispelledDelegateDelegate.h"
#include "RuneActor.generated.h"

class ARuneActor;
class UInteractableComponent;
class USplineComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ARuneActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ARuneActor>> ChildRunes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuneState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ARuneActor>, USplineComponent*> RuneSplines;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRuneDispelledDelegate OnRuneDispelled;
    
    ARuneActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RuneDispelled();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractedWith();
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDispelled() const;
    
};

