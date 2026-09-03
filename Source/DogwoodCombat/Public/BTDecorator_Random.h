#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_Random.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBTDecorator_Random : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    UBTDecorator_Random();

};

