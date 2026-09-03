#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerTraversalSweepTest.h"
#include "DawnwalkerTraversalSweepTest_Sphere.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalSweepTest_Sphere : public FDawnwalkerTraversalSweepTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    FDawnwalkerTraversalSweepTest_Sphere();
};

