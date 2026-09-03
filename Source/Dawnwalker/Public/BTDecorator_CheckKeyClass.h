#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_CheckKeyClass.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UBTDecorator_CheckKeyClass : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ObjectClass;
    
public:
    UBTDecorator_CheckKeyClass();

};

