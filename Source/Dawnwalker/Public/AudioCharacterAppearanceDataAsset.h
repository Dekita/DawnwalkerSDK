#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AudioCharacterAppearanceDataAsset.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable)
class DAWNWALKER_API UAudioCharacterAppearanceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> ClothingUnEquipDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> FootWearUnEquipDefaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UAkSwitchValue*> PrioritySwitches;
    
    UAudioCharacterAppearanceDataAsset();

};

