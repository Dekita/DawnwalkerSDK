#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DogwoodControlsLegendConditionalEntry.h"
#include "DogwoodControlsLegendPreset.generated.h"

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UDogwoodControlsLegendPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDogwoodControlsLegendConditionalEntry> ConditionalEntries;
    
    UDogwoodControlsLegendPreset();

};

