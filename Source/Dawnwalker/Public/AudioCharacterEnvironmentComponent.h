#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPlayerFormState.h"
#include "AudioCharacterEnvironmentComponent.generated.h"

class AActor;
class ADawnwalkerPlayerCharacter;
class UAkStateValue;
class UAudioAmbientMasksDataAsset;
class UBiomesMaskAsset;
class URWAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioCharacterEnvironmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioAmbientMasksDataAsset* AmbientMasksDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerPlayerCharacter* OwningPlayerCharacter;
    
public:
    UAudioCharacterEnvironmentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetListenerLeftRoom(AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable)
    void SetListenerEnteredRoom(AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable)
    void SetLastInteriorPositions(TArray<FTransform> Positions);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterLeftRoom(AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterEnteredRoom(AActor* OverlappedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerFormChanged(EPlayerFormState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatFocusStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatFocusEnded();
    
};

