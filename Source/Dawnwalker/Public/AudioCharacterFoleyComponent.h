#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioCharacterFoleyComponent.generated.h"

class UAppearanceComponent;
class UAudioCharacterAppearanceDataAsset;
class URWAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioCharacterFoleyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioCharacterAppearanceDataAsset* AppearanceData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URWAudioComponent* FoleyAudioTarget;
    
public:
    UAudioCharacterFoleyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAppereanceGarmentMapRebuilt(UAppearanceComponent* AppereanceComponent);
    
};

