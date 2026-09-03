#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PopulationExtensionConfig.generated.h"

class UPopulationExtension;

USTRUCT(BlueprintType)
struct POPULATION_API FPopulationExtensionConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPopulationExtension> ExtensionClass;
    
    FPopulationExtensionConfig();
};

