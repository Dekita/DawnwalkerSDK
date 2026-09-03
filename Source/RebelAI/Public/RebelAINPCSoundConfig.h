#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RebelAINPCSoundEventsArray.h"
#include "RebelAINPCSoundConfig.generated.h"

class AActor;
class URWAudioComponent;

UCLASS(Blueprintable)
class REBELAI_API URebelAINPCSoundConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRebelAINPCSoundEventsArray> Events;
    
    URebelAINPCSoundConfig();

    UFUNCTION(BlueprintCallable)
    TArray<URWAudioComponent*> PlayAtLocation(FGameplayTag SoundTag, AActor* WorldAndLocationProvider);
    
    UFUNCTION(BlueprintCallable)
    void Play(FGameplayTag SoundTag, URWAudioComponent* RWAudioComponent);
    
};

