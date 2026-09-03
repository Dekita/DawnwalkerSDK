#pragma once
#include "CoreMinimal.h"
#include "VoiceActor.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FVoiceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FVoiceActor();
};

