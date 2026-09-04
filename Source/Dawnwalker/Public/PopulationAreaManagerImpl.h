#pragma once
#include "CoreMinimal.h"
#include "PopulationAreaManagerInterface.h"
#include "PopulationAreaManagerImpl.generated.h"

class APopulationArea;

UCLASS(Blueprintable)
class DAWNWALKER_API UPopulationAreaManagerImpl : public UPopulationAreaManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<APopulationArea>> PopulationAreas;
    
public:
    UPopulationAreaManagerImpl();

};

