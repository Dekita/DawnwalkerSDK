#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StaticActorDescriptor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct QUEST_API FStaticActorDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ActorPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PersistentActorGuid;
    
    FStaticActorDescriptor();
};

