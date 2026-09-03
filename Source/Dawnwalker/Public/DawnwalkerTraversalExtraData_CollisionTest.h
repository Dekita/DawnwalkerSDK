#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "DawnwalkerTraversalExtraData.h"
#include "EDawnwalkerTraversalCollisionTestLogicOperator.h"
#include "DawnwalkerTraversalExtraData_CollisionTest.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalExtraData_CollisionTest : public FDawnwalkerTraversalExtraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerTraversalCollisionTestLogicOperator Logic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> SweepTests;
    
    FDawnwalkerTraversalExtraData_CollisionTest();
};

