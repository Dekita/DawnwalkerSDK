#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "RebelAIEnvQueryTest_PathfindingWithNavVisibility.generated.h"

UCLASS(Blueprintable)
class REBELAI_API URebelAIEnvQueryTest_PathfindingWithNavVisibility : public UEnvQueryTest_Pathfinding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePathVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDeviationFromLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDrawTime;
    
public:
    URebelAIEnvQueryTest_PathfindingWithNavVisibility();

};

