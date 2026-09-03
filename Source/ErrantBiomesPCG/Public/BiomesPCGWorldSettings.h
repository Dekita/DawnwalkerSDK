#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BiomesPCGSpeciesInput.h"
#include "EBiomesPCGLimit.h"
#include "BiomesPCGWorldSettings.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESPCG_API ABiomesPCGWorldSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix WorldToComponentTransforms;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBiomesPCGLimit BiomesDataLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> AllowedSubBiomeMasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomesPCGSpeciesInput> AllowedSpecies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> AllowedBiomesAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FSoftObjectPath> BlockedBiomesAssets;
    
    ABiomesPCGWorldSettings(const FObjectInitializer& ObjectInitializer);

};

