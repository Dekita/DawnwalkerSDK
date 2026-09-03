#pragma once
#include "CoreMinimal.h"
#include "DogwoodNPCBehavior_BehaviorTree.h"
#include "GameplayTagContainer.h"
#include "DawnwalkerNPCBehavior_RandomWalkingOnRoads.generated.h"

class UTaskContext_GenerateLocationOnRoads;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerNPCBehavior_RandomWalkingOnRoads : public UDogwoodNPCBehavior_BehaviorTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ZoneTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTaskContext_GenerateLocationOnRoads* TaskContext;
    
public:
    UDawnwalkerNPCBehavior_RandomWalkingOnRoads();

};

