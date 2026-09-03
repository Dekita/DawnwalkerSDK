#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "DogwoodAIService_Pain.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAIService_Pain : public FRebelAIService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PainInterval;
    
    FDogwoodAIService_Pain();
};

