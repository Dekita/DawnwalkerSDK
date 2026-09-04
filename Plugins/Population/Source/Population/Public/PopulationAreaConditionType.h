#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PopulationAreaConditionType.generated.h"

class APopulationArea;

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class POPULATION_API UPopulationAreaConditionType : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APopulationArea> PopulationArea;
    
public:
    UPopulationAreaConditionType();

};

