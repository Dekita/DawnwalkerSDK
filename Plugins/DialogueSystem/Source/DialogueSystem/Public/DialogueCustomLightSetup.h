#pragma once
#include "CoreMinimal.h"
#include "DialogueCustomLightData.h"
#include "DialogueCustomLightSetup.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FDialogueCustomLightSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueCustomLightData> CustomLightData;
    
    FDialogueCustomLightSetup();
};

