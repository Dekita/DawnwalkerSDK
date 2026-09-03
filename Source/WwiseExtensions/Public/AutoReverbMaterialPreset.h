#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LateReverbEntry.h"
#include "AutoReverbMaterialPreset.generated.h"

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API UAutoReverbMaterialPreset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLateReverbEntry> LateReverbs;
    
    UAutoReverbMaterialPreset();

};

