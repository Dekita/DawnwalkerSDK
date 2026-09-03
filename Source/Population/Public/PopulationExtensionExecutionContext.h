#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PopulationExtensionExecutionContext.generated.h"

UCLASS(Blueprintable)
class POPULATION_API UPopulationExtensionExecutionContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Instigator;
    
    UPopulationExtensionExecutionContext();

};

