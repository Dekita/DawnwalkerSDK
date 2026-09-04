#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "DogwoodHorseOnRiderDismountedDelegateDelegate.h"
#include "DogwoodHorseOnRiderDismountingDelegateDelegate.h"
#include "DogwoodHorseOnRiderMountedDelegateDelegate.h"
#include "DogwoodHorseOnRiderMountingDelegateDelegate.h"
#include "RebelHorseRiderDismountInfo.h"
#include "RebelHorseRiderMountInfo.h"
#include "Templates/SubclassOf.h"
#include "RebelHorse.generated.h"

class AController;
class APawn;
class IRebelHorsePlayerControllerInterface;
class URebelHorsePlayerControllerInterface;
class IRebelHorseRiderInterface;
class URebelHorseRiderInterface;
class UAnimInstance;

UCLASS(Blueprintable)
class REBELHORSE_API ARebelHorse : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodHorseOnRiderMountingDelegate OnRiderMountingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodHorseOnRiderMountedDelegate OnRiderMountedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodHorseOnRiderDismountingDelegate OnRiderDismountingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDogwoodHorseOnRiderDismountedDelegate OnRiderDismountedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Rider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* RiderController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IRebelHorseRiderInterface> RiderInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IRebelHorsePlayerControllerInterface> PlayerControllerInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DismountCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DismountMeshRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> MountAnimLayer;
    
public:
    ARebelHorse(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool RiderMount(ACharacter* InRider, FRebelHorseRiderMountInfo InMountInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RiderDismount(FRebelHorseRiderDismountInfo InDismountInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetRider() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRiderMounting(ACharacter* InRider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRiderMounted(ACharacter* InRider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRiderDismounting(ACharacter* InRider);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRiderDismounted(ACharacter* InRider);
    
};

