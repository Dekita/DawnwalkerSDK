#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PopulationExtension.generated.h"

class UPopulationExtensionComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, ConfigDoNotCheckDefaults, DefaultConfig, Config=Game)
class POPULATION_API UPopulationExtension : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPopulationExtensionComponent*> Components;
    
public:
    UPopulationExtension();

};

