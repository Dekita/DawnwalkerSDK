#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PlayAnimMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class DOGWOODAI_API UBTTask_PlayAnimMontage : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
public:
    UBTTask_PlayAnimMontage();

};

