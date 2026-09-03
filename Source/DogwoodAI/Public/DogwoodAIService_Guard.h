#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "DogwoodAIService_Guard.generated.h"

class UFocusAbilitiesSubsystem;

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAIService_Guard : public FRebelAIService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardChangeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardChangeIntervalDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTimeSinceLastAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectSimplerPredictionAlgorithm;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFocusAbilitiesSubsystem* FocusAbilitiesSubsystem;
    
public:
    FDogwoodAIService_Guard();
};

