#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "DogwoodAIService_RootMotionScaling.generated.h"

class UCapsuleComponent;

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAIService_RootMotionScaling : public FRebelAIService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComp;
    
public:
    FDogwoodAIService_RootMotionScaling();
};

