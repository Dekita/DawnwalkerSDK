#pragma once
#include "CoreMinimal.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_DeadStubIsNear.generated.h"

class URebelSpatialLayer;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_DeadStubIsNear : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* StubLayer;
    
public:
    URebelAISituationProcessor_DeadStubIsNear();

};

