#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStubLogSeverity.h"
#include "ActorStubDebugLogLine.generated.h"

UCLASS(Blueprintable)
class POPULATION_API UActorStubDebugLogLine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStubLogSeverity Severity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Line;
    
    UActorStubDebugLogLine();

};

