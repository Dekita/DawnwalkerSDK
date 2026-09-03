#pragma once
#include "CoreMinimal.h"
#include "InputFlushNotifier.h"
#include "PlayerInputBlocker.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTaskOwnerInterface.h"
#include "RebelHorsePlayerControllerInterface.h"
#include "EGameInputBlocker.h"
#include "DawnwalkerPlayerControllerBase.generated.h"

class ADawnwalkerPlayerCharacter;
class UEnhancedInputComponent;
class UGameplayTasksComponent;
class UPlayerInputConfig;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerPlayerControllerBase : public APlayerController, public IGameplayTaskOwnerInterface, public IRebelHorsePlayerControllerInterface, public IInputFlushNotifier, public IPlayerInputBlocker {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* OnlyMovementInputComponent;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* BlankInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTasksComponent* CachedGameplayTasksComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerPlayerCharacter* PossessedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameInputBlockers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerInputConfig* PlayerInputConfig;
    
public:
    ADawnwalkerPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGameInputBlockerActive(EGameInputBlocker Blocker, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void RemovePawnInputBlocker(FName Blocker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyGameInputBlockerActive() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPawnInputBlocker(FName Blocker);
    

    // Fix for true pure virtual functions not being implemented
};

