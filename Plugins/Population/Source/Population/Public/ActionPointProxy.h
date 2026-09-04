#pragma once
#include "CoreMinimal.h"
#include "PopulationPointProxy.h"
#include "ActionPointProxy.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class POPULATION_API AActionPointProxy : public APopulationPointProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLimit;
    
public:
    AActionPointProxy(const FObjectInitializer& ObjectInitializer);

};

