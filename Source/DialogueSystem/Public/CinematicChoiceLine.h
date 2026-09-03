#pragma once
#include "CoreMinimal.h"
#include "FactTemplate.h"
#include "CinematicLine.h"
#include "FaceIdleOverlayLineGenerationData.h"
#include "TimedChoiceLineData.h"
#include "CinematicChoiceLine.generated.h"

class UChoiceCondition;
class USpecialDialogueChoice;

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCinematicChoiceLine : public FCinematicLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactTemplate> RequiredFacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProgressing: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpecialDialogueChoice* SpecialChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedChoiceLineData TimedChoiceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FullscreenSlotRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChoiceCondition* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceIdleOverlayLineGenerationData FaceIdleOverlayGenerationData;
    
    FCinematicChoiceLine();
};

