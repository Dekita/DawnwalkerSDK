#pragma once
#include "CoreMinimal.h"
#include "DogwoodNPCBehavior.h"
#include "DogwoodNPCBehavior_BehaviorTree.generated.h"

class UBehaviorTree;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODAI_API UDogwoodNPCBehavior_BehaviorTree : public UDogwoodNPCBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UDogwoodNPCBehavior_BehaviorTree();

};

