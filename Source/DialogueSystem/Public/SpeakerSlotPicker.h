#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpeakerSlotPicker.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FSpeakerSlotPicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    FSpeakerSlotPicker();
};

