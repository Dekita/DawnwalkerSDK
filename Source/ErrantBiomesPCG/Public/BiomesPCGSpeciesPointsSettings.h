#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PCGSettings.h"
#include "BiomesPCGSpeciesPointsSettings.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESPCG_API UBiomesPCGSpeciesPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SpeciesAsset;
    
    UBiomesPCGSpeciesPointsSettings();

};

