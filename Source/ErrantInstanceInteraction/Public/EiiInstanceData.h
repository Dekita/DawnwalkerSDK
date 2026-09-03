#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEiiInstanceState.h"
#include "EiiInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ERRANTINSTANCEINTERACTION_API FEiiInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ActorTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OriginalIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEiiInstanceState State;
    
    FEiiInstanceData();
};

