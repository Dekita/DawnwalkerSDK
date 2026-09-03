#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DogwoodActorRotatorAction.generated.h"

class AActor;
class UDogwoodActorRotatorAction;
class UObject;

UCLASS(Blueprintable)
class DOGWOODUTIL_API UDogwoodActorRotatorAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActorRotated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorRotated OnActorRotated;
    
    UDogwoodActorRotatorAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDogwoodActorRotatorAction* RotateActor(UObject* WorldContextObject, AActor* ActorToRotate, AActor* ActorTarget, float duration);
    
};

