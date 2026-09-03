#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "PetMontageData.h"
#include "DawnwalkerPetSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DAWNWALKER_API UDawnwalkerPetSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPetMontageData> PerCreaturePetData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshDot;
    
    UDawnwalkerPetSettings();

};

